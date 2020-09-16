using UnityEngine;

namespace RTG
{
    public class GizmoBoxLineSlider3DController : GizmoLineSlider3DController
    {
        public GizmoBoxLineSlider3DController(GizmoLineSlider3DControllerData controllerData)
            :base(controllerData)
        {
        }

        public override void UpdateHandles()
        {
            _data.SliderHandle.Set3DShapeVisible(_data.CylinderIndex, false);
            _data.SliderHandle.Set3DShapeVisible(_data.SegmentIndex, false);
            _data.SliderHandle.Set3DShapeVisible(_data.BoxIndex, _data.Slider.IsVisible);
        }

        public override void UpdateTransforms(float zoomFactor)
        {
            var slider = _data.Slider;

            _data.Box.AlignWidth(slider.GetRealDirection());
            _data.Box.Size = new Vector3(slider.GetRealLength(zoomFactor), slider.GetRealBoxHeight(zoomFactor), slider.GetRealBoxDepth(zoomFactor));
            _data.Box.SetFaceCenter(BoxFace.Left, slider.StartPosition);
        }

        public override void UpdateEpsilons(float zoomFactor)
        {
            float boxHoverEps = _data.Slider.Settings.BoxHoverEps * zoomFactor;
            _data.Box.SizeEps = new Vector3(0.0f, boxHoverEps, boxHoverEps);
        }

        public override float GetRealSizeAlongDirection(Vector3 direction, float zoomFactor)
        {
            direction.Normalize();

            var slider = _data.Slider;
            float boxWidth = slider.GetRealLength(zoomFactor);
            float boxHeight = slider.GetRealBoxHeight(zoomFactor);
            float boxDepth = slider.GetRealBoxDepth(zoomFactor);
            Vector3 size = _data.Box.Rotation * new Vector3(boxWidth, boxHeight, boxDepth);

            return Vector3Ex.AbsDot(direction, size);
        }
    }
}
