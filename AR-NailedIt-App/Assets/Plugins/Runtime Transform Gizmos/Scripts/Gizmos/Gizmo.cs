using UnityEngine;
using System;
using System.Collections.Generic;

namespace RTG
{
    public delegate void GizmoPostEnabledHandler(Gizmo gizmo);
    public delegate void GizmoPostDisabledHandler(Gizmo gizmo);
    public delegate void GizmoPreUpdateBeginHandler(Gizmo gizmo);
    public delegate void GizmoPostUpdateEndHandler(Gizmo gizmo);
    public delegate void GizmoPreHoverEnterHandler(Gizmo gizmo, int handleId);
    public delegate void GizmoPostHoverEnterHandler(Gizmo gizmo, int handleId);
    public delegate void GizmoPreHoverExitHandler(Gizmo gizmo, int handleId);
    public delegate void GizmoPostHoverExitHandler(Gizmo gizmo, int handleId);
    public delegate void GizmoPreDragBeginHandler(Gizmo gizmo, int handleId);
    public delegate void GizmoPostDragBeginHandler(Gizmo gizmo, int handleId);
    public delegate void GizmoPreDragUpdateHandler(Gizmo gizmo, int handleId);
    public delegate void GizmoPostDragUpdateHandler(Gizmo gizmo, int handleId);
    public delegate void GizmoPreDragEndHandler(Gizmo gizmo, int handleId);
    public delegate void GizmoPostDragEndHandler(Gizmo gizmo, int handleId);
    public delegate void GizmoPreHandlePickedHandler(Gizmo gizmo, int handleId);
    public delegate void GizmoPostHandlePickedHandler(Gizmo gizmo, int handleId);
    public delegate void GizmoPreDragBeginAttemptHandler(Gizmo gizmo, int handleId);
    public delegate void GizmoPostDragBeginAttemptHandler(Gizmo gizmo, int handleId);
    public delegate Vector3 GizmoOffsetDragAxisModifyHandler(Gizmo gizmo, Vector3 relativeDragAxis, int handleId);

    [Serializable]
    public class Gizmo
    {
        public event GizmoPostEnabledHandler PostEnabled;
        public event GizmoPostDisabledHandler PostDisabled;
        public event GizmoPreUpdateBeginHandler PreUpdateBegin;
        public event GizmoPostUpdateEndHandler PostUpdateEnd;
        public event GizmoPreHoverEnterHandler PreHoverEnter;
        public event GizmoPostHoverEnterHandler PostHoverEnter;
        public event GizmoPreHoverExitHandler PreHoverExit;
        public event GizmoPostHoverExitHandler PostHoverExit;
        public event GizmoPreDragBeginHandler PreDragBegin;
        public event GizmoPostDragBeginHandler PostDragBegin;
        public event GizmoPreDragEndHandler PreDragEnd;
        public event GizmoPostDragEndHandler PostDragEnd;
        public event GizmoPreDragUpdateHandler PreDragUpdate;
        public event GizmoPostDragUpdateHandler PostDragUpdate;
        public event GizmoPreHandlePickedHandler PreHandlePicked;
        public event GizmoPostHandlePickedHandler PostHandlePicked;
        public event GizmoPreDragBeginAttemptHandler PreDragBeginAttempt;
        public event GizmoPostDragBeginAttemptHandler PostDragBeginAttempt;
        public event GizmoOffsetDragAxisModifyHandler OffsetDragAxisModify;

        private bool _isEnabled = true;

        private GizmoHandleCollection _handles;
        private GizmoBehaviourCollection _behaviours = new GizmoBehaviourCollection();

        private GizmoHoverInfo _hoverInfo = new GizmoHoverInfo();
        private GizmoDragInfo _dragInfo = new GizmoDragInfo();
        private IGizmoHandle _hoveredHandle;
        private Priority _genericHoverPriority = new Priority();
        private Priority _hoverPriority3D = new Priority();
        private Priority _hoverPriority2D = new Priority();

        private IGizmoDragSession _activeDragSession;
        private GizmoTransform _transform = new GizmoTransform();

        [NonSerialized]
        private MoveGizmo _moveGizmo;
        [NonSerialized]
        private RotationGizmo _rotationGizmo;
        [NonSerialized]
        private ScaleGizmo _scaleGizmo;
        [NonSerialized]
        private UniversalGizmo _universalGizmo;
        [NonSerialized]
        private ObjectTransformGizmo _objectTransformGizmo;
        [NonSerialized]
        private SceneGizmo _sceneGizmo;

        public static int InputDeviceDragButtonIndex { get { return 0; } }

        public int NumHandles { get { return _handles.Count; } }
        public Camera FocusCamera { get { return SceneGizmo == null ? RTFocusCamera.Get.TargetCamera : SceneGizmo.SceneGizmoCamera.Camera; } }
        public bool IsEnabled { get { return _isEnabled; } }
        public Priority GenericHoverPriority { get { return _genericHoverPriority; } }
        public Priority HoverPriority3D { get { return _hoverPriority3D; } }
        public Priority HoverPriority2D { get { return _hoverPriority2D; } }
        public GizmoTransform Transform { get { return _transform; } }
        public GizmoHoverInfo HoverInfo { get { return _hoverInfo; } }
        public bool IsHovered { get { return _hoverInfo.IsHovered; } }
        public int HoverHandleId { get { return _hoverInfo.HandleId; } }
        public GizmoDimension HoverHandleDimension { get { return _hoverInfo.HandleDimension; } }
        public Vector3 HoverPoint { get { return _hoverInfo.HoverPoint; } }
        public GizmoDragInfo DragInfo { get { return _dragInfo; } }
        public bool IsDragged { get { return _dragInfo.IsDragged; } }
        public GizmoDragChannel ActiveDragChannel { get { return _dragInfo.DragChannel; } }
        public int DragHandleId { get { return _dragInfo.HandleId; } }
        public Vector3 DragBeginPoint { get { return _dragInfo.DragBeginPoint; } }
        public GizmoDimension DragHandleDimension { get { return _dragInfo.HandleDimension; } }
        public Vector3 TotalDragOffset { get { return _dragInfo.TotalOffset; } }
        public Quaternion TotalDragRotation { get { return _dragInfo.TotalRotation; } }
        public Vector3 TotalDragScale { get { return _dragInfo.TotalScale; } }
        public Vector3 RelativeDragOffset { get { return _dragInfo.RelativeOffset; } }
        public Quaternion RelativeDragRotation { get { return _dragInfo.RelativeRotation; } }
        public Vector3 RelativeDragScale { get { return _dragInfo.RelativeScale; } }
        public MoveGizmo MoveGizmo { get { return _moveGizmo; } }
        public RotationGizmo RotationGizmo { get { return _rotationGizmo; } }
        public ScaleGizmo ScaleGizmo { get { return _scaleGizmo; } }
        public UniversalGizmo UniversalGizmo { get { return _universalGizmo; } }
        public ObjectTransformGizmo ObjectTransformGizmo { get { return _objectTransformGizmo; } }
        public SceneGizmo SceneGizmo { get { return _sceneGizmo; } }

        public Gizmo()
        {
            _handles = new GizmoHandleCollection(this);

            _hoverInfo.Reset();
            _dragInfo.Reset();
        }

        public Camera GetWorkCamera()
        {
            return RTGizmosEngine.Get.PipelineStage == GizmosEnginePipelineStage.Render ?
                RTGizmosEngine.Get.RenderStageCamera : FocusCamera;
        }

        public GizmoHandle CreateHandle(int id)
        {
            if (_handles.Contains(id)) return null;

            var handle = new GizmoHandle(this, id);
            _handles.Add(handle);
            return handle;
        }

        public void SetEnabled(bool enabled)
        {
            if (enabled == _isEnabled) return;

            if (!enabled)
            {
                EndDragSession();

                _hoverInfo.Reset();
                _hoveredHandle = null;

                _isEnabled = false;

                foreach (var behaviour in _behaviours) 
                    if (behaviour.IsEnabled) behaviour.OnGizmoDisabled();

                if (PostDisabled != null) PostDisabled(this);
            }
            else
            {
                _isEnabled = true;

                foreach (var behaviour in _behaviours)
                    if (behaviour.IsEnabled) behaviour.OnGizmoEnabled();

                if (PostEnabled != null) PostEnabled(this);
            }
        }

        public BehaviourType AddBehaviour<BehaviourType>()
            where BehaviourType : class, IGizmoBehaviour, new()
        {
            var newBehaviour = new BehaviourType();
            AddBehaviour(newBehaviour);

            return newBehaviour;
        }

        public bool AddBehaviour(IGizmoBehaviour behaviour)
        {
            if (behaviour == null || behaviour.Gizmo != null) return false;

            GizmoBehaviorInitParams initParams = new GizmoBehaviorInitParams();
            initParams.Gizmo = this;      
         
            behaviour.Init_SystemCall(initParams);
            if (!_behaviours.Add(behaviour)) return false;

            Type behaviourType = behaviour.GetType();
            if (behaviourType == typeof(MoveGizmo)) _moveGizmo = behaviour as MoveGizmo;
            else if (behaviourType == typeof(RotationGizmo)) _rotationGizmo = behaviour as RotationGizmo;
            else if (behaviourType == typeof(ScaleGizmo)) _scaleGizmo = behaviour as ScaleGizmo;
            else if (behaviourType == typeof(UniversalGizmo)) _universalGizmo = behaviour as UniversalGizmo;
            else if (behaviourType == typeof(SceneGizmo)) _sceneGizmo = behaviour as SceneGizmo;
            else if (behaviourType == typeof(ObjectTransformGizmo)) _objectTransformGizmo = behaviour as ObjectTransformGizmo;

            behaviour.OnAttached();
            behaviour.OnEnabled();

            return true;
        }

        public bool RemoveBehaviour(IGizmoBehaviour behaviour)
        {
            if (behaviour == null ) return false;

            if (behaviour == _moveGizmo) _moveGizmo = null;
            else if (behaviour == _rotationGizmo) _rotationGizmo = null;
            else if (behaviour == _scaleGizmo) _scaleGizmo = null;
            else if (behaviour == _universalGizmo) _universalGizmo = null;
            else if (behaviour == _sceneGizmo) _sceneGizmo = null;
            else if (behaviour == _objectTransformGizmo) _objectTransformGizmo = null;

            return _behaviours.Remove(behaviour);
        }

        public List<BehaviourType> GetBehavioursOfType<BehaviourType>() 
            where BehaviourType : class, IGizmoBehaviour
        {
            return _behaviours.GetBehavioursOfType<BehaviourType>();
        }

        public BehaviourType GetFirstBehaviourOfType<BehaviourType>()
            where BehaviourType : class, IGizmoBehaviour
        {
            return _behaviours.GetFirstBehaviourOfType<BehaviourType>();
        }

        public IGizmoBehaviour GetFirstBehaviourOfType(Type behaviourType)
        {
            return _behaviours.GetFirstBehaviourOfType(behaviourType);
        }

        public List<GizmoHandleHoverData> GetAllHandlesHoverData(Ray hoverRay)
        {
            return _handles.GetAllHandlesHoverData(hoverRay);
        }

        public IGizmoHandle GetHandleById_SystemCall(int handleId)
        {
            return _handles.GetHandleById(handleId);
        }

        public void OnGUI_SystemCall()
        {
            if (!IsEnabled) return;

            foreach (var behaviour in _behaviours) 
                if(behaviour.IsEnabled) behaviour.OnGUI();
        }

        public void OnUpdateBegin_SystemCall()
        {
            if (!IsEnabled) return;

            if (PreUpdateBegin != null) PreUpdateBegin(this);
            foreach (var behaviour in _behaviours)
                if (behaviour.IsEnabled) behaviour.OnGizmoUpdateBegin();
        }

        public void OnUpdateEnd_SystemCall()
        {
            if (!IsEnabled) return;

            foreach (var behaviour in _behaviours)
                if (behaviour.IsEnabled) behaviour.OnGizmoUpdateEnd();
            if (PostUpdateEnd != null) PostUpdateEnd(this);
        }

        public void UpdateHandleHoverInfo_SystemCall(GizmoHoverInfo hoverInfo)
        {
            if (!IsEnabled || IsDragged) return;

            bool wasHovered = _hoverInfo.IsHovered;
            int prevHoveredHandleId = _hoverInfo.HandleId;

            _hoverInfo.Reset();
            _hoveredHandle = null;

            if (hoverInfo.IsHovered && hoverInfo.HandleId != GizmoHandleId.None)
            {
                _hoverInfo.IsHovered = true;
                _hoverInfo.HandleId = hoverInfo.HandleId;
                _hoverInfo.HoverPoint = hoverInfo.HoverPoint;
                _hoveredHandle = _handles.GetHandleById(hoverInfo.HandleId);
                _hoverInfo.HandleDimension = hoverInfo.HandleDimension;
            }

            if (wasHovered && !_hoverInfo.IsHovered)
            {
                if (PreHoverExit != null) PreHoverExit(this, prevHoveredHandleId);
                foreach (var behaviour in _behaviours)
                {
                    if (behaviour.IsEnabled)
                        behaviour.OnGizmoHoverExit(prevHoveredHandleId);
                }
                if (PostHoverExit != null) PostHoverExit(this, prevHoveredHandleId);
            }
            else if (!wasHovered && _hoverInfo.IsHovered)
            {
                if (PreHoverEnter != null) PreHoverEnter(this, _hoverInfo.HandleId);
                foreach (var behaviour in _behaviours)
                {
                    if (behaviour.IsEnabled)
                        behaviour.OnGizmoHoverEnter(_hoverInfo.HandleId);
                }
                if (PostHoverEnter != null) PostHoverEnter(this, _hoverInfo.HandleId);
            }
            else
            if (wasHovered && _hoverInfo.IsHovered)
            {
                if (prevHoveredHandleId != _hoverInfo.HandleId)
                {
                    if (PreHoverExit != null) PreHoverExit(this, prevHoveredHandleId);
                    foreach (var behaviour in _behaviours)
                    {
                        if (behaviour.IsEnabled)
                            behaviour.OnGizmoHoverExit(prevHoveredHandleId);
                    }
                    if (PostHoverExit != null) PostHoverExit(this, prevHoveredHandleId);
                }

                if (PreHoverEnter != null) PreHoverEnter(this, _hoverInfo.HandleId);
                foreach (var behaviour in _behaviours)
                {
                    if (behaviour.IsEnabled)
                        behaviour.OnGizmoHoverEnter(_hoverInfo.HandleId);
                }
                if (PostHoverEnter != null) PostHoverEnter(this, _hoverInfo.HandleId);
            }
        }

        public AABB GetVisible3DHandlesAABB()
        {
            AABB aabb = AABB.GetInvalid();
            int numHandles = _handles.Count;
            for (int handleIndex = 0; handleIndex < numHandles; ++handleIndex)
            {
                var handle = _handles[handleIndex];
                AABB handleAABB = handle.GetVisible3DShapesAABB();
                if (handleAABB.IsValid)
                {
                    if (aabb.IsValid) aabb.Encapsulate(handleAABB);
                    else aabb = handleAABB;
                }
            }

            return aabb;
        }

        public Rect GetVisible2DHandlesRect(Camera camera)
        {
            var allRectPts = new List<Vector2>();
            int numHandles = _handles.Count;
            for (int handleIndex = 0; handleIndex < numHandles; ++handleIndex)
            {
                var handle = _handles[handleIndex];
                Rect handleRect = handle.GetVisible2DShapesRect(camera);
                if (handleRect.width != 0 || handleRect.height != 0) allRectPts.AddRange(handleRect.GetCornerPoints());
            }

            if (allRectPts.Count != 0) return RectEx.FromPoints(allRectPts);
            return new Rect();
        }

        public void Render_SystemCall(Camera camera, Plane[] worldFrustumPlanes)
        {
            if (!IsEnabled || NumHandles == 0) return;

            bool isSceneGizmoCamera = RTGizmosEngine.Get.IsSceneGizmoCamera(camera);
            if (SceneGizmo == null && isSceneGizmoCamera) return;
            else if (SceneGizmo != null && !isSceneGizmoCamera) return;

            foreach (var behaviour in _behaviours) 
                if(behaviour.IsEnabled) behaviour.OnGizmoRender(camera);
        }

        public void HandleInputDeviceEvents_SystemCall()
        {
            if (!IsEnabled) return;

            IInputDevice inputDevice = RTInputDevice.Get.Device;
            if (inputDevice.WasButtonPressedInCurrentFrame(InputDeviceDragButtonIndex)) OnInputDevicePickButtonDown();
            else if (inputDevice.WasButtonReleasedInCurrentFrame(InputDeviceDragButtonIndex)) OnInputDevicePickButtonUp();
            if (inputDevice.WasMoved()) OnInputDeviceMoved();
        }

        private void OnInputDevicePickButtonDown()
        {
            if (_hoveredHandle != null)
            {
                if (PreHandlePicked != null) PreHandlePicked(this, _hoveredHandle.Id);
                foreach (var behaviour in _behaviours)
                {
                    if(behaviour.IsEnabled)
                        behaviour.OnGizmoHandlePicked(_hoveredHandle.Id);
                }
                if (PostHandlePicked != null) PostHandlePicked(this, _hoveredHandle.Id);

                TryActivateDragSession();
            }
        }

        private void OnInputDevicePickButtonUp()
        {
            EndDragSession();      
        }

        private void EndDragSession()
        {
            if (_activeDragSession != null)
            {
                _activeDragSession.End();
                _dragInfo.IsDragged = false;

                if (PreDragEnd != null) PreDragEnd(this, _dragInfo.HandleId);
                foreach (var behaviour in _behaviours)
                    if (behaviour.IsEnabled) behaviour.OnGizmoDragEnd(_dragInfo.HandleId);

                int dragHandleId = _dragInfo.HandleId;
                _dragInfo.Reset();

                if (PostDragEnd != null) PostDragEnd(this, dragHandleId);
            }
            _activeDragSession = null;
        }

        private void OnInputDeviceMoved()
        {
            if (RTInputDevice.Get.Device.IsButtonPressed(InputDeviceDragButtonIndex))
            {
                if (_activeDragSession != null && _activeDragSession.IsActive)
                {
                    if(_activeDragSession.Update())
                    {
                        _dragInfo.TotalOffset = _activeDragSession.TotalDragOffset;
                        _dragInfo.RelativeOffset = _activeDragSession.RelativeDragOffset;

                        _dragInfo.TotalRotation = _activeDragSession.TotalDragRotation;
                        _dragInfo.TotalScale = _activeDragSession.TotalDragScale;

                        _dragInfo.RelativeRotation = _activeDragSession.RelativeDragRotation;
                        _dragInfo.RelativeScale = _activeDragSession.RelativeDragScale;

                        float relativeDragOffset = _activeDragSession.TotalDragOffset.magnitude;
                        if (relativeDragOffset != 0.0f && OffsetDragAxisModify != null)
                        {
                            Vector3 relativeDragAxis = _activeDragSession.RelativeDragOffset.normalized;
                            relativeDragAxis = OffsetDragAxisModify(this, relativeDragAxis, _hoveredHandle.Id);

                            _dragInfo.RelativeOffset = relativeDragAxis * _activeDragSession.RelativeDragOffset.magnitude;
                            _dragInfo.TotalOffset = _activeDragSession.TotalDragOffset - _activeDragSession.RelativeDragOffset + _dragInfo.RelativeOffset;
                        }

                        if (PreDragUpdate != null) PreDragUpdate(this, _dragInfo.HandleId);

                        foreach (var behaviour in _behaviours)
                            if (behaviour.IsEnabled) behaviour.OnGizmoDragUpdate(_dragInfo.HandleId);

                        if (PostDragUpdate != null) PostDragUpdate(this, _dragInfo.HandleId);
                    }
                }
            }
        }

        private void TryActivateDragSession()
        {
            if (_hoveredHandle != null && _hoveredHandle.DragSession != null)
            {
                foreach (var behaviour in _behaviours)
                {
                    if (behaviour.IsEnabled)
                    {
                        if (!behaviour.OnGizmoCanBeginDrag(_hoveredHandle.Id)) return;
                    }
                }

                if (PreDragBeginAttempt != null) PreDragBeginAttempt(this, _hoveredHandle.Id);
                foreach (var behaviour in _behaviours)
                {
                    if (behaviour.IsEnabled)
                        behaviour.OnGizmoAttemptHandleDragBegin(_hoveredHandle.Id);
                }
                if (PostDragBeginAttempt != null) PostDragBeginAttempt(this, _hoveredHandle.Id);

                if (_hoveredHandle.DragSession.Begin())
                {
                    _activeDragSession = _hoveredHandle.DragSession;

                    _dragInfo.IsDragged = true;
                    _dragInfo.DragChannel = _activeDragSession.DragChannel;
                    _dragInfo.HandleDimension = _hoverInfo.HandleDimension;
                    _dragInfo.HandleId = _hoverInfo.HandleId;
                    _dragInfo.DragBeginPoint = _hoverInfo.HoverPoint;

                    if (PreDragBegin != null) PreDragBegin(this, _dragInfo.HandleId);
                    foreach (var behaviour in _behaviours)
                        if (behaviour.IsEnabled) behaviour.OnGizmoDragBegin(_dragInfo.HandleId);
                    if (PostDragBegin != null) PostDragBegin(this, _dragInfo.HandleId);
                }
            }
        }
    }
}
