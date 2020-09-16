using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;
using System.Collections.Generic;

namespace RTG
{
    [Serializable]
    public class UniversalGizmoLookAndFeel3D : Settings
    {
        [SerializeField]
        private UniversalGizmoSettingsCategory _displayCategory = UniversalGizmoSettingsCategory.Move;

        #region Move
        [SerializeField]
        private GizmoCap2DLookAndFeel _mvVertSnapCapLookAndFeel = new GizmoCap2DLookAndFeel();

        [SerializeField]
        private bool[] _mvSglSliderVis = new bool[6];
        [SerializeField]
        private bool[] _mvSglSliderCapVis = new bool[6];
        [SerializeField]
        private bool[] _mvDblSliderVis = new bool[3];

        [SerializeField]
        private GizmoLineSlider3DLookAndFeel[] _mvSglSlidersLookAndFeel = new GizmoLineSlider3DLookAndFeel[6];
        [SerializeField]
        private GizmoPlaneSlider3DLookAndFeel[] _mvDblSlidersLookAndFeel = new GizmoPlaneSlider3DLookAndFeel[3];

        public float MvScale { get { return _mvSglSlidersLookAndFeel[0].Scale; } }
        public bool MvUseZoomFactor { get { return _mvSglSlidersLookAndFeel[0].UseZoomFactor; } }
        public float MvSliderLength { get { return _mvSglSlidersLookAndFeel[0].Length; } }
        public float MvBoxSliderHeight { get { return _mvSglSlidersLookAndFeel[0].BoxHeight; } }
        public float MvBoxSliderDepth { get { return _mvSglSlidersLookAndFeel[0].BoxDepth; } }
        public float MvCylinderSliderRadius { get { return _mvSglSlidersLookAndFeel[0].CylinderRadius; } }
        public float MvSliderBoxCapWidth { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.BoxWidth; } }
        public float MvSliderBoxCapHeight { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.BoxHeight; } }
        public float MvSliderBoxCapDepth { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.BoxDepth; } }
        public float MvSliderConeCapHeight { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.ConeHeight; } }
        public float MvSliderConeCapBaseRadius { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.ConeRadius; } }
        public float MvSliderPyramidCapWidth { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.PyramidWidth; } }
        public float MvSliderPyramidCapHeight { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.PyramidHeight; } }
        public float MvSliderPyramidCapDepth { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.PyramidDepth; } }
        public float MvSliderTriPrismCapWidth { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.TrPrismWidth; } }
        public float MvSliderTriPrismCapHeight { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.TrPrismHeight; } }
        public float MvSliderTriPrismCapDepth { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.TrPrismDepth; } }
        public float MvSliderSphereCapRadius { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.SphereRadius; } }
        public GizmoFillMode3D MvSliderFillMode { get { return _mvSglSlidersLookAndFeel[0].FillMode; } }
        public GizmoFillMode3D MvSliderCapFillMode { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.FillMode; } }
        public GizmoCap3DType MvSliderCapType { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.CapType; } }
        public GizmoShadeMode MvSliderShadeMode { get { return _mvSglSlidersLookAndFeel[0].ShadeMode; } }
        public GizmoShadeMode MvSliderCapShadeMode { get { return _mvSglSlidersLookAndFeel[0].CapLookAndFeel.ShadeMode; } }
        public GizmoLine3DType MvSliderLineType { get { return _mvSglSlidersLookAndFeel[0].LineType; } }
        public Color MvPXColor { get { return GetMvSglSliderLookAndFeel(0, AxisSign.Positive).Color; } }
        public Color MvNXColor { get { return GetMvSglSliderLookAndFeel(0, AxisSign.Negative).Color; } }
        public Color MvPYColor { get { return GetMvSglSliderLookAndFeel(1, AxisSign.Positive).Color; } }
        public Color MvNYColor { get { return GetMvSglSliderLookAndFeel(1, AxisSign.Negative).Color; } }
        public Color MvPZColor { get { return GetMvSglSliderLookAndFeel(2, AxisSign.Positive).Color; } }
        public Color MvNZColor { get { return GetMvSglSliderLookAndFeel(2, AxisSign.Negative).Color; } }
        public float MvDblSliderSize { get { return _mvDblSlidersLookAndFeel[0].QuadWidth; } }
        public float MvDblSliderBorderBoxHeight { get { return _mvDblSlidersLookAndFeel[0].BorderBoxHeight; } }
        public float MvDblSliderBorderBoxDepth { get { return _mvDblSlidersLookAndFeel[0].BorderBoxDepth; } }
        public float MvDblSliderFillAlpha { get { return _mvDblSlidersLookAndFeel[0].Color.a; } }
        public GizmoShadeMode MvDblSliderBorderShadeMode { get { return _mvDblSlidersLookAndFeel[0].BorderShadeMode; } }
        public GizmoQuad3DBorderType MvDblSliderBorderType { get { return _mvDblSlidersLookAndFeel[0].QuadBorderType; } }
        public GizmoFillMode3D MvDblSliderBorderFillMode { get { return _mvDblSlidersLookAndFeel[0].BorderFillMode; } }
        public float MvVertSnapCapQuadWidth { get { return _mvVertSnapCapLookAndFeel.QuadWidth; } }
        public float MvVertSnapCapQuadHeight { get { return _mvVertSnapCapLookAndFeel.QuadHeight; } }
        public float MvVertSnapCapCircleRadius { get { return _mvVertSnapCapLookAndFeel.CircleRadius; } }
        public Color MvVertSnapCapColor { get { return _mvVertSnapCapLookAndFeel.Color; } }
        public Color MvVertSnapCapBorderColor { get { return _mvVertSnapCapLookAndFeel.BorderColor; } }
        public Color MvVertSnapCapHoveredColor { get { return _mvVertSnapCapLookAndFeel.HoveredColor; } }
        public Color MvVertSnapCapHoveredBorderColor { get { return _mvVertSnapCapLookAndFeel.HoveredBorderColor; } }
        public GizmoFillMode2D MvVertSnapCapFillMode { get { return _mvVertSnapCapLookAndFeel.FillMode; } }
        public GizmoCap2DType MvVertSnapCapType { get { return _mvVertSnapCapLookAndFeel.CapType; } }
        public Color MvHoveredColor { get { return _mvSglSlidersLookAndFeel[0].HoveredColor; } }
        #endregion

        #region Rotate
        [SerializeField]
        private bool _isRtMidCapVisible = true;
        [SerializeField]
        private GizmoCap3DLookAndFeel _rtMidCapLookAndFeel = new GizmoCap3DLookAndFeel();

        [SerializeField]
        private bool[] _rtAxesVis = new bool[3];
        [SerializeField]
        private GizmoPlaneSlider3DLookAndFeel[] _rtAxesLookAndFeel = new GizmoPlaneSlider3DLookAndFeel[3];

        [SerializeField]
        private bool _isRtCamLookSliderVisible = true;
        [SerializeField]
        private float _rtCamLookSliderRadiusOffset = 0.65f;
        [SerializeField]
        private GizmoPlaneSlider2DLookAndFeel _rtCamLookSliderLookAndFeel = new GizmoPlaneSlider2DLookAndFeel();

        public float RtScale { get { return _rtMidCapLookAndFeel.Scale; } }
        public float RtRadius { get { return _rtMidCapLookAndFeel.SphereRadius; } }
        public bool RtUseZoomFactor { get { return _rtMidCapLookAndFeel.UseZoomFactor; } }
        public Color RtXBorderColor { get { return _rtAxesLookAndFeel[0].BorderColor; } }
        public Color RtYBorderColor { get { return _rtAxesLookAndFeel[1].BorderColor; } }
        public Color RtZBorderColor { get { return _rtAxesLookAndFeel[2].BorderColor; } }
        public Color RtHoveredColor { get { return _rtAxesLookAndFeel[0].HoveredColor; } }
        public float RtAxisTorusThickness { get { return _rtAxesLookAndFeel[0].BorderTorusThickness; } }
        public float RtAxisCylTorusWidth { get { return _rtAxesLookAndFeel[0].BorderCylTorusWidth; } }
        public float RtAxisCylTorusHeight { get { return _rtAxesLookAndFeel[0].BorderCylTorusHeight; } }
        public float RtAxisCullAlphaScale { get { return _rtAxesLookAndFeel[0].BorderCircleCullAlphaScale; } }
        public GizmoShadeMode RtShadeMode { get { return _rtMidCapLookAndFeel.ShadeMode; } }
        public GizmoCircle3DBorderType RtAxisBorderType { get { return _rtAxesLookAndFeel[0].CircleBorderType; } }
        public GizmoFillMode3D RtAxisBorderFillMode { get { return _rtAxesLookAndFeel[0].BorderFillMode; } }
        public int RtNumAxisTorusWireAxialSlices { get { return _rtAxesLookAndFeel[0].NumBorderTorusWireAxialSlices; } }
        public Color RtRotationArcColor { get { return _rtAxesLookAndFeel[0].RotationArcLookAndFeel.Color; } }
        public Color RtRotationArcBorderColor { get { return _rtAxesLookAndFeel[0].RotationArcLookAndFeel.BorderColor; } }
        public bool RtUseShortestRotationArc { get { return _rtAxesLookAndFeel[0].RotationArcLookAndFeel.UseShortestRotation; } }
        public bool IsRtRotationArcVisible { get { return _rtAxesLookAndFeel[0].IsRotationArcVisible; } }
        public Color RtMidCapColor { get { return _rtMidCapLookAndFeel.Color; } }
        public Color RtHoveredMidCapColor { get { return _rtMidCapLookAndFeel.HoveredColor; } }
        public bool IsRtMidCapVisible { get { return _isRtMidCapVisible; } }
        public bool IsRtMidCapBorderVisible { get { return _rtMidCapLookAndFeel.IsSphereBorderVisible; } }
        public float RtCamLookSliderRadiusOffset { get { return _rtCamLookSliderRadiusOffset; } }
        public Color RtCamLookSliderBorderColor { get { return _rtCamLookSliderLookAndFeel.BorderColor; } }
        public Color RtCamLookSliderHoveredBorderColor { get { return _rtCamLookSliderLookAndFeel.HoveredBorderColor; } }
        public GizmoPolygon2DBorderType RtCamLookSliderPolyBorderType { get { return _rtCamLookSliderLookAndFeel.PolygonBorderType; } }
        public float RtCamLookSliderPolyBorderThickness { get { return _rtCamLookSliderLookAndFeel.BorderPolyThickness; } }
        public bool IsRtCamLookSliderVisible { get { return _isRtCamLookSliderVisible; } }
        #endregion

        #region Scale
        [SerializeField]
        private GizmoCap3DLookAndFeel _scMidCapLookAndFeel = new GizmoCap3DLookAndFeel();

        [SerializeField]
        private bool[] _scSglSliderVis = new bool[6];
        [SerializeField]
        private bool[] _scSglSliderCapVis = new bool[6];
        [SerializeField]
        private bool[] _scDblSliderVis = new bool[3];
        [SerializeField]
        private bool _isScMidCapVisible = true;

        [SerializeField]
        private GizmoScaleGuideLookAndFeel _scScaleGuideLookAndFeel = new GizmoScaleGuideLookAndFeel();
        [SerializeField]
        private bool _isScScaleGuideVisible = true;

        [SerializeField]
        private GizmoLineSlider3DLookAndFeel[] _scSglSlidersLookAndFeel = new GizmoLineSlider3DLookAndFeel[6];
        [SerializeField]
        private GizmoPlaneSlider3DLookAndFeel[] _scDblSlidersLookAndFeel = new GizmoPlaneSlider3DLookAndFeel[3];

        public float ScScale { get { return _scMidCapLookAndFeel.Scale; } }
        public bool ScUseZoomFactor { get { return _scMidCapLookAndFeel.UseZoomFactor; } }
        public float ScSliderLength { get { return _scSglSlidersLookAndFeel[0].Length; } }
        public float ScBoxSliderHeight { get { return _scSglSlidersLookAndFeel[0].BoxHeight; } }
        public float ScBoxSliderDepth { get { return _scSglSlidersLookAndFeel[0].BoxDepth; } }
        public float ScCylinderSliderRadius { get { return _scSglSlidersLookAndFeel[0].CylinderRadius; } }
        public float ScSliderBoxCapWidth { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.BoxWidth; } }
        public float ScSliderBoxCapHeight { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.BoxHeight; } }
        public float ScSliderBoxCapDepth { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.BoxDepth; } }
        public float ScSliderConeCapHeight { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.ConeHeight; } }
        public float ScSliderConeCapBaseRadius { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.ConeRadius; } }
        public float ScSliderPyramidCapWidth { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.PyramidWidth; } }
        public float ScSliderPyramidCapHeight { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.PyramidHeight; } }
        public float ScSliderPyramidCapDepth { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.PyramidDepth; } }
        public float ScSliderTriPrismCapWidth { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.TrPrismWidth; } }
        public float ScSliderTriPrismCapHeight { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.TrPrismHeight; } }
        public float ScSliderTriPrismCapDepth { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.TrPrismDepth; } }
        public float ScSliderSphereCapRadius { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.SphereRadius; } }
        public GizmoFillMode3D ScSliderFillMode { get { return _scSglSlidersLookAndFeel[0].FillMode; } }
        public GizmoFillMode3D ScSliderCapFillMode { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.FillMode; } }
        public GizmoCap3DType ScSliderCapType { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.CapType; } }
        public GizmoShadeMode ScSliderShadeMode { get { return _scSglSlidersLookAndFeel[0].ShadeMode; } }
        public GizmoShadeMode ScSliderCapShadeMode { get { return _scSglSlidersLookAndFeel[0].CapLookAndFeel.ShadeMode; } }
        public GizmoLine3DType ScSliderLineType { get { return _scSglSlidersLookAndFeel[0].LineType; } }
        public Color ScPXColor { get { return GetScSglSliderLookAndFeel(0, AxisSign.Positive).Color; } }
        public Color ScNXColor { get { return GetScSglSliderLookAndFeel(0, AxisSign.Negative).Color; } }
        public Color ScPYColor { get { return GetScSglSliderLookAndFeel(1, AxisSign.Positive).Color; } }
        public Color ScNYColor { get { return GetScSglSliderLookAndFeel(1, AxisSign.Negative).Color; } }
        public Color ScPZColor { get { return GetScSglSliderLookAndFeel(2, AxisSign.Positive).Color; } }
        public Color ScNZColor { get { return GetScSglSliderLookAndFeel(2, AxisSign.Negative).Color; } }
        public float ScDblSliderSize { get { return _scDblSlidersLookAndFeel[0].RATriangleXLength; } }
        public float ScDblSliderFillAlpha { get { return _scDblSlidersLookAndFeel[0].Color.a; } }
        public float ScMidCapBoxWidth { get { return _scMidCapLookAndFeel.BoxWidth; } }
        public float ScMidCapBoxHeight { get { return _scMidCapLookAndFeel.BoxHeight; } }
        public float ScMidCapBoxDepth { get { return _scMidCapLookAndFeel.BoxDepth; } }
        public float ScMidCapSphereRadius { get { return _scMidCapLookAndFeel.SphereRadius; } }
        public GizmoCap3DType ScMidCapType { get { return _scMidCapLookAndFeel.CapType; } }
        public GizmoShadeMode ScMidCapShadeMode { get { return _scMidCapLookAndFeel.ShadeMode; } }
        public GizmoFillMode3D ScMidCapFillMode { get { return _scMidCapLookAndFeel.FillMode; } }
        public bool IsScMidCapVisible { get { return _isScMidCapVisible; } }
        public Color ScMidCapColor { get { return _scMidCapLookAndFeel.Color; } }
        public Color ScHoveredColor { get { return _scSglSlidersLookAndFeel[0].HoveredColor; } }
        public bool IsScScaleGuideVisible { get { return _isScScaleGuideVisible; } }
        public float ScScaleGuideAxisLength { get { return _scScaleGuideLookAndFeel.AxisLength; } }
        #endregion

        public UniversalGizmoSettingsCategory DisplayCategory { get { return _displayCategory; } set { _displayCategory = value; } }

        public UniversalGizmoLookAndFeel3D()
        {
            // Move
            for (int axisIndex = 0; axisIndex < _mvSglSlidersLookAndFeel.Length; ++axisIndex)
            {
                _mvSglSlidersLookAndFeel[axisIndex] = new GizmoLineSlider3DLookAndFeel();
            }

            for (int axisIndex = 0; axisIndex < _mvDblSlidersLookAndFeel.Length; ++axisIndex)
            {
                _mvDblSlidersLookAndFeel[axisIndex] = new GizmoPlaneSlider3DLookAndFeel();
            }

            SetMvSliderLength(5.5f);
            SetMvAxisColor(0, RTSystemValues.XAxisColor);
            SetMvAxisColor(1, RTSystemValues.YAxisColor);
            SetMvAxisColor(2, RTSystemValues.ZAxisColor);
            SetMvHoveredColor(RTSystemValues.HoveredAxisColor);

            SetMvDblSliderFillAlpha(RTSystemValues.AxisAlpha);
            SetMvDblSliderSize(1.5f);
            SetMvDblSliderVisible(PlaneId.XY, true);
            SetMvDblSliderVisible(PlaneId.YZ, true);
            SetMvDblSliderVisible(PlaneId.ZX, true);

            SetMvSliderVisible(0, AxisSign.Positive, true);
            SetMvSliderCapVisible(0, AxisSign.Positive, true);
            SetMvSliderVisible(1, AxisSign.Positive, true);
            SetMvSliderCapVisible(1, AxisSign.Positive, true);
            SetMvSliderVisible(2, AxisSign.Positive, true);
            SetMvSliderCapVisible(2, AxisSign.Positive, true);

            SetMvVertSnapCapFillMode(GizmoFillMode2D.Border);
            SetMvVertSnapCapColor(ColorEx.KeepAllButAlpha(Color.white, RTSystemValues.AxisAlpha));
            SetMvVertSnapCapBorderColor(Color.white);
            SetMvVertSnapCapHoveredColor(ColorEx.KeepAllButAlpha(RTSystemValues.HoveredAxisColor, RTSystemValues.AxisAlpha));
            SetMvVertSnapCapHoveredBorderColor(RTSystemValues.HoveredAxisColor);

            // Rotation
            for (int sliderIndex = 0; sliderIndex < _rtAxesLookAndFeel.Length; ++sliderIndex)
            {
                _rtAxesLookAndFeel[sliderIndex] = new GizmoPlaneSlider3DLookAndFeel();
                _rtAxesLookAndFeel[sliderIndex].PlaneType = GizmoPlane3DType.Circle;
            }

            SetRtAxisVisible(0, true);
            SetRtAxisVisible(1, true);
            SetRtAxisVisible(2, true);

            _rtMidCapLookAndFeel.CapType = GizmoCap3DType.Sphere;
            _rtCamLookSliderLookAndFeel.PlaneType = GizmoPlane2DType.Polygon;

            Color midCapColor = new Color(0.3f, 0.3f, 0.3f, 0.12f);
            SetRtMidCapColor(midCapColor);
            SetRtHoveredMidCapColor(midCapColor);
            SetRtMidCapBorderVisible(true);
            SetRtMidCapBorderColor(Color.white);
            SetRtRadius(6.5f);

            SetRtAxisBorderColor(0, RTSystemValues.XAxisColor);
            SetRtAxisBorderColor(1, RTSystemValues.YAxisColor);
            SetRtAxisBorderColor(2, RTSystemValues.ZAxisColor);
            SetRtHoveredColor(RTSystemValues.HoveredAxisColor);
            SetRtCamLookSliderPolyBorderThickness(4.0f);
            SetRtCamLookSliderBorderColor(Color.white);
            SetRtCamLookSliderHoveredBorderColor(RTSystemValues.HoveredAxisColor);
            SetRtNumAxisTorusWireAxialSlices(2);

            // Scale
            for (int axisIndex = 0; axisIndex < _scSglSlidersLookAndFeel.Length; ++axisIndex)
            {
                _scSglSlidersLookAndFeel[axisIndex] = new GizmoLineSlider3DLookAndFeel();
            }

            for (int axisIndex = 0; axisIndex < _scDblSlidersLookAndFeel.Length; ++axisIndex)
            {
                _scDblSlidersLookAndFeel[axisIndex] = new GizmoPlaneSlider3DLookAndFeel();
                _scDblSlidersLookAndFeel[axisIndex].PlaneType = GizmoPlane3DType.RATriangle;
            }

            SetScSliderCapType(GizmoCap3DType.Box);
            SetScSliderLength(5.5f);

            SetScAxisColor(0, RTSystemValues.XAxisColor);
            SetScAxisColor(1, RTSystemValues.YAxisColor);
            SetScAxisColor(2, RTSystemValues.ZAxisColor);
            SetScHoveredColor(RTSystemValues.HoveredAxisColor);

            SetScSliderVisible(0, AxisSign.Positive, true);
            SetScSliderCapVisible(0, AxisSign.Positive, true);
            SetScSliderVisible(1, AxisSign.Positive, true);
            SetScSliderCapVisible(1, AxisSign.Positive, true);
            SetScSliderVisible(2, AxisSign.Positive, true);
            SetScSliderCapVisible(2, AxisSign.Positive, true);

            SetScMidCapColor(RTSystemValues.CenterAxisColor);
            SetScMidCapType(GizmoCap3DType.Box);
            SetScMidCapBoxWidth(0.9f);
            SetScMidCapBoxHeight(0.9f);
            SetScMidCapBoxDepth(0.9f);
            SetScMidCapSphereRadius(0.65f);

            SetScDblSliderFillAlpha(RTSystemValues.AxisAlpha);
            SetScDblSliderSize(1.9f);
            SetScDblSliderVisible(PlaneId.XY, true);
            SetScDblSliderVisible(PlaneId.YZ, true);
            SetScDblSliderVisible(PlaneId.ZX, true);
        }

        #region Move
        public bool IsMvVertSnapCapTypeAllowed(GizmoCap2DType capType)
        {
            return capType == GizmoCap2DType.Circle || capType == GizmoCap2DType.Quad;
        }

        public List<Enum> GetAllowedMvVertSnapCapTypes()
        {
            return new List<Enum>() { GizmoCap2DType.Circle, GizmoCap2DType.Quad };
        }

        public void SetMvVertSnapCapType(GizmoCap2DType capType)
        {
            if (IsMvVertSnapCapTypeAllowed(capType))
            {
                _mvVertSnapCapLookAndFeel.CapType = capType;
            }
        }

        public void SetMvVertSnapCapQuadWidth(float width)
        {
            _mvVertSnapCapLookAndFeel.QuadWidth = width;
        }

        public void SetMvVertSnapCapQuadHeight(float height)
        {
            _mvVertSnapCapLookAndFeel.QuadHeight = height;
        }

        public void SetMvVertSnapCapCircleRadius(float radius)
        {
            _mvVertSnapCapLookAndFeel.CircleRadius = radius;
        }

        public void SetMvVertSnapCapFillMode(GizmoFillMode2D fillMode)
        {
            _mvVertSnapCapLookAndFeel.FillMode = fillMode;
        }

        public void SetMvVertSnapCapColor(Color color)
        {
            _mvVertSnapCapLookAndFeel.Color = color;
        }

        public void SetMvVertSnapCapBorderColor(Color color)
        {
            _mvVertSnapCapLookAndFeel.BorderColor = color;
        }

        public void SetMvVertSnapCapHoveredColor(Color color)
        {
            _mvVertSnapCapLookAndFeel.HoveredColor = color;
        }

        public void SetMvVertSnapCapHoveredBorderColor(Color color)
        {
            _mvVertSnapCapLookAndFeel.HoveredBorderColor = color;
        }

        public bool IsMvSliderVisible(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _mvSglSliderVis[axisIndex];
            else return _mvSglSliderVis[3 + axisIndex];
        }

        public bool IsMvDblSliderVisible(PlaneId planeId)
        {
            return _mvDblSliderVis[(int)planeId];
        }

        public bool IsMvSliderCapVisible(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _mvSglSliderCapVis[axisIndex];
            else return _mvSglSliderCapVis[3 + axisIndex];
        }

        public bool IsMvPositiveSliderVisible(int axisIndex)
        {
            return _mvSglSliderVis[axisIndex];
        }

        public bool IsMvPositiveSliderCapVisible(int axisIndex)
        {
            return _mvSglSliderCapVis[axisIndex];
        }

        public bool IsMvNegativeSliderVisible(int axisIndex)
        {
            return _mvSglSliderVis[3 + axisIndex];
        }

        public bool IsMvNegativeSliderCapVisible(int axisIndex)
        {
            return _mvSglSliderCapVis[3 + axisIndex];
        }

        public void SetMvSliderVisible(int axisIndex, AxisSign axisSign, bool isVisible)
        {
            if (axisSign == AxisSign.Positive) _mvSglSliderVis[axisIndex] = isVisible;
            else _mvSglSliderVis[3 + axisIndex] = isVisible;
        }

        public void SetMvDblSliderVisible(PlaneId planeId, bool isVisible)
        {
            _mvDblSliderVis[(int)planeId] = isVisible;
        }

        public void SetMvSliderCapVisible(int axisIndex, AxisSign axisSign, bool isVisible)
        {
            if (axisSign == AxisSign.Positive) _mvSglSliderCapVis[axisIndex] = isVisible;
            else _mvSglSliderCapVis[3 + axisIndex] = isVisible;
        }

        public void SetMvPositiveSliderVisible(int axisIndex, bool isVisible)
        {
            _mvSglSliderVis[axisIndex] = isVisible;
        }

        public void SetMvPositiveSliderCapVisible(int axisIndex, bool isVisible)
        {
            _mvSglSliderCapVis[axisIndex] = isVisible;
        }

        public void SetMvNegativeSliderVisible(int axisIndex, bool isVisible)
        {
            _mvSglSliderVis[3 + axisIndex] = isVisible;
        }

        public void SetMvNegativeSliderCapVisible(int axisIndex, bool isVisible)
        {
            _mvSglSliderCapVis[3 + axisIndex] = isVisible;
        }

        public void SetMvSliderLength(float axisLength)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.Length = axisLength;
        }

        public void SetMvSliderLineType(GizmoLine3DType lineType)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.LineType = lineType;
        }

        public void SetMvDblSliderBorderType(GizmoQuad3DBorderType borderType)
        {
            foreach (var lookAndFeel in _mvDblSlidersLookAndFeel)
                lookAndFeel.QuadBorderType = borderType;
        }

        public void SetMvDblSliderBorderBoxHeight(float height)
        {
            foreach (var lookAndFeel in _mvDblSlidersLookAndFeel)
                lookAndFeel.BorderBoxHeight = height;
        }

        public void SetMvDblSliderBorderBoxDepth(float depth)
        {
            foreach (var lookAndFeel in _mvDblSlidersLookAndFeel)
                lookAndFeel.BorderBoxDepth = depth;
        }

        public void SetMvBoxSliderHeight(float height)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.BoxHeight = height;
        }

        public void SetMvBoxSliderDepth(float depth)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.BoxDepth = depth;
        }

        public void SetMvCylinderSliderRadius(float radius)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CylinderRadius = radius;
        }

        public void SetMvDblSliderSize(float size)
        {
            foreach (var lookAndFeel in _mvDblSlidersLookAndFeel)
            {
                lookAndFeel.QuadWidth = size;
                lookAndFeel.QuadHeight = size;
            }
        }

        public void SetMvScale(float scale)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
            {
                lookAndFeel.Scale = scale;
                lookAndFeel.CapLookAndFeel.Scale = scale;
            }

            foreach (var lookAndFeel in _mvDblSlidersLookAndFeel)
            {
                lookAndFeel.Scale = scale;
            }
        }

        public void SetMvUseZoomFactor(bool useZoomFactor)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
            {
                lookAndFeel.UseZoomFactor = useZoomFactor;
                lookAndFeel.CapLookAndFeel.UseZoomFactor = useZoomFactor;
            }

            foreach (var lookAndFeel in _mvDblSlidersLookAndFeel)
                lookAndFeel.UseZoomFactor = useZoomFactor;
        }

        public void SetMvAxisColor(int axisIndex, Color color)
        {
            GetMvSglSliderLookAndFeel(axisIndex, AxisSign.Positive).Color = color;
            GetMvSglSliderLookAndFeel(axisIndex, AxisSign.Positive).CapLookAndFeel.Color = color;
            GetMvSglSliderLookAndFeel(axisIndex, AxisSign.Negative).Color = color;
            GetMvSglSliderLookAndFeel(axisIndex, AxisSign.Negative).CapLookAndFeel.Color = color;

            GizmoPlaneSlider3DLookAndFeel dblLookAndFeel = null;
            if (axisIndex == 0) dblLookAndFeel = GetMvDblSliderLookAndFeel(PlaneId.YZ);
            else
            if (axisIndex == 1) dblLookAndFeel = GetMvDblSliderLookAndFeel(PlaneId.ZX);
            else
            if (axisIndex == 2) dblLookAndFeel = GetMvDblSliderLookAndFeel(PlaneId.XY);

            dblLookAndFeel.Color = ColorEx.KeepAllButAlpha(color, dblLookAndFeel.Color.a);
            dblLookAndFeel.BorderColor = color;
        }

        public void SetMvDblSliderFillAlpha(float alpha)
        {
            alpha = Mathf.Clamp(alpha, 0.0f, 1.0f);
            foreach (var lookAndFeel in _mvDblSlidersLookAndFeel)
            {
                lookAndFeel.Color = ColorEx.KeepAllButAlpha(lookAndFeel.Color, alpha);
                lookAndFeel.HoveredColor = ColorEx.KeepAllButAlpha(lookAndFeel.HoveredColor, alpha);
            }
        }

        public void SetMvHoveredColor(Color hoveredColor)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
            {
                lookAndFeel.HoveredColor = hoveredColor;
                lookAndFeel.CapLookAndFeel.HoveredColor = hoveredColor;
            }

            foreach (var lookAndFeel in _mvDblSlidersLookAndFeel)
            {
                lookAndFeel.HoveredBorderColor = hoveredColor;
                lookAndFeel.HoveredColor = ColorEx.KeepAllButAlpha(hoveredColor, lookAndFeel.Color.a);
            }
        }

        public void SetMvSliderShadeMode(GizmoShadeMode shadeMode)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.ShadeMode = shadeMode;
        }

        public void SetMvSliderCapShadeMode(GizmoShadeMode shadeMode)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.ShadeMode = shadeMode;
        }

        public void SetMvDblSliderBorderShadeMode(GizmoShadeMode shadeMode)
        {
            foreach (var lookAndFeel in _mvDblSlidersLookAndFeel)
                lookAndFeel.BorderShadeMode = shadeMode;
        }

        public void SetMvSliderCapType(GizmoCap3DType capType)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.CapType = capType;
        }

        public void SetMvSliderFillMode(GizmoFillMode3D fillMode)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.FillMode = fillMode;
        }

        public void SetMvSliderCapFillMode(GizmoFillMode3D fillMode)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.FillMode = fillMode;
        }

        public void SetMvDblSliderBorderFillMode(GizmoFillMode3D fillMode)
        {
            foreach (var lookAndFeel in _mvDblSlidersLookAndFeel)
                lookAndFeel.BorderFillMode = fillMode;
        }

        public void SetMvSliderBoxCapWidth(float width)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.BoxWidth = width;
        }

        public void SetMvSliderBoxCapHeight(float height)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.BoxHeight = height;
        }

        public void SetMvSliderBoxCapDepth(float depth)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.BoxDepth = depth;
        }

        public void SetMvSliderConeCapHeight(float height)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.ConeHeight = height;
        }

        public void SetMvSliderConeCapBaseRadius(float radius)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.ConeRadius = radius;
        }

        public void SetMvSliderPyramidCapWidth(float width)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.PyramidWidth = width;
        }

        public void SetMvSliderPyramidCapHeight(float height)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.PyramidHeight = height;
        }

        public void SetMvSliderPyramidCapDepth(float depth)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.PyramidDepth = depth;
        }

        public void SetMvSliderTriPrismCapWidth(float width)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.TrPrismWidth = width;
        }

        public void SetMvSliderTriPrismCapHeight(float height)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.TrPrismHeight = height;
        }

        public void SetMvSliderTriPrismCapDepth(float depth)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.TrPrismDepth = depth;
        }

        public void SetMvSliderSphereCapRadius(float radius)
        {
            foreach (var lookAndFeel in _mvSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.SphereRadius = radius;
        }

        public void ConnectMvSliderLookAndFeel(GizmoLineSlider3D slider, int axisIndex, AxisSign axisSign)
        {
            slider.SharedLookAndFeel = GetMvSglSliderLookAndFeel(axisIndex, axisSign);
        }

        public void ConnectMvDblSliderLookAndFeel(GizmoPlaneSlider3D dblSlider, PlaneId planeId)
        {
            dblSlider.SharedLookAndFeel = GetMvDblSliderLookAndFeel(planeId);
        }

        public void ConnectMvVertSnapCapLookAndFeel(GizmoCap2D vertSnapCap)
        {
            vertSnapCap.SharedLookAndFeel = _mvVertSnapCapLookAndFeel;
        }

        public void Inherit(MoveGizmoLookAndFeel3D lookAndFeel)
        {
            SetMvAxisColor(0, lookAndFeel.XColor);
            SetMvAxisColor(1, lookAndFeel.YColor);
            SetMvAxisColor(2, lookAndFeel.ZColor);
            SetMvBoxSliderDepth(lookAndFeel.BoxSliderDepth);
            SetMvBoxSliderHeight(lookAndFeel.BoxSliderHeight);
            SetMvCylinderSliderRadius(lookAndFeel.CylinderSliderRadius);
            SetMvDblSliderBorderBoxDepth(lookAndFeel.DblSliderBorderBoxDepth);
            SetMvDblSliderBorderBoxHeight(lookAndFeel.DblSliderBorderBoxHeight);
            SetMvDblSliderBorderFillMode(lookAndFeel.DblSliderBorderFillMode);
            SetMvDblSliderBorderShadeMode(lookAndFeel.DblSliderBorderShadeMode);
            SetMvDblSliderBorderType(lookAndFeel.DblSliderBorderType);
            SetMvDblSliderFillAlpha(lookAndFeel.DblSliderFillAlpha);
            SetMvDblSliderSize(lookAndFeel.DblSliderSize);
            SetMvDblSliderVisible(PlaneId.XY, lookAndFeel.IsDblSliderVisible(PlaneId.XY));
            SetMvDblSliderVisible(PlaneId.YZ, lookAndFeel.IsDblSliderVisible(PlaneId.YZ));
            SetMvDblSliderVisible(PlaneId.ZX, lookAndFeel.IsDblSliderVisible(PlaneId.ZX));
            SetMvHoveredColor(lookAndFeel.HoveredColor);
            SetMvScale(lookAndFeel.Scale);
            SetMvSliderBoxCapDepth(lookAndFeel.SliderBoxCapDepth);
            SetMvSliderBoxCapHeight(lookAndFeel.SliderBoxCapHeight);
            SetMvSliderBoxCapWidth(lookAndFeel.SliderBoxCapWidth);
            SetMvSliderCapFillMode(lookAndFeel.SliderCapFillMode);
            SetMvSliderCapShadeMode(lookAndFeel.SliderCapShadeMode);
            SetMvSliderCapType(lookAndFeel.SliderCapType);
            SetMvSliderCapVisible(0, AxisSign.Positive, lookAndFeel.IsSliderCapVisible(0, AxisSign.Positive));
            SetMvSliderCapVisible(1, AxisSign.Positive, lookAndFeel.IsSliderCapVisible(1, AxisSign.Positive));
            SetMvSliderCapVisible(2, AxisSign.Positive, lookAndFeel.IsSliderCapVisible(2, AxisSign.Positive));
            SetMvSliderCapVisible(0, AxisSign.Negative, lookAndFeel.IsSliderCapVisible(0, AxisSign.Negative));
            SetMvSliderCapVisible(1, AxisSign.Negative, lookAndFeel.IsSliderCapVisible(1, AxisSign.Negative));
            SetMvSliderCapVisible(2, AxisSign.Negative, lookAndFeel.IsSliderCapVisible(2, AxisSign.Negative));
            SetMvSliderConeCapHeight(lookAndFeel.SliderConeCapHeight);
            SetMvSliderConeCapBaseRadius(lookAndFeel.SliderConeCapBaseRadius);
            SetMvSliderFillMode(lookAndFeel.SliderFillMode);
            SetMvSliderLength(lookAndFeel.SliderLength);
            SetMvSliderLineType(lookAndFeel.SliderLineType);
            SetMvSliderPyramidCapDepth(lookAndFeel.SliderPyramidCapDepth);
            SetMvSliderPyramidCapHeight(lookAndFeel.SliderPyramidCapHeight);
            SetMvSliderPyramidCapWidth(lookAndFeel.SliderPyramidCapWidth);
            SetMvSliderShadeMode(lookAndFeel.SliderShadeMode);
            SetMvSliderSphereCapRadius(lookAndFeel.SliderSphereCapRadius);
            SetMvSliderTriPrismCapDepth(lookAndFeel.SliderTriPrismCapDepth);
            SetMvSliderTriPrismCapHeight(lookAndFeel.SliderTriPrismCapHeight);
            SetMvSliderTriPrismCapWidth(lookAndFeel.SliderTriPrismCapWidth);
            SetMvSliderVisible(0, AxisSign.Positive, lookAndFeel.IsSliderVisible(0, AxisSign.Positive));
            SetMvSliderVisible(1, AxisSign.Positive, lookAndFeel.IsSliderVisible(1, AxisSign.Positive));
            SetMvSliderVisible(2, AxisSign.Positive, lookAndFeel.IsSliderVisible(2, AxisSign.Positive));
            SetMvSliderVisible(0, AxisSign.Negative, lookAndFeel.IsSliderVisible(0, AxisSign.Negative));
            SetMvSliderVisible(1, AxisSign.Negative, lookAndFeel.IsSliderVisible(1, AxisSign.Negative));
            SetMvSliderVisible(2, AxisSign.Negative, lookAndFeel.IsSliderVisible(2, AxisSign.Negative));
            SetMvUseZoomFactor(lookAndFeel.UseZoomFactor);
            SetMvVertSnapCapBorderColor(lookAndFeel.VertSnapCapBorderColor);
            SetMvVertSnapCapCircleRadius(lookAndFeel.VertSnapCapCircleRadius);
            SetMvVertSnapCapColor(lookAndFeel.VertSnapCapColor);
            SetMvVertSnapCapFillMode(lookAndFeel.VertSnapCapFillMode);
            SetMvVertSnapCapHoveredBorderColor(lookAndFeel.VertSnapCapHoveredBorderColor);
            SetMvVertSnapCapHoveredColor(lookAndFeel.VertSnapCapHoveredColor);
            SetMvVertSnapCapQuadHeight(lookAndFeel.VertSnapCapQuadHeight);
            SetMvVertSnapCapQuadWidth(lookAndFeel.VertSnapCapQuadWidth);
            SetMvVertSnapCapType(lookAndFeel.VertSnapCapType);
        }

        private GizmoLineSlider3DLookAndFeel GetMvSglSliderLookAndFeel(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _mvSglSlidersLookAndFeel[axisIndex];
            else return _mvSglSlidersLookAndFeel[3 + axisIndex];
        }

        private GizmoPlaneSlider3DLookAndFeel GetMvDblSliderLookAndFeel(PlaneId planeId)
        {
            return _mvDblSlidersLookAndFeel[(int)planeId];
        }
        #endregion

        #region Rotate
        public bool IsRtAxisVisible(int axisIndex)
        {
            return _rtAxesVis[axisIndex];
        }

        public void SetRtAxisVisible(int axisIndex, bool isVisible)
        {
            _rtAxesVis[axisIndex] = isVisible;
        }

        public void SetRtShadeMode(GizmoShadeMode shadeMode)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
            {
                lookAndFeel.ShadeMode = shadeMode;
                lookAndFeel.BorderShadeMode = shadeMode;
            }

            _rtMidCapLookAndFeel.ShadeMode = shadeMode;
        }

        public void SetRtAxisBorderFillMode(GizmoFillMode3D fillMode)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
                lookAndFeel.BorderFillMode = fillMode;
        }

        public void SetRtNumAxisTorusWireAxialSlices(int numSlices)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
                lookAndFeel.NumBorderTorusWireAxialSlices = numSlices;
        }

        public void SetRtUseZoomFactor(bool useZoomFactor)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
                lookAndFeel.UseZoomFactor = useZoomFactor;

            _rtMidCapLookAndFeel.UseZoomFactor = useZoomFactor;
        }

        public void SetRtScale(float scale)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
                lookAndFeel.Scale = scale;

            _rtMidCapLookAndFeel.Scale = scale;
        }

        public void SetRtRadius(float radius)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
                lookAndFeel.CircleRadius = radius;

            _rtMidCapLookAndFeel.SphereRadius = radius;
        }

        public void SetRtAxisBorderCullAlphaScale(float scale)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
                lookAndFeel.BorderCircleCullAlphaScale = scale;
        }

        public void SetRtAxisBorderType(GizmoCircle3DBorderType borderType)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
                lookAndFeel.CircleBorderType = borderType;
        }

        public void SetRtAxisTorusThickness(float thickness)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
                lookAndFeel.BorderTorusThickness = thickness;
        }

        public void SetRtAxisCylTorusWidth(float width)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
                lookAndFeel.BorderCylTorusWidth = width;
        }

        public void SetRtAxisCylTorusHeight(float height)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
                lookAndFeel.BorderCylTorusHeight = height;
        }

        public void SetRtMidCapVisible(bool isVisible)
        {
            _isRtMidCapVisible = isVisible;
        }

        public void SetRtMidCapColor(Color color)
        {
            _rtMidCapLookAndFeel.Color = color;
        }

        public void SetRtHoveredMidCapColor(Color color)
        {
            _rtMidCapLookAndFeel.HoveredColor = color;
        }

        public void SetRtMidCapBorderVisible(bool isVisible)
        {
            _rtMidCapLookAndFeel.IsSphereBorderVisible = isVisible;
        }

        public void SetRtMidCapBorderColor(Color color)
        {
            _rtMidCapLookAndFeel.SphereBorderColor = color;
        }

        public void SetRtAxisBorderColor(int axisIndex, Color color)
        {
            _rtAxesLookAndFeel[axisIndex].BorderColor = color;
        }

        public void SetRtHoveredColor(Color hoveredColor)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
            {
                lookAndFeel.HoveredColor = hoveredColor;
                lookAndFeel.HoveredBorderColor = hoveredColor;
            }
        }

        public void SetRtRotationArcColor(Color color)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
                lookAndFeel.RotationArcLookAndFeel.Color = color;

            _rtCamLookSliderLookAndFeel.RotationArcLookAndFeel.Color = color;
        }

        public void SetRtRotationArcBorderColor(Color color)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
                lookAndFeel.RotationArcLookAndFeel.BorderColor = color;

            _rtCamLookSliderLookAndFeel.RotationArcLookAndFeel.BorderColor = color;
        }

        public void SetRtUseShortestRotationArc(bool useShortest)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
                lookAndFeel.RotationArcLookAndFeel.UseShortestRotation = useShortest;

            _rtCamLookSliderLookAndFeel.RotationArcLookAndFeel.UseShortestRotation = useShortest;
        }

        public void SetRtRotationArcVisible(bool isVisible)
        {
            foreach (var lookAndFeel in _rtAxesLookAndFeel)
                lookAndFeel.IsRotationArcVisible = isVisible;

            _rtCamLookSliderLookAndFeel.IsRotationArcVisible = isVisible;
        }

        public void SetRtCamLookSliderRadiusOffset(float offset)
        {
            _rtCamLookSliderRadiusOffset = Mathf.Max(0.0f, offset);
        }

        public void SetRtCamLookSliderBorderColor(Color color)
        {
            _rtCamLookSliderLookAndFeel.BorderColor = color;
        }

        public void SetRtCamLookSliderHoveredBorderColor(Color color)
        {
            _rtCamLookSliderLookAndFeel.HoveredBorderColor = color;
        }

        public void SetRtCamLookSliderVisible(bool isVisible)
        {
            _isRtCamLookSliderVisible = isVisible;
        }

        public void SetRtCamLookSliderPolyBorderType(GizmoPolygon2DBorderType polyBorderType)
        {
            _rtCamLookSliderLookAndFeel.PolygonBorderType = polyBorderType;
        }

        public void SetRtCamLookSliderPolyBorderThickness(float thickness)
        {
            _rtCamLookSliderLookAndFeel.BorderPolyThickness = thickness;
        }

        public void ConnectRtSliderLookAndFeel(GizmoPlaneSlider3D slider, int axisIndex)
        {
            slider.SharedLookAndFeel = _rtAxesLookAndFeel[axisIndex];
        }

        public void ConnectRtMidCapLookAndFeel(GizmoCap3D cap)
        {
            cap.SharedLookAndFeel = _rtMidCapLookAndFeel;
        }

        public void ConnectRtCamLookSliderLookAndFeel(GizmoPlaneSlider2D slider)
        {
            slider.SharedLookAndFeel = _rtCamLookSliderLookAndFeel;
        }

        public void Inherit(RotationGizmoLookAndFeel3D lookAndFeel)
        {
            SetRtAxisBorderColor(0, lookAndFeel.XBorderColor);
            SetRtAxisBorderColor(1, lookAndFeel.YBorderColor);
            SetRtAxisBorderColor(2, lookAndFeel.ZBorderColor);
            SetRtAxisBorderCullAlphaScale(lookAndFeel.AxisCullAlphaScale);
            SetRtAxisBorderFillMode(lookAndFeel.AxisBorderFillMode);
            SetRtAxisBorderType(lookAndFeel.AxisBorderType);
            SetRtAxisCylTorusHeight(lookAndFeel.AxisCylTorusHeight);
            SetRtAxisCylTorusWidth(lookAndFeel.AxisCylTorusWidth);
            SetRtAxisTorusThickness(lookAndFeel.AxisTorusThickness);
            SetRtAxisVisible(0, lookAndFeel.IsAxisVisible(0));
            SetRtAxisVisible(1, lookAndFeel.IsAxisVisible(1));
            SetRtAxisVisible(2, lookAndFeel.IsAxisVisible(2));
            SetRtCamLookSliderBorderColor(lookAndFeel.CamLookSliderBorderColor);
            SetRtCamLookSliderHoveredBorderColor(lookAndFeel.CamLookSliderHoveredBorderColor);
            SetRtCamLookSliderPolyBorderThickness(lookAndFeel.CamLookSliderPolyBorderThickness);
            SetRtCamLookSliderPolyBorderType(lookAndFeel.CamLookSliderPolyBorderType);
            SetRtCamLookSliderRadiusOffset(lookAndFeel.CamLookSliderRadiusOffset);
            SetRtCamLookSliderVisible(lookAndFeel.IsCamLookSliderVisible);
            SetRtHoveredColor(lookAndFeel.HoveredColor);
            SetRtHoveredMidCapColor(lookAndFeel.HoveredMidCapColor);
            SetRtMidCapBorderColor(lookAndFeel.MidCapBorderColor);
            SetRtMidCapBorderVisible(lookAndFeel.IsMidCapBorderVisible);
            SetRtMidCapColor(lookAndFeel.MidCapColor);
            SetRtMidCapVisible(lookAndFeel.IsMidCapVisible);
            SetRtNumAxisTorusWireAxialSlices(lookAndFeel.NumAxisTorusWireAxialSlices);
            SetRtRadius(lookAndFeel.Radius);
            SetRtRotationArcBorderColor(lookAndFeel.RotationArcBorderColor);
            SetRtRotationArcColor(lookAndFeel.RotationArcColor);
            SetRtRotationArcVisible(lookAndFeel.IsRotationArcVisible);
            SetRtScale(lookAndFeel.Scale);
            SetRtShadeMode(lookAndFeel.ShadeMode);
            SetRtUseShortestRotationArc(lookAndFeel.UseShortestRotationArc);
            SetRtUseZoomFactor(lookAndFeel.UseZoomFactor);
        }
        #endregion

        #region Scale
        public void SetScScaleGuideVisible(bool isVisible)
        {
            _isScScaleGuideVisible = isVisible;
        }

        public bool IsScDblSliderVisible(PlaneId planeId)
        {
            return _scDblSliderVis[(int)planeId];
        }

        public void SetScDblSliderVisible(PlaneId planeId, bool isVisible)
        {
            _scDblSliderVis[(int)planeId] = isVisible;
        }

        public bool IsScSliderVisible(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _scSglSliderVis[axisIndex];
            else return _scSglSliderVis[3 + axisIndex];
        }

        public bool IsScSliderCapVisible(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _scSglSliderCapVis[axisIndex];
            else return _scSglSliderCapVis[3 + axisIndex];
        }

        public bool IsScPositiveSliderVisible(int axisIndex)
        {
            return _scSglSliderVis[axisIndex];
        }

        public bool IsScPositiveSliderCapVisible(int axisIndex)
        {
            return _scSglSliderCapVis[axisIndex];
        }

        public bool IsScNegativeSliderVisible(int axisIndex)
        {
            return _scSglSliderVis[3 + axisIndex];
        }

        public bool IsScNegativeSliderCapVisible(int axisIndex)
        {
            return _scSglSliderCapVis[3 + axisIndex];
        }

        public void SetScSliderVisible(int axisIndex, AxisSign axisSign, bool isVisible)
        {
            if (axisSign == AxisSign.Positive) _scSglSliderVis[axisIndex] = isVisible;
            else _scSglSliderVis[3 + axisIndex] = isVisible;
        }

        public void SetScSliderCapVisible(int axisIndex, AxisSign axisSign, bool isVisible)
        {
            if (axisSign == AxisSign.Positive) _scSglSliderCapVis[axisIndex] = isVisible;
            else _scSglSliderCapVis[3 + axisIndex] = isVisible;
        }

        public void SetScPositiveSliderVisible(int axisIndex, bool isVisible)
        {
            _scSglSliderVis[axisIndex] = isVisible;
        }

        public void SetScPositiveSliderCapVisible(int axisIndex, bool isVisible)
        {
            _scSglSliderCapVis[axisIndex] = isVisible;
        }

        public void SetScNegativeSliderVisible(int axisIndex, bool isVisible)
        {
            _scSglSliderVis[3 + axisIndex] = isVisible;
        }

        public void SetScNegativeSliderCapVisible(int axisIndex, bool isVisible)
        {
            _scSglSliderCapVis[3 + axisIndex] = isVisible;
        }

        public void SetScSliderLength(float axisLength)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.Length = axisLength;
        }

        public void SetScSliderLineType(GizmoLine3DType lineType)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.LineType = lineType;
        }

        public void SetScBoxSliderHeight(float height)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.BoxHeight = height;
        }

        public void SetScBoxSliderDepth(float depth)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.BoxDepth = depth;
        }

        public void SetScCylinderSliderRadius(float radius)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CylinderRadius = radius;
        }

        public void SetScScale(float scale)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
            {
                lookAndFeel.Scale = scale;
                lookAndFeel.CapLookAndFeel.Scale = scale;
            }

            foreach (var lookAndFeel in _scDblSlidersLookAndFeel)
                lookAndFeel.Scale = scale;

            _scMidCapLookAndFeel.Scale = scale;
        }

        public void SetScUseZoomFactor(bool useZoomFactor)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
            {
                lookAndFeel.UseZoomFactor = useZoomFactor;
                lookAndFeel.CapLookAndFeel.UseZoomFactor = useZoomFactor;
            }

            foreach (var lookAndFeel in _scDblSlidersLookAndFeel)
                lookAndFeel.UseZoomFactor = useZoomFactor;

            _scMidCapLookAndFeel.UseZoomFactor = useZoomFactor;
            _scScaleGuideLookAndFeel.UseZoomFactor = useZoomFactor;
        }

        public void SetScScaleGuideAxisLength(float length)
        {
            _scScaleGuideLookAndFeel.AxisLength = length;
        }

        public void SetScAxisColor(int axisIndex, Color color)
        {
            GetScSglSliderLookAndFeel(axisIndex, AxisSign.Positive).Color = color;
            GetScSglSliderLookAndFeel(axisIndex, AxisSign.Positive).CapLookAndFeel.Color = color;
            GetScSglSliderLookAndFeel(axisIndex, AxisSign.Negative).Color = color;
            GetScSglSliderLookAndFeel(axisIndex, AxisSign.Negative).CapLookAndFeel.Color = color;

            GizmoPlaneSlider3DLookAndFeel dblLookAndFeel = null;
            if (axisIndex == 0)
            {
                dblLookAndFeel = GetScDblSliderLookAndFeel(PlaneId.YZ);
                _scScaleGuideLookAndFeel.XAxisColor = color;
            }
            else
            if (axisIndex == 1)
            {
                dblLookAndFeel = GetScDblSliderLookAndFeel(PlaneId.ZX);
                _scScaleGuideLookAndFeel.YAxisColor = color;
            }
            else
            if (axisIndex == 2)
            {
                dblLookAndFeel = GetScDblSliderLookAndFeel(PlaneId.XY);
                _scScaleGuideLookAndFeel.ZAxisColor = color;
            }

            dblLookAndFeel.Color = ColorEx.KeepAllButAlpha(color, dblLookAndFeel.Color.a);
            dblLookAndFeel.BorderColor = color;

        }

        public void SetScDblSliderFillAlpha(float alpha)
        {
            alpha = Mathf.Clamp(alpha, 0.0f, 1.0f);
            foreach (var lookAndFeel in _scDblSlidersLookAndFeel)
            {
                lookAndFeel.Color = ColorEx.KeepAllButAlpha(lookAndFeel.Color, alpha);
                lookAndFeel.HoveredColor = ColorEx.KeepAllButAlpha(lookAndFeel.HoveredColor, alpha);
            }
        }

        public void SetScMidCapColor(Color color)
        {
            _scMidCapLookAndFeel.Color = color;
        }

        public void SetScMidCapVisible(bool visible)
        {
            _isScMidCapVisible = visible;
        }

        public void SetScHoveredColor(Color hoveredColor)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
            {
                lookAndFeel.HoveredColor = hoveredColor;
                lookAndFeel.CapLookAndFeel.HoveredColor = hoveredColor;
            }

            foreach (var lookAndFeel in _scDblSlidersLookAndFeel)
            {
                lookAndFeel.HoveredBorderColor = hoveredColor;
                lookAndFeel.HoveredColor = ColorEx.KeepAllButAlpha(hoveredColor, lookAndFeel.Color.a);
            }

            _scMidCapLookAndFeel.HoveredColor = hoveredColor;
        }

        public void SetScSliderShadeMode(GizmoShadeMode shadeMode)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.ShadeMode = shadeMode;
        }

        public void SetScSliderCapShadeMode(GizmoShadeMode shadeMode)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.ShadeMode = shadeMode;
        }

        public void SetScMidCapShadeMode(GizmoShadeMode shadeMode)
        {
            _scMidCapLookAndFeel.ShadeMode = shadeMode;
        }

        public void SetScSliderCapType(GizmoCap3DType capType)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.CapType = capType;
        }

        public void SetScMidCapType(GizmoCap3DType capType)
        {
            if (IsScMidCapTypeAllowed(capType))
            {
                _scMidCapLookAndFeel.CapType = capType;
            }
        }

        public bool IsScMidCapTypeAllowed(GizmoCap3DType capType)
        {
            return capType == GizmoCap3DType.Box || capType == GizmoCap3DType.Sphere;
        }

        public List<Enum> GetAllowedScMidCapTypes()
        {
            return new List<Enum>() { GizmoCap3DType.Box, GizmoCap3DType.Sphere };
        }

        public void SetScSliderFillMode(GizmoFillMode3D fillMode)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.FillMode = fillMode;
        }

        public void SetScSliderCapFillMode(GizmoFillMode3D fillMode)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.FillMode = fillMode;
        }

        public void SetScMidCapFillMode(GizmoFillMode3D fillMode)
        {
            _scMidCapLookAndFeel.FillMode = fillMode;
        }

        public void SetScSliderBoxCapWidth(float width)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.BoxWidth = width;
        }

        public void SetScSliderBoxCapHeight(float height)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.BoxHeight = height;
        }

        public void SetScSliderBoxCapDepth(float depth)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.BoxDepth = depth;
        }

        public void SetScSliderConeCapHeight(float height)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.ConeHeight = height;
        }

        public void SetScSliderConeCapBaseRadius(float radius)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.ConeRadius = radius;
        }

        public void SetScSliderPyramidCapWidth(float width)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.PyramidWidth = width;
        }

        public void SetScSliderPyramidCapHeight(float height)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.PyramidHeight = height;
        }

        public void SetScSliderPyramidCapDepth(float depth)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.PyramidDepth = depth;
        }

        public void SetScSliderTriPrismCapWidth(float width)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.TrPrismWidth = width;
        }

        public void SetScSliderTriPrismCapHeight(float height)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.TrPrismHeight = height;
        }

        public void SetScSliderTriPrismCapDepth(float depth)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.TrPrismDepth = depth;
        }

        public void SetScSliderSphereCapRadius(float radius)
        {
            foreach (var lookAndFeel in _scSglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.SphereRadius = radius;
        }

        public void SetScMidCapBoxWidth(float width)
        {
            _scMidCapLookAndFeel.BoxWidth = width;
        }

        public void SetScMidCapBoxHeight(float height)
        {
            _scMidCapLookAndFeel.BoxHeight = height;
        }

        public void SetScMidCapBoxDepth(float depth)
        {
            _scMidCapLookAndFeel.BoxDepth = depth;
        }

        public void SetScMidCapSphereRadius(float radius)
        {
            _scMidCapLookAndFeel.SphereRadius = radius;
        }

        public void SetScDblSliderSize(float size)
        {
            foreach (var lookAndFeel in _scDblSlidersLookAndFeel)
            {
                lookAndFeel.RATriangleXLength = size;
                lookAndFeel.RATriangleYLength = size;
            }
        }

        public void ConnectScSliderLookAndFeel(GizmoLineSlider3D slider, int axisIndex, AxisSign axisSign)
        {
            slider.SharedLookAndFeel = GetScSglSliderLookAndFeel(axisIndex, axisSign);
        }

        public void ConnectScMidCapLookAndFeel(GizmoCap3D cap)
        {
            cap.SharedLookAndFeel = _scMidCapLookAndFeel;
        }

        public void ConnectScDblSliderLookAndFeel(GizmoPlaneSlider3D slider, PlaneId planeId)
        {
            slider.SharedLookAndFeel = GetScDblSliderLookAndFeel(planeId);
        }

        public void ConnectScGizmoScaleGuideLookAndFeel(GizmoScaleGuide scaleGuide)
        {
            scaleGuide.SharedLookAndFeel = _scScaleGuideLookAndFeel;
        }

        public void Inherit(ScaleGizmoLookAndFeel3D lookAndFeel)
        {
            SetScAxisColor(0, lookAndFeel.XColor);
            SetScAxisColor(1, lookAndFeel.YColor);
            SetScAxisColor(2, lookAndFeel.ZColor);
            SetScBoxSliderDepth(lookAndFeel.BoxSliderDepth);
            SetScBoxSliderHeight(lookAndFeel.BoxSliderHeight);
            SetScCylinderSliderRadius(lookAndFeel.CylinderSliderRadius);
            SetScDblSliderFillAlpha(lookAndFeel.DblSliderFillAlpha);
            SetScDblSliderSize(lookAndFeel.DblSliderSize);
            SetScDblSliderVisible(PlaneId.XY, lookAndFeel.IsDblSliderVisible(PlaneId.XY));
            SetScDblSliderVisible(PlaneId.YZ, lookAndFeel.IsDblSliderVisible(PlaneId.YZ));
            SetScDblSliderVisible(PlaneId.ZX, lookAndFeel.IsDblSliderVisible(PlaneId.ZX));
            SetScHoveredColor(lookAndFeel.HoveredColor);
            SetScMidCapBoxDepth(lookAndFeel.MidCapBoxDepth);
            SetScMidCapBoxHeight(lookAndFeel.MidCapBoxHeight);
            SetScMidCapBoxWidth(lookAndFeel.MidCapBoxWidth);
            SetScMidCapColor(lookAndFeel.MidCapColor);
            SetScMidCapFillMode(lookAndFeel.MidCapFillMode);
            SetScMidCapShadeMode(lookAndFeel.MidCapShadeMode);
            SetScMidCapSphereRadius(lookAndFeel.MidCapSphereRadius);
            SetScMidCapType(lookAndFeel.MidCapType);
            SetScScale(lookAndFeel.Scale);
            SetScScaleGuideAxisLength(lookAndFeel.ScaleGuideAxisLength);
            SetScSliderBoxCapDepth(lookAndFeel.SliderBoxCapDepth);
            SetScSliderBoxCapHeight(lookAndFeel.SliderBoxCapHeight);
            SetScSliderBoxCapWidth(lookAndFeel.SliderBoxCapWidth);
            SetScSliderCapFillMode(lookAndFeel.SliderCapFillMode);
            SetScSliderCapShadeMode(lookAndFeel.SliderCapShadeMode);
            SetScSliderCapType(lookAndFeel.SliderCapType);
            SetScSliderCapVisible(0, AxisSign.Positive, lookAndFeel.IsSliderCapVisible(0, AxisSign.Positive));
            SetScSliderCapVisible(1, AxisSign.Positive, lookAndFeel.IsSliderCapVisible(1, AxisSign.Positive));
            SetScSliderCapVisible(2, AxisSign.Positive, lookAndFeel.IsSliderCapVisible(2, AxisSign.Positive));
            SetScSliderCapVisible(0, AxisSign.Negative, lookAndFeel.IsSliderCapVisible(0, AxisSign.Negative));
            SetScSliderCapVisible(1, AxisSign.Negative, lookAndFeel.IsSliderCapVisible(1, AxisSign.Negative));
            SetScSliderCapVisible(2, AxisSign.Negative, lookAndFeel.IsSliderCapVisible(2, AxisSign.Negative));
            SetScSliderConeCapHeight(lookAndFeel.SliderConeCapHeight);
            SetScSliderConeCapBaseRadius(lookAndFeel.SliderConeCapBaseRadius);
            SetScSliderFillMode(lookAndFeel.SliderFillMode);
            SetScSliderLength(lookAndFeel.SliderLength);
            SetScSliderLineType(lookAndFeel.SliderLineType);
            SetScSliderPyramidCapDepth(lookAndFeel.SliderPyramidCapDepth);
            SetScSliderPyramidCapHeight(lookAndFeel.SliderPyramidCapHeight);
            SetScSliderPyramidCapWidth(lookAndFeel.SliderPyramidCapWidth);
            SetScSliderShadeMode(lookAndFeel.SliderShadeMode);
            SetScSliderSphereCapRadius(lookAndFeel.SliderSphereCapRadius);
            SetScSliderTriPrismCapDepth(lookAndFeel.SliderTriPrismCapDepth);
            SetScSliderTriPrismCapHeight(lookAndFeel.SliderTriPrismCapHeight);
            SetScSliderTriPrismCapWidth(lookAndFeel.SliderTriPrismCapWidth);
            SetScSliderVisible(0, AxisSign.Positive, lookAndFeel.IsSliderVisible(0, AxisSign.Positive));
            SetScSliderVisible(1, AxisSign.Positive, lookAndFeel.IsSliderVisible(1, AxisSign.Positive));
            SetScSliderVisible(2, AxisSign.Positive, lookAndFeel.IsSliderVisible(2, AxisSign.Positive));
            SetScSliderVisible(0, AxisSign.Negative, lookAndFeel.IsSliderVisible(0, AxisSign.Negative));
            SetScSliderVisible(1, AxisSign.Negative, lookAndFeel.IsSliderVisible(1, AxisSign.Negative));
            SetScSliderVisible(2, AxisSign.Negative, lookAndFeel.IsSliderVisible(2, AxisSign.Negative));
            SetScUseZoomFactor(lookAndFeel.UseZoomFactor);
        }

        private GizmoLineSlider3DLookAndFeel GetScSglSliderLookAndFeel(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _scSglSlidersLookAndFeel[axisIndex];
            else return _scSglSlidersLookAndFeel[3 + axisIndex];
        }

        private GizmoPlaneSlider3DLookAndFeel GetScDblSliderLookAndFeel(PlaneId planeId)
        {
            return _scDblSlidersLookAndFeel[(int)planeId];
        }
        #endregion

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            if (DisplayCategory == UniversalGizmoSettingsCategory.Move) RenderMoveContent(undoRecordObject);
            else if (DisplayCategory == UniversalGizmoSettingsCategory.Rotate) RenderRotateContent(undoRecordObject);
            else if (DisplayCategory == UniversalGizmoSettingsCategory.Scale) RenderScaleContent(undoRecordObject);
        }

        private void RenderMoveContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat; bool newBool; Color newColor;
            GizmoLine3DType newLineType;
            GizmoQuad3DBorderType newBorderType;
            GizmoShadeMode newShadeMode;
            GizmoFillMode3D newFillMode3D;
            GizmoFillMode2D newFillMode2D;
            GizmoCap3DType newCap3DType;
            GizmoCap2DType newCap2DType;

            EditorGUILayoutEx.SectionHeader("Scale");
            var content = new GUIContent();
            content.text = "Use zoom factor";
            content.tooltip = "If this is checked, the gizmo will maintain a constant size regardless of its distance from the camera.";
            newBool = EditorGUILayout.ToggleLeft(content, MvUseZoomFactor);
            if (newBool != MvUseZoomFactor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvUseZoomFactor(newBool);
            }

            content.text = "Scale";
            content.tooltip = "The gizmo 3D scale. This is useful when you need to make the gizmo bigger or smaller because it maintains the relationship between different size properties.";
            newFloat = EditorGUILayout.FloatField(content, MvScale);
            if (newFloat != MvScale)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvScale(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Slider shape");
            content.text = "Slider type";
            content.tooltip = "The type of shape which is used to draw the single-axis sliders.";
            newLineType = (GizmoLine3DType)EditorGUILayout.EnumPopup(content, MvSliderLineType);
            if (newLineType != MvSliderLineType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvSliderLineType(newLineType);
            }

            content.text = "Slider length";
            content.tooltip = "The single-axis slider length.";
            newFloat = EditorGUILayout.FloatField(content, MvSliderLength);
            if (newFloat != MvSliderLength)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvSliderLength(newFloat);
            }

            if (MvSliderLineType == GizmoLine3DType.Box)
            {
                content.text = "Box height";
                content.tooltip = "The box height for single-axis sliders when the slider type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, MvBoxSliderHeight);
                if (newFloat != MvBoxSliderHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvBoxSliderHeight(newFloat);
                }

                content.text = "Box depth";
                content.tooltip = "The box depth for single-axis sliders when the slider type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, MvBoxSliderDepth);
                if (newFloat != MvBoxSliderDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvBoxSliderDepth(newFloat);
                }
            }
            else
            if (MvSliderLineType == GizmoLine3DType.Cylinder)
            {
                content.text = "Cylinder radius";
                content.tooltip = "The cylinder radius for single-axis sliders when the slider type is set to \'Cylinder\'.";
                newFloat = EditorGUILayout.FloatField(content, MvCylinderSliderRadius);
                if (newFloat != MvCylinderSliderRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvCylinderSliderRadius(newFloat);
                }
            }

            content.text = "Dbl slider size";
            content.tooltip = "The size of the double-axis sliders. Applies to both dimensions.";
            newFloat = EditorGUILayout.FloatField(content, MvDblSliderSize);
            if (newFloat != MvDblSliderSize)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvDblSliderSize(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Slider border");
            content.text = "Dbl slider border type";
            content.tooltip = "The type of shape which is used to draw the double-axis slider borders.";
            newBorderType = (GizmoQuad3DBorderType)EditorGUILayout.EnumPopup(content, MvDblSliderBorderType);
            if (newBorderType != MvDblSliderBorderType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvDblSliderBorderType(newBorderType);
            }

            if (MvDblSliderBorderType == GizmoQuad3DBorderType.Box)
            {
                content.text = "Border height";
                content.tooltip = "The border height for double-axis sliders when the border type is set to \'Box\'. The height grows perpendicular to the slider plane.";
                newFloat = EditorGUILayout.FloatField(content, MvDblSliderBorderBoxHeight);
                if (newFloat != MvDblSliderBorderBoxHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvDblSliderBorderBoxHeight(newFloat);
                }

                content.text = "Border depth";
                content.tooltip = "The border depth for double-axis sliders when the border type is set to \'Box\'. The depth grows inside the slider plane area.";
                newFloat = EditorGUILayout.FloatField(content, MvDblSliderBorderBoxDepth);
                if (newFloat != MvDblSliderBorderBoxDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvDblSliderBorderBoxDepth(newFloat);
                }
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Cap shape");
            content.text = "Slider cap type";
            content.tooltip = "The type of shape which is used to draw the single-axis slider caps.";
            newCap3DType = (GizmoCap3DType)EditorGUILayout.EnumPopup(content, MvSliderCapType);
            if (newCap3DType != MvSliderCapType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvSliderCapType(newCap3DType);
            }

            if (MvSliderCapType == GizmoCap3DType.Box)
            {
                content.text = "Box width";
                content.tooltip = "The box width for single-axis slider caps when the cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderBoxCapWidth);
                if (newFloat != MvSliderBoxCapWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderBoxCapWidth(newFloat);
                }

                content.text = "Box height";
                content.tooltip = "The box height for single-axis slider caps when the cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderBoxCapHeight);
                if (newFloat != MvSliderBoxCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderBoxCapHeight(newFloat);
                }

                content.text = "Box depth";
                content.tooltip = "The box depth for single-axis slider caps when the cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderBoxCapDepth);
                if (newFloat != MvSliderBoxCapDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderBoxCapDepth(newFloat);
                }
            }
            else
            if (MvSliderCapType == GizmoCap3DType.Cone)
            {
                content.text = "Cone height";
                content.tooltip = "The cone height for single-axis slider caps when the cap type is set to \'Cone\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderConeCapHeight);
                if (newFloat != MvSliderConeCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderConeCapHeight(newFloat);
                }

                content.text = "Cone radius";
                content.tooltip = "The cone radius for single-axis slider caps when the cap type is set to \'Cone\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderConeCapBaseRadius);
                if (newFloat != MvSliderConeCapBaseRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderConeCapBaseRadius(newFloat);
                }
            }
            else
            if (MvSliderCapType == GizmoCap3DType.Pyramid)
            {
                content.text = "Pyramid width";
                content.tooltip = "The pyramid width for single-axis slider caps when the cap type is set to \'Pyramid\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderPyramidCapWidth);
                if (newFloat != MvSliderPyramidCapWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderPyramidCapWidth(newFloat);
                }

                content.text = "Pyramid height";
                content.tooltip = "The pyramid height for single-axis slider caps when the cap type is set to \'Pyramid\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderPyramidCapHeight);
                if (newFloat != MvSliderPyramidCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderPyramidCapHeight(newFloat);
                }

                content.text = "Pyramid depth";
                content.tooltip = "The pyramid depth for single-axis slider caps when the cap type is set to \'Pyramid\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderPyramidCapDepth);
                if (newFloat != MvSliderPyramidCapDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderPyramidCapDepth(newFloat);
                }
            }
            else
            if (MvSliderCapType == GizmoCap3DType.TriangPrism)
            {
                content.text = "Triang prism width";
                content.tooltip = "The prism width for single-axis slider caps when the cap type is set to \'TriangPrism\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderTriPrismCapWidth);
                if (newFloat != MvSliderTriPrismCapWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderTriPrismCapWidth(newFloat);
                }

                content.text = "Triang prism height";
                content.tooltip = "The prism height for single-axis slider caps when the cap type is set to \'TriangPrism\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderTriPrismCapHeight);
                if (newFloat != MvSliderTriPrismCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderTriPrismCapHeight(newFloat);
                }

                content.text = "Triang prism depth";
                content.tooltip = "The prism depth for single-axis slider caps when the cap type is set to \'TriangPrism\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderTriPrismCapDepth);
                if (newFloat != MvSliderTriPrismCapDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderTriPrismCapDepth(newFloat);
                }
            }
            else
            if (MvSliderCapType == GizmoCap3DType.Sphere)
            {
                content.text = "Sphere radius";
                content.tooltip = "The sphere radius for single-axis slider caps when the cap type is set to \'Sphere\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderSphereCapRadius);
                if (newFloat != MvSliderSphereCapRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderSphereCapRadius(newFloat);
                }
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Colors");
            string[] axesLabels = new string[] { "X", "Y", "Z" };
            for (int axisIndex = 0; axisIndex < 3; ++axisIndex)
            {
                GizmoLineSlider3DLookAndFeel sliderLookAndFeel = GetMvSglSliderLookAndFeel(axisIndex, AxisSign.Positive);

                content.text = axesLabels[axisIndex];
                content.tooltip = "The color of the " + axesLabels[axisIndex] + " axis when it is not hovered.";
                newColor = EditorGUILayout.ColorField(content, sliderLookAndFeel.Color);
                if (newColor != sliderLookAndFeel.Color)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvAxisColor(axisIndex, newColor);
                }
            }

            content.text = "Hovered";
            content.tooltip = "The gizmo hovered color.";
            newColor = EditorGUILayout.ColorField(content, MvHoveredColor);
            if (newColor != MvHoveredColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvHoveredColor(newColor);
            }

            content.text = "Dbl slider fill alpha";
            content.tooltip = "The alpha value used to draw the area of the double-axis sliders.";
            newFloat = EditorGUILayout.FloatField(content, MvDblSliderFillAlpha);
            if (newFloat != MvDblSliderFillAlpha)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvDblSliderFillAlpha(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Shading");
            content.text = "Sliders";
            content.tooltip = "The type of shading that is applied to single-axis sliders. Does not apply to caps. Caps have their own shade property.";
            newShadeMode = (GizmoShadeMode)EditorGUILayout.EnumPopup(content, MvSliderShadeMode);
            if (newShadeMode != MvSliderShadeMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvSliderShadeMode(newShadeMode);
            }

            content.text = "Slider caps";
            content.tooltip = "The type of shading that is applied to single-axis slider caps.";
            newShadeMode = (GizmoShadeMode)EditorGUILayout.EnumPopup(content, MvSliderCapShadeMode);
            if (newShadeMode != MvSliderCapShadeMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvSliderCapShadeMode(newShadeMode);
            }

            content.text = "Dbl slider borders";
            content.tooltip = "The type of shading that is applied to double-axis slider borders.";
            newShadeMode = (GizmoShadeMode)EditorGUILayout.EnumPopup(content, MvDblSliderBorderShadeMode);
            if (newShadeMode != MvDblSliderBorderShadeMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvDblSliderBorderShadeMode(newShadeMode);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Fill");
            content.text = "Sliders";
            content.tooltip = "Fill mode for single-axis sliders. Does not apply to caps. Caps have their own fill property.";
            newFillMode3D = (GizmoFillMode3D)EditorGUILayout.EnumPopup(content, MvSliderFillMode);
            if (newFillMode3D != MvSliderFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvSliderFillMode(newFillMode3D);
            }

            content.text = "Slider caps";
            content.tooltip = "Fill mode for slider caps.";
            newFillMode3D = (GizmoFillMode3D)EditorGUILayout.EnumPopup(content, MvSliderCapFillMode);
            if (newFillMode3D != MvSliderCapFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvSliderCapFillMode(newFillMode3D);
            }

            content.text = "Dbl slider borders";
            content.tooltip = "Fill mode for double-axis slider borders.";
            newFillMode3D = (GizmoFillMode3D)EditorGUILayout.EnumPopup(content, MvDblSliderBorderFillMode);
            if (newFillMode3D != MvDblSliderBorderFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvDblSliderBorderFillMode(newFillMode3D);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Vertex snapping");
            content.text = "Cap type";
            content.tooltip = "The type of shape which is used to draw the vertex snap cap when vertex snapping is enabled.";
            newCap2DType = (GizmoCap2DType)EditorGUILayoutEx.SelectiveEnumPopup(content, MvVertSnapCapType, GetAllowedMvVertSnapCapTypes());
            if (newCap2DType != MvVertSnapCapType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvVertSnapCapType(newCap2DType);
            }

            if (MvVertSnapCapType == GizmoCap2DType.Quad)
            {
                content.text = "Quad width";
                content.tooltip = "The quad width for the vert snap cap when the cap type is set to \'Quad\'.";
                newFloat = EditorGUILayout.FloatField(content, MvVertSnapCapQuadWidth);
                if (newFloat != MvVertSnapCapQuadWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvVertSnapCapQuadWidth(newFloat);
                }

                content.text = "Quad height";
                content.tooltip = "The quad height for the vert snap cap when the cap type is set to \'Quad\'.";
                newFloat = EditorGUILayout.FloatField(content, MvVertSnapCapQuadHeight);
                if (newFloat != MvVertSnapCapQuadHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvVertSnapCapQuadHeight(newFloat);
                }
            }
            else
            if (MvVertSnapCapType == GizmoCap2DType.Circle)
            {
                content.text = "Circle radius";
                content.tooltip = "The circle radius for the vert snap cap when the cap type is set to \'Circle\'.";
                newFloat = EditorGUILayout.FloatField(content, MvVertSnapCapCircleRadius);
                if (newFloat != MvVertSnapCapCircleRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvVertSnapCapCircleRadius(newFloat);
                }
            }

            content.text = "Fill mode";
            content.tooltip = "The fill mode for the vertex snap cap.";
            newFillMode2D = (GizmoFillMode2D)EditorGUILayout.EnumPopup(content, MvVertSnapCapFillMode);
            if (newFillMode2D != MvVertSnapCapFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvVertSnapCapFillMode(newFillMode2D);
            }

            content.text = "Fill color";
            content.tooltip = "The fill color for the vertex snap cap.";
            newColor = EditorGUILayout.ColorField(content, MvVertSnapCapColor);
            if (newColor != MvVertSnapCapColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvVertSnapCapColor(newColor);
            }

            content.text = "Hovered fill color";
            content.tooltip = "The hovered fill color for the vertex snap cap.";
            newColor = EditorGUILayout.ColorField(content, MvVertSnapCapHoveredColor);
            if (newColor != MvVertSnapCapHoveredColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvVertSnapCapHoveredColor(newColor);
            }

            content.text = "Border color";
            content.tooltip = "The border color for the vertex snap cap.";
            newColor = EditorGUILayout.ColorField(content, MvVertSnapCapBorderColor);
            if (newColor != MvVertSnapCapBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvVertSnapCapBorderColor(newColor);
            }

            content.text = "Hovered border color";
            content.tooltip = "The hovered border color for the vertex snap cap.";
            newColor = EditorGUILayout.ColorField(content, MvVertSnapCapHoveredBorderColor);
            if (newColor != MvVertSnapCapHoveredBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvVertSnapCapHoveredBorderColor(newColor);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Slider visibility");
            DrawMvSliderVisibilityControls(AxisSign.Positive, undoRecordObject);
            DrawMvSliderVisibilityControls(AxisSign.Negative, undoRecordObject);
            DrawMvCheckUncheckAllSlidersVisButtons(false, undoRecordObject);

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Slider cap visibility");
            DrawMvSliderCapVisibilityControls(AxisSign.Positive, undoRecordObject);
            DrawMvSliderCapVisibilityControls(AxisSign.Negative, undoRecordObject);
            DrawMvCheckUncheckAllSlidersVisButtons(true, undoRecordObject);

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Dbl slider visibility");
            DrawMvDblSliderVisibilityControls(undoRecordObject);
            DrawMvCheckUncheckAllDblSlidersVisButtons(undoRecordObject);
        }

        private void RenderRotateContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat; bool newBool; Color newColor; int newInt;
            GizmoShadeMode newShadeMode;
            GizmoCircle3DBorderType newCircleBorderType;
            GizmoFillMode3D newFillMode3D;
            GizmoPolygon2DBorderType newPolyBorder2DType;

            EditorGUILayoutEx.SectionHeader("Scale and size");
            var content = new GUIContent();
            content.text = "Use zoom factor";
            content.tooltip = "If this is checked, the gizmo will maintain a constant size regardless of its distance from the camera.";
            newBool = EditorGUILayout.ToggleLeft(content, RtUseZoomFactor);
            if (newBool != RtUseZoomFactor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtUseZoomFactor(newBool);
            }

            content.text = "Scale";
            content.tooltip = "The gizmo 3D scale. This is useful when you need to make the gizmo bigger or smaller because it maintains the relationship between different size properties.";
            newFloat = EditorGUILayout.FloatField(content, RtScale);
            if (newFloat != RtScale)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtScale(newFloat);
            }

            content.text = "Radius";
            content.tooltip = "The radius of the rotation sphere. The final radius of the gizmo is actually: radius * scale * zoomFactor (if \'Use zoom factor\' is true).";
            newFloat = EditorGUILayout.FloatField(content, RtRadius);
            if (newFloat != RtRadius)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtRadius(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Slider border");
            content.text = "Axis border type";
            content.tooltip = "The type of shape that is used to draw the axis slider borders.";
            newCircleBorderType = (GizmoCircle3DBorderType)EditorGUILayout.EnumPopup(content, RtAxisBorderType);
            if (newCircleBorderType != RtAxisBorderType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtAxisBorderType(newCircleBorderType);
            }

            if (RtAxisBorderType == GizmoCircle3DBorderType.Torus)
            {
                content.text = "Torus thickness";
                content.tooltip = "The torus thickness for the axis sliders when the border type is set to \'Torus\'.";
                newFloat = EditorGUILayout.FloatField(content, RtAxisTorusThickness);
                if (newFloat != RtAxisTorusThickness)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetRtAxisTorusThickness(newFloat);
                }
            }
            else
            if (RtAxisBorderType == GizmoCircle3DBorderType.CylindricalTorus)
            {
                content.text = "Torus width";
                content.tooltip = "The torus width for the axis sliders when the border type is set to \'CylindricalTorus\'. The width extends inside the area of the circle.";
                newFloat = EditorGUILayout.FloatField(content, RtAxisCylTorusWidth);
                if (newFloat != RtAxisCylTorusWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetRtAxisCylTorusWidth(newFloat);
                }

                content.text = "Torus height";
                content.tooltip = "The torus height for the axis sliders when the border type is set to \'CylindricalTorus\'. The height is perpendicular to the circle area.";
                newFloat = EditorGUILayout.FloatField(content, RtAxisCylTorusHeight);
                if (newFloat != RtAxisCylTorusHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetRtAxisCylTorusHeight(newFloat);
                }
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Colors");
            content.text = "X border";
            content.tooltip = "The border color of the X axis slider.";
            newColor = EditorGUILayout.ColorField(content, RtXBorderColor);
            if (newColor != RtXBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtAxisBorderColor(0, newColor);
            }

            content.text = "Y border";
            content.tooltip = "The border color of the Y axis slider.";
            newColor = EditorGUILayout.ColorField(content, RtYBorderColor);
            if (newColor != RtYBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtAxisBorderColor(1, newColor);
            }

            content.text = "Z border";
            content.tooltip = "The border color of the Z axis slider.";
            newColor = EditorGUILayout.ColorField(content, RtZBorderColor);
            if (newColor != RtZBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtAxisBorderColor(2, newColor);
            }

            content.text = "Hovered";
            content.tooltip = "The hovered color.";
            newColor = EditorGUILayout.ColorField(content, RtHoveredColor);
            if (newColor != RtHoveredColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtHoveredColor(newColor);
            }

            content.text = "Mid cap";
            content.tooltip = "The color of middle cap.";
            newColor = EditorGUILayout.ColorField(content, RtMidCapColor);
            if (newColor != RtMidCapColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtMidCapColor(newColor);
            }

            content.text = "Hovered mid cap";
            content.tooltip = "The middle cap hovered color.";
            newColor = EditorGUILayout.ColorField(content, RtHoveredMidCapColor);
            if (newColor != RtHoveredMidCapColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtHoveredMidCapColor(newColor);
            }

            content.text = "Axis border cull alpha scale";
            content.tooltip = "Allows you to specify an alpha scale value for the axis border pixels which are hidden behind the mid cap.";
            newFloat = EditorGUILayout.FloatField(content, RtAxisCullAlphaScale);
            if (newFloat != RtAxisCullAlphaScale)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtAxisBorderCullAlphaScale(newFloat);
            }

            content.text = "Shade mode";
            content.tooltip = "The type of shading that is applied to the gizmo handles.";
            newShadeMode = (GizmoShadeMode)EditorGUILayout.EnumPopup(content, RtShadeMode);
            if (newShadeMode != RtShadeMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtShadeMode(newShadeMode);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Fill");
            content.text = "Axis border";
            content.tooltip = "Fill mode for the axes borders.";
            newFillMode3D = (GizmoFillMode3D)EditorGUILayout.EnumPopup(content, RtAxisBorderFillMode);
            if (newFillMode3D != RtAxisBorderFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtAxisBorderFillMode(newFillMode3D);
            }

            if (RtAxisBorderFillMode == GizmoFillMode3D.Wire)
            {
                content.text = "Num torus axial slices";
                content.tooltip = "If a torus axis border is used, this is the number of axial slices used for wireframe rendering.";
                newInt = EditorGUILayout.IntField(content, RtNumAxisTorusWireAxialSlices);
                if (newInt != RtNumAxisTorusWireAxialSlices)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetRtNumAxisTorusWireAxialSlices(newInt);
                }
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Rotation arc");
            content.text = "Is visible";
            content.tooltip = "If this is checked, a rotation arc will appear during rotation. This does not apply to rotations performed with the mid cap.";
            newBool = EditorGUILayout.ToggleLeft(content, IsRtRotationArcVisible);
            if (newBool != IsRtRotationArcVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtRotationArcVisible(newBool);
            }

            content.text = "Fill color";
            content.tooltip = "The rotation arc fill color.";
            newColor = EditorGUILayout.ColorField(content, RtRotationArcColor);
            if (newColor != RtRotationArcColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtRotationArcColor(newColor);
            }

            content.text = "Border color";
            content.tooltip = "The rotation arc border color.";
            newColor = EditorGUILayout.ColorField(content, RtRotationArcBorderColor);
            if (newColor != RtRotationArcBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtRotationArcBorderColor(newColor);
            }

            content.text = "Use shortest arc";
            content.tooltip = "If this is checked, the rotation arc will never exceed 180 degrees and it will always choose the shortest rotation angle.";
            newBool = EditorGUILayout.ToggleLeft(content, RtUseShortestRotationArc);
            if (newBool != RtUseShortestRotationArc)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtUseShortestRotationArc(newBool);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Camera look slider");
            content.text = "Border type";
            content.tooltip = "The type of border which is used to draw the circle that rotates around the camera look axis.";
            newPolyBorder2DType = (GizmoPolygon2DBorderType)EditorGUILayout.EnumPopup(content, RtCamLookSliderPolyBorderType);
            if (newPolyBorder2DType != RtCamLookSliderPolyBorderType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtCamLookSliderPolyBorderType(newPolyBorder2DType);
            }

            if (RtCamLookSliderPolyBorderType == GizmoPolygon2DBorderType.Thick)
            {
                content.text = "Border thickness";
                content.tooltip = "When a thick border is used, this property represents the border thickness.";
                newFloat = EditorGUILayout.FloatField(content, RtCamLookSliderPolyBorderThickness);
                if (newFloat != RtCamLookSliderPolyBorderThickness)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetRtCamLookSliderPolyBorderThickness(newFloat);
                }
            }

            content.text = "Radius offset";
            content.tooltip = "This value is added to the \'Radius\' property to calculate the radius of the circle which can be used to rotate around the camera look axis.";
            newFloat = EditorGUILayout.FloatField(content, RtCamLookSliderRadiusOffset);
            if (newFloat != RtCamLookSliderRadiusOffset)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtCamLookSliderRadiusOffset(newFloat);
            }

            content.text = "Border color";
            content.tooltip = "The border color for the circle which can be used to rotate around the camera look axis.";
            newColor = EditorGUILayout.ColorField(content, RtCamLookSliderBorderColor);
            if (newColor != RtCamLookSliderBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtCamLookSliderBorderColor(newColor);
            }

            content.text = "Border hovered color";
            content.tooltip = "The hovered border color for the circle which can be used to rotate around the camera look axis.";
            newColor = EditorGUILayout.ColorField(content, RtCamLookSliderHoveredBorderColor);
            if (newColor != RtCamLookSliderHoveredBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtCamLookSliderHoveredBorderColor(newColor);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Visibility");
            content.text = "X axis";
            content.tooltip = "Controls the visibility of the X axis rotation slider.";
            newBool = EditorGUILayout.ToggleLeft(content, IsRtAxisVisible(0));
            if (newBool != IsRtAxisVisible(0))
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtAxisVisible(0, newBool);
            }

            content.text = "Y axis";
            content.tooltip = "Controls the visibility of the Y axis rotation slider.";
            newBool = EditorGUILayout.ToggleLeft(content, IsRtAxisVisible(1));
            if (newBool != IsRtAxisVisible(1))
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtAxisVisible(1, newBool);
            }

            content.text = "Z axis";
            content.tooltip = "Controls the visibility of the Z axis rotation slider.";
            newBool = EditorGUILayout.ToggleLeft(content, IsRtAxisVisible(2));
            if (newBool != IsRtAxisVisible(2))
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtAxisVisible(2, newBool);
            }

            content.text = "Camera look slider";
            content.tooltip = "Controls the visibility of the circle slider which can be used to rotate aroudn the camera look vector.";
            newBool = EditorGUILayout.ToggleLeft(content, IsRtCamLookSliderVisible);
            if (newBool != IsRtCamLookSliderVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtCamLookSliderVisible(newBool);
            }

            content.text = "Mid cap";
            content.tooltip = "Controls the visibility of the mid cap.";
            newBool = EditorGUILayout.ToggleLeft(content, IsRtMidCapVisible);
            if (newBool != IsRtMidCapVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtMidCapVisible(newBool);
            }

            content.text = "Mid cap border";
            content.tooltip = "Controls the visibility of the mid cap border.";
            newBool = EditorGUILayout.ToggleLeft(content, IsRtMidCapBorderVisible);
            if (newBool != IsRtMidCapBorderVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetRtMidCapBorderVisible(newBool);
            }
        }

        private void RenderScaleContent(UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            float newFloat; bool newBool; Color newColor;
            GizmoCap3DType newCap3DType;
            GizmoFillMode3D newFillMode3D;
            GizmoShadeMode newShadeMode;
            /*GizmoLine3DType newLineType;

            EditorGUILayoutEx.SectionHeader("Scale");
            content.text = "Use zoom factor";
            content.tooltip = "If this is checked, the gizmo will maintain a constant size regardless of its distance from the camera.";
            newBool = EditorGUILayout.ToggleLeft(content, ScUseZoomFactor);
            if (newBool != ScUseZoomFactor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScUseZoomFactor(newBool);
            }

            content.text = "Scale";
            content.tooltip = "The gizmo 3D scale. This is useful when you need to make the gizmo bigger or smaller because it maintains the relationship between different size properties.";
            newFloat = EditorGUILayout.FloatField(content, ScScale);
            if (newFloat != ScScale)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScScale(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Slider shape");
            content.text = "Slider type";
            content.tooltip = "The type of shape which is used to draw the single-axis sliders.";
            newLineType = (GizmoLine3DType)EditorGUILayout.EnumPopup(content, ScSliderLineType);
            if (newLineType != ScSliderLineType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScSliderLineType(newLineType);
            }

            content.text = "Slider length";
            content.tooltip = "The single-axis slider length.";
            newFloat = EditorGUILayout.FloatField(content, ScSliderLength);
            if (newFloat != ScSliderLength)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScSliderLength(newFloat);
            }

            if (ScSliderLineType == GizmoLine3DType.Box)
            {
                content.text = "Box height";
                content.tooltip = "The box height for single-axis sliders when the slider type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, ScBoxSliderHeight);
                if (newFloat != ScBoxSliderHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScBoxSliderHeight(newFloat);
                }

                content.text = "Box depth";
                content.tooltip = "The box depth for single-axis sliders when the slider type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, ScBoxSliderDepth);
                if (newFloat != ScBoxSliderDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScBoxSliderDepth(newFloat);
                }
            }
            else
            if (ScSliderLineType == GizmoLine3DType.Cylinder)
            {
                content.text = "Cylinder radius";
                content.tooltip = "The cylinder radius for single-axis sliders when the slider type is set to \'Cylinder\'.";
                newFloat = EditorGUILayout.FloatField(content, ScCylinderSliderRadius);
                if (newFloat != ScCylinderSliderRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScCylinderSliderRadius(newFloat);
                }
            }

            content.text = "Dbl slider size";
            content.tooltip = "The size of the double-axis sliders. Applies to both dimensions.";
            newFloat = EditorGUILayout.FloatField(content, ScDblSliderSize);
            if (newFloat != ScDblSliderSize)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScDblSliderSize(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Cap shape");
            content.text = "Slider cap type";
            content.tooltip = "The type of shape which is used to draw the single-axis slider caps.";
            newCap3DType = (GizmoCap3DType)EditorGUILayout.EnumPopup(content, ScSliderCapType);
            if (newCap3DType != ScSliderCapType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScSliderCapType(newCap3DType);
            }

            if (ScSliderCapType == GizmoCap3DType.Box)
            {
                content.text = "Box width";
                content.tooltip = "The box width for single-axis slider caps when the cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, ScSliderBoxCapWidth);
                if (newFloat != ScSliderBoxCapWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScSliderBoxCapWidth(newFloat);
                }

                content.text = "Box height";
                content.tooltip = "The box height for single-axis slider caps when the cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, ScSliderBoxCapHeight);
                if (newFloat != ScSliderBoxCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScSliderBoxCapHeight(newFloat);
                }

                content.text = "Box depth";
                content.tooltip = "The box depth for single-axis slider caps when the cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, ScSliderBoxCapDepth);
                if (newFloat != ScSliderBoxCapDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScSliderBoxCapDepth(newFloat);
                }
            }
            else
            if (ScSliderCapType == GizmoCap3DType.Cone)
            {
                content.text = "Cone height";
                content.tooltip = "The cone height for single-axis slider caps when the cap type is set to \'Cone\'.";
                newFloat = EditorGUILayout.FloatField(content, ScSliderConeCapHeight);
                if (newFloat != ScSliderConeCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScSliderConeCapHeight(newFloat);
                }

                content.text = "Cone radius";
                content.tooltip = "The cone radius for single-axis slider caps when the cap type is set to \'Cone\'.";
                newFloat = EditorGUILayout.FloatField(content, ScSliderConeCapBaseRadius);
                if (newFloat != ScSliderConeCapBaseRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScSliderConeCapBaseRadius(newFloat);
                }
            }
            else
            if (ScSliderCapType == GizmoCap3DType.Pyramid)
            {
                content.text = "Pyramid width";
                content.tooltip = "The pyramid width for single-axis slider caps when the cap type is set to \'Pyramid\'.";
                newFloat = EditorGUILayout.FloatField(content, ScSliderPyramidCapWidth);
                if (newFloat != ScSliderPyramidCapWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScSliderPyramidCapWidth(newFloat);
                }

                content.text = "Pyramid height";
                content.tooltip = "The pyramid height for single-axis slider caps when the cap type is set to \'Pyramid\'.";
                newFloat = EditorGUILayout.FloatField(content, ScSliderPyramidCapHeight);
                if (newFloat != ScSliderPyramidCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScSliderPyramidCapHeight(newFloat);
                }

                content.text = "Pyramid depth";
                content.tooltip = "The pyramid depth for single-axis slider caps when the cap type is set to \'Pyramid\'.";
                newFloat = EditorGUILayout.FloatField(content, ScSliderPyramidCapDepth);
                if (newFloat != ScSliderPyramidCapDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScSliderPyramidCapDepth(newFloat);
                }
            }
            else
            if (ScSliderCapType == GizmoCap3DType.TriangPrism)
            {
                content.text = "Triang prism width";
                content.tooltip = "The prism width for single-axis slider caps when the cap type is set to \'TriangPrism\'.";
                newFloat = EditorGUILayout.FloatField(content, ScSliderTriPrismCapWidth);
                if (newFloat != ScSliderTriPrismCapWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScSliderTriPrismCapWidth(newFloat);
                }

                content.text = "Triang prism height";
                content.tooltip = "The prism height for single-axis slider caps when the cap type is set to \'TriangPrism\'.";
                newFloat = EditorGUILayout.FloatField(content, ScSliderTriPrismCapHeight);
                if (newFloat != ScSliderTriPrismCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScSliderTriPrismCapHeight(newFloat);
                }

                content.text = "Triang prism depth";
                content.tooltip = "The prism depth for single-axis slider caps when the cap type is set to \'TriangPrism\'.";
                newFloat = EditorGUILayout.FloatField(content, ScSliderTriPrismCapDepth);
                if (newFloat != ScSliderTriPrismCapDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScSliderTriPrismCapDepth(newFloat);
                }
            }
            else
            if (ScSliderCapType == GizmoCap3DType.Sphere)
            {
                content.text = "Sphere radius";
                content.tooltip = "The sphere radius for single-axis slider caps when the cap type is set to \'Sphere\'.";
                newFloat = EditorGUILayout.FloatField(content, ScSliderSphereCapRadius);
                if (newFloat != ScSliderSphereCapRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScSliderSphereCapRadius(newFloat);
                }
            }*/

            content.text = "Mid cap type";
            content.tooltip = "The type of shape which is used to draw the mid cap.";
            newCap3DType = (GizmoCap3DType)EditorGUILayoutEx.SelectiveEnumPopup(content, ScMidCapType, GetAllowedScMidCapTypes());
            if (newCap3DType != ScMidCapType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScMidCapType(newCap3DType);
            }

            if (ScMidCapType == GizmoCap3DType.Sphere)
            {
                content.text = "Sphere radius";
                content.tooltip = "The mid cap sphere radius when the mid cap type is set to \'Sphere\'.";
                newFloat = EditorGUILayout.FloatField(content, ScMidCapSphereRadius);
                if (newFloat != ScMidCapSphereRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScMidCapSphereRadius(newFloat);
                }
            }
            else
            if (ScMidCapType == GizmoCap3DType.Box)
            {
                content.text = "Box width";
                content.tooltip = "The mid cap box width when the mid cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, ScMidCapBoxWidth);
                if (newFloat != ScMidCapBoxWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScMidCapBoxWidth(newFloat);
                }

                content.text = "Box height";
                content.tooltip = "The mid cap box height when the mid cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, ScMidCapBoxHeight);
                if (newFloat != ScMidCapBoxHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScMidCapBoxHeight(newFloat);
                }

                content.text = "Box depth";
                content.tooltip = "The mid cap box depth when the mid cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, ScMidCapBoxDepth);
                if (newFloat != ScMidCapBoxDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScMidCapBoxDepth(newFloat);
                }
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Colors");
            /*string[] axesLabels = new string[] { "X", "Y", "Z" };
            for (int axisIndex = 0; axisIndex < 3; ++axisIndex)
            {
                GizmoLineSlider3DLookAndFeel sliderLookAndFeel = GetScSglSliderLookAndFeel(axisIndex, AxisSign.Positive);

                content.text = axesLabels[axisIndex];
                content.tooltip = "The color of the " + axesLabels[axisIndex] + " axis when it is not hovered.";
                newColor = EditorGUILayout.ColorField(content, sliderLookAndFeel.Color);
                if (newColor != sliderLookAndFeel.Color)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScAxisColor(axisIndex, newColor);
                }
            }*/

            content.text = "Mid cap";
            content.tooltip = "The color of the mid cap.";
            newColor = EditorGUILayout.ColorField(content, ScMidCapColor);
            if (newColor != ScMidCapColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScMidCapColor(newColor);
            }

            content.text = "Hovered";
            content.tooltip = "The gizmo hovered color.";
            newColor = EditorGUILayout.ColorField(content, ScHoveredColor);
            if (newColor != ScHoveredColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScHoveredColor(newColor);
            }

            /*content.text = "Dbl slider fill alpha";
            content.tooltip = "The alpha value used to draw the area of the double-axis sliders.";
            newFloat = EditorGUILayout.FloatField(content, ScDblSliderFillAlpha);
            if (newFloat != ScDblSliderFillAlpha)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScDblSliderFillAlpha(newFloat);
            }*/

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Shading");
            /*content.text = "Sliders";
            content.tooltip = "The type of shading that is applied to single-axis sliders. Does not apply to caps. Caps have their own shade property.";
            newShadeMode = (GizmoShadeMode)EditorGUILayout.EnumPopup(content, ScSliderShadeMode);
            if (newShadeMode != ScSliderShadeMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScSliderShadeMode(newShadeMode);
            }

            content.text = "Slider caps";
            content.tooltip = "The type of shading that is applied to single-axis slider caps.";
            newShadeMode = (GizmoShadeMode)EditorGUILayout.EnumPopup(content, ScSliderCapShadeMode);
            if (newShadeMode != ScSliderCapShadeMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScSliderCapShadeMode(newShadeMode);
            }*/

            content.text = "Mid cap";
            content.tooltip = "The type of shading that is applied to the mid cap.";
            newShadeMode = (GizmoShadeMode)EditorGUILayout.EnumPopup(content, ScMidCapShadeMode);
            if (newShadeMode != ScMidCapShadeMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScMidCapShadeMode(newShadeMode);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Fill");
            /*content.text = "Sliders";
            content.tooltip = "Fill mode for single-axis sliders. Does not apply to caps. Caps have their own fill property.";
            newFillMode3D = (GizmoFillMode3D)EditorGUILayout.EnumPopup(content, ScSliderFillMode);
            if (newFillMode3D != ScSliderFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScSliderFillMode(newFillMode3D);
            }

            content.text = "Slider caps";
            content.tooltip = "Fill mode for slider caps.";
            newFillMode3D = (GizmoFillMode3D)EditorGUILayout.EnumPopup(content, ScSliderCapFillMode);
            if (newFillMode3D != ScSliderCapFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScSliderCapFillMode(newFillMode3D);
            }*/

            content.text = "Mid cap";
            content.tooltip = "Fill mode for the mid cap.";
            newFillMode3D = (GizmoFillMode3D)EditorGUILayout.EnumPopup(content, ScMidCapFillMode);
            if (newFillMode3D != ScMidCapFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScMidCapFillMode(newFillMode3D);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Visibility");
            content.text = "Mid cap";
            content.tooltip = "Allows you to control the visibility of the mid cap.";
            newBool = EditorGUILayout.ToggleLeft(content, IsScMidCapVisible);
            if (newBool != IsScMidCapVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScMidCapVisible(newBool);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Scale guide");
            content.text = "Is visible";
            content.tooltip = "If this is checked, the gizmo will draw a scale guide for each entity that is being scaled during a scale session. The guide is shown " +
                              "in the form of a collection of coordinate system axes.";
            newBool = EditorGUILayout.ToggleLeft(content, IsScScaleGuideVisible);
            if (newBool != IsScScaleGuideVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScScaleGuideVisible(newBool);
            }

            content.text = "Axis length";
            content.tooltip = "If the scale guide is visible, this value is used to determine the length of the guide axes.";
            newFloat = EditorGUILayout.FloatField(content, ScScaleGuideAxisLength);
            if (newFloat != ScScaleGuideAxisLength)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScScaleGuideAxisLength(newFloat);
            }

            /*EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Slider visibility");
            DrawScSliderVisibilityControls(AxisSign.Positive, undoRecordObject);
            DrawScSliderVisibilityControls(AxisSign.Negative, undoRecordObject);
            DrawScCheckUncheckAllSlidersVisButtons(false, undoRecordObject);

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Dbl slider visibility");
            DrawScDblSliderVisibilityControls(undoRecordObject);
            DrawScCheckUncheckAllDblSlidersVisButtons(undoRecordObject);

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Cap visibility");
            DrawScSliderCapVisibilityControls(AxisSign.Positive, undoRecordObject);
            DrawScSliderCapVisibilityControls(AxisSign.Negative, undoRecordObject);
            DrawScCheckUncheckAllSlidersVisButtons(true, undoRecordObject);*/
        }

        private void DrawMvCheckUncheckAllSlidersVisButtons(bool forCaps, UnityEngine.Object undoRecordObject)
        {
            EditorGUILayout.BeginHorizontal();
            var content = new GUIContent();
            content.text = "Show all";
            content.tooltip = "Show all " + (forCaps ? "caps." : "sliders.");
            if (GUILayout.Button(content, GUILayout.Width(80.0f)))
            {
                EditorUndoEx.Record(undoRecordObject);
                var visFlags = forCaps ? _mvSglSliderCapVis : _mvSglSliderVis;
                for (int index = 0; index < visFlags.Length; ++index) visFlags[index] = true;
            }

            content.text = "Hide all";
            content.tooltip = "Hide all " + (forCaps ? "caps." : "sliders.");
            if (GUILayout.Button(content, GUILayout.Width(80.0f)))
            {
                EditorUndoEx.Record(undoRecordObject);
                var visFlags = forCaps ? _mvSglSliderCapVis : _mvSglSliderVis;
                for (int index = 0; index < visFlags.Length; ++index) visFlags[index] = false;
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawMvCheckUncheckAllDblSlidersVisButtons(UnityEngine.Object undoRecordObject)
        {
            EditorGUILayout.BeginHorizontal();
            var content = new GUIContent();
            content.text = "Show all";
            content.tooltip = "Show all double-axis sliders.";
            if (GUILayout.Button(content, GUILayout.Width(80.0f)))
            {
                EditorUndoEx.Record(undoRecordObject);
                for (int index = 0; index < _mvDblSliderVis.Length; ++index) _mvDblSliderVis[index] = true;
            }

            content.text = "Hide all";
            content.tooltip = "Hide all double-axis sliders.";
            if (GUILayout.Button(content, GUILayout.Width(80.0f)))
            {
                EditorUndoEx.Record(undoRecordObject);
                for (int index = 0; index < _mvDblSliderVis.Length; ++index) _mvDblSliderVis[index] = false;
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawMvSliderVisibilityControls(AxisSign axisSign, UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            EditorGUILayout.BeginHorizontal();
            string[] sliderLabels = axisSign == AxisSign.Positive ? new string[] { "+X", "+Y", "+Z" } : new string[] { "-X", "-Y", "-Z" };
            for (int sliderIndex = 0; sliderIndex < 3; ++sliderIndex)
            {
                content.text = sliderLabels[sliderIndex];
                content.tooltip = "Toggle visibility for the " + sliderLabels[sliderIndex] + " slider.";

                bool isVisible = IsMvSliderVisible(sliderIndex, axisSign);
                bool newBool = EditorGUILayout.ToggleLeft(content, isVisible, GUILayout.Width(60.0f));
                if (newBool != isVisible)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderVisible(sliderIndex, axisSign, newBool);
                }
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawMvDblSliderVisibilityControls(UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            EditorGUILayout.BeginHorizontal();
            string[] sliderLabels = new string[] { "XY", "YZ", "ZX" };
            for (int sliderIndex = 0; sliderIndex < 3; ++sliderIndex)
            {
                content.text = sliderLabels[sliderIndex];
                content.tooltip = "Toggle visibility for the " + sliderLabels[sliderIndex] + " double-axis slider.";

                bool isVisible = IsMvDblSliderVisible((PlaneId)sliderIndex);
                bool newBool = EditorGUILayout.ToggleLeft(content, isVisible, GUILayout.Width(60.0f));
                if (newBool != isVisible)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvDblSliderVisible((PlaneId)sliderIndex, newBool);
                }
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawMvSliderCapVisibilityControls(AxisSign axisSign, UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            EditorGUILayout.BeginHorizontal();
            string[] sliderLabels = axisSign == AxisSign.Positive ? new string[] { "+X", "+Y", "+Z" } : new string[] { "-X", "-Y", "-Z" };
            for (int sliderIndex = 0; sliderIndex < 3; ++sliderIndex)
            {
                content.text = sliderLabels[sliderIndex];
                content.tooltip = "Toggle visibility for the " + sliderLabels[sliderIndex] + " cap.";

                bool isVisible = IsMvSliderCapVisible(sliderIndex, axisSign);
                bool newBool = EditorGUILayout.ToggleLeft(content, isVisible, GUILayout.Width(60.0f));
                if (newBool != isVisible)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderCapVisible(sliderIndex, axisSign, newBool);
                }
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawScCheckUncheckAllSlidersVisButtons(bool forCaps, UnityEngine.Object undoRecordObject)
        {
            EditorGUILayout.BeginHorizontal();
            var content = new GUIContent();
            content.text = "Show all";
            content.tooltip = "Show all " + (forCaps ? "caps." : "sliders.");
            if (GUILayout.Button(content, GUILayout.Width(80.0f)))
            {
                EditorUndoEx.Record(undoRecordObject);
                var visFlags = forCaps ? _scSglSliderCapVis : _scSglSliderVis;
                for (int index = 0; index < visFlags.Length; ++index) visFlags[index] = true;
            }

            content.text = "Hide all";
            content.tooltip = "Hide all " + (forCaps ? "caps." : "sliders.");
            if (GUILayout.Button(content, GUILayout.Width(80.0f)))
            {
                EditorUndoEx.Record(undoRecordObject);
                var visFlags = forCaps ? _scSglSliderCapVis : _scSglSliderVis;
                for (int index = 0; index < visFlags.Length; ++index) visFlags[index] = false;
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawScCheckUncheckAllDblSlidersVisButtons(UnityEngine.Object undoRecordObject)
        {
            EditorGUILayout.BeginHorizontal();
            var content = new GUIContent();
            content.text = "Show all";
            content.tooltip = "Show all double-axis sliders.";
            if (GUILayout.Button(content, GUILayout.Width(80.0f)))
            {
                EditorUndoEx.Record(undoRecordObject);
                for (int index = 0; index < _scDblSliderVis.Length; ++index) _scDblSliderVis[index] = true;
            }

            content.text = "Hide all";
            content.tooltip = "Hide all double-axis sliders.";
            if (GUILayout.Button(content, GUILayout.Width(80.0f)))
            {
                EditorUndoEx.Record(undoRecordObject);
                for (int index = 0; index < _scDblSliderVis.Length; ++index) _scDblSliderVis[index] = false;
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawScSliderVisibilityControls(AxisSign axisSign, UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            EditorGUILayout.BeginHorizontal();
            string[] sliderLabels = axisSign == AxisSign.Positive ? new string[] { "+X", "+Y", "+Z" } : new string[] { "-X", "-Y", "-Z" };
            for (int sliderIndex = 0; sliderIndex < 3; ++sliderIndex)
            {
                content.text = sliderLabels[sliderIndex];
                content.tooltip = "Toggle visibility for the " + sliderLabels[sliderIndex] + " slider.";

                bool isVisible = IsScSliderVisible(sliderIndex, axisSign);
                bool newBool = EditorGUILayout.ToggleLeft(content, isVisible, GUILayout.Width(60.0f));
                if (newBool != isVisible)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScSliderVisible(sliderIndex, axisSign, newBool);
                }
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawScDblSliderVisibilityControls(UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            EditorGUILayout.BeginHorizontal();
            string[] sliderLabels = new string[] { "XY", "YZ", "ZX" };
            for (int sliderIndex = 0; sliderIndex < 3; ++sliderIndex)
            {
                content.text = sliderLabels[sliderIndex];
                content.tooltip = "Toggle visibility for the " + sliderLabels[sliderIndex] + " double-axis slider.";

                bool isVisible = IsScDblSliderVisible((PlaneId)sliderIndex);
                bool newBool = EditorGUILayout.ToggleLeft(content, isVisible, GUILayout.Width(60.0f));
                if (newBool != isVisible)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScDblSliderVisible((PlaneId)sliderIndex, newBool);
                }
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawScSliderCapVisibilityControls(AxisSign axisSign, UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            EditorGUILayout.BeginHorizontal();
            string[] sliderLabels = axisSign == AxisSign.Positive ? new string[] { "+X", "+Y", "+Z" } : new string[] { "-X", "-Y", "-Z" };
            for (int sliderIndex = 0; sliderIndex < 3; ++sliderIndex)
            {
                content.text = sliderLabels[sliderIndex];
                content.tooltip = "Toggle visibility for the " + sliderLabels[sliderIndex] + " cap.";

                bool isVisible = IsScSliderCapVisible(sliderIndex, axisSign);
                bool newBool = EditorGUILayout.ToggleLeft(content, isVisible, GUILayout.Width(60.0f));
                if (newBool != isVisible)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetScSliderCapVisible(sliderIndex, axisSign, newBool);
                }
            }
            EditorGUILayout.EndHorizontal();
        }
        #endif
    }
}
