using UnityEngine;

namespace RTG
{
    public class GizmoQuadPlaneSlider2DController : GizmoPlaneSlider2DController
    {
        public GizmoQuadPlaneSlider2DController(GizmoPlaneSlider2DControllerData controllerData)
            : base(controllerData)
        {}

        public override void UpdateHandles()
        {
            _data.CircleBorder.SetVisible(false);
            _data.SliderHandle.Set2DShapeVisible(_data.CircleIndex, false);
            _data.PolygonBorder.SetVisible(false);
            _data.SliderHandle.Set2DShapeVisible(_data.PolygonIndex, false);

            _data.QuadBorder.SetVisible(_data.Slider.IsBorderVisible);
            _data.SliderHandle.Set2DShapeVisible(_data.QuadIndex, _data.Slider.IsVisible);
        }

        public override void UpdateEpsilons()
        {
            var quad = _data.Quad;
            quad.SizeEps = Vector2Ex.FromValue(_data.Slider.Settings.AreaHoverEps);
        }

        public override void UpdateTransforms()
        {
            var quad = _data.Quad;
            var slider = _data.Slider;

            quad.Center = slider.Position;
            quad.RotationDegrees = slider.RotationDegrees;
            quad.Size = slider.GetRealQuadSize();
            _data.QuadBorder.OnQuadShapeChanged();
        }

        public override Vector2 GetRealExtentPoint(Shape2DExtentPoint extentPt)
        {
            return _data.Quad.GetExtentPoint(extentPt);
        }
    }
}
