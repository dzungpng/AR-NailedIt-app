using UnityEngine;

namespace RTG
{
    public class GizmoThinCircle2DBorderController : GizmoCircle2DBorderController
    {
        public GizmoThinCircle2DBorderController(GizmoCircle2DBorderControllerData data)
            : base(data)
        {
        }

        public override void UpdateHandles()
        {
            _data.TargetHandle.Set2DShapeVisible(_data.BorderCircleIndex, _data.Border.IsVisible);
        }

        public override void UpdateEpsilons()
        {
            _data.BorderCircle.WireEps = _data.PlaneSlider.Settings.BorderLineHoverEps;
        }

        public override void UpdateTransforms()
        {
            var targetCircle = _data.TargetCircle;
            var borderCircle = _data.BorderCircle;

            borderCircle.Center = targetCircle.Center;
            borderCircle.RotationDegrees = targetCircle.RotationDegrees;
            borderCircle.Radius = targetCircle.Radius;
        }
    }
}
