using UnityEngine;

namespace RTG
{
    public static class RTSystemValues
    {
        public static Color XAxisColor { get { return ColorEx.FromByteValues(219, 62, 29, 255); } }
        public static Color YAxisColor { get { return ColorEx.FromByteValues(154, 243, 72, 255); } }
        public static Color ZAxisColor { get { return ColorEx.FromByteValues(58, 122, 248, 255); } }
        public static Color GridLineColor { get { return ColorEx.FromByteValues(128, 128, 128, 102); } }
        public static Color HoveredAxisColor { get { return ColorEx.FromByteValues(246, 242, 50, 255); } }
        public static Color CenterAxisColor { get { return ColorEx.FromByteValues(204, 204, 204, 255); } }
        public static float AxisAlpha { get { return 0.3f; } }
        public static Color CameraBkGradientFirstColor { get { return ColorEx.FromByteValues(71, 71, 71, 255); } }
        public static Color CameraBkGradientSecondColor { get { return Color.black; } }
        public static Color GuideFillColor { get { return new Color(0.5f, 0.5f, 0.5f, 0.1f); } }
        public static Color GuideBorderColor { get { return new Color(0.8f, 0.8f, 0.8f, 0.8f); } }
    }
}
