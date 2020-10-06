using UnityEngine;

namespace RTG
{
    public class GizmoCirclePlaneSlider3DController : GizmoPlaneSlider3DController
    {
        public GizmoCirclePlaneSlider3DController(GizmoPlaneSlider3DControllerData controllerData)
            :base(controllerData)
        {
        }

        public override void UpdateHandles()
        {
            _data.QuadBorder.SetVisible(false);
            _data.SliderHandle.Set3DShapeVisible(_data.QuadIndex, false);
            _data.RATriangleBorder.SetVisible(false);
            _data.SliderHandle.Set3DShapeVisible(_data.RATriangleIndex, false);

            _data.CircleBorder.SetVisible(_data.Slider.IsBorderVisible);
            _data.SliderHandle.Set3DShapeVisible(_data.CircleIndex, _data.Slider.IsVisible);
        }

        public override void UpdateEpsilons(float zoomFactor)
        {
            _data.Circle.RadiusEps = _data.Slider.Settings.AreaHoverEps * zoomFactor * 0.5f;
            _data.Circle.ExtrudeEps = _data.Slider.Settings.ExtrudeHoverEps * zoomFactor;
        }

        public override void UpdateTransforms(float zoomFactor)
        {
            var circle = _data.Circle;
            var slider = _data.Slider;

            circle.Center = slider.Position;
            circle.Radius = slider.GetRealCircleRadius(zoomFactor);
            circle.Rotation = slider.Rotation;
            _data.CircleBorder.OnCircleShapeChanged();
        }
    }
}
