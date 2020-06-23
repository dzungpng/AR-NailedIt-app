using UnityEngine;

namespace RTG
{
    public class GizmoCirclePlaneSlider2DController : GizmoPlaneSlider2DController
    {
        public GizmoCirclePlaneSlider2DController(GizmoPlaneSlider2DControllerData controllerData)
            : base(controllerData)
        { }

        public override void UpdateHandles()
        {
            _data.QuadBorder.SetVisible(false);
            _data.SliderHandle.Set2DShapeVisible(_data.QuadIndex, false);
            _data.PolygonBorder.SetVisible(false);
            _data.SliderHandle.Set2DShapeVisible(_data.PolygonIndex, false);

            _data.CircleBorder.SetVisible(_data.Slider.IsBorderVisible);
            _data.SliderHandle.Set2DShapeVisible(_data.CircleIndex, _data.Slider.IsVisible);
        }

        public override void UpdateEpsilons()
        {
            var circle = _data.Circle;
            circle.RadiusEps = _data.Slider.Settings.AreaHoverEps;
        }

        public override void UpdateTransforms()
        {
            var circle = _data.Circle;
            var slider = _data.Slider;

            circle.Center = slider.Position;
            circle.RotationDegrees = slider.RotationDegrees;
            circle.Radius = slider.GetRealCircleRadius();
            _data.CircleBorder.OnCircleShapeChanged();
        }

        public override Vector2 GetRealExtentPoint(Shape2DExtentPoint extentPt)
        {
            return _data.Circle.GetExtentPoint(extentPt);
        }
    }
}

