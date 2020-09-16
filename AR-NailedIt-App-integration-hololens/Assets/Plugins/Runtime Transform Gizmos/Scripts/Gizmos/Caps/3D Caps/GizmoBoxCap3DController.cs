using UnityEngine;

namespace RTG
{
    public class GizmoBoxCap3DController : GizmoCap3DController
    {
        public GizmoBoxCap3DController(GizmoCap3DControllerData controllerData)
            :base(controllerData)
        {
        }

        public override void UpdateHandles()
        {
            _data.CapHandle.Set3DShapeVisible(_data.PyramidIndex, false);
            _data.CapHandle.Set3DShapeVisible(_data.TrPrismIndex, false);
            _data.CapHandle.Set3DShapeVisible(_data.ConeIndex, false);
            _data.CapHandle.Set3DShapeVisible(_data.SphereIndex, false);
            _data.CapHandle.Set3DShapeVisible(_data.BoxIndex, _data.Cap.IsVisible);
        }

        public override void UpdateTransforms(float zoomFactor)
        {
            var cap = _data.Cap;

            _data.Box.Center = cap.Position;
            _data.Box.Rotation = cap.Rotation;
            _data.Box.Size = cap.GetRealBoxSize(zoomFactor);
        }

        public override void CapSlider3D(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor)
        {
            _data.Cap.AlignTransformAxis(0, AxisSign.Positive, sliderDirection);
            _data.Cap.Position = sliderEndPt + sliderDirection * _data.Box.Size[0] * 0.5f;
        }

        public override void CapSlider3DInvert(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor)
        {
            _data.Cap.AlignTransformAxis(0, AxisSign.Positive, -sliderDirection);
            _data.Cap.Position = sliderEndPt + sliderDirection * GetSliderAlignedRealLength(zoomFactor) * 0.5f;
        }

        public override float GetSliderAlignedRealLength(float zoomFactor)
        {
            return _data.Cap.GetRealBoxWidth(zoomFactor);
        }
    }
}
