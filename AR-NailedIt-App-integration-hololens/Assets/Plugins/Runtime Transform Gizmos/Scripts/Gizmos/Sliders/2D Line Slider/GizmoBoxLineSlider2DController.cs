using UnityEngine;

namespace RTG
{
    public class GizmoBoxLineSlider2DController : GizmoLineSlider2DController
    {
        public GizmoBoxLineSlider2DController(GizmoLineSlider2DControllerData controllerData)
            :base(controllerData)
        {}

        public override void UpdateHandles()
        {
            _data.SliderHandle.Set2DShapeVisible(_data.SegmentIndex, false);
            _data.SliderHandle.Set2DShapeVisible(_data.QuadIndex, _data.Slider.IsVisible);
        }

        public override void UpdateEpsilons()
        {
            _data.Quad.SizeEps = Vector2Ex.FromValue(_data.Slider.Settings.BoxHoverEps);
        }

        public override void UpdateTransforms()
        {
            var quad = _data.Quad;
            var slider = _data.Slider;
            float sliderLength = slider.GetRealLength();
            Vector2 sliderDirection = slider.GetRealDirection();

            quad.Width = sliderLength;
            quad.Height = slider.GetRealBoxThickness();
            quad.AlignWidth(sliderDirection);
            quad.Center = slider.StartPosition + sliderDirection * 0.5f * sliderLength;
        }
    }
}
