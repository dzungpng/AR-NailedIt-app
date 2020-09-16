using UnityEngine;

namespace RTG
{
    public class GizmoThinLineSlider2DController : GizmoLineSlider2DController
    {
        public GizmoThinLineSlider2DController(GizmoLineSlider2DControllerData controllerData)
            :base(controllerData)
        {}

        public override void UpdateHandles()
        {
            _data.SliderHandle.Set2DShapeVisible(_data.QuadIndex, false);
            _data.SliderHandle.Set2DShapeVisible(_data.SegmentIndex, _data.Slider.IsVisible);
        }

        public override void UpdateEpsilons()
        {
            _data.Segment.PtOnSegmentEps = _data.Slider.Settings.LineHoverEps;
        }

        public override void UpdateTransforms()
        {
            var segment = _data.Segment;
            var slider = _data.Slider;

            segment.StartPoint = slider.StartPosition;
            segment.SetEndPtFromStart(slider.Direction, slider.GetRealLength());
        }
    }
}
