using UnityEngine;

namespace RTG
{
    public class GizmoRATrianglePlaneSlider3DController : GizmoPlaneSlider3DController
    {
        public GizmoRATrianglePlaneSlider3DController(GizmoPlaneSlider3DControllerData controllerData)
            :base(controllerData)
        {
        }

        public override void UpdateHandles()
        {
            _data.QuadBorder.SetVisible(false);
            _data.SliderHandle.Set3DShapeVisible(_data.QuadIndex, false);
            _data.CircleBorder.SetVisible(false);
            _data.SliderHandle.Set3DShapeVisible(_data.CircleIndex, false);

            _data.RATriangleBorder.SetVisible(_data.Slider.IsBorderVisible);
            _data.SliderHandle.Set3DShapeVisible(_data.RATriangleIndex, _data.Slider.IsVisible);
        }

        public override void UpdateEpsilons(float zoomFactor)
        {
            _data.RATriangle.AreaEps = _data.Slider.Settings.AreaHoverEps * zoomFactor;
            _data.RATriangle.ExtrudeEps = _data.Slider.Settings.ExtrudeHoverEps * zoomFactor;
        }

        public override void UpdateTransforms(float zoomFactor)
        {
            var raTri = _data.RATriangle;
            var slider = _data.Slider;
            Vector2 triSize = slider.GetRealRATriSize(zoomFactor);

            raTri.RightAngleCorner = slider.Position;
            raTri.Rotation = slider.Rotation;
            raTri.XLength = triSize.x;
            raTri.YLength = triSize.y;

            raTri.XLengthSign = triSize.x >= 0.0f ? AxisSign.Positive : AxisSign.Negative;
            raTri.YLengthSign = triSize.y >= 0.0f ? AxisSign.Positive : AxisSign.Negative;

            _data.RATriangleBorder.OnTriangleShapeChanged();
        }
    }
}
