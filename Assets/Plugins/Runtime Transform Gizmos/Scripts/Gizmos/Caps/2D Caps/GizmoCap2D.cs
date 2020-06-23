using UnityEngine;
using System;

namespace RTG
{
    public class GizmoCap2D : GizmoCap
    {
        private int _quadIndex;
        private QuadShape2D _quad = new QuadShape2D();
        private int _circleIndex;
        private CircleShape2D _circle = new CircleShape2D();
        private int _arrowIndex;
        private ConeShape2D _arrow = new ConeShape2D();

        private GizmoTransform _transform = new GizmoTransform();
        private GizmoOverrideColor _overrideFillColor = new GizmoOverrideColor();
        private GizmoOverrideColor _overrideBorderColor = new GizmoOverrideColor();

        private GizmoCap2DControllerData _controllerData;
        private IGizmoCap2DController[] _controllers = new IGizmoCap2DController[Enum.GetValues(typeof(GizmoCap2DType)).Length];

        private GizmoCap2DLookAndFeel _lookAndFeel = new GizmoCap2DLookAndFeel();
        private GizmoCap2DLookAndFeel _sharedLookAndFeel;

        public Vector2 Position { get { return _transform.Position2D; } set { _transform.Position2D = value; } }
        public Quaternion Rotation { get { return _transform.Rotation2D; } }
        public float RotationDegrees { get { return _transform.Rotation2DDegrees; } set { _transform.Rotation2DDegrees = value; } }
        public GizmoOverrideColor OverrideFillColor { get { return _overrideFillColor; } }
        public GizmoOverrideColor OverrideBorderColor { get { return _overrideBorderColor; } }
        public IGizmoDragSession DragSession { get { return Handle.DragSession; } set { Handle.DragSession = value; } }
        public GizmoCap2DLookAndFeel LookAndFeel { get { return _sharedLookAndFeel != null ? _sharedLookAndFeel : _lookAndFeel; } }
        public GizmoCap2DLookAndFeel SharedLookAndFeel { get { return _sharedLookAndFeel; } set { _sharedLookAndFeel = value; } }

        public GizmoCap2D(Gizmo gizmo, int handleId)
            :base(gizmo, handleId)
        {
            _quadIndex = Handle.Add2DShape(_quad);
            _circleIndex = Handle.Add2DShape(_circle);
            _arrowIndex = Handle.Add2DShape(_arrow);

            _controllerData = new GizmoCap2DControllerData();
            _controllerData.Cap = this;
            _controllerData.CapHandle = Handle;
            _controllerData.Gizmo = Gizmo;
            _controllerData.Quad = _quad;
            _controllerData.QuadIndex = _quadIndex;
            _controllerData.Circle = _circle;
            _controllerData.CircleIndex = _circleIndex;
            _controllerData.Arrow = _arrow;
            _controllerData.ArrowIndex = _arrowIndex;

            _controllers[(int)GizmoCap2DType.Quad] = new GizmoQuadCap2DController(_controllerData);
            _controllers[(int)GizmoCap2DType.Circle] = new GizmoCircleCap2DController(_controllerData);
            _controllers[(int)GizmoCap2DType.Arrow] = new GizmoArrowCap2DController(_controllerData);

            _transform.SetParent(gizmo.Transform);
            _transform.Changed += OnTransformChanged;

            Gizmo.PreUpdateBegin += OnGizmoPreUpdateBegin;
            Gizmo.PostEnabled += OnGizmoPostEnabled;
        }

        public void RegisterTransformAsDragTarget(IGizmoDragSession dragSession)
        {
            dragSession.AddTargetTransform(_transform);
        }

        public void UnregisterTransformAsDragTarget(IGizmoDragSession dragSession)
        {
            dragSession.RemoveTargetTransform(_transform);
        }

        public void AlignTransformAxis(int axisIndex, AxisSign axisSign, Vector2 axis)
        {
            _transform.AlignAxis2D(axisIndex, axisSign, axis);
        }

        public float GetRealQuadWidth()
        {
            return LookAndFeel.QuadWidth * LookAndFeel.Scale;
        }

        public float GetRealQuadHeight()
        {
            return LookAndFeel.QuadHeight * LookAndFeel.Scale;
        }

        public float GetRealCircleRadius()
        {
            return LookAndFeel.CircleRadius * LookAndFeel.Scale;
        }

        public float GetRealArrowHeight()
        {
            return LookAndFeel.ArrowHeight * LookAndFeel.Scale;
        }

        public float GetRealArrowBaseRadius()
        {
            return LookAndFeel.ArrowBaseRadius * LookAndFeel.Scale;
        }

        public void CapSlider2D(Vector2 sliderDirection, Vector2 sliderEndPt)
        {
            _controllers[(int)LookAndFeel.CapType].CapSlider2D(sliderDirection, sliderEndPt);
        }

        public void CapSlider2DInvert(Vector2 sliderDirection, Vector2 sliderEndPt)
        {
            _controllers[(int)LookAndFeel.CapType].CapSlider2DInvert(sliderDirection, sliderEndPt);
        }

        public override void Render(Camera camera)
        {
            if (!IsVisible) return;

            if (LookAndFeel.FillMode == GizmoFillMode2D.FilledAndBorder || 
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

            if (LookAndFeel.FillMode == GizmoFillMode2D.FilledAndBorder || 
                LookAndFeel.FillMode == GizmoFillMode2D.Border)
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

        public void Refresh()
        {
            _controllers[(int)LookAndFeel.CapType].UpdateHandles();
            _controllers[(int)LookAndFeel.CapType].UpdateTransforms();
        }

        protected override void OnVisibilityStateChanged()
        {
            _controllers[(int)LookAndFeel.CapType].UpdateHandles();
            _controllers[(int)LookAndFeel.CapType].UpdateTransforms();
        }

        protected override void OnHoverableStateChanged()
        {
            Handle.SetHoverable(IsHoverable);
        }

        private void OnGizmoPreUpdateBegin(Gizmo gizmo)
        {
            int controllerIndex = (int)LookAndFeel.CapType;
            _controllers[controllerIndex].UpdateHandles();
            _controllers[controllerIndex].UpdateTransforms();
        }

        private void OnTransformChanged(GizmoTransform transform, GizmoTransform.ChangeData changeData)
        {
            if (changeData.TRSDimension == GizmoDimension.Dim2D ||
                changeData.ChangeReason == GizmoTransform.ChangeReason.ParentChange)
            {
                _controllers[(int)LookAndFeel.CapType].UpdateTransforms();
            }
        }

        private void OnGizmoPostEnabled(Gizmo gizmo)
        {
            Refresh();
        }
    }
}
