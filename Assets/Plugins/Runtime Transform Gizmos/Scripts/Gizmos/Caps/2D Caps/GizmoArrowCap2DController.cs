using UnityEngine;

namespace RTG
{
    public class GizmoArrowCap2DController : GizmoCap2DController
    {
        public GizmoArrowCap2DController(GizmoCap2DControllerData controllerData)
            :base(controllerData)
        {}

        public override void UpdateHandles()
        {
            _data.CapHandle.Set2DShapeVisible(_data.CircleIndex, false);
            _data.CapHandle.Set2DShapeVisible(_data.QuadIndex, false);
            _data.CapHandle.Set2DShapeVisible(_data.ArrowIndex, _data.Cap.IsVisible);
        }

        public override void UpdateTransforms()
        {
            var cap = _data.Cap;
            _data.Arrow.Height = cap.GetRealArrowHeight();
            _data.Arrow.BaseRadius = cap.GetRealArrowBaseRadius();
            _data.Arrow.RotationDegrees = cap.RotationDegrees;
            _data.Arrow.BaseCenter = cap.Position;
        }

        public override void CapSlider2D(Vector2 sliderDirection, Vector2 sliderEndPt)
        {
            _data.Cap.AlignTransformAxis(1, AxisSign.Positive, sliderDirection);
            _data.Cap.Position = sliderEndPt;
        }

        public override void CapSlider2DInvert(Vector2 sliderDirection, Vector2 sliderEndPt)
        {
            _data.Cap.AlignTransformAxis(1, AxisSign.Positive, -sliderDirection);
            _data.Cap.Position = sliderEndPt + sliderDirection.normalized * _data.Cap.GetRealArrowHeight();
        }

        public override float GetSliderAlignedRealLength()
        {
            return _data.Cap.GetRealArrowHeight();
        }
    }
}
