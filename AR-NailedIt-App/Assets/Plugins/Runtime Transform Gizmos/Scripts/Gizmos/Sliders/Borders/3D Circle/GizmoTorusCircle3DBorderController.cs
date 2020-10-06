using UnityEngine;

namespace RTG
{
    public class GizmoTorusCircle3DBorderController : GizmoCircle3DBorderController
    {
        public GizmoTorusCircle3DBorderController(GizmoCircle3DBorderControllerData controllerData)
            :base(controllerData)
        {
        }

        public override void UpdateHandles()
        {
            _data.TargetHandle.Set3DShapeVisible(_data.BorderCircleIndex, false);
            _data.TargetHandle.Set3DShapeVisible(_data.BorderCylTorusIndex, false);
            _data.TargetHandle.Set3DShapeVisible(_data.BorderTorusIndex, _data.Border.IsVisible);
        }

        public override void UpdateEpsilons(float zoomFactor)
        {
            _data.BorderTorus.TubeRadiusEps = zoomFactor * _data.PlaneSlider.Settings.BorderTorusHoverEps;
        }

        public override void UpdateTransforms(float zoomFactor)
        {
            var borderTorus = _data.BorderTorus;
            var targetCircle = _data.TargetCircle;
            float torusThickness = _data.Border.GetRealTorusThickness(zoomFactor);

            // Note: Rotate around the X axis first because circles exist in the XY plane in model space.
            borderTorus.Rotation = targetCircle.Rotation * Quaternion.Euler(-90.0f, 0.0f, 0.0f);
            borderTorus.Center = targetCircle.Center;
            borderTorus.CoreRadius = GetTorusCoreRadius(zoomFactor);
            borderTorus.TubeRadius = torusThickness * 0.5f;
        }

        public float GetTorusCoreRadius(float zoomFactor)
        {
            float torusThickness = _data.Border.GetRealTorusThickness(zoomFactor);
            return _data.TargetCircle.Radius - torusThickness * 0.5f;
        }
    }
}
