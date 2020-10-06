using UnityEngine;

namespace RTG
{
    public class GizmoThinRATriangle3DBorderController : GizmoRATriangle3DBorderController
    {
        public GizmoThinRATriangle3DBorderController(GizmoRATriangle3DBorderControllerData controllerData)
            : base(controllerData) { }

        public override void UpdateHandles()
        {
            _data.TargetHandle.Set3DShapeVisible(_data.BorderTriangleIndex, _data.Border.IsVisible);
        }

        public override void UpdateEpsilons(float zoomFactor)
        {
            _data.BorderTriangle.WireEps = zoomFactor * _data.PlaneSlider.Settings.BorderLineHoverEps;
            _data.BorderTriangle.ExtrudeEps = _data.BorderTriangle.WireEps;
        }

        public override void UpdateTransforms(float zoomFactor)
        {
            var targetTri = _data.TargetTriangle;
            var borderTri = _data.BorderTriangle;

            borderTri.Rotation = targetTri.Rotation;
            borderTri.RightAngleCorner = targetTri.RightAngleCorner;
            borderTri.XLength = targetTri.XLength;
            borderTri.XLengthSign = targetTri.XLengthSign;
            borderTri.YLength = targetTri.YLength;
            borderTri.YLengthSign = targetTri.YLengthSign;
        }
    }
}
