using UnityEngine;

namespace RTG
{
    public class GizmoQuadPlaneSlider3DController : GizmoPlaneSlider3DController
    {
        public GizmoQuadPlaneSlider3DController(GizmoPlaneSlider3DControllerData controllerData)
            :base(controllerData)
        {
        }

        public override void UpdateHandles()
        {
            _data.RATriangleBorder.SetVisible(false);
            _data.SliderHandle.Set3DShapeVisible(_data.RATriangleIndex, false);
            _data.CircleBorder.SetVisible(false);
            _data.SliderHandle.Set3DShapeVisible(_data.CircleIndex, false);

            _data.QuadBorder.SetVisible(_data.Slider.IsBorderVisible);
            _data.SliderHandle.Set3DShapeVisible(_data.QuadIndex, _data.Slider.IsVisible);
        }

        public override void UpdateEpsilons(float zoomFactor)
        {
            _data.Quad.SizeEps = Vector2Ex.FromValue(_data.Slider.Settings.AreaHoverEps * zoomFactor);
            _data.Quad.ExtrudeEps = _data.Slider.Settings.ExtrudeHoverEps * zoomFactor;
        }

        public override void UpdateTransforms(float zoomFactor)
        {
            var quad = _data.Quad;
            var slider = _data.Slider;

            quad.Center = slider.Position;
            quad.Rotation = slider.Rotation;
            quad.Size = slider.GetRealQuadSize(zoomFactor);

            _data.QuadBorder.OnQuadShapeChanged();
        }
    }
}
