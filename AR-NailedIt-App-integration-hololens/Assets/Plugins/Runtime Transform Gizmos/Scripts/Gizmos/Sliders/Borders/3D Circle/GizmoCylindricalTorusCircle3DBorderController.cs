using UnityEngine;

namespace RTG
{
    public class GizmoCylindricalTorusCircle3DBorderController : GizmoCircle3DBorderController
    {
        public GizmoCylindricalTorusCircle3DBorderController(GizmoCircle3DBorderControllerData controllerData)
            :base(controllerData)
        {
        }

        public override void UpdateHandles()
        {
            _data.TargetHandle.Set3DShapeVisible(_data.BorderCircleIndex, false);
            _data.TargetHandle.Set3DShapeVisible(_data.BorderTorusIndex, false);
            _data.TargetHandle.Set3DShapeVisible(_data.BorderCylTorusIndex, _data.Border.IsVisible);
        }

        public override void UpdateEpsilons(float zoomFactor)
        {
            _data.BorderCylTorus.CylHrzRadiusEps = zoomFactor * _data.PlaneSlider.Settings.BorderTorusHoverEps;
            _data.BorderCylTorus.CylVertRadiusEps = _data.BorderCylTorus.CylHrzRadiusEps;
        }

        public override void UpdateTransforms(float zoomFactor)
        {
            var borderTorus = _data.BorderCylTorus;
            var targetCircle = _data.TargetCircle;

            // Note: Rotate around the X axis first because circles exist in the XY plane in model space.
            borderTorus.Rotation = targetCircle.Rotation * Quaternion.Euler(-90.0f, 0.0f, 0.0f);
            borderTorus.Center = targetCircle.Center;
            borderTorus.CoreRadius = GetTorusCoreRadius(zoomFactor);
            borderTorus.HrzRadius = _data.Border.GetRealCylTorusWidth(zoomFactor) * 0.5f;
            borderTorus.VertRadius = _data.Border.GetRealCylTorusHeight(zoomFactor) * 0.5f;
        }

        public float GetTorusCoreRadius(float zoomFactor)
        {
            float torusWidth = _data.Border.GetRealCylTorusWidth(zoomFactor);
            return _data.TargetCircle.Radius - torusWidth * 0.5f;
        }
    }
}
