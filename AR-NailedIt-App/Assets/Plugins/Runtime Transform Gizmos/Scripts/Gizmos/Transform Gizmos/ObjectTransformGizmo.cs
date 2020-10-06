using UnityEngine;
using System;
using System.Collections.Generic;

namespace RTG
{
    [Serializable]
    public class ObjectTransformGizmo : GizmoBehaviour
    {
        public class ObjectRestrictions
        {
            private bool[] _moveAxesMask = new bool[] { true, true, true };
            private bool[] _scaleAxesMask = new bool[] { true, true, true };
            private HashSet<int> _handleMask = new HashSet<int>();

            public bool CanMoveAlongAllAxes()
            {
                return _moveAxesMask[0] && _moveAxesMask[1] && _moveAxesMask[2];
            }

            public bool CanScaleAlongAllAxes()
            {
                return _scaleAxesMask[0] && _scaleAxesMask[1] && _scaleAxesMask[2];
            }

            public bool CanMoveAlongAxis(int axisIndex)
            {
                return _moveAxesMask[axisIndex];
            }

            public bool CanScaleAlongAxis(int axisIndex)
            {
                return _scaleAxesMask[axisIndex];
            }

            public void SetCanMoveAlongAxis(int axisIndex, bool canMove)
            {
                _moveAxesMask[axisIndex] = canMove;
            }

            public void SetCanScaleAlongAxis(int axisIndex, bool canScale)
            {
                _scaleAxesMask[axisIndex] = canScale;
            }

            public bool IsAffectedByHandle(int handleId)
            {
                return !_handleMask.Contains(handleId);
            }

            public void SetIsAffectedByHandle(int handleId, bool isAffected)
            {
                if (isAffected) _handleMask.Remove(handleId);
                else _handleMask.Add(handleId);
            }

            public Vector3 AdjustMoveVector(Vector3 moveVector)
            {
                Vector3 finalMoveVec = moveVector;
                if (!CanMoveAlongAxis(0)) finalMoveVec[0] = 0.0f;
                if (!CanMoveAlongAxis(1)) finalMoveVec[1] = 0.0f;
                if (!CanMoveAlongAxis(2)) finalMoveVec[2] = 0.0f;

                return finalMoveVec;
            }

            public Vector3 AdjustScaleVector(Vector3 scaleVector)
            {
                Vector3 finalScaleVec = scaleVector;
                if (!CanScaleAlongAxis(0)) finalScaleVec[0] = 1.0f;
                if (!CanScaleAlongAxis(1)) finalScaleVec[1] = 1.0f;
                if (!CanScaleAlongAxis(2)) finalScaleVec[2] = 1.0f;

                return finalScaleVec;
            }
        }

        [Flags]
        public enum Channels
        {
            None = 0,
            Position = 1,
            Rotation = 2,
            Scale = 4,
            All = Position | Rotation | Scale
        }

        private enum TargetObjectMode
        {
            Multiple = 0,
            Single
        }

        private TargetObjectMode _targetObjectMode = TargetObjectMode.Multiple;
        private Channels _transformChannelFlags = Channels.None;
        private IEnumerable<GameObject> _targetObjects;
        private GameObject _targetPivotObject;
        private List<LocalTransformSnapshot> _preTransformSnapshots;
        private List<GameObject> _transformableParents;
        private AABB _targetGroupAABBOnDragBegin;

        private GizmoSpace _transformSpace = GizmoSpace.Global;
        private bool _isTransformSpacePermanent;
        private GizmoObjectTransformPivot _transformPivot = GizmoObjectTransformPivot.ObjectGroupCenter;
        private bool _isTransformPivotPermanent;

        private Vector3 _customWorldPivot;
        private Dictionary<GameObject, Vector3> _objectToCustomLocalPivot = new Dictionary<GameObject, Vector3>();

        private Dictionary<GameObject, ObjectRestrictions> _objectToRestrictions = new Dictionary<GameObject, ObjectRestrictions>();

        [SerializeField]
        private ObjectTransformGizmoSettings _settings = new ObjectTransformGizmoSettings();
        private ObjectTransformGizmoSettings _sharedSettings;

        public GizmoObjectTransformPivot TransformPivot { get { return _transformPivot; } }
        public bool IsTransformPivotPermanent { get { return _isTransformPivotPermanent; } }
        public GizmoSpace TransformSpace { get { return _transformSpace; } }
        public bool IsTransformSpacePermanent { get { return _isTransformSpacePermanent; } }
        public Channels TransformChannelFlags { get { return _transformChannelFlags; } }
        public bool CanAffectPosition { get { return (_transformChannelFlags & Channels.Position) != 0; } }
        public bool CanAffectRotation { get { return (_transformChannelFlags & Channels.Rotation) != 0; } }
        public bool CanAffectScale { get { return (_transformChannelFlags & Channels.Scale) != 0; } }
        public Vector3 CustomWorldPivot { get { return _customWorldPivot; } }
        public ObjectTransformGizmoSettings Settings { get { return _sharedSettings != null ? _sharedSettings : _settings; } }
        public ObjectTransformGizmoSettings SharedSettings { get { return _sharedSettings; } set { _sharedSettings = value; } }

        public override void OnAttached()
        {
            RTUndoRedo.Get.UndoEnd += OnUndoRedoEnd;
            RTUndoRedo.Get.RedoEnd += OnUndoRedoEnd;
        }

        public override void OnDetached()
        {
            RTUndoRedo.Get.UndoEnd -= OnUndoRedoEnd;
            RTUndoRedo.Get.RedoEnd -= OnUndoRedoEnd;
        }

        public void MakeTransformSpacePermanent()
        {
            _isTransformSpacePermanent = true;
        }

        public void MakeTransformPivotPermanent()
        {
            _isTransformPivotPermanent = true;
        }

        public bool ContainsRestrictionsForObject(GameObject targetObject)
        {
            return targetObject != null && _objectToRestrictions.ContainsKey(targetObject);
        }

        public void RegisterObjectRestrictions(GameObject targetObject, ObjectTransformGizmo.ObjectRestrictions restrictions)
        {
            if (!ContainsRestrictionsForObject(targetObject)) _objectToRestrictions.Add(targetObject, restrictions);
        }

        public void RegisterObjectRestrictions(List<GameObject> targetObjects, ObjectTransformGizmo.ObjectRestrictions restrictions)
        {
            foreach (var targetObject in targetObjects)
                RegisterObjectRestrictions(targetObject, restrictions);
        }

        public void UnregisterObjectRestrictions(GameObject targetObject)
        {
            if (ContainsRestrictionsForObject(targetObject)) _objectToRestrictions.Remove(targetObject);
        }

        public ObjectTransformGizmo.ObjectRestrictions GetObjectRestrictions(GameObject targetObject)
        {
            if (ContainsRestrictionsForObject(targetObject)) return _objectToRestrictions[targetObject];
            return null;
        }

        public void SetTransformChannelFlags(Channels flags)
        {
            if (_gizmo.IsDragged) return;
            _transformChannelFlags = flags;
        }

        public void SetCanAffectPosition(bool affectPosition)
        {
            if (_gizmo.IsDragged) return;
            if (affectPosition) _transformChannelFlags |= Channels.Position;
            else _transformChannelFlags &= ~(Channels.Position);
        }

        public void SetCanAffectRotation(bool affectRotation)
        {
            if (_gizmo.IsDragged) return;
            if (affectRotation) _transformChannelFlags |= Channels.Rotation;
            else _transformChannelFlags &= ~(Channels.Rotation);
        }

        public void SetCanAffectScale(bool affectScale)
        {
            if (_gizmo.IsDragged) return;
            if (affectScale) _transformChannelFlags |= Channels.Scale;
            else _transformChannelFlags &= ~(Channels.Scale);
        }

        public void SetTargetPivotObject(GameObject targetPivotObject)
        {
            if (_gizmo.IsDragged || _targetObjectMode == TargetObjectMode.Single) return;

            _targetPivotObject = targetPivotObject;
            RefreshPositionAndRotation();
        }

        public void SetTargetObjects(IEnumerable<GameObject> targetObjects)
        {
            if (_gizmo.IsDragged) return;

            _targetObjectMode = TargetObjectMode.Multiple;
            _targetObjects = targetObjects;
            RefreshPositionAndRotation();
        }

        public void SetTargetObject(GameObject targetObject)
        {
            if (_gizmo.IsDragged) return;

            _targetObjectMode = TargetObjectMode.Single;
            _targetObjects = new List<GameObject>() { targetObject };
            _targetPivotObject = targetObject;
            RefreshPositionAndRotation();
        }

        public void SetTransformPivot(GizmoObjectTransformPivot transformPivot)
        {
            if (_gizmo.IsDragged || _isTransformPivotPermanent) return;

            _transformPivot = transformPivot;
            RefreshPosition();
        }

        public void SetCustomWorldPivot(Vector3 pivot)
        {
            if (_gizmo.IsDragged) return;

            _customWorldPivot = pivot;
            RefreshPosition();
        }

        public void SetObjectCustomLocalPivot(GameObject gameObj, Vector3 pivot)
        {
            if (gameObj == null || _gizmo.IsDragged) return;
 
            if (_objectToCustomLocalPivot.ContainsKey(gameObj)) _objectToCustomLocalPivot[gameObj] = pivot;
            else _objectToCustomLocalPivot.Add(gameObj, pivot);

            RefreshPosition();
        }

        public Vector3 GetObjectCustomLocalPivot(GameObject gameObj)
        {
            if (gameObj == null) return Vector3.zero;

            if (_objectToCustomLocalPivot.ContainsKey(gameObj)) return _objectToCustomLocalPivot[gameObj];

            Transform objectTransform = gameObj.transform;
            return objectTransform.InverseTransformPoint(objectTransform.position);
        }

        public void SetTransformSpace(GizmoSpace transformSpace)
        {
            if (_gizmo.IsDragged || _isTransformSpacePermanent) return;

            _transformSpace = transformSpace;
            RefreshRotation();
        }

        public AABB GetTargetObjectGroupWorldAABB()
        {
            if (_targetObjects == null) return AABB.GetInvalid();

            var boundsQConfig = GetObjectBoundsQConfig();
            AABB targetGroupAABB = AABB.GetInvalid();
            foreach(var targetObject in _targetObjects)
            {
                AABB targetAABB = ObjectBounds.CalcWorldAABB(targetObject, boundsQConfig);
                if (targetGroupAABB.IsValid) targetGroupAABB.Encapsulate(targetAABB);
                else targetGroupAABB = targetAABB;
            }

            return targetGroupAABB;
        }

        public int GetNumTransformableParentObjects()
        {
            return GetTransformableParentObjects().Count;
        }

        public void RefreshPosition()
        {
            if (_targetObjects == null || _gizmo.IsDragged) return;
         
            GizmoTransform gizmoTransform = Gizmo.Transform;
            if (_transformPivot == GizmoObjectTransformPivot.ObjectGroupCenter ||
                _targetPivotObject == null) gizmoTransform.Position3D = GetTargetObjectGroupWorldAABB().Center;
            else
            if (_transformPivot == GizmoObjectTransformPivot.ObjectMeshPivot)
            {
                if (_targetPivotObject == null) gizmoTransform.Position3D = GetTargetObjectGroupWorldAABB().Center;
                else gizmoTransform.Position3D = _targetPivotObject.transform.position;
            }
            else
            if (_transformPivot == GizmoObjectTransformPivot.ObjectCenterPivot)
            {
                if (_targetPivotObject == null) gizmoTransform.Position3D = GetTargetObjectGroupWorldAABB().Center;
                else
                {
                    var boundsQConfig = GetObjectBoundsQConfig();
                    AABB worldAABB = ObjectBounds.CalcWorldAABB(_targetPivotObject, boundsQConfig);
                    if (worldAABB.IsValid) gizmoTransform.Position3D = worldAABB.Center;
                }
            }
            if (_transformPivot == GizmoObjectTransformPivot.CustomWorldPivot) gizmoTransform.Position3D = _customWorldPivot;
            else
            if(_transformPivot == GizmoObjectTransformPivot.CustomObjectLocalPivot)
            {
                if (_targetPivotObject == null) gizmoTransform.Position3D = GetTargetObjectGroupWorldAABB().Center;
                else gizmoTransform.Position3D = _targetPivotObject.transform.TransformPoint(GetObjectCustomLocalPivot(_targetPivotObject));
            }
        }

        public void RefreshRotation()
        {
            if (_targetObjects == null || _gizmo.IsDragged) return;

            GizmoTransform gizmoTransform = Gizmo.Transform;
            if (_transformSpace == GizmoSpace.Global) gizmoTransform.Rotation3D = Quaternion.identity;
            else
            {
                if (_targetPivotObject == null) gizmoTransform.Rotation3D = Quaternion.identity;
                else gizmoTransform.Rotation3D = _targetPivotObject.transform.rotation;
            }
        }

        public void RefreshPositionAndRotation()
        {
            RefreshPosition();
            RefreshRotation();
        }

        public override void OnGizmoDragBegin(int handleId)
        {
            _preTransformSnapshots = LocalTransformSnapshot.GetSnapshotCollection(_targetObjects);
            _transformableParents = GetTransformableParentObjects();
            _targetGroupAABBOnDragBegin = GetTargetObjectGroupWorldAABB();
        }

        public override void OnGizmoDragUpdate(int handleId)
        {
            if (CanAffectPosition && Gizmo.ActiveDragChannel == GizmoDragChannel.Offset) MoveObjects(Gizmo.RelativeDragOffset);
            if (CanAffectRotation && Gizmo.ActiveDragChannel == GizmoDragChannel.Rotation) RotateObjects(Gizmo.RelativeDragRotation);
            if (CanAffectScale && Gizmo.ActiveDragChannel == GizmoDragChannel.Scale) ScaleObjects(Gizmo.RelativeDragScale);
        }

        public override void OnGizmoDragEnd(int handleId)
        {
            if (_transformableParents.Count != 0)
            {
                var postObjectTransformChangedAction = new PostObjectTransformsChangedAction(_preTransformSnapshots, LocalTransformSnapshot.GetSnapshotCollection(_targetObjects));
                postObjectTransformChangedAction.Execute();
            }

            RefreshPositionAndRotation();
        }

        private List<GameObject> GetTransformableParentObjects()
        {
            List<GameObject> targetParents = GameObjectEx.FilterParentsOnly(_targetObjects);
            List<GameObject> transformableParents = new List<GameObject>();
            foreach (var parent in targetParents)
            {
                IRTTransformGizmoListener transformGizmoListener = parent.GetComponent<IRTTransformGizmoListener>();
                if (transformGizmoListener != null && !transformGizmoListener.OnCanBeTransformed(Gizmo)) continue;

                if (Settings.IsLayerTransformable(parent.layer) && 
                    Settings.IsObjectTransformable(parent)) transformableParents.Add(parent);
            }

            return transformableParents;
        }

        private void OnUndoRedoEnd(IUndoRedoAction action)
        {
            if (action is PostObjectTransformsChangedAction)
                RefreshPositionAndRotation();
        }

        private void MoveObjects(Vector3 moveVector)
        {
            foreach (var trParent in _transformableParents)
            {
                MoveObject(trParent, moveVector);
            }
        }

        private void MoveObject(GameObject gameObject, Vector3 moveVector)
        {
            ObjectTransformGizmo.ObjectRestrictions restrictions = GetObjectRestrictions(gameObject);
            if (restrictions != null)
            {
                if (!restrictions.IsAffectedByHandle(Gizmo.DragHandleId)) return;
                moveVector = restrictions.AdjustMoveVector(moveVector);
            }

            gameObject.transform.position += moveVector;

            IRTTransformGizmoListener transformGizmoListener = gameObject.GetComponent<IRTTransformGizmoListener>();
            if (transformGizmoListener != null) transformGizmoListener.OnTransformed(Gizmo);
        }

        private void RotateObjects(Quaternion rotation)
        {
            if (TransformPivot == GizmoObjectTransformPivot.ObjectGroupCenter)
            {
                foreach (var trParent in _transformableParents)
                {
                    RotateObject(trParent, rotation, _targetGroupAABBOnDragBegin.Center);
                }
            }
            else
            if (TransformPivot == GizmoObjectTransformPivot.ObjectMeshPivot)
            {
                foreach (var trParent in _transformableParents)
                {
                    RotateObject(trParent, rotation, trParent.transform.position);
                }
            }
            else
            if (TransformPivot == GizmoObjectTransformPivot.CustomWorldPivot)
            {
                foreach (var trParent in _transformableParents)
                {
                    RotateObject(trParent, rotation, CustomWorldPivot);
                }
            }
            else
            if (TransformPivot == GizmoObjectTransformPivot.ObjectCenterPivot)
            {
                var boundsQConfig = GetObjectBoundsQConfig();
                foreach (var trParent in _transformableParents)
                {
                    AABB worldAABB = ObjectBounds.CalcWorldAABB(trParent, boundsQConfig);
                    if (worldAABB.IsValid) RotateObject(trParent, rotation, worldAABB.Center);
                }
            }
            else
            if (TransformPivot == GizmoObjectTransformPivot.CustomObjectLocalPivot)
            {
                foreach (var trParent in _transformableParents)
                {
                    Transform objectTransform = trParent.transform;
                    Vector3 worldPivot = objectTransform.TransformPoint(GetObjectCustomLocalPivot(trParent));
                    RotateObject(trParent, rotation, worldPivot);
                }
            }
        }

        private void RotateObject(GameObject gameObject, Quaternion rotation, Vector3 rotationPivot)
        {
            ObjectTransformGizmo.ObjectRestrictions restrictions = GetObjectRestrictions(gameObject);
            if (restrictions != null && !restrictions.IsAffectedByHandle(Gizmo.DragHandleId)) return;

            Transform objectTransform = gameObject.transform;
            objectTransform.RotateAroundPivot(rotation, rotationPivot);

            IRTTransformGizmoListener transformGizmoListener = gameObject.GetComponent<IRTTransformGizmoListener>();
            if (transformGizmoListener != null) transformGizmoListener.OnTransformed(Gizmo);
        }

        private void ScaleObjects(Vector3 scaleFactor)
        {
            if (TransformPivot == GizmoObjectTransformPivot.ObjectGroupCenter)
            {
                foreach (var trParent in _transformableParents)
                {
                    ScaleObject(trParent, scaleFactor, _targetGroupAABBOnDragBegin.Center);
                }
            }
            else
            if (TransformPivot == GizmoObjectTransformPivot.ObjectMeshPivot)
            {
                foreach (var trParent in _transformableParents)
                {
                    ScaleObject(trParent, scaleFactor, trParent.transform.position);
                }
            }
            else
            if (TransformPivot == GizmoObjectTransformPivot.CustomWorldPivot)
            {
                foreach (var trParent in _transformableParents)
                {
                    ScaleObject(trParent, scaleFactor, CustomWorldPivot);
                }
            }
            else
            if (TransformPivot == GizmoObjectTransformPivot.ObjectCenterPivot)
            {
                var boundsQConfig = GetObjectBoundsQConfig();
                foreach (var trParent in _transformableParents)
                {
                    AABB worldAABB = ObjectBounds.CalcWorldAABB(trParent, boundsQConfig);
                    if (worldAABB.IsValid) ScaleObject(trParent, scaleFactor, worldAABB.Center);
                }
            }
            else
            if (TransformPivot == GizmoObjectTransformPivot.CustomObjectLocalPivot)
            {
                foreach (var trParent in _transformableParents)
                {
                    Transform objectTransform = trParent.transform;
                    Vector3 worldPivot = objectTransform.TransformPoint(GetObjectCustomLocalPivot(trParent));
                    ScaleObject(trParent, scaleFactor, worldPivot);
                }
            }
        }

        private void ScaleObject(GameObject gameObject, Vector3 scaleFactor, Vector3 scalePivot)
        {
            ObjectTransformGizmo.ObjectRestrictions restrictions = GetObjectRestrictions(gameObject);
            if (restrictions != null)
            {
                if (!restrictions.IsAffectedByHandle(Gizmo.DragHandleId)) return;
                scaleFactor = restrictions.AdjustScaleVector(scaleFactor);
            }

            Transform objectTransform = gameObject.transform;
            objectTransform.ScaleFromPivot(scaleFactor, scalePivot);

            IRTTransformGizmoListener transformGizmoListener = gameObject.GetComponent<IRTTransformGizmoListener>();
            if (transformGizmoListener != null) transformGizmoListener.OnTransformed(Gizmo);
        }

        private ObjectBounds.QueryConfig GetObjectBoundsQConfig()
        {
            var config = new ObjectBounds.QueryConfig();
            config.NoVolumeSize = Vector3Ex.FromValue(1e-6f);
            config.ObjectTypes = GameObjectTypeHelper.AllCombined;

            return config;
        }
    }
}
