using UnityEngine;

namespace RTG
{
    public class GizmoCircleCap2DController : GizmoCap2DController
    {
        public GizmoCircleCap2DController(GizmoCap2DControllerData controllerData)
            :base(controllerData)
        {}

        public override void UpdateHandles()
        {
            _data.CapHandle.Set2DShapeVisible(_data.ArrowIndex, false);
            _data.CapHandle.Set2DShapeVisible(_data.QuadIndex, false);
            _data.CapHandle.Set2DShapeVisible(_data.CircleIndex, _data.Cap.IsVisible);
        }

        public override void UpdateTransforms()
        {
            var cap = _data.Cap;
            _data.Circle.Radius = cap.GetRealCircleRadius();
            _data.Circle.Center = cap.Position;
        }

        public override void CapSlider2D(Vector2 sliderDirection, Vector2 sliderEndPt)
        {
            _data.Cap.AlignTransformAxis(0, AxisSign.Positive, sliderDirection);
            _data.Cap.Position = sliderEndPt + sliderDirection.normalized * _data.Cap.GetRealCircleRadius();
        }

        public override void CapSlider2DInvert(Vector2 sliderDirection, Vector2 sliderEndPt)
        {
            _data.Cap.AlignTransformAxis(0, AxisSign.Positive, -sliderDirection);
            _data.Cap.Position = sliderEndPt + sliderDirection.normalized * _data.Cap.GetRealCircleRadius();
        }

        public override float GetSliderAlignedRealLength()
        {
            return _data.Cap.GetRealCircleRadius() * 2.0f;
        }
    }
}
