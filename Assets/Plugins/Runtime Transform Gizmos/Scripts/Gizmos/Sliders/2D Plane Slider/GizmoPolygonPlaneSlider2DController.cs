using UnityEngine;

namespace RTG
{
    public class GizmoPolygonPlaneSlider2DController : GizmoPlaneSlider2DController
    {
        public GizmoPolygonPlaneSlider2DController(GizmoPlaneSlider2DControllerData controllerData)
            : base(controllerData)
        { }

        public override void UpdateHandles()
        {
            _data.CircleBorder.SetVisible(false);
            _data.SliderHandle.Set2DShapeVisible(_data.CircleIndex, false);
            _data.QuadBorder.SetVisible(false);
            _data.SliderHandle.Set2DShapeVisible(_data.QuadIndex, false);

            _data.PolygonBorder.SetVisible(_data.Slider.IsBorderVisible);
            _data.SliderHandle.Set2DShapeVisible(_data.PolygonIndex, _data.Slider.IsVisible);
        }

        public override void UpdateEpsilons()
        {
            var poly = _data.Polygon;
            poly.AreaEps = _data.Slider.Settings.AreaHoverEps;
        }

        public override void UpdateTransforms()
        {
            _data.PolygonBorder.OnPolygonShapeChanged();
        }

        public override Vector2 GetRealExtentPoint(Shape2DExtentPoint extentPt)
        {
            return _data.Polygon.GetExtentPoint(extentPt);
        }
    }
}
