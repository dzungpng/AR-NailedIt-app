using UnityEngine;

namespace RTG
{
    public class GizmoQuadCap2DController : GizmoCap2DController
    {
        public GizmoQuadCap2DController(GizmoCap2DControllerData controllerData)
            :base(controllerData)
        { }

        public override void UpdateHandles()
        {
            _data.CapHandle.Set2DShapeVisible(_data.ArrowIndex, false);
            _data.CapHandle.Set2DShapeVisible(_data.CircleIndex, false);
            _data.CapHandle.Set2DShapeVisible(_data.QuadIndex, _data.Cap.IsVisible);
        }

        public override void UpdateTransforms()
        {
            var cap = _data.Cap;
            _data.Quad.Width = cap.GetRealQuadWidth();
            _data.Quad.Height = cap.GetRealQuadHeight();
            _data.Quad.Center = cap.Position;
            _data.Quad.RotationDegrees = cap.RotationDegrees;
        }

        public override void CapSlider2D(Vector2 sliderDirection, Vector2 sliderEndPt)
        {
            _data.Cap.AlignTransformAxis(0, AxisSign.Positive, sliderDirection);
            _data.Cap.Position = sliderEndPt + sliderDirection * _data.Cap.GetRealQuadWidth() * 0.5f;
        }

        public override void CapSlider2DInvert(Vector2 sliderDirection, Vector2 sliderEndPt)
        {
            _data.Cap.AlignTransformAxis(0, AxisSign.Positive, -sliderDirection);
            _data.Cap.Position = sliderEndPt + sliderDirection * _data.Cap.GetRealQuadWidth() * 0.5f;
        }

        public override float GetSliderAlignedRealLength()
        {
            return _data.Cap.GetRealQuadWidth();
        }
    }
}
