using UnityEngine;

namespace RTG
{
    public class GizmoThinLineSlider3DController : GizmoLineSlider3DController
    {
        public GizmoThinLineSlider3DController(GizmoLineSlider3DControllerData controllerData)
            :base(controllerData)
        {
        }

        public override void UpdateHandles()
        {
            _data.SliderHandle.Set3DShapeVisible(_data.CylinderIndex, false);
            _data.SliderHandle.Set3DShapeVisible(_data.BoxIndex, false);
            _data.SliderHandle.Set3DShapeVisible(_data.SegmentIndex, _data.Slider.IsVisible);
        }

        public override void UpdateTransforms(float zoomFactor)
        {
            var slider = _data.Slider;
            _data.Segment.StartPoint = slider.StartPosition;
            _data.Segment.SetEndPtFromStart(slider.Direction, slider.GetRealLength(zoomFactor));
        }

        public override void UpdateEpsilons(float zoomFactor)
        {
            _data.Segment.RaycastEps = _data.Slider.Settings.LineHoverEps * zoomFactor;
        }

        public override float GetRealSizeAlongDirection(Vector3 direction, float zoomFactor)
        {
            var slider = _data.Slider;
            return Vector3Ex.AbsDot(direction, slider.Direction * slider.GetRealLength(zoomFactor));
        }
    }
}
