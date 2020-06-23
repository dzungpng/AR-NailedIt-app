using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class GizmoPlaneSlider2D : GizmoSlider
    {
        private int _quadIndex;
        private int _circleIndex;
        private int _polygonIndex;

        private QuadShape2D _quad = new QuadShape2D();
        private CircleShape2D _circle = new CircleShape2D();
        private PolygonShape2D _polygon = new PolygonShape2D();

        private GizmoQuad2DBorder _quadBorder;
        private GizmoCircle2DBorder _circleBorder;
        private GizmoPolygon2DBorder _polygonBorder;
        private bool _isBorderVisible = true;
        private bool _isBorderHoverable = true;

        private GizmoTransform _transform = new GizmoTransform();

        private GizmoDragChannel _dragChannel = GizmoDragChannel.Offset;
        private IGizmoDragSession _selectedDragSession;
        private GizmoDblAxisOffsetDrag3D _offsetDrag = new GizmoDblAxisOffsetDrag3D();
        private Vector3 _offsetDragOrigin;
        private GizmoSglAxisRotationDrag3D _rotationDrag = new GizmoSglAxisRotationDrag3D();
        private GizmoRotationArc2D _rotationArc = new GizmoRotationArc2D();
        private GizmoDblAxisScaleDrag3D _scaleDrag = new GizmoDblAxisScaleDrag3D();
        private Vector3 _scaleDragOrigin;
        private Vector3 _scaleAxisRight;
        private Vector3 _scaleAxisUp;
        private int _scaleDragAxisIndexRight = 0;
        private int _scaleDragAxisIndexUp = 1;

        private GizmoPlaneSlider2DControllerData _controllerData = new GizmoPlaneSlider2DControllerData();
        private IGizmoPlaneSlider2DController[] _controllers = new IGizmoPlaneSlider2DController[System.Enum.GetValues(typeof(GizmoPlane2DType)).Length];

        private GizmoPlaneSlider2DSettings _settings = new GizmoPlaneSlider2DSettings();
        private GizmoPlaneSlider2DSettings _sharedSettings;
        private GizmoPlaneSlider2DLookAndFeel _lookAndFeel = new GizmoPlaneSlider2DLookAndFeel();
        private GizmoPlaneSlider2DLookAndFeel _sharedLookAndFeel;

        public GizmoPlaneSlider2DSettings Settings { get { return _sharedSettings != null ? _sharedSettings : _settings; } }
        public GizmoPlaneSlider2DSettings SharedSettings { get { return _sharedSettings; } set { _sharedSettings = value; } }
        public GizmoPlaneSlider2DLookAndFeel LookAndFeel { get { return _sharedLookAndFeel != null ? _sharedLookAndFeel : _lookAndFeel; } }
        public GizmoPlaneSlider2DLookAndFeel SharedLookAndFeel { get { return _sharedLookAndFeel; } set { _sharedLookAndFeel = value; } }

        public Vector2 Position { get { return _transform.Position2D; } set { _transform.Position2D = value; } }
        public Vector2 PolyCenter { get { return _polygon.GetEncapsulatingRect().center; } }
        public Quaternion Rotation { get { return _transform.Rotation2D; } }
        public float RotationDegrees { get { return _transform.Rotation2DDegrees; } set { _transform.Rotation2DDegrees = value; } }
        public Vector2 Right { get { return _transform.GetAxis2D(0, AxisSign.Positive); } }
        public Vector2 Up { get { return _transform.GetAxis2D(1, AxisSign.Positive); } }
        public Vector3 OffsetDragOrigin { get { return _offsetDragOrigin; } set { _offsetDragOrigin = value; } }
        public GizmoDragChannel DragChannel { get { return _dragChannel; } }
        public Vector3 ScaleDragOrigin { get { return _scaleDragOrigin; } set { _scaleDragOrigin = value; } }
        public int ScaleDragAxisIndexRight { get { return _scaleDragAxisIndexRight; } set { _scaleDragAxisIndexRight = Mathf.Clamp(value, 0, 2); } }
        public int ScaleDragAxisIndexUp { get { return _scaleDragAxisIndexUp; } set { _scaleDragAxisIndexUp = Mathf.Clamp(value, 0, 2); } }
        public Vector3 TotalDragOffset { get { return _offsetDrag.TotalDragOffset; } }
        public Vector3 RelativeDragOffset { get { return _offsetDrag.RelativeDragOffset; } }
        public float TotalDragRotation { get { return _rotationDrag.TotalRotation; } }
        public float RelativeDragRotation { get { return _rotationDrag.RelativeRotation; } }
        public float TotalDragScaleRight { get { return _scaleDrag.TotalScale0; } }
        public float RelativeDragScaleRight { get { return _scaleDrag.RelativeScale0; } }
        public float TotalDragScaleUp { get { return _scaleDrag.TotalScale1; } }
        public float RelativeDragScaleUp { get { return _scaleDrag.RelativeScale1; } }
        public bool IsBorderVisible { get { return _isBorderVisible; } }
        public bool IsBorderHoverable { get { return _isBorderHoverable; } }
        public bool IsDragged { get { return Gizmo.IsDragged && Gizmo.DragHandleId == HandleId; } }
        public bool IsMoving { get { return _offsetDrag.IsActive; } }
        public bool IsRotating { get { return _rotationDrag.IsActive; } }
        public bool IsScaling { get { return _scaleDrag.IsActive; } }

        public GizmoPlaneSlider2D(Gizmo gizmo, int handleId)
            :base(gizmo, handleId)
        {
            _quadIndex = Handle.Add2DShape(_quad);
            _circleIndex = Handle.Add2DShape(_circle);
            _polygonIndex = Handle.Add2DShape(_polygon);

            _quadBorder = new GizmoQuad2DBorder(this, Handle, _quad);
            _circleBorder = new GizmoCircle2DBorder(this, Handle, _circle);
            _polygonBorder = new GizmoPolygon2DBorder(this, Handle, _polygon);

            _controllerData.Gizmo = Gizmo;
            _controllerData.Slider = this;
            _controllerData.SliderHandle = Handle;
            _controllerData.QuadBorder = _quadBorder;
            _controllerData.Quad = _quad;
            _controllerData.QuadIndex = _quadIndex;
            _controllerData.CircleBorder = _circleBorder;
            _controllerData.Circle = _circle;
            _controllerData.CircleIndex = _circleIndex;
            _controllerData.PolygonBorder = _polygonBorder;
            _controllerData.Polygon = _polygon;
            _controllerData.PolygonIndex = _polygonIndex;

            _controllers[(int)GizmoPlane2DType.Quad] = new GizmoQuadPlaneSlider2DController(_controllerData);
            _controllers[(int)GizmoPlane2DType.Circle] = new GizmoCirclePlaneSlider2DController(_controllerData);
            _controllers[(int)GizmoPlane2DType.Polygon] = new GizmoPolygonPlaneSlider2DController(_controllerData);

            _transform.Changed += OnTransformChanged;
            Gizmo.PreUpdateBegin += OnGizmoPreUpdateBegin;
            Gizmo.PreDragBeginAttempt += OnGizmoAttemptHandleDragBegin;
            Gizmo.PreDragUpdate += OnGizmoHandleDragUpdate;
            Gizmo.PostEnabled += OnGizmoPostEnabled;

            AddTargetTransform(_transform);
            AddTargetTransform(Gizmo.Transform);
            _transform.SetParent(Gizmo.Transform);
            SetDragChannel(GizmoDragChannel.Offset);
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
            _circleBorder.SetHoverable(isHoverable);
            _polygonBorder.SetHoverable(isHoverable);
        }

        public override void SetSnapEnabled(bool isEnabled)
        {
            _offsetDrag.IsSnapEnabled = isEnabled;
            _rotationDrag.IsSnapEnabled = isEnabled;
            _scaleDrag.IsSnapEnabled = isEnabled;
        }

        public void SetPolyCwPoints(List<Vector2> cwPoints, bool isClosed)
        {          
            if (LookAndFeel.PlaneType == GizmoPlane2DType.Polygon)
            {
                _polygon.SetClockwisePoints(cwPoints, isClosed);
                _controllers[(int)GizmoPlane2DType.Polygon].UpdateTransforms();
            }
        }

        public void MakePolySphereBorder(Vector3 sphereCenter, float sphereRadius, int numPoints, Camera camera)
        {
            if (LookAndFeel.PlaneType == GizmoPlane2DType.Polygon)
            {
                _polygon.MakeSphereBorder(sphereCenter, sphereRadius, numPoints, camera);
                _controllers[(int)GizmoPlane2DType.Polygon].UpdateTransforms();
            }
        }

        public float GetRealQuadWidth()
        {
            float scaleFactor = 1.0f;
            if (IsScaling)
            {
                Vector3 realScaleAxis = _scaleAxisRight * TotalDragScaleRight;
                Vector2 screenScaleAxis = Vector3Ex.ConvertDirTo2D(ScaleDragOrigin, ScaleDragOrigin + realScaleAxis, Gizmo.GetWorkCamera());
                scaleFactor = screenScaleAxis.magnitude / (LookAndFeel.QuadWidth * LookAndFeel.Scale * 0.5f) * Mathf.Sign(TotalDragScaleRight);
            }

            return LookAndFeel.QuadWidth * LookAndFeel.Scale * scaleFactor;
        }

        public float GetRealQuadHeight()
        {
            float scaleFactor = 1.0f;
            if (IsScaling)
            {
                Vector3 realScaleAxis = _scaleAxisUp * TotalDragScaleUp;
                Vector2 screenScaleAxis = Vector3Ex.ConvertDirTo2D(ScaleDragOrigin, ScaleDragOrigin + realScaleAxis, Gizmo.GetWorkCamera());
                scaleFactor = screenScaleAxis.magnitude / (LookAndFeel.QuadHeight * LookAndFeel.Scale * 0.5f) * Mathf.Sign(TotalDragScaleUp);
            }

            return LookAndFeel.QuadHeight * LookAndFeel.Scale * scaleFactor;
        }

        public Vector2 GetRealQuadSize()
        {
            return new Vector2(GetRealQuadWidth(), GetRealQuadHeight());
        }

        public float GetRealCircleRadius()
        {
            float scaleFactor = 1.0f;
            if (IsScaling)
            {
                float maxTotalDragScale = TotalDragScaleRight;
                if (Mathf.Abs(TotalDragScaleRight) < Mathf.Abs(TotalDragScaleUp)) maxTotalDragScale = TotalDragScaleUp;

                Vector3 realScaleAxis = _scaleAxisUp * maxTotalDragScale;
                Vector2 screenScaleAxis = Vector3Ex.ConvertDirTo2D(ScaleDragOrigin, ScaleDragOrigin + realScaleAxis, Gizmo.GetWorkCamera());
                scaleFactor = (screenScaleAxis.magnitude / (LookAndFeel.CircleRadius * LookAndFeel.Scale)) * Mathf.Sign(maxTotalDragScale);
            }

            return LookAndFeel.CircleRadius * LookAndFeel.Scale * scaleFactor;
        }

        public Vector2 GetRealExtentPoint(Shape2DExtentPoint extentPt)
        {
            return _controllers[(int)LookAndFeel.PlaneType].GetRealExtentPoint(extentPt);
        }

        public void SetDragChannel(GizmoDragChannel dragChannel)
        {
            _dragChannel = dragChannel;
            if (_dragChannel == GizmoDragChannel.Offset) _selectedDragSession = _offsetDrag;
            else if (_dragChannel == GizmoDragChannel.Rotation) _selectedDragSession = _rotationDrag;
            else if (_dragChannel == GizmoDragChannel.Scale) _selectedDragSession = _scaleDrag;

            Handle.DragSession = _selectedDragSession;
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
            else if (_dragChannel == GizmoDragChannel.Scale) _scaleDrag.AddTargetTransform(transform);
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
            else if (_dragChannel == GizmoDragChannel.Scale) _scaleDrag.RemoveTargetTransform(transform);
        }

        public override void Render(Camera camera)
        {
            if (!IsVisible && !IsBorderVisible) return;

            if (IsRotating && LookAndFeel.IsRotationArcVisible && 
                (LookAndFeel.PlaneType == GizmoPlane2DType.Circle || LookAndFeel.PlaneType == GizmoPlane2DType.Polygon) && 
                camera == Gizmo.FocusCamera)
            {
                _rotationArc.RotationAngle = TotalDragRotation;
                _rotationArc.Render(LookAndFeel.RotationArcLookAndFeel, camera);
            }

            if (IsVisible && 
               (LookAndFeel.FillMode == GizmoFillMode2D.Filled || 
                LookAndFeel.FillMode == GizmoFillMode2D.FilledAndBorder))
            {
                Color fillColor = LookAndFeel.Color;
                if (Gizmo.HoverHandleId == HandleId) fillColor = LookAndFeel.HoveredColor;

                GizmoSolidMaterial solidMaterial = GizmoSolidMaterial.Get;
                solidMaterial.ResetValuesToSensibleDefaults();
                solidMaterial.SetLit(false);
                solidMaterial.SetColor(fillColor);
                solidMaterial.SetPass(0);
                Handle.Render2DSolid(camera);
            }

            if (IsBorderVisible && 
               (LookAndFeel.FillMode == GizmoFillMode2D.Border ||
                LookAndFeel.FillMode == GizmoFillMode2D.FilledAndBorder))
            {
                if (LookAndFeel.PlaneType == GizmoPlane2DType.Quad) _quadBorder.Render(camera);
                else if (LookAndFeel.PlaneType == GizmoPlane2DType.Circle) _circleBorder.Render(camera);
                else if (LookAndFeel.PlaneType == GizmoPlane2DType.Polygon) _polygonBorder.Render(camera);
            }
        }

        public void Refresh()
        {
            _controllers[(int)LookAndFeel.PlaneType].UpdateHandles();
            _controllers[(int)LookAndFeel.PlaneType].UpdateEpsilons();
            _controllers[(int)LookAndFeel.PlaneType].UpdateTransforms();
        }

        protected override void OnVisibilityStateChanged()
        {
            _controllers[(int)LookAndFeel.PlaneType].UpdateHandles();
            _controllers[(int)LookAndFeel.PlaneType].UpdateEpsilons();
            _controllers[(int)LookAndFeel.PlaneType].UpdateTransforms();
        }

        protected override void OnHoverableStateChanged()
        {
            Handle.Set2DShapeHoverable(_quadIndex, IsHoverable);
            Handle.Set2DShapeHoverable(_circleIndex, IsHoverable);
        }

        private void OnGizmoPreUpdateBegin(Gizmo gizmo)
        {
            int controllerIndex = (int)LookAndFeel.PlaneType;
            _controllers[controllerIndex].UpdateHandles();

            _offsetDrag.Sensitivity = Settings.OffsetSensitivity;
            _rotationDrag.Sensitivity = Settings.RotationSensitivity;
            _scaleDrag.Sensitivity = Settings.ScaleSensitivity;

            _controllers[controllerIndex].UpdateTransforms();
            _controllers[controllerIndex].UpdateEpsilons();
        }

        private void OnTransformChanged(GizmoTransform transform, GizmoTransform.ChangeData changeData)
        {
            if(changeData.TRSDimension == GizmoDimension.Dim2D || 
               changeData.ChangeReason == GizmoTransform.ChangeReason.ParentChange)
            {
                _controllers[(int)LookAndFeel.PlaneType].UpdateTransforms();
            }
        }

        private void OnGizmoAttemptHandleDragBegin(Gizmo gizmo, int handleId)
        {
            if (handleId == HandleId)
            {
                if (_dragChannel == GizmoDragChannel.Offset)
                {
                    GizmoDblAxisOffsetDrag3D.WorkData workData = new GizmoDblAxisOffsetDrag3D.WorkData();
                    workData.Axis0 = Vector2Ex.ConvertDirTo3D(_transform.Right2D, OffsetDragOrigin, Gizmo.FocusCamera).normalized;
                    workData.Axis1 = Vector2Ex.ConvertDirTo3D(_transform.Up2D, OffsetDragOrigin, Gizmo.FocusCamera).normalized;
                    workData.DragOrigin = OffsetDragOrigin;
                    workData.SnapStep0 = Settings.OffsetSnapStepRight;
                    workData.SnapStep1 = Settings.OffsetSnapStepUp;
                    _offsetDrag.SetWorkData(workData);
                }
                else
                if (_dragChannel == GizmoDragChannel.Rotation)
                {
                    GizmoSglAxisRotationDrag3D.WorkData workData = new GizmoSglAxisRotationDrag3D.WorkData();
                    workData.Axis = Gizmo.FocusCamera.transform.forward;
                    workData.SnapMode = Settings.RotationSnapMode;
                    workData.SnapStep = Settings.RotationSnapStep;
                    if (LookAndFeel.PlaneType != GizmoPlane2DType.Polygon) workData.RotationPlanePos = Gizmo.FocusCamera.ScreenToWorldPoint(new Vector3(Position.x, Position.y, Gizmo.FocusCamera.nearClipPlane));

                    if (LookAndFeel.PlaneType == GizmoPlane2DType.Circle)
                    {
                        _rotationArc.SetArcData(Position, Gizmo.HoverInfo.HoverPoint, GetRealCircleRadius());
                        _rotationArc.Type = GizmoRotationArc2D.ArcType.Standard;
                    }
                    else
                    if (LookAndFeel.PlaneType == GizmoPlane2DType.Polygon)
                    {
                        Vector3 polyCenter = PolyCenter;
                        workData.RotationPlanePos = Gizmo.FocusCamera.ScreenToWorldPoint(new Vector3(polyCenter.x, polyCenter.y, Gizmo.FocusCamera.nearClipPlane));
                        _rotationArc.SetArcData(PolyCenter, Gizmo.HoverInfo.HoverPoint, 1.0f);
                        _rotationArc.Type = GizmoRotationArc2D.ArcType.PolyProjected;
                        _rotationArc.ProjectionPoly = _polygon;
                        _rotationArc.NumProjectedPoints = 100;
                    }
                    _rotationDrag.SetWorkData(workData);
                }
                else
                if (_dragChannel == GizmoDragChannel.Scale)
                {
                    _scaleAxisRight = Vector2Ex.ConvertDirTo3D(Position, GetRealExtentPoint(Shape2DExtentPoint.Right), ScaleDragOrigin, Gizmo.FocusCamera);
                    _scaleAxisUp = Vector2Ex.ConvertDirTo3D(Position, GetRealExtentPoint(Shape2DExtentPoint.Top), ScaleDragOrigin, Gizmo.FocusCamera);

                    GizmoDblAxisScaleDrag3D.WorkData workData = new GizmoDblAxisScaleDrag3D.WorkData();
                    workData.Axis0 = _scaleAxisRight.normalized;
                    workData.Axis1 = _scaleAxisUp.normalized;
                    workData.AxisIndex0 = _scaleDragAxisIndexRight;
                    workData.AxisIndex1 = _scaleDragAxisIndexUp;
                    workData.DragOrigin = ScaleDragOrigin;
                    workData.SnapStep = Settings.ProportionalScaleSnapStep;
                    _scaleDrag.SetWorkData(workData);
                }
            }
        }

        private void OnGizmoHandleDragUpdate(Gizmo gizmo, int handleId)
        {
            if (handleId == HandleId && DragChannel == GizmoDragChannel.Rotation)
            {
                _transform.Rotate2D(RelativeDragRotation);
            }
        }

        private void OnGizmoPostEnabled(Gizmo gizmo)
        {
            Refresh();
        }
    }
}