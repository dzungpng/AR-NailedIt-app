using UnityEngine;
using System;

namespace RTG
{
    public class GizmoCircle2DBorder
    {
        private GizmoPlaneSlider2D _planeSlider;

        private GizmoHandle _targetHandle;
        private CircleShape2D _targetCircle;

        private bool _isVisible = true;
        private bool _isHoverable = true;

        private int _borderCircleIndex;
        private CircleShape2D _borderCircle = new CircleShape2D();

        private GizmoCircle2DBorderControllerData _controllerData = new GizmoCircle2DBorderControllerData();
        private IGizmoCircle2DBorderController[] _controllers = new IGizmoCircle2DBorderController[Enum.GetValues(typeof(GizmoCircle2DBorderType)).Length];

        public bool IsVisible { get { return _isVisible; } }
        public bool IsHoverable { get { return _isHoverable; } }

        public GizmoCircle2DBorder(GizmoPlaneSlider2D planeSlider, GizmoHandle targetHandle, CircleShape2D targetCircle)
        {
            _planeSlider = planeSlider;

            _targetHandle = targetHandle;
            _targetCircle = targetCircle;

            _borderCircleIndex = _targetHandle.Add2DShape(_borderCircle);
            _borderCircle.PtContainMode = Shape2DPtContainMode.OnBorder;

            _controllerData.Border = this;
            _controllerData.PlaneSlider = _planeSlider;
            _controllerData.BorderCircle = _borderCircle;
            _controllerData.BorderCircleIndex = _borderCircleIndex;
            _controllerData.Gizmo = targetHandle.Gizmo;
            _controllerData.TargetHandle = targetHandle;
            _controllerData.TargetCircle = _targetCircle;

            _controllers[(int)GizmoCircle2DBorderType.Thin] = new GizmoThinCircle2DBorderController(_controllerData);

            _targetHandle.Gizmo.PreUpdateBegin += OnGizmoPreUpdateBegin;
        }

        public void SetVisible(bool isVisible)
        {
            _isVisible = isVisible;
            _controllers[(int)_planeSlider.LookAndFeel.CircleBorderType].UpdateHandles();

            if (_isVisible)
            {
                _controllers[(int)_planeSlider.LookAndFeel.CircleBorderType].UpdateEpsilons();
                OnCircleShapeChanged();
            }
        }

        public void SetHoverable(bool isHoverable)
        {
            _isHoverable = isHoverable;
            _targetHandle.Set2DShapeHoverable(_borderCircleIndex, isHoverable);
        }

        public void OnCircleShapeChanged()
        {
            _controllers[(int)_planeSlider.LookAndFeel.CircleBorderType].UpdateTransforms();
        }

        public void Render(Camera camera)
        {
            if (!IsVisible) return;

            Color color = _planeSlider.LookAndFeel.BorderColor;
            if (_targetHandle.Gizmo.HoverHandleId == _targetHandle.Id) color = _planeSlider.LookAndFeel.HoveredBorderColor;

            GizmoLineMaterial lineMaterial = GizmoLineMaterial.Get;
            lineMaterial.ResetValuesToSensibleDefaults();
            lineMaterial.SetColor(color);
            lineMaterial.SetPass(0);

            _targetHandle.Render2DWire(camera, _borderCircleIndex);          
        }

        private void OnGizmoPreUpdateBegin(Gizmo gizmo)
        {
            _controllers[(int)_planeSlider.LookAndFeel.CircleBorderType].UpdateHandles();
            _controllers[(int)_planeSlider.LookAndFeel.CircleBorderType].UpdateEpsilons();
        }
    }
}
