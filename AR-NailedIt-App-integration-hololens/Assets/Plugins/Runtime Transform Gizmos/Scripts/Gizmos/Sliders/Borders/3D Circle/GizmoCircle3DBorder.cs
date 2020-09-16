using UnityEngine;

namespace RTG
{
    public class GizmoCircle3DBorder
    {
        private GizmoPlaneSlider3D _planeSlider;

        private GizmoHandle _targetHandle;
        private CircleShape3D _targetCircle;

        private bool _isVisible = true;
        private bool _isHoverable = true;

        private int _borderCircleIndex;
        private int _borderTorusIndex;
        private int _borderCylTorusIndex;

        private CircleShape3D _borderCircle = new CircleShape3D();
        private TorusShape3D _borderTorus = new TorusShape3D();
        private CylTorusShape3D _borderCylTorus = new CylTorusShape3D();

        private GizmoCircle3DBorderControllerData _controllerData = new GizmoCircle3DBorderControllerData();
        private IGizmoCircle3DBorderController[] _controllers = new IGizmoCircle3DBorderController[System.Enum.GetValues(typeof(GizmoCircle3DBorderType)).Length];

        public bool IsVisible { get { return _isVisible; } }
        public bool IsHoverable { get { return _isHoverable; } }
        public Gizmo Gizmo { get { return _targetHandle.Gizmo; } }

        public GizmoCircle3DBorder(GizmoPlaneSlider3D planeSlider, GizmoHandle targetHandle, CircleShape3D targetCircle)
        {
            _planeSlider = planeSlider;

            _targetHandle = targetHandle;
            _targetCircle = targetCircle;

            _borderCircleIndex = _targetHandle.Add3DShape(_borderCircle);
            _borderCircle.RaycastMode = Shape3DRaycastMode.Wire;
            _borderTorusIndex = _targetHandle.Add3DShape(_borderTorus);
            _borderTorus.WireRenderDesc.NumTubeSlices = 0;
            _borderCylTorusIndex = _targetHandle.Add3DShape(_borderCylTorus);

            _controllerData.Border = this;
            _controllerData.PlaneSlider = _planeSlider;
            _controllerData.Gizmo = Gizmo;
            _controllerData.TargetHandle = _targetHandle;
            _controllerData.TargetCircle = targetCircle;
            _controllerData.BorderCircle = _borderCircle;
            _controllerData.BorderTorus = _borderTorus;
            _controllerData.BorderCylTorus = _borderCylTorus;
            _controllerData.BorderCircleIndex = _borderCircleIndex;
            _controllerData.BorderTorusIndex = _borderTorusIndex;
            _controllerData.BorderCylTorusIndex = _borderCylTorusIndex;

            _controllers[(int)GizmoCircle3DBorderType.Thin] = new GizmoThinCircle3DBorderController(_controllerData);
            _controllers[(int)GizmoCircle3DBorderType.Torus] = new GizmoTorusCircle3DBorderController(_controllerData);
            _controllers[(int)GizmoCircle3DBorderType.CylindricalTorus] = new GizmoCylindricalTorusCircle3DBorderController(_controllerData);

            Gizmo.PreUpdateBegin += OnGizmoPreUpdateBegin;
        }

        public void SetVisible(bool isVisible)
        {
            _isVisible = isVisible;
            _controllers[(int)_planeSlider.LookAndFeel.CircleBorderType].UpdateHandles();

            if (_isVisible)
            {
                Camera camera = Gizmo.GetWorkCamera();
                float zoomFactor = GetZoomFactor(camera);

                _controllers[(int)_planeSlider.LookAndFeel.CircleBorderType].UpdateEpsilons(zoomFactor);
                OnCircleShapeChanged();
            }
        }

        public void SetHoverable(bool isHoverable)
        {
            _isHoverable = isHoverable;
            _targetHandle.Set3DShapeHoverable(_borderCircleIndex, isHoverable);
            _targetHandle.Set3DShapeHoverable(_borderTorusIndex, isHoverable);
            _targetHandle.Set3DShapeHoverable(_borderCylTorusIndex, isHoverable);
        }

        public float GetZoomFactor(Camera camera)
        {
            return _planeSlider.GetZoomFactor(camera);
        }

        public float GetRealTorusThickness(float zoomFactor)
        {
            return _planeSlider.LookAndFeel.BorderTorusThickness * zoomFactor * _planeSlider.LookAndFeel.Scale;
        }

        public float GetRealCylTorusWidth(float zoomFactor)
        {
            return _planeSlider.LookAndFeel.BorderCylTorusWidth * zoomFactor * _planeSlider.LookAndFeel.Scale;
        }

        public float GetRealCylTorusHeight(float zoomFactor)
        {
            return _planeSlider.LookAndFeel.BorderCylTorusHeight * zoomFactor * _planeSlider.LookAndFeel.Scale;
        }

        public void OnCircleShapeChanged()
        {
            float zoomFactor = GetZoomFactor(Gizmo.GetWorkCamera());
            _controllers[(int)_planeSlider.LookAndFeel.CircleBorderType].UpdateTransforms(zoomFactor);
        }

        public void Render(Camera camera)
        {
            if (!IsVisible) return;

            Color color = _planeSlider.LookAndFeel.BorderColor;
            if (_targetHandle.Gizmo.HoverHandleId == _targetHandle.Id) color = _planeSlider.LookAndFeel.HoveredBorderColor;

            if(_planeSlider.LookAndFeel.CircleBorderType == GizmoCircle3DBorderType.Thin)
            {
                GizmoCircularMaterial circularMaterial = GizmoCircularMaterial.Get;
                circularMaterial.CircularType = GizmoCircularMaterial.Type.Circle;
                circularMaterial.ResetValuesToSensibleDefaults();
                circularMaterial.SetCamera(camera);
                circularMaterial.SetShapeCenter(_targetCircle.Center);
                circularMaterial.SetCullAlphaScale(_planeSlider.LookAndFeel.BorderCircleCullAlphaScale);
                circularMaterial.SetColor(color);
                circularMaterial.SetPass(0);

                _targetHandle.Render3DWire(_borderCircleIndex);
            }
            else
            if(_planeSlider.LookAndFeel.CircleBorderType == GizmoCircle3DBorderType.Torus)
            {
                float zoomFactor = GetZoomFactor(camera);
                float torusThickness = GetRealTorusThickness(zoomFactor);
                bool renderFilled = _planeSlider.LookAndFeel.BorderFillMode == GizmoFillMode3D.Filled;

                GizmoCircularMaterial circularMaterial = GizmoCircularMaterial.Get;
                circularMaterial.CircularType = renderFilled ? GizmoCircularMaterial.Type.Torus : GizmoCircularMaterial.Type.Circle;
                circularMaterial.ResetValuesToSensibleDefaults();
                circularMaterial.SetCamera(camera);
                circularMaterial.SetShapeCenter(_targetCircle.Center);
                circularMaterial.SetCullAlphaScale(_planeSlider.LookAndFeel.BorderCircleCullAlphaScale);
                circularMaterial.SetColor(color);
                circularMaterial.SetTorusCoreRadius((_controllers[(int)GizmoCircle3DBorderType.Torus] as GizmoTorusCircle3DBorderController).GetTorusCoreRadius(zoomFactor));
                circularMaterial.SetTorusTubeRadius(torusThickness * 0.5f);
                circularMaterial.SetLit(_planeSlider.LookAndFeel.BorderShadeMode == GizmoShadeMode.Lit);
                if (circularMaterial.IsLit) circularMaterial.SetLightDirection(camera.transform.forward);
                circularMaterial.SetPass(0);

                if (renderFilled)
                    _targetHandle.Render3DSolid(_borderTorusIndex);
                else
                {
                    _borderTorus.WireRenderDesc.NumAxialSlices = _planeSlider.LookAndFeel.NumBorderTorusWireAxialSlices;
                    _targetHandle.Render3DWire(_borderTorusIndex);
                }
            }
            else
            if(_planeSlider.LookAndFeel.CircleBorderType == GizmoCircle3DBorderType.CylindricalTorus)
            {
                float zoomFactor = GetZoomFactor(camera);
                float torusWidth = GetRealCylTorusWidth(zoomFactor);
                float torusHeight = GetRealCylTorusHeight(zoomFactor);
                bool renderFilled = _planeSlider.LookAndFeel.BorderFillMode == GizmoFillMode3D.Filled;

                GizmoCircularMaterial circularMaterial = GizmoCircularMaterial.Get;
                circularMaterial.CircularType = renderFilled ? GizmoCircularMaterial.Type.CylindricalTorus : GizmoCircularMaterial.Type.Circle;
                circularMaterial.ResetValuesToSensibleDefaults();
                circularMaterial.SetCamera(camera);
                circularMaterial.SetShapeCenter(_targetCircle.Center);
                circularMaterial.SetCullAlphaScale(_planeSlider.LookAndFeel.BorderCircleCullAlphaScale);
                circularMaterial.SetColor(color);
                circularMaterial.SetTorusCoreRadius((_controllers[(int)GizmoCircle3DBorderType.CylindricalTorus] as GizmoCylindricalTorusCircle3DBorderController).GetTorusCoreRadius(zoomFactor));
                circularMaterial.SetCylindricalTorusRadii(torusWidth * 0.5f, torusHeight * 0.5f);
                circularMaterial.SetLit(_planeSlider.LookAndFeel.BorderShadeMode == GizmoShadeMode.Lit);
                if (circularMaterial.IsLit) circularMaterial.SetLightDirection(camera.transform.forward);
                circularMaterial.SetPass(0);

                if (renderFilled) _targetHandle.Render3DSolid(_borderCylTorusIndex);
                else _targetHandle.Render3DWire(_borderCylTorusIndex);
            }
        }

        private void OnGizmoPreUpdateBegin(Gizmo gizmo)
        {
            float zoomFactor = GetZoomFactor(Gizmo.FocusCamera);
            _controllers[(int)_planeSlider.LookAndFeel.CircleBorderType].UpdateHandles();
            _controllers[(int)_planeSlider.LookAndFeel.CircleBorderType].UpdateEpsilons(zoomFactor);
        }
    }
}
