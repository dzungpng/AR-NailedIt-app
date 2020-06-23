using UnityEngine;

namespace RTG
{
    public class GizmoThinQuad3DBorderController : GizmoQuad3DBorderController
    {
        public GizmoThinQuad3DBorderController(GizmoQuad3DBorderControllerData data)
            : base(data)
        { 
        }

        public override void UpdateHandles()
        {
            GizmoHandle targetHandle = _data.TargetHandle;

            targetHandle.Set3DShapeVisible(_data.BorderQuadIndex, _data.Border.IsVisible);
            targetHandle.Set3DShapeVisible(_data.TopBoxIndex, false);
            targetHandle.Set3DShapeVisible(_data.RightBoxIndex, false);
            targetHandle.Set3DShapeVisible(_data.BottomBoxIndex, false);
            targetHandle.Set3DShapeVisible(_data.LeftBoxIndex, false);
            targetHandle.Set3DShapeVisible(_data.TopLeftBoxIndex, false);
            targetHandle.Set3DShapeVisible(_data.TopRightBoxIndex, false);
            targetHandle.Set3DShapeVisible(_data.BottomRightBoxIndex, false);
            targetHandle.Set3DShapeVisible(_data.BottomLeftBoxIndex, false);
        }

        public override void UpdateEpsilons(float zoomFactor)
        {
            var borderQuad = _data.BorderQuad;

            borderQuad.WireEps = _data.PlaneSlider.Settings.BorderLineHoverEps * zoomFactor;
            borderQuad.ExtrudeEps = borderQuad.WireEps;
        }

        public override void UpdateTransforms(float zoomFactor)
        {
            var targetQuad = _data.TargetQuad;
            var borderQuad = _data.BorderQuad;

            borderQuad.Center = targetQuad.Center;
            borderQuad.Rotation = targetQuad.Rotation;
            borderQuad.Size = targetQuad.Size;
        }
    }
}
