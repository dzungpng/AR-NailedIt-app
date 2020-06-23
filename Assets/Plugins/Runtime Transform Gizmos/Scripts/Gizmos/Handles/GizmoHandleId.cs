namespace RTG
{
    public static class GizmoHandleId
    {
        public static int None { get { return 0; } }

        #region Scene Gizmo
        public static int SceneGizmoMidCap { get { return 1; } }
        public static int SceneGizmoPositiveXAxis { get { return 2; } }
        public static int SceneGizmoPositiveYAxis { get { return 3; } }
        public static int SceneGizmoPositiveZAxis { get { return 4; } }
        public static int SceneGizmoNegativeXAxis { get { return 5; } }
        public static int SceneGizmoNegativeYAxis { get { return 6; } }
        public static int SceneGizmoNegativeZAxis { get { return 7; } }
        public static int SceneGizmoCamPrjSwitchLabel { get { return 8; } }
        #endregion

        #region Misc Gizmos
        public static int PXSlider { get { return 20; } }
        public static int PYSlider { get { return 21; } }
        public static int PZSlider { get { return 22; } }
        public static int NXSlider { get { return 23; } }
        public static int NYSlider { get { return 24; } }
        public static int NZSlider { get { return 25; } }

        public static int PXCap { get { return 26; } }
        public static int PYCap { get { return 27; } }
        public static int PZCap { get { return 28; } }
        public static int NXCap { get { return 29; } }
        public static int NYCap { get { return 30; } }
        public static int NZCap { get { return 31; } }

        public static int XRotationSlider { get { return 32; } }
        public static int YRotationSlider { get { return 33; } }
        public static int ZRotationSlider { get { return 34; } }

        public static int XYDblSlider { get { return 35; } }
        public static int YZDblSlider { get { return 36; } }
        public static int ZXDblSlider { get { return 37; } }

        public static int PCamXSlider { get { return 38; } }
        public static int PCamYSlider { get { return 39; } }
        public static int NCamXSlider { get { return 40; } }
        public static int NCamYSlider { get { return 41; } }

        public static int PCamXCap { get { return 42; } }
        public static int PCamYCap { get { return 43; } }
        public static int NCamXCap { get { return 44; } }
        public static int NCamYCap { get { return 45; } }

        public static int CamXYSlider { get { return 46; } }
        public static int CamXYRotation { get { return 47; } }
        public static int CamZRotation { get { return 48; } }

        public static int VertSnap { get { return 200; } }
        public static int MidScaleCap { get { return 201; } }
        public static int MidDisplayCap { get { return 202; } }
        public static int MidSnapCap { get { return 203; } }

        public static int BoxTickLeftCenter { get { return 300; } }
        public static int BoxTickRightCenter { get { return 301; } }
        public static int BoxTickFrontCenter { get { return 302; } }
        public static int BoxTickBackCenter { get { return 303; } }
        public static int BoxTickTopCenter { get { return 304; } }
        public static int BoxTickBottomCenter { get { return 305; } }

        public static int ExtrudeSliderLeft { get { return 400; } }
        public static int ExtrudeSliderRight { get { return 401; } }
        public static int ExtrudeSliderFront { get { return 402; } }
        public static int ExtrudeSliderBack { get { return 403; } }
        public static int ExtrudeSliderTop { get { return 404; } }
        public static int ExtrudeSliderBottom { get { return 405; } }

        public static int ExtrudeCapLeft { get { return 500; } }
        public static int ExtrudeCapRight { get { return 501; } }
        public static int ExtrudeCapFront { get { return 502; } }
        public static int ExtrudeCapBack { get { return 503; } }
        public static int ExtrudeCapTop { get { return 504; } }
        public static int ExtrudeCapBottom { get { return 505; } }

        public static int MirrorPlane { get { return 600; } }
        #endregion

        public static int SafeClientId { get { return 10000; } }
    }
}
