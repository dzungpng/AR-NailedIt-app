using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public delegate void GizmoEntityTransformChangedHandler(GizmoTransform transform, GizmoTransform.ChangeData changeData);

    public class GizmoTransform
    {
        public enum ChangeReason
        {
            TRSChange,
            ParentChange
        }

        public struct ChangeData
        {
            public ChangeReason ChangeReason;
            public GizmoDimension TRSDimension;
            public ChangeData(ChangeReason changeReason, GizmoDimension trsDimension)
            {
                ChangeReason = changeReason;
                TRSDimension = trsDimension;
            }
        }

        public event GizmoEntityTransformChangedHandler Changed;

        private bool _firingChanged3DEvent;
        private bool _firingChanged2DEvent;

        private Vector3 _position3D;
        private Vector3 _localPosition3D;
        private Quaternion _rotation3D = Quaternion.identity;
        private Quaternion _localRotation3D = Quaternion.identity;

        private Vector2 _position2D;
        private Vector2 _localPosition2D;
        private float _rotation2DDegrees = 0.0f;
        private Quaternion _rotation2D = Quaternion.identity;
        private float _localRotation2DDegrees = 0.0f;
        private Quaternion _localRotation2D = Quaternion.identity;

        private Vector3[] _axes3D = new Vector3[3];
        private Vector2[] _axes2D = new Vector2[2];

        private GizmoTransform _parent;
        private List<GizmoTransform> _children = new List<GizmoTransform>(10);

        public bool CanChange3D { get { return !_firingChanged3DEvent; } }
        public bool CanChange2D { get { return !_firingChanged2DEvent; } }
        public GizmoTransform Parent { get { return _parent; } }
        public int NumChildren { get { return _children.Count; } }
        public List<GizmoTransform> Children { get { return new List<GizmoTransform>(_children); } }
        public Vector3 Right3D { get { return _axes3D[0]; } }
        public Vector3 Up3D { get { return _axes3D[1]; } }
        public Vector3 Look3D { get { return _axes3D[2]; } }
        public Vector2 Right2D { get { return _axes2D[0]; } }
        public Vector2 Up2D { get { return _axes2D[1]; } }
        public Vector3 Position3D
        {
            get { return _position3D; }
            set { if (CanChange3D && _position3D != value) ChangePosition3D(value); }
        }
        public Vector2 Position2D
        {
            get { return _position2D; }
            set { if (CanChange2D && _position2D != value) ChangePosition2D(value); }
        }
        public Quaternion Rotation3D
        {
            get { return _rotation3D; }
            set { if (CanChange3D && _rotation3D.eulerAngles != value.eulerAngles) ChangeRotation3D(value); }
        }
        public Quaternion Rotation2D
        {
            get { return _rotation2D; }
        }
        public float Rotation2DDegrees
        {
            get { return _rotation2DDegrees; }
            set { if (CanChange2D && _rotation2DDegrees != value) { ChangeRotation2D(value); } }
        }
        public Vector3 LocalPosition3D
        {
            get { return _localPosition3D; }
            set { if (CanChange3D && _localPosition3D != value) ChangeLocalPosition3D(value); }
        }
        public Vector2 LocalPosition2D
        {
            get { return _localPosition2D; }
            set { if (CanChange2D && _localPosition2D != value) ChangeLocalPosition2D(value); }
        }
        public Quaternion LocalRotation3D
        {
            get { return _localRotation3D; }
            set { if (CanChange3D && _localRotation3D.eulerAngles != value.eulerAngles) ChangeLocalRotation3D(value); }
        }
        public Quaternion LocalRotation2D
        {
            get { return _localRotation2D; }
        }
        public float LocalRotation2DDegrees
        {
            get { return _localRotation2DDegrees; }
            set { if (CanChange2D && _localRotation2DDegrees != value) { ChangeLocalRotation2D(value); } }
        }

        public GizmoTransform()
        {
            Update3DAxes();
            Update2DAxes();
        }

        public static List<GizmoTransform> FilterParentsOnly(IEnumerable<GizmoTransform> transforms)
        {
            if (transforms == null) return new List<GizmoTransform>();

            var parents = new List<GizmoTransform>(10);
            foreach(var transform in transforms)
            {
                bool foundParent = false;
                foreach(var possibleParent in transforms)
                {
                    if (possibleParent == transform) continue;
                    if (transform.IsChildOf(possibleParent))
                    {
                        foundParent = true;
                        break;
                    }
                }

                if (!foundParent) parents.Add(transform);
            }

            return parents;
        }

        public PlaneQuadrantId Get3DQuadrantFacingCamera(PlaneId planeId, Camera camera)
        {
            int axisIndex0 = PlaneIdHelper.PlaneIdToFirstAxisIndex(planeId);
            int axisIndex1 = PlaneIdHelper.PlaneIdToSecondAxisIndex(planeId);

            AxisSign sign0 = AxisSign.Positive;
            AxisSign sign1 = AxisSign.Positive;
            Vector3 axis0 = GetAxis3D(axisIndex0, sign0);
            Vector3 axis1 = GetAxis3D(axisIndex1, sign1);

            if (!camera.IsPointFacingCamera(Position3D, axis0)) sign0 = AxisSign.Negative;
            if (!camera.IsPointFacingCamera(Position3D, axis1)) sign1 = AxisSign.Negative;

            return PlaneIdHelper.GetQuadrantFromAxesSigns(planeId, sign0, sign1);
        }

        public void Rotate3D(Quaternion rotation)
        {
            Rotation3D = rotation * _rotation3D;
        }

        public void Rotate2D(float rotation)
        {
            Rotation2DDegrees += rotation;
        }

        public void Rotate2D(Quaternion rotation)
        {
            Rotate2D(rotation.ConvertTo2DRotation());
        }

        public Vector3 TransformVector3D(Vector3 vec)
        {
            return (_rotation3D * vec);
        }

        public Vector2 TransformVector2D(Vector2 vec)
        {
            return (_rotation2D * vec);
        }

        public Vector3 TransformNormal3D(Vector3 normal)
        {
            return (_rotation3D * normal).normalized;
        }

        public Vector2 TransformNormal2D(Vector2 normal)
        {
            return (_rotation2D * normal).normalized;
        }

        public Vector3 InverseTransformNormal3D(Vector3 normal)
        {
            return (Quaternion.Inverse(_rotation3D) * normal).normalized;
        }

        public Vector2 InverseTransformNormal2D(Vector2 normal)
        {
            return (Quaternion.Inverse(_rotation2D) * normal).normalized;
        }

        public Vector3 TransformPoint3D(Vector3 point)
        {
            return (_rotation3D * point) + _position3D;
        }

        public Vector2 TransformPoint2D(Vector2 point)
        {
            Vector2 rotatedPoint = (_rotation2D * point);
            return rotatedPoint + _position2D;
        }

        public Vector3 InverseTransformPoint3D(Vector3 point)
        {
            return Quaternion.Inverse(_rotation3D) * (point - _position3D);
        }

        public Vector2 InverseTransformPoint2D(Vector2 point)
        {
            return Quaternion.Inverse(_rotation2D) * (point - _position2D);
        }

        public void AlignAxis3D(int axisIndex, AxisSign axisSign, Vector3 axis)
        {
            if (CanChange3D)
            {
                Vector3 axisToAlign = GetAxis3D(axisIndex, axisSign);
                Vector3 perpAxis = GetAxis3D((axisIndex + 1) % 3, axisSign);

                Quaternion alignRotation = QuaternionEx.FromToRotation3D(axisToAlign, axis, perpAxis);
                Rotation3D = alignRotation * _rotation3D;
            }
        }

        public void AlignAxis2D(int axisIndex, AxisSign axisSign, Vector2 axis)
        {
            if (CanChange3D)
            {
                Vector2 axisToAlign = GetAxis2D(axisIndex, axisSign);
                Quaternion alignRotation = QuaternionEx.FromToRotation2D(axisToAlign, axis);
                float angle = alignRotation.ConvertTo2DRotation();

                ChangeRotation2D(_rotation2DDegrees + angle);
            }
        }

        public bool IsChildOf(GizmoTransform transform)
        {
            GizmoTransform parent = Parent;
            while (parent != transform && parent != null)
            {
                parent = parent.Parent;
            }

            return parent != null;
        }

        public void SetParent(GizmoTransform newParent)
        {
            if (!CanChange3D) return;
            if (_parent == newParent) return;

            var oldParent = _parent;
            if (oldParent != null) oldParent._children.Remove(this);

            _parent = newParent;
            _parent._children.Add(this);
            OnParentChanged();
        }

        public Vector3 GetAxis3D(AxisDescriptor axisDesc)
        {
            Vector3 axis = _axes3D[axisDesc.Index];
            if (axisDesc.IsNegative) axis = -axis;
            return axis;
        }

        public Vector3 GetAxis3D(int axisIndex, AxisSign axisSign)
        {
            Vector3 axis = _axes3D[axisIndex];
            if (axisSign == AxisSign.Negative) axis = -axis;
            return axis;
        }

        public Vector2 GetAxis2D(AxisDescriptor axisDesc)
        {
            Vector2 axis = _axes2D[axisDesc.Index];
            if (axisDesc.IsNegative) axis = -axis;
            return axis;
        }

        public Vector2 GetAxis2D(int axisIndex, AxisSign axisSign)
        {
            Vector2 axis = _axes2D[axisIndex];
            if (axisSign == AxisSign.Negative) axis = -axis;
            return axis;
        }

        public Vector3[] GetAxes3D()
        {
            return _axes3D.Clone() as Vector3[];
        }

        public Vector2[] GetAxes2D()
        {
            return _axes2D.Clone() as Vector2[];
        }

        public Plane GetPlane3D(PlaneId planeId, PlaneQuadrantId planeQuadrantId)
        {
            PlaneDescriptor planeDesc = new PlaneDescriptor(planeId, planeQuadrantId);
            Vector3 firstAxis = GetAxis3D(planeDesc.FirstAxisDescriptor);
            Vector3 secondAxis = GetAxis3D(planeDesc.SecondAxisDescriptor);

            return new Plane(Vector3.Normalize(Vector3.Cross(firstAxis, secondAxis)), Position3D);
        }

        public Plane GetPlane3D(PlaneDescriptor planeDesc)
        {
            Vector3 firstAxis = GetAxis3D(planeDesc.FirstAxisDescriptor);
            Vector3 secondAxis = GetAxis3D(planeDesc.SecondAxisDescriptor);

            return new Plane(Vector3.Normalize(Vector3.Cross(firstAxis, secondAxis)), Position3D);
        }

        private void ChangePosition3D(Vector3 position)
        {
            _position3D = position;
            OnPosition3DChanged();
        }

        private void ChangePosition2D(Vector2 position)
        {
            _position2D = position;
            OnPosition2DChanged();
        }

        private void ChangeRotation3D(Quaternion rotation)
        {
            _rotation3D = QuaternionEx.Normalize(rotation);
            OnRotation3DChanged();
        }

        private void ChangeRotation2D(float rotation)
        {
            _rotation2DDegrees = rotation % 360.0f;
            _rotation2D = QuaternionEx.Normalize(Quaternion.AngleAxis(_rotation2DDegrees, Vector3.forward));
            OnRotation2DChanged();
        }

        private void ChangeRotation2D(Quaternion rotation)
        {
            _rotation2D = QuaternionEx.Normalize(rotation);
            OnRotation2DChanged();
        }

        private void ChangeLocalPosition3D(Vector3 localPosition)
        {
            _localPosition3D = localPosition;
            OnLocalPosition3DChanged();
        }

        private void ChangeLocalPosition2D(Vector2 localPosition)
        {
            _localPosition2D = localPosition;
            OnLocalPosition2DChanged();
        }

        private void ChangeLocalRotation3D(Quaternion localRotation)
        {
            _localRotation3D = QuaternionEx.Normalize(localRotation);
            OnLocalRotation3DChanged();
        }

        private void ChangeLocalRotation2D(float localRotation)
        {
            _localRotation2DDegrees = localRotation;
            _localRotation2D = QuaternionEx.Normalize(Quaternion.AngleAxis(_localRotation2DDegrees, Vector3.forward));
            OnLocalRotation2DChanged();
        }

        private void ChangeLocalRotation2D(Quaternion localRotation)
        {
            _localRotation2D = QuaternionEx.Normalize(localRotation);
            OnLocalRotation2DChanged();
        }

        private void OnParentChanged()
        {
            if (_parent == null)
            {
                _localPosition3D = _position3D;
                _localRotation3D = _rotation3D;

                _localPosition2D = _position2D;
                _localRotation2D = _rotation2D;
                _localRotation2DDegrees = _rotation2DDegrees;
            }
            else
            {
                _localPosition3D = Quaternion.Inverse(_parent._rotation3D) * (_position3D - _parent._position3D);
                _localRotation3D = QuaternionEx.Normalize(Quaternion.Inverse(_parent._rotation3D) * _rotation3D);

                _localPosition2D = Quaternion.Inverse(_parent._rotation2D) * (_position2D - _parent._position2D);
                _localRotation2D = QuaternionEx.Normalize(Quaternion.Inverse(_parent._rotation2D) * _rotation2D);
                _localRotation2DDegrees = _localRotation2D.ConvertTo2DRotation();
            }

            UpdateChildTransforms3D();
            UpdateChildTransforms2D();
            OnChanged(new GizmoTransform.ChangeData(ChangeReason.ParentChange, GizmoDimension.None));
        }

        private void OnPosition3DChanged()
        {
            if (_parent == null) _localPosition3D = _position3D;
            else _localPosition3D = Quaternion.Inverse(_parent._rotation3D) * (_position3D - _parent._position3D);

            UpdateChildTransforms3D();
            OnChanged(new GizmoTransform.ChangeData(ChangeReason.TRSChange, GizmoDimension.Dim3D));
        }

        private void OnPosition2DChanged()
        {
            if (_parent == null) _localPosition2D = _position2D;
            else _localPosition2D = Quaternion.Inverse(_parent._rotation2D) * (_position2D - _parent._position2D);

            UpdateChildTransforms2D();
            OnChanged(new GizmoTransform.ChangeData(ChangeReason.TRSChange, GizmoDimension.Dim2D));
        }

        private void OnLocalPosition3DChanged()
        {
            if (_parent == null) _position3D = _localPosition3D;
            else _position3D = _parent.Rotation3D * _localPosition3D + _parent.Position3D;

            UpdateChildTransforms3D();
            OnChanged(new GizmoTransform.ChangeData(ChangeReason.TRSChange, GizmoDimension.Dim3D));
        }

        private void OnLocalPosition2DChanged()
        {
            if (_parent == null) _position2D = _localPosition2D;
            else
            {
                Vector2 rotatedPos = _parent.Rotation2D * _localPosition2D;
                _position2D = rotatedPos + _parent.Position2D;
            }

            UpdateChildTransforms2D();
            OnChanged(new GizmoTransform.ChangeData(ChangeReason.TRSChange, GizmoDimension.Dim2D));
        }

        private void OnRotation3DChanged()
        {
            if (_parent == null) _localRotation3D = _rotation3D;
            else _localRotation3D = QuaternionEx.Normalize(Quaternion.Inverse(_parent._rotation3D) * _rotation3D);

            Update3DAxes();
            UpdateChildTransforms3D();
            OnChanged(new GizmoTransform.ChangeData(ChangeReason.TRSChange, GizmoDimension.Dim3D));
        }

        private void OnRotation2DChanged()
        {
            if (_parent == null) _localRotation2D = _rotation2D;
            else _localRotation2D = QuaternionEx.Normalize(Quaternion.Inverse(_parent._rotation2D) * _rotation2D);

            _localRotation2DDegrees = _localRotation2D.ConvertTo2DRotation();

            Update2DAxes();
            UpdateChildTransforms2D();
            OnChanged(new GizmoTransform.ChangeData(ChangeReason.TRSChange, GizmoDimension.Dim2D));
        }

        private void OnLocalRotation3DChanged()
        {
            if (_parent == null) _rotation3D = _localRotation3D;
            else _rotation3D = QuaternionEx.Normalize(_parent._rotation3D * _localRotation3D);

            Update3DAxes();
            UpdateChildTransforms3D();
            OnChanged(new GizmoTransform.ChangeData(ChangeReason.TRSChange, GizmoDimension.Dim3D));
        }

        private void OnLocalRotation2DChanged()
        {
            if (_parent == null) _rotation2D = _localRotation2D;
            else _rotation2D = QuaternionEx.Normalize(_parent._rotation2D * _localRotation2D);

            _rotation2DDegrees = _rotation2D.ConvertTo2DRotation();

            Update2DAxes();
            UpdateChildTransforms2D();
            OnChanged(new GizmoTransform.ChangeData(ChangeReason.TRSChange, GizmoDimension.Dim2D));
        }

        private void UpdateChildTransforms3D()
        {
            foreach(var child in _children)
            {
                child._position3D = _rotation3D * child._localPosition3D + _position3D;
                child._rotation3D = QuaternionEx.Normalize(_rotation3D * child._localRotation3D);
                child.Update3DAxes();

                child.UpdateChildTransforms3D();
                child.OnChanged(new GizmoTransform.ChangeData(ChangeReason.TRSChange, GizmoDimension.Dim3D));
            }
        }

        private void UpdateChildTransforms2D()
        {
            foreach (var child in _children)
            {
                Vector2 rotatedPos = _rotation2D * child._localPosition2D;
                child._position2D = rotatedPos + _position2D;
                child._rotation2D = (QuaternionEx.Normalize(_rotation2D * child._localRotation2D));
                child._rotation2DDegrees = child._rotation2D.ConvertTo2DRotation();
                child.Update2DAxes();

                child.UpdateChildTransforms2D();
                child.OnChanged(new GizmoTransform.ChangeData(ChangeReason.TRSChange, GizmoDimension.Dim2D));
            }
        }

        private void OnChanged(GizmoTransform.ChangeData changeData)
        {
            if (changeData.TRSDimension == GizmoDimension.Dim3D)
            {
                _firingChanged3DEvent = true;
                if (Changed != null) Changed(this, changeData);
                _firingChanged3DEvent = false;
            }
            else
            {
                _firingChanged2DEvent = true;
                if (Changed != null) Changed(this, changeData);
                _firingChanged2DEvent = false;
            }
        }

        private void Update3DAxes()
        {
            Matrix4x4 rotationMtx = Matrix4x4.TRS(Vector3.zero, _rotation3D, Vector3.one);
            _axes3D[0] = rotationMtx.GetNormalizedAxis(0);
            _axes3D[1] = rotationMtx.GetNormalizedAxis(1);
            _axes3D[2] = rotationMtx.GetNormalizedAxis(2);
        }

        private void Update2DAxes()
        {
            Matrix4x4 rotationMtx = Matrix4x4.TRS(Vector3.zero, _rotation2D, Vector3.one);
            _axes2D[0] = rotationMtx.GetNormalizedAxis(0);
            _axes2D[1] = rotationMtx.GetNormalizedAxis(1);
        }
    }
}