using UnityEngine;

namespace RTG
{
    public class GizmoBoxQuad3DBorderController : GizmoQuad3DBorderController
    {
        public GizmoBoxQuad3DBorderController(GizmoQuad3DBorderControllerData data)
            :base(data)
        {
        }

        public override void UpdateHandles()
        {
            GizmoHandle targetHandle = _data.TargetHandle;
            if (_data.Border.IsVisible)
            {
                targetHandle.Set3DShapeVisible(_data.TopBoxIndex, true);
                targetHandle.Set3DShapeVisible(_data.RightBoxIndex, true);
                targetHandle.Set3DShapeVisible(_data.BottomBoxIndex, true);
                targetHandle.Set3DShapeVisible(_data.LeftBoxIndex, true);

                targetHandle.Set3DShapeVisible(_data.TopLeftBoxIndex, true);
                targetHandle.Set3DShapeVisible(_data.TopRightBoxIndex, true);
                targetHandle.Set3DShapeVisible(_data.BottomRightBoxIndex, true);
                targetHandle.Set3DShapeVisible(_data.BottomLeftBoxIndex, true);
            }
            else
            {
                targetHandle.Set3DShapeVisible(_data.TopBoxIndex, false);
                targetHandle.Set3DShapeVisible(_data.RightBoxIndex, false);
                targetHandle.Set3DShapeVisible(_data.BottomBoxIndex, false);
                targetHandle.Set3DShapeVisible(_data.LeftBoxIndex, false);

                targetHandle.Set3DShapeVisible(_data.TopLeftBoxIndex, false);
                targetHandle.Set3DShapeVisible(_data.TopRightBoxIndex, false);
                targetHandle.Set3DShapeVisible(_data.BottomRightBoxIndex, false);
                targetHandle.Set3DShapeVisible(_data.BottomLeftBoxIndex, false);
            }

            targetHandle.Set3DShapeVisible(_data.BorderQuadIndex, false);
        }

        public override void UpdateEpsilons(float zoomFactor)
        {
            Vector3 sizeEps = Vector3Ex.FromValue(_data.PlaneSlider.Settings.BorderBoxHoverEps * zoomFactor);

            _data.TopLeftBox.SizeEps = sizeEps;
            _data.TopRightBox.SizeEps = sizeEps;
            _data.BottomRightBox.SizeEps = sizeEps;
            _data.BottomLeftBox.SizeEps = sizeEps;

            _data.TopBox.SizeEps = sizeEps;
            _data.BottomBox.SizeEps = sizeEps;
            _data.LeftBox.SizeEps = sizeEps;
            _data.RightBox.SizeEps = sizeEps;
        }

        public override void UpdateTransforms(float zoomFactor)
        {
            var lookAndFeel = _data.PlaneSlider.LookAndFeel;
            Vector3 quadRight = _data.TargetQuad.Right;
            Vector3 quadUp = _data.TargetQuad.Up;
            Vector3 quadNormal = _data.TargetQuad.Normal;
            float quadWidth = _data.TargetQuad.Width;
            float quadHeight = _data.TargetQuad.Height;

            var corners = _data.TargetQuad.GetCornerPoints();
            Vector3 topLeft = corners[(int)QuadCorner.TopLeft];
            Vector3 topRight = corners[(int)QuadCorner.TopRight];
            Vector3 bottomRight = corners[(int)QuadCorner.BottomRight];
            Vector3 bottomLeft = corners[(int)QuadCorner.BottomLeft];

            float boxHeight = _data.Border.GetRealBoxHeight(zoomFactor);
            float boxDepth = _data.Border.GetRealBoxDepth(zoomFactor);

            var topLeftBox = _data.TopLeftBox;
            topLeftBox.AlignHeight(quadNormal);
            topLeftBox.AlignWidth(quadRight);
            topLeftBox.Width = boxDepth;
            topLeftBox.Height = boxHeight;
            topLeftBox.Depth = boxDepth;
            topLeftBox.SetFaceCenter(BoxFace.Left, topLeft - quadUp * topLeftBox.GetSizeAlongDirection(quadUp) * 0.5f);

            var topRightBox = _data.TopRightBox;
            topRightBox.AlignHeight(quadNormal);
            topRightBox.AlignWidth(quadRight);
            topRightBox.Width = boxDepth;
            topRightBox.Height = boxHeight;
            topRightBox.Depth = boxDepth;
            topRightBox.SetFaceCenter(BoxFace.Right, topRight - quadUp * topRightBox.GetSizeAlongDirection(quadUp) * 0.5f);

            var bottomRightBox = _data.BottomRightBox;
            bottomRightBox.AlignHeight(quadNormal);
            bottomRightBox.AlignWidth(quadRight);
            bottomRightBox.Width = boxDepth;
            bottomRightBox.Height = boxHeight;
            bottomRightBox.Depth = boxDepth;
            bottomRightBox.SetFaceCenter(BoxFace.Right, bottomRight + quadUp * bottomRightBox.GetSizeAlongDirection(quadUp) * 0.5f);

            var bottomLeftBox = _data.BottomLeftBox;
            bottomLeftBox.AlignHeight(quadNormal);
            bottomLeftBox.AlignWidth(quadRight);
            bottomLeftBox.Width = boxDepth;
            bottomLeftBox.Height = boxHeight;
            bottomLeftBox.Depth = boxDepth;
            bottomLeftBox.SetFaceCenter(BoxFace.Left, bottomLeft + quadUp * bottomLeftBox.GetSizeAlongDirection(quadUp) * 0.5f);

            var topBox = _data.TopBox;
            topBox.AlignHeight(quadNormal);
            topBox.AlignWidth(quadRight);
            topBox.Width = quadWidth - 2.0f * topLeftBox.GetSizeAlongDirection(quadRight);
            topBox.Height = boxHeight;
            topBox.Depth = boxDepth;
            topBox.SetFaceCenter(BoxFace.Left, topLeftBox.GetFaceCenter(BoxFace.Right));

            var rightBox = _data.RightBox;
            rightBox.AlignHeight(quadNormal);
            rightBox.AlignWidth(quadUp);
            rightBox.Width = quadHeight - 2.0f * topRightBox.GetSizeAlongDirection(quadUp);
            rightBox.Height = boxHeight;
            rightBox.Depth = boxDepth;
            rightBox.SetFaceCenter(BoxFace.Right, topRightBox.GetFaceCenter(BoxFace.Back));

            var bottomBox = _data.BottomBox;
            bottomBox.AlignHeight(quadNormal);
            bottomBox.AlignWidth(quadRight);
            bottomBox.Width = quadWidth - 2.0f * bottomRightBox.GetSizeAlongDirection(quadRight);
            bottomBox.Height = boxHeight;
            bottomBox.Depth = boxDepth;
            bottomBox.SetFaceCenter(BoxFace.Left, bottomLeftBox.GetFaceCenter(BoxFace.Right));

            var leftBox = _data.LeftBox;
            leftBox.AlignHeight(quadNormal);
            leftBox.AlignWidth(quadUp);
            leftBox.Width = quadHeight - 2.0f * topLeftBox.GetSizeAlongDirection(quadUp);
            leftBox.Height = boxHeight;
            leftBox.Depth = boxDepth;
            leftBox.SetFaceCenter(BoxFace.Right, topLeftBox.GetFaceCenter(BoxFace.Back));
        }
    }
}
