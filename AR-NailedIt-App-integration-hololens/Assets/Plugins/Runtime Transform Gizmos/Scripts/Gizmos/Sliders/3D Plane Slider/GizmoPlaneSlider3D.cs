using UnityEngine;

namespace RTG
{
    public class GizmoPlaneSlider3D : GizmoSlider
    {
        private int _quadIndex;
        private int _raTriangleIndex;
        private int _circleIndex;

        private QuadShape3D _quad = new QuadShape3D();
        private RightAngTriangle3D _raTriangle = new RightAngTriangle3D();
        private CircleShape3D _circle = new CircleShape3D();

        private GizmoQuad3DBorder _quadBorder;
        private GizmoRATriangle3DBorder _raTriangleBorder;
        private GizmoCircle3DBorder _circleBorder;
        private bool _isBorderHoverable = true;
        private bool _isBorderVisible = true;

        private GizmoTransform _transform = new GizmoTransform();

        private GizmoDragChannel _dragChannel = GizmoDragChannel.Offset;
        private IGizmoDragSession _selectedDragSession;
        private GizmoDblAxisOffsetDrag3D _dblAxisOffsetDrag = new GizmoDblAxisOffsetDrag3D();
        private GizmoSglAxisRotationDrag3D _rotationDrag = new GizmoSglAxisRotationDrag3D();
        private GizmoRotationArc3D _rotationArc = new GizmoRotationArc3D();
        private GizmoDblAxisScaleDrag3D _scaleDrag = new GizmoDblAxisScaleDrag3D();

        private int _scaleDragAxisIndexRight = 0;
        private int _scaleDragAxisIndexUp = 1;

        private GizmoPlaneSlider3DControllerData _controllerData = new GizmoPlaneSlider3DControllerData();
        private IGizmoPlaneSlider3DController[] _controllers = new IGizmoPlaneSlider3DController[System.Enum.GetValues(typeof(GizmoPlane3DType)).Length];

        private GizmoPlaneSlider3DSettings _settings = new GizmoPlaneSlider3DSettings();
        private GizmoPlaneSlider3DSettings _sharedSettings;
        private GizmoPlaneSlider3DLookAndFeel _lookAndFeel = new GizmoPlaneSlider3DLookAndFeel();
        private GizmoPlaneSlider3DLookAndFeel _sharedLookAndFeel;

        public GizmoPlaneSlider3DSettings Settings { get { return _sharedSettings != null ? _sharedSettings : _settings; } }
        public GizmoPlaneSlider3DSettings SharedSettings { get { return _sharedSettings; } set { _sharedSettings = value; } }
        public GizmoPlaneSlider3DLookAndFeel LookAndFeel { get { return _sharedLookAndFeel != null ? _sharedLookAndFeel : _lookAndFeel; } }
        public GizmoPlaneSlider3DLookAndFeel SharedLookAndFeel { get { return _sharedLookAndFeel; } set { _sharedLookAndFeel = value; } }

        public Plane Plane { get { return new Plane(Normal, Position); } }
        public Vector3 Position { get { return _transform.Position3D; } set { _transform.Position3D = value; } }
        public Quaternion Rotation { get { return _transform.Rotation3D; } set { _transform.Rotation3D = value; } }
        public Quaternion LocalRotation { get { return _transform.LocalRotation3D; } set { _transform.LocalRotation3D = value; } }
        public Vector3 Right { get { return _transform.GetAxis3D(0, AxisSign.Positive); } }
        public Vector3 Up { get { return _transform.GetAxis3D(1, AxisSign.Positive); } }
        public Vector3 Look { get { return _transform.GetAxis3D(2, AxisSign.Positive); } }
        public Vector3 Normal { get { return Look; } }
        public GizmoDragChannel DragChannel { get { return _dragChannel; } }
        public int ScaleDragAxisIndexRight { get { return _scaleDragAxisIndexRight; } set { _scaleDragAxisIndexRight = Mathf.Clamp(value, 0, 2); } }
        public int ScaleDragAxisIndexUp { get { return _scaleDragAxisIndexUp; } set { _scaleDragAxisIndexUp = Mathf.Clamp(value, 0, 2); } }
        public Vector3 TotalDragOffset { get { return _dblAxisOffsetDrag.TotalDragOffset; } }
        public Vector3 RelativeDragOffset { get { return _dblAxisOffsetDrag.RelativeDragOffset; } }
        public float TotalDragRotation { get { return _rotationDrag.TotalRotation; } }
        public float RelativeDragRotation { get { return _rotationDrag.RelativeRotation; } }
        public float TotalDragScaleRight { get { return _scaleDrag.TotalScale0; } }
        public float RelativeDragScaleRight { get { return _scaleDrag.RelativeScale0; } }
        public float TotalDragScaleUp { get { return _scaleDrag.TotalScale1; } }
        public float RelativeDragScaleUp { get { return _scaleDrag.RelativeScale1; } }
        public bool IsBorderVisible { get { return _isBorderVisible; } }
        public bool IsBorderHoverable { get { return _isBorderHoverable; } }
        public bool IsDragged { get { return Gizmo.IsDragged && Gizmo.DragHandleId == HandleId; } }
        public bool IsMoving { get { return _dblAxisOffsetDrag.IsActive; } }
        public bool IsRotating { get { return _rotationDrag.IsActive; } }
        public bool IsScaling { get { return _scaleDrag.IsActive; } }

        public GizmoPlaneSlider3D(Gizmo gizmo, int handleId)
            :base(gizmo, handleId)
        {
            _quadIndex = Handle.Add3DShape(_quad);
            _raTriangleIndex = Handle.Add3DShape(_raTriangle);
            _circleIndex = Handle.Add3DShape(_circle);

            _quadBorder = new GizmoQuad3DBorder(this, Handle, _quad);
            _raTriangleBorder = new GizmoRATriangle3DBorder(this, Handle, _raTriangle);
            _circleBorder = new GizmoCircle3DBorder(this, Handle, _circle);

            _controllerData.Gizmo = Gizmo;
            _controllerData.Slider = this;
            _controllerData.SliderHandle = Handle;
            _controllerData.QuadBorder = _quadBorder;
            _controllerData.Quad = _quad;
            _controllerData.QuadIndex = _quadIndex;
            _controllerData.RATriangleBorder = _raTriangleBorder;
            _controllerData.RATriangle = _raTriangle;
            _controllerData.RATriangleIndex = _raTriangleIndex;
            _controllerData.CircleBorder = _circleBorder;
            _controllerData.Circle = _circle;
            _controllerData.CircleIndex = _circleIndex;

            _controllers[(int)GizmoPlane3DType.Quad] = new GizmoQuadPlaneSlider3DController(_controllerData);
            _controllers[(int)GizmoPlane3DType.RATriangle] = new GizmoRATrianglePlaneSlider3DController(_controllerData);
            _controllers[(int)GizmoPlane3DType.Circle] = new GizmoCirclePlaneSlider3DController(_controllerData);

            _transform.Changed += OnTransformChanged;
            Gizmo.PreUpdateBegin += OnGizmoPreUpdateBegin;
            Gizmo.PreDragBeginAttempt += OnGizmoAttemptHandleDragBegin;
            Gizmo.PostEnabled += OnGizmoPostEnabled;
            Handle.CanHover += OnCanHoverHandle;

            SetDragChannel(GizmoDragChannel.Offset);
            AddTargetTransform(_transform);
            AddTargetTransform(Gizmo.Transform);
            _transform.SetParent(Gizmo.Transform);
        }      

        public void SetBorderVisible(bool isVisible)
        {
            if (isVisible == _isBorderVisible) return;

            _isBorderVisible = isVisible;
            _controllers[(int)LookAndFeel.PlaneType].UpdateHandles();
        }

        public void SetBorderHoverable(bool isHoverable)
        {
            _isBorderHoverable = isHoverable;
            _quadBorder.SetHoverable(isHoverable);
            _raTriangleBorder.SetHoverable(isHoverable);
            _circleBorder.SetHoverable(isHoverable);
        }

        public override void SetSnapEnabled(bool isEnabled)
        {
            _dblAxisOffsetDrag.IsSnapEnabled = isEnabled;
            _rotationDrag.IsSnapEnabled = isEnabled;
            _scaleDrag.IsSnapEnabled = isEnabled;
        }

        public void SetZoomFactorTransform(GizmoTransform transform)
        {
            Handle.SetZoomFactorTransform(transform);
        }

        public float GetZoomFactor(Camera camera)
        {
            if (!LookAndFeel.UseZoomFactor) return 1.0f;
            return Handle.GetZoomFactor(camera);
        }

        public float GetRealQuadWidth(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;

            float dragScale = 1.0f;
            if (_scaleDrag.IsActive) dragScale = Mathf.Abs(_scaleDrag.TotalScale0);

            return LookAndFeel.QuadWidth * LookAndFeel.Scale * zoomFactor * dragScale;
        }

        public float GetRealQuadHeight(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;

            float dragScale = 1.0f;
            if (_scaleDrag.IsActive) dragScale = Mathf.Abs(_scaleDrag.TotalScale1);

            return LookAndFeel.QuadHeight * LookAndFeel.Scale * zoomFactor * dragScale;
        }

        public Vector2 GetRealQuadSize(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;

            float dragScaleRight = 1.0f; float dragScaleUp = 1.0f;
            if (_scaleDrag.IsActive)
            {
                dragScaleRight = _scaleDrag.TotalScale0;
                dragScaleUp = _scaleDrag.TotalScale1;
            }

            return new Vector2(LookAndFeel.QuadWidth * LookAndFeel.Scale * zoomFactor * dragScaleRight, 
                               LookAndFeel.QuadHeight * LookAndFeel.Scale * zoomFactor * dragScaleUp);
        }

        public float GetRealCircleRadius(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;

            float maxTotalDragScale = 1.0f;
            if (IsScaling)
            {
                maxTotalDragScale = TotalDragScaleRight;
                if (Mathf.Abs(TotalDragScaleRight) < Mathf.Abs(TotalDragScaleUp)) maxTotalDragScale = TotalDragScaleUp;
            }
            return LookAndFeel.CircleRadius * LookAndFeel.Scale * zoomFactor * maxTotalDragScale;
        }

        public float GetRealRATriXLength(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;

            float dragScale = 1.0f;
            if (_scaleDrag.IsActive) dragScale = Mathf.Abs(_scaleDrag.TotalScale0);

            return LookAndFeel.RATriangleXLength * LookAndFeel.Scale * zoomFactor * dragScale;
        }

        public float GetRealRATriYLength(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;

            float dragScale = 1.0f;
            if (_scaleDrag.IsActive) dragScale = Mathf.Abs(_scaleDrag.TotalScale1);

            return LookAndFeel.RATriangleYLength * LookAndFeel.Scale * zoomFactor * dragScale;
        }

        public Vector2 GetRealRATriSize(float zoomFactor)
        {
            if (!LookAndFeel.UseZoomFactor) zoomFactor = 1.0f;

            float dragScaleRight = 1.0f; float dragScaleUp = 1.0f;
            if (_scaleDrag.IsActive)
            {
                dragScaleRight = _scaleDrag.TotalScale0;
                dragScaleUp = _scaleDrag.TotalScale1;
            }

            return new Vector2(LookAndFeel.RATriangleXLength * LookAndFeel.Scale * zoomFactor * dragScaleRight,
                               LookAndFeel.RATriangleYLength * LookAndFeel.Scale * zoomFactor * dragScaleUp);
        }

        public void AlignToQuadrant(GizmoTransform transform, PlaneId planeId, PlaneQuadrantId quadrantId, bool alignXToFirstAxis)
        {
            Plane plane = transform.GetPlane3D(planeId, quadrantId);
            if (alignXToFirstAxis)
            {
                AxisDescriptor secondAxisDesc = PlaneIdHelper.GetSecondAxisDescriptor(planeId, quadrantId);
                Vector3 secondAxis = Gizmo.Transform.GetAxis3D(secondAxisDesc);
                _transform.Rotation3D = Quaternion.LookRotation(plane.normal, secondAxis);
            }
            else
            {
                AxisDescriptor firstAxisDesc = PlaneIdHelper.GetFirstAxisDescriptor(planeId, quadrantId);
                Vector3 firstAxis = Gizmo.Transform.GetAxis3D(firstAxisDesc);
                _transform.Rotation3D = Quaternion.LookRotation(plane.normal, firstAxis);
            }
        }

        public void MakeSliderPlane(GizmoTransform sliderPlaneTransform, PlaneId planeId, GizmoLineSlider3D firstAxisSlider, GizmoLineSlider3D secondAxisSlider, Camera camera)
        {
            PlaneQuadrantId quadrantId = sliderPlaneTransform.Get3DQuadrantFacingCamera(planeId, camera);
            AlignToQuadrant(sliderPlaneTransform, planeId, quadrantId, true);

            Vector3 firstQdrAxis = sliderPlaneTransform.GetAxis3D(PlaneIdHelper.GetFirstAxisDescriptor(planeId, quadrantId));
            Vector3 secondQdrAxis = sliderPlaneTransform.GetAxis3D(PlaneIdHelper.GetSecondAxisDescriptor(planeId, quadrantId));
            Vector3 sliderOffset = firstQdrAxis * secondAxisSlider.GetRealSizeAlongDirection(camera, firstQdrAxis) * 0.5f +
                                   secondQdrAxis * firstAxisSlider.GetRealSizeAlongDirection(camera, secondQdrAxis) * 0.5f;

            if (LookAndFeel.PlaneType == GizmoPlane3DType.Quad) SetQuadCornerPosition(QuadCorner.BottomLeft, sliderPlaneTransform.Position3D + sliderOffset);
        }

        public Vector3 GetQuadCornerPosition(QuadCorner corner)
        {
            return _quad.GetCornerPosition(corner);
        }

        public void SetQuadCornerPosition(QuadCorner corner, Vector3 cornerPosition)
        {
            Vector3 toPosition = Position - GetQuadCornerPosition(corner);
            Position = cornerPosition + toPosition;
        }

        public void ApplyZoomFactor(Camera camera)
        {
            if (LookAndFeel.UseZoomFactor)
            {
                float zoomFactor = GetZoomFactor(camera);
                _controllers[(int)LookAndFeel.PlaneType].UpdateTransforms(zoomFactor);
            }
        }

        public void SetDragChannel(GizmoDragChannel dragChannel)
        {
            _dragChannel = dragChannel;
            if (_dragChannel == GizmoDragChannel.Offset) _selectedDragSession = _dblAxisOffsetDrag;
            else if (_dragChannel == GizmoDragChannel.Rotation) _selectedDragSession = _rotationDrag;
            else if (_dragChannel == GizmoDragChannel.Scale) _selectedDragSession = _scaleDrag;

            Handle.DragSession = _selectedDragSession;
        }

        public void AddTargetTransform(GizmoTransform transform)
        {
            _dblAxisOffsetDrag.AddTargetTransform(transform);
            _rotationDrag.AddTargetTransform(transform);
            _scaleDrag.AddTargetTransform(transform);
        }

        public void AddTargetTransform(GizmoTransform transform, GizmoDragChannel dragChannel)
        {
            if (dragChannel == GizmoDragChannel.Offset) _dblAxisOffsetDrag.AddTargetTransform(transform);
            else if (dragChannel == GizmoDragChannel.Rotation) _rotationDrag.AddTargetTransform(transform);
            else if (_dragChannel == GizmoDragChannel.Scale) _scaleDrag.AddTargetTransform(transform);
        }

        public void RemoveTargetTransform(GizmoTransform transform)
        {
            _dblAxisOffsetDrag.RemoveTargetTransform(transform);
            _rotationDrag.RemoveTargetTransform(transform);
            _scaleDrag.RemoveTargetTransform(transform);
        }

        public void RemoveTargetTransform(GizmoTransform transform, GizmoDragChannel dragChannel)
        {
            if (dragChannel == GizmoDragChannel.Offset) _dblAxisOffsetDrag.RemoveTargetTransform(transform);
            else if (dragChannel == GizmoDragChannel.Rotation) _rotationDrag.RemoveTargetTransform(transform);
            else if (_dragChannel == GizmoDragChannel.Scale) _scaleDrag.RemoveTargetTransform(transform);
        }

        public override void Render(Camera camera)
        {
            if (IsRotating && LookAndFeel.PlaneType == GizmoPlane3DType.Circle && LookAndFeel.IsRotationArcVisible)
            {
                _rotationArc.RotationAngle = TotalDragRotation;
                _rotationArc.Radius = GetRealCircleRadius(GetZoomFactor(camera));
                _rotationArc.Render(LookAndFeel.RotationArcLookAndFeel);
            }

            if (IsVisible)
            {
                Color color = new Color();
                if (!IsHovered) color = LookAndFeel.Color;
                else color = LookAndFeel.HoveredColor;

                GizmoSolidMaterial solidMaterial = GizmoSolidMaterial.Get;
                solidMaterial.ResetValuesToSensibleDefaults();
                solidMaterial.SetCullModeOff();
                solidMaterial.SetLit(LookAndFeel.ShadeMode == GizmoShadeMode.Lit);
                if (solidMaterial.IsLit) solidMaterial.SetLightDirection(camera.transform.forward);
                solidMaterial.SetColor(color);
                solidMaterial.SetPass(0);

                if (LookAndFeel.PlaneType == GizmoPlane3DType.Quad) Handle.Render3DSolid(_quadIndex);
                else if (LookAndFeel.PlaneType == GizmoPlane3DType.RATriangle) Handle.Render3DSolid(_raTriangleIndex);
                else if (LookAndFeel.PlaneType == GizmoPlane3DType.Circle) Handle.Render3DSolid(_circleIndex);
            }

            if (LookAndFeel.PlaneType == GizmoPlane3DType.Quad) _quadBorder.Render(camera);
            else if (LookAndFeel.PlaneType == GizmoPlane3DType.RATriangle) _raTriangleBorder.Render(camera);
            else if (LookAndFeel.PlaneType == GizmoPlane3DType.Circle) _circleBorder.Render(camera);
        }

        public void Refresh()
        {
            Camera camera = Gizmo.GetWorkCamera();
            float zoomFactor = GetZoomFactor(camera);

            _controllers[(int)LookAndFeel.PlaneType].UpdateHandles();
            _controllers[(int)LookAndFeel.PlaneType].UpdateEpsilons(zoomFactor);
            _controllers[(int)LookAndFeel.PlaneType].UpdateTransforms(zoomFactor);
        }

        protected override void OnVisibilityStateChanged()
        {
            _controllers[(int)LookAndFeel.PlaneType].UpdateHandles();
            Camera camera = Gizmo.GetWorkCamera();
            float zoomFactor = GetZoomFactor(camera);

            _controllers[(int)LookAndFeel.PlaneType].UpdateEpsilons(zoomFactor);
            _controllers[(int)LookAndFeel.PlaneType].UpdateTransforms(zoomFactor);
        }

        protected override void OnHoverableStateChanged()
        {
            Handle.Set3DShapeHoverable(_quadIndex, IsHoverable);
            Handle.Set3DShapeHoverable(_raTriangleIndex, IsHoverable);
            Handle.Set3DShapeHoverable(_circleIndex, IsHoverable);
        }

        private void OnGizmoPreUpdateBegin(Gizmo gizmo)
        {
            int controllerIndex = (int)LookAndFeel.PlaneType;
            _controllers[controllerIndex].UpdateHandles();

            _dblAxisOffsetDrag.Sensitivity = Settings.OffsetSensitivity;
            _rotationDrag.Sensitivity = Settings.RotationSensitivity;
            _scaleDrag.Sensitivity = Settings.ScaleSensitivity;

            float zoomFactor = GetZoomFactor(Gizmo.FocusCamera);
            _controllers[controllerIndex].UpdateTransforms(zoomFactor);
            _controllers[controllerIndex].UpdateEpsilons(zoomFactor);
        }

        private void OnTransformChanged(GizmoTransform transform, GizmoTransform.ChangeData changeData)
        {
            if (changeData.ChangeReason == GizmoTransform.ChangeReason.ParentChange || 
                 changeData.TRSDimension == GizmoDimension.Dim3D)
            {
                float zoomFactor = GetZoomFactor(Gizmo.GetWorkCamera());
                _controllers[(int)LookAndFeel.PlaneType].UpdateTransforms(zoomFactor);
            }
        }

        private void OnGizmoAttemptHandleDragBegin(Gizmo gizmo, int handleId)
        {
            if (handleId == HandleId)
            {
                if (_dragChannel == GizmoDragChannel.Offset)
                {
                    GizmoDblAxisOffsetDrag3D.WorkData workData = new GizmoDblAxisOffsetDrag3D.WorkData();
                    workData.Axis0 = Right;
                    workData.Axis1 = Up;
                    workData.DragOrigin = Position;
                    workData.SnapStep0 = Settings.OffsetSnapStepRight;
                    workData.SnapStep1 = Settings.OffsetSnapStepUp;
                    _dblAxisOffsetDrag.SetWorkData(workData);
                }
                else
                if (_dragChannel == GizmoDragChannel.Rotation)
                {
                    GizmoSglAxisRotationDrag3D.WorkData workData = new GizmoSglAxisRotationDrag3D.WorkData();
                    workData.Axis = Normal;
                    workData.RotationPlanePos = Position;
                    workData.SnapMode = Settings.RotationSnapMode;
                    workData.SnapStep = Settings.RotationSnapStep;
                    _rotationDrag.SetWorkData(workData);

                    Vector3 arcStart = Plane.ProjectPoint(Gizmo.HoverInfo.HoverPoint);
                    _rotationArc.SetArcData(Normal, Position, arcStart, GetRealCircleRadius(GetZoomFactor(Gizmo.FocusCamera)));
                }
                else
                if (_dragChannel == GizmoDragChannel.Scale)
                {
                    GizmoDblAxisScaleDrag3D.WorkData workData = new GizmoDblAxisScaleDrag3D.WorkData();
                    workData.Axis0 = Right;
                    workData.Axis1 = Up;
                    workData.DragOrigin = Position;
                    workData.AxisIndex0 = _scaleDragAxisIndexRight;
                    workData.AxisIndex1 = _scaleDragAxisIndexUp;
                    workData.SnapStep = Settings.ProportionalScaleSnapStep;
                    _scaleDrag.SetWorkData(workData);
                }
            }
        }

        private void OnCanHoverHandle(int handleId, Gizmo gizmo, GizmoHandleHoverData hoverData, YesNoAnswer answer)
        {
            if (handleId == HandleId && gizmo == Gizmo)
            {
                if (LookAndFeel.PlaneType == GizmoPlane3DType.Circle && Settings.IsCircleHoverCullEnabled)
                {
                    Vector3 hoverNormal = (hoverData.HoverPoint - Position).normalized;
                    if (Gizmo.FocusCamera.IsPointFacingCamera(hoverData.HoverPoint, hoverNormal)) answer.Yes();
                    else answer.No();
                    return;
                }
            }

            answer.Yes();
        }

        private void OnGizmoPostEnabled(Gizmo gizmo)
        {
            Refresh();
        }
    }
}
