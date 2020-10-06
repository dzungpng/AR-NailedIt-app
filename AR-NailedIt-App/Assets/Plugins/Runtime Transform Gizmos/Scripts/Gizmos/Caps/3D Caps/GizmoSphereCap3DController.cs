using UnityEngine;

namespace RTG
{
    public class GizmoSphereCap3DController : GizmoCap3DController
    {
        public GizmoSphereCap3DController(GizmoCap3DControllerData controllerData)
            :base(controllerData)
        {
        }

        public override void UpdateHandles()
        {
            _data.CapHandle.Set3DShapeVisible(_data.ConeIndex, false);
            _data.CapHandle.Set3DShapeVisible(_data.TrPrismIndex, false);
            _data.CapHandle.Set3DShapeVisible(_data.BoxIndex, false);
            _data.CapHandle.Set3DShapeVisible(_data.PyramidIndex, false);
            _data.CapHandle.Set3DShapeVisible(_data.SphereIndex, _data.Cap.IsVisible);
        }

        public override void UpdateTransforms(float zoomFactor)
        {
            var cap = _data.Cap;

            _data.Sphere.Center = cap.Position;
            _data.Sphere.Rotation = cap.Rotation;
            _data.Sphere.Radius = cap.GetRealSphereRadius(zoomFactor);
        }

        public override void CapSlider3D(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor)
        {
            _data.Cap.AlignTransformAxis(0, AxisSign.Positive, sliderDirection);
            _data.Cap.Position = sliderEndPt + sliderDirection * _data.Sphere.Radius;
        }

        public override void CapSlider3DInvert(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor)
        {
            _data.Cap.AlignTransformAxis(0, AxisSign.Positive, -sliderDirection);
            _data.Cap.Position = sliderEndPt + sliderDirection * _data.Cap.GetRealSphereRadius(zoomFactor);
        }

        public override float GetSliderAlignedRealLength(float zoomFactor)
        {
            return _data.Cap.GetRealSphereRadius(zoomFactor) * 2.0f;
        }
    }
}
