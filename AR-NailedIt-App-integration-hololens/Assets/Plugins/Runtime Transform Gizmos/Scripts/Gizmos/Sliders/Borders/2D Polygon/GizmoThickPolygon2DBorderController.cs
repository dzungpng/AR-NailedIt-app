using UnityEngine;

namespace RTG
{
    public class GizmoThickPolygon2DBorderController : GizmoPolygon2DBorderController
    {
        public GizmoThickPolygon2DBorderController(GizmoPolygon2DBorderControllerData data)
            : base(data)
        {
        }

        public override void UpdateHandles()
        {
            _data.TargetHandle.Set2DShapeVisible(_data.BorderPolygonIndex, false);
            _data.TargetHandle.Set2DShapeVisible(_data.ThickBorderPolygonIndex, _data.Border.IsVisible);
        }

        public override void UpdateEpsilons()
        {
            _data.ThickBorderPolygon.ThickWireEps = _data.PlaneSlider.Settings.ThickBorderPolyHoverEps;
        }

        public override void UpdateTransforms()
        {
            _data.ThickBorderPolygon.BorderRenderDesc.Thickness = _data.PlaneSlider.LookAndFeel.BorderPolyThickness;
            _data.ThickBorderPolygon.CopyPoints(_data.TargetPolygon);
        }
    }
}
