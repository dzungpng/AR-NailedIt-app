using UnityEngine;
using System;
using System.Collections.Generic;

namespace RTG
{
    public class GizmoQuad2DBorder
    {
        private GizmoPlaneSlider2D _planeSlider;

        private GizmoHandle _targetHandle;
        private QuadShape2D _targetQuad;

        private bool _isVisible = true;
        private bool _isHoverable = true;

        private int _borderQuadIndex;
        private QuadShape2D _borderQuad = new QuadShape2D();

        private GizmoQuad2DBorderControllerData _controllerData = new GizmoQuad2DBorderControllerData();
        private IGizmoQuad2DBorderController[] _controllers = new IGizmoQuad2DBorderController[Enum.GetValues(typeof(GizmoQuad2DBorderType)).Length];

        public bool IsVisible { get { return _isVisible; } }
        public bool IsHoverable { get { return _isHoverable; } }

        public GizmoQuad2DBorder(GizmoPlaneSlider2D planeSlider, GizmoHandle targetHandle, QuadShape2D targetQuad)
        {
            _planeSlider = planeSlider;

            _targetHandle = targetHandle;
            _targetQuad = targetQuad;

            _borderQuadIndex = _targetHandle.Add2DShape(_borderQuad);
            _borderQuad.PtContainMode = Shape2DPtContainMode.OnBorder;

            _controllerData.Border = this;
            _controllerData.PlaneSlider = _planeSlider;
            _controllerData.BorderQuad = _borderQuad;
            _controllerData.BorderQuadIndex = _borderQuadIndex;
            _controllerData.Gizmo = targetHandle.Gizmo;
            _controllerData.TargetHandle = targetHandle;
            _controllerData.TargetQuad = _targetQuad;

            _controllers[(int)GizmoQuad2DBorderType.Thin] = new GizmoThinQuad2DBorderController(_controllerData);

            _targetHandle.Gizmo.PreUpdateBegin += OnGizmoPreUpdateBegin;
        }

        public void SetVisible(bool isVisible)
        {
            _isVisible = isVisible;
            _controllers[(int)_planeSlider.LookAndFeel.QuadBorderType].UpdateHandles();

            if (_isVisible)
            {
                _controllers[(int)_planeSlider.LookAndFeel.QuadBorderType].UpdateEpsilons();
                OnQuadShapeChanged();
            }
        }

        public void SetHoverable(bool isHoverable)
        {
            _isHoverable = isHoverable;
            _targetHandle.Set2DShapeHoverable(_borderQuadIndex, isHoverable);
        }

        public void OnQuadShapeChanged()
        {
            _controllers[(int)_planeSlider.LookAndFeel.QuadBorderType].UpdateTransforms();
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

            _targetHandle.Render2DWire(camera, _borderQuadIndex);          
        }

        private void OnGizmoPreUpdateBegin(Gizmo gizmo)
        {
            _controllers[(int)_planeSlider.LookAndFeel.QuadBorderType].UpdateHandles();
            _controllers[(int)_planeSlider.LookAndFeel.QuadBorderType].UpdateEpsilons();
        }
    }
}
