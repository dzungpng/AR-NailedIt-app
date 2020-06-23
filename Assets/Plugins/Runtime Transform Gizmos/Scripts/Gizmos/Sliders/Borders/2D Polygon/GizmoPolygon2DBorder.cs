using UnityEngine;
using System;

namespace RTG
{
    public class GizmoPolygon2DBorder
    {
        private GizmoPlaneSlider2D _planeSlider;

        private GizmoHandle _targetHandle;
        private PolygonShape2D _targetPolygon;

        private bool _isVisible = true;
        private bool _isHoverable = true;

        private int _borderPolygonIndex;
        private int _thickBorderPolygonIndex;

        private PolygonShape2D _borderPolygon = new PolygonShape2D();
        private PolygonShape2D _thickBorderPolygon = new PolygonShape2D();

        private GizmoPolygon2DBorderControllerData _controllerData = new GizmoPolygon2DBorderControllerData();
        private IGizmoPolygon2DBorderController[] _controllers = new IGizmoPolygon2DBorderController[Enum.GetValues(typeof(GizmoPolygon2DBorderType)).Length];

        public bool IsVisible { get { return _isVisible; } }
        public bool IsHoverable { get { return _isHoverable; } }

        public GizmoPolygon2DBorder(GizmoPlaneSlider2D planeSlider, GizmoHandle targetHandle, PolygonShape2D targetPolygon)
        {
            _planeSlider = planeSlider;

            _targetHandle = targetHandle;
            _targetPolygon = targetPolygon;

            _borderPolygonIndex = _targetHandle.Add2DShape(_borderPolygon);
            _borderPolygon.PtContainMode = Shape2DPtContainMode.OnBorder;

            _thickBorderPolygonIndex = _targetHandle.Add2DShape(_thickBorderPolygon);
            _thickBorderPolygon.PtContainMode = Shape2DPtContainMode.OnBorder;
            _thickBorderPolygon.BorderRenderDesc.BorderType = Shape2DBorderType.Thick;
            _thickBorderPolygon.BorderRenderDesc.Direction = Shape2DBorderDirection.Outward;

            _controllerData.Border = this;
            _controllerData.PlaneSlider = _planeSlider;
            _controllerData.BorderPolygon = _borderPolygon;
            _controllerData.BorderPolygonIndex = _borderPolygonIndex;
            _controllerData.ThickBorderPolygon = _thickBorderPolygon;
            _controllerData.ThickBorderPolygonIndex = _thickBorderPolygonIndex;
            _controllerData.Gizmo = targetHandle.Gizmo;
            _controllerData.TargetHandle = targetHandle;
            _controllerData.TargetPolygon = _targetPolygon;

            _controllers[(int)GizmoPolygon2DBorderType.Thin] = new GizmoThinPolygon2DBorderController(_controllerData);
            _controllers[(int)GizmoPolygon2DBorderType.Thick] = new GizmoThickPolygon2DBorderController(_controllerData);

            _targetHandle.Gizmo.PreUpdateBegin += OnGizmoPreUpdateBegin;
        }

        public void SetVisible(bool isVisible)
        {
            _isVisible = isVisible;
            _controllers[(int)_planeSlider.LookAndFeel.PolygonBorderType].UpdateHandles();

            if (_isVisible)
            {
                _controllers[(int)_planeSlider.LookAndFeel.PolygonBorderType].UpdateEpsilons();
                OnPolygonShapeChanged();
            }
        }

        public void SetHoverable(bool isHoverable)
        {
            _isHoverable = isHoverable;
            _targetHandle.Set2DShapeHoverable(_borderPolygonIndex, isHoverable);
            _targetHandle.Set2DShapeHoverable(_thickBorderPolygonIndex, isHoverable);
        }

        public void OnPolygonShapeChanged()
        {
            _controllers[(int)_planeSlider.LookAndFeel.PolygonBorderType].UpdateTransforms();
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

            if (_planeSlider.LookAndFeel.PolygonBorderType == GizmoPolygon2DBorderType.Thin) _targetHandle.Render2DWire(camera, _borderPolygonIndex);
            else if (_planeSlider.LookAndFeel.PolygonBorderType == GizmoPolygon2DBorderType.Thick) _targetHandle.Render2DWire(camera, _thickBorderPolygonIndex);
        }

        private void OnGizmoPreUpdateBegin(Gizmo gizmo)
        {
            _controllers[(int)_planeSlider.LookAndFeel.PolygonBorderType].UpdateHandles();
            _controllers[(int)_planeSlider.LookAndFeel.PolygonBorderType].UpdateEpsilons();
        }
    }
}
