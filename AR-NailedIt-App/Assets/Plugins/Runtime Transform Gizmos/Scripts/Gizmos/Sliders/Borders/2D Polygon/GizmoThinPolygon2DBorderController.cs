using UnityEngine;

namespace RTG
{
    public class GizmoThinPolygon2DBorderController : GizmoPolygon2DBorderController
    {
        public GizmoThinPolygon2DBorderController(GizmoPolygon2DBorderControllerData data)
            : base(data)
        {
        }

        public override void UpdateHandles()
        {
            _data.TargetHandle.Set2DShapeVisible(_data.ThickBorderPolygonIndex, false);
            _data.TargetHandle.Set2DShapeVisible(_data.BorderPolygonIndex, _data.Border.IsVisible);
        }

        public override void UpdateEpsilons()
        {
            _data.BorderPolygon.WireEps = _data.PlaneSlider.Settings.BorderLineHoverEps;
        }

        public override void UpdateTransforms()
        {
            _data.BorderPolygon.CopyPoints(_data.TargetPolygon);
        }
    }
}
