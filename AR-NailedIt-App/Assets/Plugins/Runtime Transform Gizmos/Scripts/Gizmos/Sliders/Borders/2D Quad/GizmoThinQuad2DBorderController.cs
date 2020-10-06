using UnityEngine;

namespace RTG
{
    public class GizmoThinQuad2DBorderController : GizmoQuad2DBorderController
    {
        public GizmoThinQuad2DBorderController(GizmoQuad2DBorderControllerData data)
            : base(data)
        {
        }

        public override void UpdateHandles()
        {
            _data.TargetHandle.Set2DShapeVisible(_data.BorderQuadIndex, _data.Border.IsVisible);
        }

        public override void UpdateEpsilons()
        {
            _data.BorderQuad.WireEps = _data.PlaneSlider.Settings.BorderLineHoverEps;
        }

        public override void UpdateTransforms()
        {
            var targetQuad = _data.TargetQuad;
            var borderQuad = _data.BorderQuad;

            borderQuad.Center = targetQuad.Center;
            borderQuad.RotationDegrees = targetQuad.RotationDegrees;
            borderQuad.Size = targetQuad.Size;
        }
    }
}
