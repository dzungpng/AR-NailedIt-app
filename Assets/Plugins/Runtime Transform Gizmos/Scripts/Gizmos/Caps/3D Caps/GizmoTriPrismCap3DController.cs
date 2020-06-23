using UnityEngine;

namespace RTG
{
    public class GizmoTriPrismCap3DController : GizmoCap3DController
    {
        public GizmoTriPrismCap3DController(GizmoCap3DControllerData controllerData)
            :base(controllerData)
        {
        }

        public override void UpdateHandles()
        {
            _data.CapHandle.Set3DShapeVisible(_data.ConeIndex, false);
            _data.CapHandle.Set3DShapeVisible(_data.SphereIndex, false);
            _data.CapHandle.Set3DShapeVisible(_data.BoxIndex, false);
            _data.CapHandle.Set3DShapeVisible(_data.PyramidIndex, false);
            _data.CapHandle.Set3DShapeVisible(_data.TrPrismIndex, _data.Cap.IsVisible);
        }

        public override void UpdateTransforms(float zoomFactor)
        {
            var cap = _data.Cap;

            _data.TrPrism.Rotation = cap.Rotation;
            _data.TrPrism.Width = cap.GetRealTriPrismWidth(zoomFactor);
            _data.TrPrism.Height = cap.GetRealTriPrismHeight(zoomFactor);
            _data.TrPrism.Depth = cap.GetRealTriPrismDepth(zoomFactor);
            _data.TrPrism.FrontCenter = cap.Position;
        }

        public override void CapSlider3D(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor)
        {
            _data.Cap.Rotation = Quaternion.identity;
            _data.Cap.AlignTransformAxis(2, AxisSign.Positive, sliderDirection);
            _data.Cap.Position = sliderEndPt;
        }

        public override void CapSlider3DInvert(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor)
        {
            _data.Cap.Rotation = Quaternion.identity;
            _data.Cap.AlignTransformAxis(2, AxisSign.Positive, -sliderDirection);
            _data.Cap.Position = sliderEndPt + sliderDirection * GetSliderAlignedRealLength(zoomFactor);
        }

        public override float GetSliderAlignedRealLength(float zoomFactor)
        {
            return _data.Cap.GetRealTriPrismDepth(zoomFactor);
        }
    }
}
