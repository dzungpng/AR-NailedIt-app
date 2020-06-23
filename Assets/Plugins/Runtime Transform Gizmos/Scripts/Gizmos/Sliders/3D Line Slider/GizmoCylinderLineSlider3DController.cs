using UnityEngine;

namespace RTG
{
    public class GizmoCylinderLineSlider3DController : GizmoLineSlider3DController
    {
        public GizmoCylinderLineSlider3DController(GizmoLineSlider3DControllerData controllerData)
            :base(controllerData)
        {
        }

        public override void UpdateHandles()
        {
            _data.SliderHandle.Set3DShapeVisible(_data.SegmentIndex, false);
            _data.SliderHandle.Set3DShapeVisible(_data.BoxIndex, false);
            _data.SliderHandle.Set3DShapeVisible(_data.CylinderIndex, _data.Slider.IsVisible);
        }

        public override void UpdateTransforms(float zoomFactor)
        {
            var slider = _data.Slider;

            _data.Cylinder.AlignCentralAxis(slider.GetRealDirection());
            _data.Cylinder.Radius = slider.GetRealCylinderRadius(zoomFactor);
            _data.Cylinder.Height = slider.GetRealLength(zoomFactor);
            _data.Cylinder.BaseCenter = slider.StartPosition;
        }

        public override void UpdateEpsilons(float zoomFactor)
        {
            _data.Cylinder.RadiusEps = _data.Slider.Settings.CylinderHoverEps * zoomFactor;
        }

        public override float GetRealSizeAlongDirection(Vector3 direction, float zoomFactor)
        {
            var slider = _data.Slider;
            float cylinderLength = slider.GetRealLength(zoomFactor);
            float cylinderRadius = slider.GetRealCylinderRadius(zoomFactor);
            Vector3 size = _data.Cylinder.Rotation * new Vector3(cylinderRadius * 2.0f, cylinderLength, cylinderRadius * 2.0f);

            return Vector3Ex.AbsDot(direction, size);
        }
    }
}
