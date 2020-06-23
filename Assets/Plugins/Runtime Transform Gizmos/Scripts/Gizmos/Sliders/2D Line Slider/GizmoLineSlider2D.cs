using UnityEngine;

namespace RTG
{
    public class GizmoLineSlider2D : GizmoSlider
    {
        private SegmentShape2D _segment = new SegmentShape2D();
        private QuadShape2D _quad = new QuadShape2D();

        private int _segmentIndex;
        private int _quadIndex;

        private GizmoDragChannel _dragChannel;
        private GizmoSglAxisOffsetDrag3D _offsetDrag = new GizmoSglAxisOffsetDrag3D();
        private Vector3 _offsetDragOrigin;
        private GizmoSglAxisRotationDrag3D _rotationDrag = new GizmoSglAxisRotationDrag3D();
        private GizmoRotationArc2D _rotationArc = new GizmoRotationArc2D();
        private GizmoSglAxisScaleDrag3D _scaleDrag = new GizmoSglAxisScaleDrag3D();
        private Vector3 _scaleDragOrigin;
        private Vector3 _scaleAxis;
        private int _scaleDragAxisIndex = 0;
        private IGizmoDragSession _selectedDragSession;

        private GizmoCap2D _cap2D;

        private GizmoTransform _transform = new GizmoTransform();
        private GizmoTransformAxisMap2D _directionAxisMap = new GizmoTransformAxisMap2D();

        private GizmoOverrideColor _overrideFillColor = new GizmoOverrideColor();
        private GizmoOverrideColor _overrideBorderColor = new GizmoOverrideColor();

        private GizmoLineSlider2DControllerData _controllerData = new GizmoLineSlider2DControllerData();
        private IGizmoLineSlider2DController[] _controllers = new IGizmoLineSlider2DController[System.Enum.GetValues(typeof(GizmoLine2DType)).Length];

        private GizmoLineSlider2DSettings _settings = new GizmoLineSlider2DSettings();
        private GizmoLineSlider2DSettings _sharedSettings;
        private GizmoLineSlider2DLookAndFeel _lookAndFeel = new GizmoLineSlider2DLookAndFeel();
        private GizmoLineSlider2DLookAndFeel _sharedLookAndFeel;

        public Quaternion Rotation { get { return _transform.Rotation2D; } }
        public float RotationDegrees { get { return _transform.Rotation2DDegrees; } }
        public Vector2 StartPosition { get { return _transform.Position2D; } set { _transform.Position2D = value; } }
        public Vector2 Direction { get { return _directionAxisMap.Axis; } }
        public Vector3 OffsetDragOrigin { get { return _offsetDragOrigin; } set { _offsetDragOrigin = value; } }
        public Vector3 ScaleDragOrigin { get { return _scaleDragOrigin; } set { _scaleDragOrigin = value; } }
        public int ScaleDragAxisIndex { get { return _scaleDragAxisIndex; } set { _scaleDragAxisIndex = Mathf.Clamp(value, 0, 2); } }
        public int Cap2DHandleId { get { return _cap2D.HandleId; } }
        public bool IsDragged { get { return Gizmo.IsDragged && (Gizmo.DragHandleId == HandleId || Gizmo.DragHandleId == _cap2D.HandleId); } }
        public bool IsMoving { get { return _offsetDrag.IsActive; } }
        public bool IsRotating { get { return _rotationDrag.IsActive; } }
        public bool IsScaling { get { return _scaleDrag.IsActive; } }
        public bool Is2DCapVisible { get { return _cap2D.IsVisible; } }
        public bool Is2DCapHoverable { get { return _cap2D.IsHoverable; } }
        public Vector3 TotalDragOffset { get { return _offsetDrag.TotalDragOffset; } }
        public Vector3 RelativeDragOffset { get { return _offsetDrag.RelativeDragOffset; } }
        public float TotalDragRotation { get { return _rotationDrag.TotalRotation; } }
        public float RelativeDragRotation { get { return _rotationDrag.RelativeRotation; } }
        public float TotalDragScale { get { return _scaleDrag.TotalScale; } }
        public float RelativeDragScale { get { return _scaleDrag.RelativeScale; } }
        public GizmoOverrideColor OverrideFillColor { get { return _overrideFillColor; } }
        public GizmoOverrideColor OverrideBorderColor { get { return _overrideBorderColor; } }
        public GizmoLineSlider2DSettings Settings { get { return _sharedSettings != null ? _sharedSettings : _settings; } }
        public GizmoLineSlider2DSettings SharedSettings { get { return _sharedSettings; } set { _sharedSettings = value; } }
        public GizmoLineSlider2DLookAndFeel LookAndFeel { get { return _sharedLookAndFeel != null ? _sharedLookAndFeel : _lookAndFeel; } }
        public GizmoLineSlider2DLookAndFeel SharedLookAndFeel 
        { 
            get { return _sharedLookAndFeel; } 
            set 
            { 
                _sharedLookAndFeel = value;
                SetupSharedLookAndFeel();
            } 
        }

        public GizmoLineSlider2D(Gizmo gizmo, int handleId, int capHandleId)
            :base(gizmo, handleId)
        {
            _segmentIndex = Handle.Add2DShape(_segment);
            _quadIndex = Handle.Add2DShape(_quad);

            _controllerData.Gizmo = Gizmo;
            _controllerData.Slider = this;
            _controllerData.SliderHandle = Handle;
            _controllerData.Segment = _segment;
            _controllerData.SegmentIndex = _segmentIndex;
            _controllerData.Quad = _quad;
            _controllerData.QuadIndex = _quadIndex;

            _controllers[(int)GizmoLine2DType.Thin] = new GizmoThinLineSlider2DController(_controllerData);
            _controllers[(int)GizmoLine2DType.Box] = new GizmoBoxLineSlider2DController(_controllerData);

            _cap2D = new GizmoCap2D(gizmo, capHandleId);
            SetupSharedLookAndFeel();

            SetDragChannel(GizmoDragChannel.Offset);
            AddTargetTransform(Gizmo.Transform);
            AddTargetTransform(_transform);
            _cap2D.RegisterTransformAsDragTarget(_offsetDrag);
            _cap2D.RegisterTransformAsDragTarget(_rotationDrag);

            _transform.Changed += OnTransformChanged;
            _transform.SetParent(gizmo.Transform);

            Gizmo.PreUpdateBegin += OnGizmoPreUpdateBegin;
            Gizmo.PreDragUpdate += OnGizmoHandleDragUpdate;
            Gizmo.PreDragBeginAttempt += OnGizmoAttemptHandleDragBegin;
            Gizmo.PreHoverEnter += OnGizmoHandleHoverEnter;
            Gizmo.PreHoverExit += OnGizmoHandleHoverExit;
            Gizmo.PostEnabled += OnGizmoPostEnabled;
        }

        public override void SetSnapEnabled(bool isEnabled)
        {
            _offsetDrag.IsSnapEnabled = isEnabled;
            _rotationDrag.IsSnapEnabled = isEnabled;
            _scaleDrag.IsSnapEnabled = isEnabled;
        }

        public void Set2DCapVisible(bool isVisible)
        {
            _cap2D.SetVisible(isVisible);
        }

        public void Set2DCapHoverable(bool isHoverable)
        {
            _cap2D.SetHoverable(isHoverable);
        }

        public Vector2 GetRealDirection()
        {
            float sign = IsScaling ? Mathf.Sign(TotalDragScale) : 1.0f;
            return Direction * sign;
        }

        public float GetRealLength()
        {
            float scaleFactor = 1.0f;
            if (IsScaling)
            {
                Vector3 realScaleAxis = _scaleAxis * TotalDragScale;
                Vector2 screenScaleAxis = Vector3Ex.ConvertDirTo2D(ScaleDragOrigin, ScaleDragOrigin + realScaleAxis, Gizmo.GetWorkCamera());
                scaleFactor = (screenScaleAxis.magnitude / (LookAndFeel.Length * LookAndFeel.Scale)) * Mathf.Sign(TotalDragScale);
            }

            return LookAndFeel.Length * LookAndFeel.Scale * scaleFactor;
        }

        public Vector2 GetRealEndPosition()
        {
            return StartPosition + Direction * GetRealLength();
        }

        public float GetRealBoxThickness()
        {
            return LookAndFeel.BoxThickness * LookAndFeel.Scale;
        }

        public void MapDirection(int axisIndex, AxisSign axisSign)
        {
            if (IsDragged || axisIndex > 1) return;
            _directionAxisMap.Map(_transform, axisIndex, axisSign);
        }

        public void SetDirection(Vector2 directionAxis)
        {
            if (IsDragged) return;
            _directionAxisMap.SetAxis(directionAxis);
        }

        public void AddTargetTransform(GizmoTransform transform)
        {
            _offsetDrag.AddTargetTransform(transform);
            _rotationDrag.AddTargetTransform(transform);
            _scaleDrag.AddTargetTransform(transform);
        }

        public void AddTargetTransform(GizmoTransform transform, GizmoDragChannel dragChannel)
        {
            if (dragChannel == GizmoDragChannel.Offset) _offsetDrag.AddTargetTransform(transform);
            else if (dragChannel == GizmoDragChannel.Rotation) _rotationDrag.AddTargetTransform(transform);
            else if (dragChannel == GizmoDragChannel.Scale) _scaleDrag.AddTargetTransform(transform);
        }

        public void RemoveTargetTransform(GizmoTransform transform)
        {
            _offsetDrag.RemoveTargetTransform(transform);
            _rotationDrag.RemoveTargetTransform(transform);
            _scaleDrag.RemoveTargetTransform(transform);
        }

        public void RemoveTargetTransform(GizmoTransform transform, GizmoDragChannel dragChannel)
        {
            if (dragChannel == GizmoDragChannel.Offset) _offsetDrag.RemoveTargetTransform(transform);
            else if (dragChannel == GizmoDragChannel.Rotation) _rotationDrag.RemoveTargetTransform(transform);
            else if (dragChannel == GizmoDragChannel.Scale) _scaleDrag.RemoveTargetTransform(transform);
        }

        public void SetDragChannel(GizmoDragChannel dragChannel)
        {
            _dragChannel = dragChannel;
            if (_dragChannel == GizmoDragChannel.Offset) _selectedDragSession = _offsetDrag;
            else if (_dragChannel == GizmoDragChannel.Rotation) _selectedDragSession = _rotationDrag;
            else if (_dragChannel == GizmoDragChannel.Scale) _selectedDragSession = _scaleDrag;

            Handle.DragSession = _selectedDragSession;
            _cap2D.DragSession = _selectedDragSession;
        }

        public override void Render(Camera camera)
        {
            if (!IsVisible && !Is2DCapVisible) return;

            if (LookAndFeel.IsRotationArcVisible && IsRotating)
            {
                _rotationArc.RotationAngle = _rotationDrag.TotalRotation;
                _rotationArc.Render(LookAndFeel.RotationArcLookAndFeel, camera);
            }

            if (IsVisible)
            {
                if (LookAndFeel.LineType == GizmoLine2DType.Thin || 
                    LookAndFeel.FillMode == GizmoFillMode2D.FilledAndBorder || 
                    LookAndFeel.FillMode == GizmoFillMode2D.Filled)
                {
                    Color fillColor = new Color();
                    if (!_overrideFillColor.IsActive)
                    {
                        fillColor = LookAndFeel.Color;
                        if (Gizmo.HoverHandleId == HandleId) fillColor = LookAndFeel.HoveredColor;
                    }
                    else fillColor = _overrideFillColor.Color;

                    GizmoSolidMaterial solidMaterial = GizmoSolidMaterial.Get;
                    solidMaterial.ResetValuesToSensibleDefaults();
                    solidMaterial.SetLit(false);
                    solidMaterial.SetColor(fillColor);
                    solidMaterial.SetPass(0);

                    Handle.Render2DSolid(camera);
                }

                if (LookAndFeel.LineType != GizmoLine2DType.Thin && 
                   (LookAndFeel.FillMode == GizmoFillMode2D.FilledAndBorder || LookAndFeel.FillMode == GizmoFillMode2D.Border))
                {
                    Color borderColor = new Color();
                    if (!_overrideFillColor.IsActive)
                    {
                        borderColor = LookAndFeel.BorderColor;
                        if (Gizmo.HoverHandleId == HandleId) borderColor = LookAndFeel.HoveredBorderColor;
                    }
                    else borderColor = _overrideBorderColor.Color;

                    GizmoLineMaterial lineMaterial = GizmoLineMaterial.Get;
                    lineMaterial.ResetValuesToSensibleDefaults();
                    lineMaterial.SetColor(borderColor);
                    lineMaterial.SetPass(0);

                    Handle.Render2DWire(camera);
                }
            }

            _cap2D.Render(camera);
        }

        public void Refresh()
        {
            _controllers[(int)LookAndFeel.LineType].UpdateHandles();
            _controllers[(int)LookAndFeel.LineType].UpdateEpsilons();
            _controllers[(int)LookAndFeel.LineType].UpdateTransforms();
            _cap2D.CapSlider2D(GetRealDirection(), GetRealEndPosition());
        }

        protected override void OnVisibilityStateChanged()
        {
            _controllers[(int)LookAndFeel.LineType].UpdateHandles();
            _controllers[(int)LookAndFeel.LineType].UpdateEpsilons();
            _controllers[(int)LookAndFeel.LineType].UpdateTransforms();
            _cap2D.CapSlider2D(GetRealDirection(), GetRealEndPosition());
        }

        protected override void OnHoverableStateChanged()
        {
            Handle.SetHoverable(IsHoverable);
        }

        private void OnGizmoPreUpdateBegin(Gizmo gizmo)
        {
            int controllerIndex = (int)LookAndFeel.LineType;
            _controllers[controllerIndex].UpdateHandles();

            _offsetDrag.Sensitivity = Settings.OffsetSensitivity;
            _rotationDrag.Sensitivity = Settings.RotationSensitivity;
            _controllers[controllerIndex].UpdateTransforms();
            _controllers[controllerIndex].UpdateEpsilons();

            _cap2D.GenericHoverPriority.Value = GenericHoverPriority.Value;
            _cap2D.HoverPriority2D.Value = HoverPriority2D.Value;
            _cap2D.HoverPriority3D.Value = HoverPriority3D.Value;
            _cap2D.CapSlider2D(GetRealDirection(), GetRealEndPosition());
        }

        private void OnGizmoAttemptHandleDragBegin(Gizmo gizmo, int handleId)
        {
            if (handleId == Handle.Id || handleId == _cap2D.HandleId)
            {
                if(_dragChannel == GizmoDragChannel.Offset)
                {
                    GizmoSglAxisOffsetDrag3D.WorkData workData = new GizmoSglAxisOffsetDrag3D.WorkData();
                    workData.Axis = Vector2Ex.ConvertDirTo3D(StartPosition, GetRealEndPosition(), OffsetDragOrigin, Gizmo.FocusCamera).normalized;
                    workData.DragOrigin = OffsetDragOrigin;
                    workData.SnapStep = Settings.OffsetSnapStep;
                    _offsetDrag.SetWorkData(workData);
                }
                else
                if(_dragChannel == GizmoDragChannel.Rotation)
                {
                    GizmoSglAxisRotationDrag3D.WorkData workData = new GizmoSglAxisRotationDrag3D.WorkData();
                    workData.Axis = Gizmo.FocusCamera.transform.forward;
                    workData.SnapMode = Settings.RotationSnapMode;
                    workData.SnapStep = Settings.RotationSnapStep;
                    workData.RotationPlanePos = Gizmo.FocusCamera.ScreenToWorldPoint(new Vector3(_transform.Position2D.x, _transform.Position2D.y, Gizmo.FocusCamera.nearClipPlane));

                    _rotationArc.SetArcData(StartPosition, GetRealEndPosition(), GetRealLength());
                    _rotationDrag.SetWorkData(workData);
                }
                else
                if(_dragChannel == GizmoDragChannel.Scale)
                {
                    _scaleAxis = Vector2Ex.ConvertDirTo3D(StartPosition, GetRealEndPosition(), ScaleDragOrigin, Gizmo.FocusCamera);
                    GizmoSglAxisScaleDrag3D.WorkData workData = new GizmoSglAxisScaleDrag3D.WorkData();
                    workData.Axis = _scaleAxis.normalized;
                    workData.AxisIndex = _scaleDragAxisIndex;
                    workData.DragOrigin = ScaleDragOrigin;
                    workData.SnapStep = Settings.ScaleSnapStep;
                    workData.EntityScale = 1.0f;

                    _scaleDrag.SetWorkData(workData);
                }
            }
        }

        private void OnTransformChanged(GizmoTransform transform, GizmoTransform.ChangeData changeData)
        {
            if (changeData.TRSDimension == GizmoDimension.Dim2D ||
                changeData.ChangeReason == GizmoTransform.ChangeReason.ParentChange)
            {
                _controllers[(int)LookAndFeel.LineType].UpdateTransforms();
                _cap2D.CapSlider2D(GetRealDirection(), GetRealEndPosition());
            }
        }

        private void OnGizmoHandleHoverEnter(Gizmo gizmo, int handleId)
        {
            if (handleId == HandleId)
            {
                _cap2D.OverrideFillColor.IsActive = true;
                _cap2D.OverrideFillColor.Color = LookAndFeel.CapLookAndFeel.HoveredColor;

                _cap2D.OverrideBorderColor.IsActive = true;
                _cap2D.OverrideBorderColor.Color = LookAndFeel.CapLookAndFeel.HoveredBorderColor;
            }
            else
            if (handleId == _cap2D.HandleId)
            {
                OverrideFillColor.IsActive = true;
                OverrideFillColor.Color = LookAndFeel.HoveredColor;

                OverrideBorderColor.IsActive = true;
                OverrideBorderColor.Color = LookAndFeel.HoveredBorderColor;
            }
        }

        private void OnGizmoHandleHoverExit(Gizmo gizmo, int handleId)
        {
            if (handleId == HandleId)
            {
                _cap2D.OverrideFillColor.IsActive = false;
                _cap2D.OverrideBorderColor.IsActive = false;
            }
            else 
            if (handleId == _cap2D.HandleId)
            {
                OverrideFillColor.IsActive = false;
                OverrideBorderColor.IsActive = false;
            }
        }

        private void OnGizmoHandleDragUpdate(Gizmo gizmo, int handleId)
        {
            if (handleId == HandleId || handleId == _cap2D.HandleId)
            {
                _transform.Rotate2D(gizmo.RelativeDragRotation);
            }
        }

        private void SetupSharedLookAndFeel()
        {
            _cap2D.SharedLookAndFeel = LookAndFeel.CapLookAndFeel;
        }

        private void OnGizmoPostEnabled(Gizmo gizmo)
        {
            Refresh();
        }
    }
}
