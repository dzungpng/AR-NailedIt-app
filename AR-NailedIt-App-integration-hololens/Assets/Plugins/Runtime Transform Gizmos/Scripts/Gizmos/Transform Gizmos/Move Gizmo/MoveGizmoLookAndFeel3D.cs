using UnityEngine;
using System.Collections.Generic;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public class MoveGizmoLookAndFeel3D : Settings
    {
        [SerializeField]
        private bool _isMidCapVisible = false;
        [SerializeField]
        private GizmoCap3DLookAndFeel _midCapLookAndFeel = new GizmoCap3DLookAndFeel();
        [SerializeField]
        private GizmoCap2DLookAndFeel _vertSnapCapLookAndFeel = new GizmoCap2DLookAndFeel();

        [SerializeField]
        private bool[] _sglSliderVis = new bool[6];
        [SerializeField]
        private bool[] _sglSliderCapVis = new bool[6];
        [SerializeField]
        private bool[] _dblSliderVis = new bool[3];

        [SerializeField]
        private GizmoLineSlider3DLookAndFeel[] _sglSlidersLookAndFeel = new GizmoLineSlider3DLookAndFeel[6];
        [SerializeField]
        private GizmoPlaneSlider3DLookAndFeel[] _dblSlidersLookAndFeel = new GizmoPlaneSlider3DLookAndFeel[3];

        public float Scale { get { return _midCapLookAndFeel.Scale; } }
        public bool UseZoomFactor { get { return _midCapLookAndFeel.UseZoomFactor; } }
        public float SliderLength { get { return _sglSlidersLookAndFeel[0].Length; } }
        public float BoxSliderHeight { get { return _sglSlidersLookAndFeel[0].BoxHeight; } }
        public float BoxSliderDepth { get { return _sglSlidersLookAndFeel[0].BoxDepth; } }
        public float CylinderSliderRadius { get { return _sglSlidersLookAndFeel[0].CylinderRadius; } }
        public float SliderBoxCapWidth { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.BoxWidth; } }
        public float SliderBoxCapHeight { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.BoxHeight; } }
        public float SliderBoxCapDepth { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.BoxDepth; } }
        public float SliderConeCapHeight { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.ConeHeight; } }
        public float SliderConeCapBaseRadius { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.ConeRadius; } }
        public float SliderPyramidCapWidth { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.PyramidWidth; } }
        public float SliderPyramidCapHeight { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.PyramidHeight; } }
        public float SliderPyramidCapDepth { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.PyramidDepth; } }
        public float SliderTriPrismCapWidth { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.TrPrismWidth; } }
        public float SliderTriPrismCapHeight { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.TrPrismHeight; } }
        public float SliderTriPrismCapDepth { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.TrPrismDepth; } }
        public float SliderSphereCapRadius { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.SphereRadius; } }
        public GizmoFillMode3D SliderFillMode { get { return _sglSlidersLookAndFeel[0].FillMode; } }
        public GizmoFillMode3D SliderCapFillMode { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.FillMode; } }
        public GizmoCap3DType SliderCapType { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.CapType; } }
        public GizmoShadeMode SliderShadeMode { get { return _sglSlidersLookAndFeel[0].ShadeMode; } }
        public GizmoShadeMode SliderCapShadeMode { get { return _sglSlidersLookAndFeel[0].CapLookAndFeel.ShadeMode; } }
        public GizmoLine3DType SliderLineType { get { return _sglSlidersLookAndFeel[0].LineType; } }
        public Color XColor { get { return GetSglSliderLookAndFeel(0, AxisSign.Positive).Color; } }
        public Color YColor { get { return GetSglSliderLookAndFeel(1, AxisSign.Positive).Color; } }
        public Color ZColor { get { return GetSglSliderLookAndFeel(2, AxisSign.Positive).Color; } }
        public float DblSliderSize { get { return _dblSlidersLookAndFeel[0].QuadWidth; } }
        public float DblSliderBorderBoxHeight { get { return _dblSlidersLookAndFeel[0].BorderBoxHeight; } }
        public float DblSliderBorderBoxDepth { get { return _dblSlidersLookAndFeel[0].BorderBoxDepth; } }
        public float DblSliderFillAlpha { get { return _dblSlidersLookAndFeel[0].Color.a; } }
        public GizmoShadeMode DblSliderBorderShadeMode { get { return _dblSlidersLookAndFeel[0].BorderShadeMode; } }
        public GizmoQuad3DBorderType DblSliderBorderType { get { return _dblSlidersLookAndFeel[0].QuadBorderType; } }
        public GizmoFillMode3D DblSliderBorderFillMode { get { return _dblSlidersLookAndFeel[0].BorderFillMode; } }
        public float VertSnapCapQuadWidth { get { return _vertSnapCapLookAndFeel.QuadWidth; } }
        public float VertSnapCapQuadHeight { get { return _vertSnapCapLookAndFeel.QuadHeight; } }
        public float VertSnapCapCircleRadius { get { return _vertSnapCapLookAndFeel.CircleRadius; } }
        public Color VertSnapCapColor { get { return _vertSnapCapLookAndFeel.Color; } }
        public Color VertSnapCapBorderColor { get { return _vertSnapCapLookAndFeel.BorderColor; } }
        public Color VertSnapCapHoveredColor { get { return _vertSnapCapLookAndFeel.HoveredColor; } }
        public Color VertSnapCapHoveredBorderColor { get { return _vertSnapCapLookAndFeel.HoveredBorderColor; } }
        public GizmoFillMode2D VertSnapCapFillMode { get { return _vertSnapCapLookAndFeel.FillMode; } }
        public GizmoCap2DType VertSnapCapType { get { return _vertSnapCapLookAndFeel.CapType; } }
        public bool IsMidCapVisible { get { return _isMidCapVisible; } set { _isMidCapVisible = value; } }
        public float MidCapBoxWidth { get { return _midCapLookAndFeel.BoxWidth; } }
        public float MidCapBoxHeight { get { return _midCapLookAndFeel.BoxHeight; } }
        public float MidCapBoxDepth { get { return _midCapLookAndFeel.BoxDepth; } }
        public float MidCapSphereRadius { get { return _midCapLookAndFeel.SphereRadius; } }
        public Color MidCapColor { get { return _midCapLookAndFeel.Color; } }
        public GizmoFillMode3D MidCapFillMode { get { return _midCapLookAndFeel.FillMode; } }
        public GizmoShadeMode MidCapShadeMode { get { return _midCapLookAndFeel.ShadeMode; } }
        public GizmoCap3DType MidCapType { get { return _midCapLookAndFeel.CapType; } }
        public Color HoveredColor { get { return _sglSlidersLookAndFeel[0].HoveredColor; } }

        public MoveGizmoLookAndFeel3D()
        {
            for (int axisIndex = 0; axisIndex < _sglSlidersLookAndFeel.Length; ++axisIndex)
            {
                _sglSlidersLookAndFeel[axisIndex] = new GizmoLineSlider3DLookAndFeel();
            }

            for (int axisIndex = 0; axisIndex < _dblSlidersLookAndFeel.Length; ++axisIndex)
            {
                _dblSlidersLookAndFeel[axisIndex] = new GizmoPlaneSlider3DLookAndFeel();
            }

            SetSliderLength(5.5f);
            SetAxisColor(0, RTSystemValues.XAxisColor);
            SetAxisColor(1, RTSystemValues.YAxisColor);
            SetAxisColor(2, RTSystemValues.ZAxisColor);
            SetHoveredColor(RTSystemValues.HoveredAxisColor);

            SetDblSliderFillAlpha(RTSystemValues.AxisAlpha);
            SetDblSliderSize(1.5f);
            SetDblSliderVisible(PlaneId.XY, true);
            SetDblSliderVisible(PlaneId.YZ, true);
            SetDblSliderVisible(PlaneId.ZX, true);

            SetSliderVisible(0, AxisSign.Positive, true);
            SetSliderCapVisible(0, AxisSign.Positive, true);
            SetSliderVisible(1, AxisSign.Positive, true);
            SetSliderCapVisible(1, AxisSign.Positive, true);
            SetSliderVisible(2, AxisSign.Positive, true);
            SetSliderCapVisible(2, AxisSign.Positive, true);

            SetMidCapType(GizmoCap3DType.Box);
            SetMidCapSphereRadius(0.67f);
            SetMidCapColor(RTSystemValues.CenterAxisColor);

            SetVertSnapCapFillMode(GizmoFillMode2D.Border);
            SetVertSnapCapColor(ColorEx.KeepAllButAlpha(Color.white, RTSystemValues.AxisAlpha));
            SetVertSnapCapBorderColor(Color.white);
            SetVertSnapCapHoveredColor(ColorEx.KeepAllButAlpha(RTSystemValues.HoveredAxisColor, RTSystemValues.AxisAlpha));
            SetVertSnapCapHoveredBorderColor(RTSystemValues.HoveredAxisColor);
        }

        public bool IsVertSnapCapTypeAllowed(GizmoCap2DType capType)
        {
            return capType == GizmoCap2DType.Circle || capType == GizmoCap2DType.Quad;
        }

        public List<Enum> GetAllowedVertSnapCapTypes()
        {
            return new List<Enum>() { GizmoCap2DType.Circle, GizmoCap2DType.Quad };
        }

        public void SetVertSnapCapType(GizmoCap2DType capType)
        {
            if (IsVertSnapCapTypeAllowed(capType))
            {
                _vertSnapCapLookAndFeel.CapType = capType;
            }
        }

        public void SetVertSnapCapQuadWidth(float width)
        {
            _vertSnapCapLookAndFeel.QuadWidth = width;
        }

        public void SetVertSnapCapQuadHeight(float height)
        {
            _vertSnapCapLookAndFeel.QuadHeight = height;
        }

        public void SetVertSnapCapCircleRadius(float radius)
        {
            _vertSnapCapLookAndFeel.CircleRadius = radius;
        }

        public void SetVertSnapCapFillMode(GizmoFillMode2D fillMode)
        {
            _vertSnapCapLookAndFeel.FillMode = fillMode;
        }

        public void SetVertSnapCapColor(Color color)
        {
            _vertSnapCapLookAndFeel.Color = color;
        }

        public void SetVertSnapCapBorderColor(Color color)
        {
            _vertSnapCapLookAndFeel.BorderColor = color;
        }

        public void SetVertSnapCapHoveredColor(Color color)
        {
            _vertSnapCapLookAndFeel.HoveredColor = color;
        }

        public void SetVertSnapCapHoveredBorderColor(Color color)
        {
            _vertSnapCapLookAndFeel.HoveredBorderColor = color;
        }

        public bool IsMidCapTypeAllowed(GizmoCap3DType capType)
        {
            return capType == GizmoCap3DType.Box || capType == GizmoCap3DType.Sphere;
        }

        public List<Enum> GetAllowedMidCapTypes()
        {
            return new List<Enum>() { GizmoCap3DType.Box, GizmoCap3DType.Sphere };
        }

        public void SetMidCapType(GizmoCap3DType capType)
        {
            if(IsMidCapTypeAllowed(capType))
            {
                _midCapLookAndFeel.CapType = capType;
            }
        }

        public void SetMidCapBoxWidth(float width)
        {
            _midCapLookAndFeel.BoxWidth = width;
        }

        public void SetMidCapBoxHeight(float height)
        {
            _midCapLookAndFeel.BoxHeight = height;
        }
        
        public void SetMidCapBoxDepth(float depth)
        {
            _midCapLookAndFeel.BoxDepth = depth;
        }

        public void SetMidCapSphereRadius(float radius)
        {
            _midCapLookAndFeel.SphereRadius = radius;
        }

        public void SetMidCapColor(Color color)
        {
            _midCapLookAndFeel.Color = color;
        }

        public bool IsSliderVisible(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _sglSliderVis[axisIndex];
            else return _sglSliderVis[3 + axisIndex];
        }

        public bool IsDblSliderVisible(PlaneId planeId)
        {
            return _dblSliderVis[(int)planeId];
        }

        public bool IsSliderCapVisible(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _sglSliderCapVis[axisIndex];
            else return _sglSliderCapVis[3 + axisIndex];
        }

        public bool IsPositiveSliderVisible(int axisIndex)
        {
            return _sglSliderVis[axisIndex];
        }

        public bool IsPositiveSliderCapVisible(int axisIndex)
        {
            return _sglSliderCapVis[axisIndex];
        }

        public bool IsNegativeSliderVisible(int axisIndex)
        {
            return _sglSliderVis[3 + axisIndex];
        }

        public bool IsNegativeSliderCapVisible(int axisIndex)
        {
            return _sglSliderCapVis[3 + axisIndex];
        }

        public void SetSliderVisible(int axisIndex, AxisSign axisSign, bool isVisible)
        {
            if (axisSign == AxisSign.Positive) _sglSliderVis[axisIndex] = isVisible;
            else _sglSliderVis[3 + axisIndex] = isVisible;
        }

        public void SetDblSliderVisible(PlaneId planeId, bool isVisible)
        {
            _dblSliderVis[(int)planeId] = isVisible;
        }

        public void SetSliderCapVisible(int axisIndex, AxisSign axisSign, bool isVisible)
        {
            if (axisSign == AxisSign.Positive) _sglSliderCapVis[axisIndex] = isVisible;
            else _sglSliderCapVis[3 + axisIndex] = isVisible;
        }

        public void SetPositiveSliderVisible(int axisIndex, bool isVisible)
        {
            _sglSliderVis[axisIndex] = isVisible;
        }

        public void SetPositiveCapVisible(int axisIndex, bool isVisible)
        {
            _sglSliderCapVis[axisIndex] = isVisible;
        }

        public void SetNegativeSliderVisible(int axisIndex, bool isVisible)
        {
            _sglSliderVis[3 + axisIndex] = isVisible;
        }

        public void SetNegativeCapVisible(int axisIndex, bool isVisible)
        {
            _sglSliderCapVis[3 + axisIndex] = isVisible;
        }

        public void SetSliderLength(float axisLength)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.Length = axisLength;
        }

        public void SetSliderLineType(GizmoLine3DType lineType)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.LineType = lineType;
        }

        public void SetDblSliderBorderType(GizmoQuad3DBorderType borderType)
        {
            foreach (var lookAndFeel in _dblSlidersLookAndFeel)
                lookAndFeel.QuadBorderType = borderType;
        }

        public void SetDblSliderBorderBoxHeight(float height)
        {
            foreach (var lookAndFeel in _dblSlidersLookAndFeel)
                lookAndFeel.BorderBoxHeight = height;
        }

        public void SetDblSliderBorderBoxDepth(float depth)
        {
            foreach (var lookAndFeel in _dblSlidersLookAndFeel)
                lookAndFeel.BorderBoxDepth = depth;
        }

        public void SetBoxSliderHeight(float height)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.BoxHeight = height;
        }

        public void SetBoxSliderDepth(float depth)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.BoxDepth = depth;
        }

        public void SetCylinderSliderRadius(float radius)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CylinderRadius = radius;
        }

        public void SetDblSliderSize(float size)
        {
            foreach(var lookAndFeel in _dblSlidersLookAndFeel)
            {
                lookAndFeel.QuadWidth = size;
                lookAndFeel.QuadHeight = size;
            }
        }

        public void SetScale(float scale)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
            {
                lookAndFeel.Scale = scale;
                lookAndFeel.CapLookAndFeel.Scale = scale;
            }

            foreach(var lookAndFeel in _dblSlidersLookAndFeel)
            {
                lookAndFeel.Scale = scale;
            }

            _midCapLookAndFeel.Scale = scale;
        }

        public void SetUseZoomFactor(bool useZoomFactor)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
            {
                lookAndFeel.UseZoomFactor = useZoomFactor;
                lookAndFeel.CapLookAndFeel.UseZoomFactor = useZoomFactor;
            }

            foreach (var lookAndFeel in _dblSlidersLookAndFeel)
                lookAndFeel.UseZoomFactor = useZoomFactor;

            _midCapLookAndFeel.UseZoomFactor = useZoomFactor;
        }

        public void SetAxisColor(int axisIndex, Color color)
        {
            GetSglSliderLookAndFeel(axisIndex, AxisSign.Positive).Color = color;
            GetSglSliderLookAndFeel(axisIndex, AxisSign.Positive).CapLookAndFeel.Color = color;
            GetSglSliderLookAndFeel(axisIndex, AxisSign.Negative).Color = color;
            GetSglSliderLookAndFeel(axisIndex, AxisSign.Negative).CapLookAndFeel.Color = color;

            GizmoPlaneSlider3DLookAndFeel dblLookAndFeel = null;
            if (axisIndex == 0) dblLookAndFeel = GetDblSliderLookAndFeel(PlaneId.YZ);
            else
            if (axisIndex == 1) dblLookAndFeel = GetDblSliderLookAndFeel(PlaneId.ZX);
            else
            if (axisIndex == 2) dblLookAndFeel = GetDblSliderLookAndFeel(PlaneId.XY);

            dblLookAndFeel.Color = ColorEx.KeepAllButAlpha(color, dblLookAndFeel.Color.a);
            dblLookAndFeel.BorderColor = color;
        }

        public void SetDblSliderFillAlpha(float alpha)
        {
            alpha = Mathf.Clamp(alpha, 0.0f, 1.0f);
            foreach (var lookAndFeel in _dblSlidersLookAndFeel)
            {
                lookAndFeel.Color = ColorEx.KeepAllButAlpha(lookAndFeel.Color, alpha);
                lookAndFeel.HoveredColor = ColorEx.KeepAllButAlpha(lookAndFeel.HoveredColor, alpha);
            }
        }

        public void SetHoveredColor(Color hoveredColor)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
            {
                lookAndFeel.HoveredColor = hoveredColor;
                lookAndFeel.CapLookAndFeel.HoveredColor = hoveredColor;
            }

            foreach (var lookAndFeel in _dblSlidersLookAndFeel)
            {
                lookAndFeel.HoveredBorderColor = hoveredColor;
                lookAndFeel.HoveredColor = ColorEx.KeepAllButAlpha(hoveredColor, lookAndFeel.Color.a);
            }
        }

        public void SetSliderShadeMode(GizmoShadeMode shadeMode)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.ShadeMode = shadeMode;
        }

        public void SetSliderCapShadeMode(GizmoShadeMode shadeMode)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.ShadeMode = shadeMode;
        }

        public void SetMidCapShadeMode(GizmoShadeMode shadeMode)
        {
            _midCapLookAndFeel.ShadeMode = shadeMode;
        }

        public void SetDblSliderBorderShadeMode(GizmoShadeMode shadeMode)
        {
            foreach (var lookAndFeel in _dblSlidersLookAndFeel)
                lookAndFeel.BorderShadeMode = shadeMode;
        }

        public void SetSliderCapType(GizmoCap3DType capType)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.CapType = capType;
        }

        public void SetSliderFillMode(GizmoFillMode3D fillMode)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.FillMode = fillMode;
        }

        public void SetSliderCapFillMode(GizmoFillMode3D fillMode)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.FillMode = fillMode;
        }

        public void SetMidCapFillMode(GizmoFillMode3D fillMode)
        {
            _midCapLookAndFeel.FillMode = fillMode;
        }

        public void SetDblSliderBorderFillMode(GizmoFillMode3D fillMode)
        {
            foreach (var lookAndFeel in _dblSlidersLookAndFeel)
                lookAndFeel.BorderFillMode = fillMode;
        }

        public void SetSliderBoxCapWidth(float width)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.BoxWidth = width;
        }

        public void SetSliderBoxCapHeight(float height)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.BoxHeight = height;
        }

        public void SetSliderBoxCapDepth(float depth)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.BoxDepth = depth;
        }

        public void SetSliderConeCapHeight(float height)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.ConeHeight = height;
        }

        public void SetSliderConeCapBaseRadius(float radius)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.ConeRadius = radius;
        }

        public void SetSliderPyramidCapWidth(float width)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.PyramidWidth = width;
        }

        public void SetSliderPyramidCapHeight(float height)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.PyramidHeight = height;
        }

        public void SetSliderPyramidCapDepth(float depth)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.PyramidDepth = depth;
        }

        public void SetSliderTriPrismCapWidth(float width)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.TrPrismWidth = width;
        }

        public void SetSliderTriPrismCapHeight(float height)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.TrPrismHeight = height;
        }

        public void SetSliderTriPrismCapDepth(float depth)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.TrPrismDepth = depth;
        }

        public void SetSliderSphereCapRadius(float radius)
        {
            foreach (var lookAndFeel in _sglSlidersLookAndFeel)
                lookAndFeel.CapLookAndFeel.SphereRadius = radius;
        }

        public void ConnectSliderLookAndFeel(GizmoLineSlider3D slider, int axisIndex, AxisSign axisSign)
        {
            slider.SharedLookAndFeel = GetSglSliderLookAndFeel(axisIndex, axisSign);
        }

        public void ConnectDblSliderLookAndFeel(GizmoPlaneSlider3D dblSlider, PlaneId planeId)
        {
            dblSlider.SharedLookAndFeel = GetDblSliderLookAndFeel(planeId);
        }

        public void ConnectMidCapLookAndFeel(GizmoCap3D midCap)
        {
            midCap.SharedLookAndFeel = _midCapLookAndFeel;
        }

        public void ConnectVertSnapCapLookAndFeel(GizmoCap2D vertSnapCap)
        {
            vertSnapCap.SharedLookAndFeel = _vertSnapCapLookAndFeel;
        }

        private GizmoLineSlider3DLookAndFeel GetSglSliderLookAndFeel(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _sglSlidersLookAndFeel[axisIndex];
            else return _sglSlidersLookAndFeel[3 + axisIndex];
        }

        private GizmoPlaneSlider3DLookAndFeel GetDblSliderLookAndFeel(PlaneId planeId)
        {
            return _dblSlidersLookAndFeel[(int)planeId];
        }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
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
            newBool = EditorGUILayout.ToggleLeft(content, UseZoomFactor);
            if (newBool != UseZoomFactor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetUseZoomFactor(newBool);
            }

            content.text = "Scale";
            content.tooltip = "The gizmo 3D scale. This is useful when you need to make the gizmo bigger or smaller because it maintains the relationship between different size properties.";
            newFloat = EditorGUILayout.FloatField(content, Scale);
            if (newFloat != Scale)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetScale(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Slider shape");
            content.text = "Slider type";
            content.tooltip = "The type of shape which is used to draw the single-axis sliders.";
            newLineType = (GizmoLine3DType)EditorGUILayout.EnumPopup(content, SliderLineType);
            if (newLineType != SliderLineType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSliderLineType(newLineType);
            }

            content.text = "Slider length";
            content.tooltip = "The single-axis slider length.";
            newFloat = EditorGUILayout.FloatField(content, SliderLength);
            if (newFloat != SliderLength)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSliderLength(newFloat);
            }

            if (SliderLineType == GizmoLine3DType.Box)
            {
                content.text = "Box height";
                content.tooltip = "The box height for single-axis sliders when the slider type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, BoxSliderHeight);
                if (newFloat != BoxSliderHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetBoxSliderHeight(newFloat);
                }

                content.text = "Box depth";
                content.tooltip = "The box depth for single-axis sliders when the slider type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, BoxSliderDepth);
                if (newFloat != BoxSliderDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetBoxSliderDepth(newFloat);
                }
            }
            else
            if (SliderLineType == GizmoLine3DType.Cylinder)
            {
                content.text = "Cylinder radius";
                content.tooltip = "The cylinder radius for single-axis sliders when the slider type is set to \'Cylinder\'.";
                newFloat = EditorGUILayout.FloatField(content, CylinderSliderRadius);
                if (newFloat != CylinderSliderRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetCylinderSliderRadius(newFloat);
                }
            }

            content.text = "Dbl slider size";
            content.tooltip = "The size of the double-axis sliders. Applies to both dimensions.";
            newFloat = EditorGUILayout.FloatField(content, DblSliderSize);
            if (newFloat != DblSliderSize)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetDblSliderSize(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Slider border");
            content.text = "Dbl slider border type";
            content.tooltip = "The type of shape which is used to draw the double-axis slider borders.";
            newBorderType = (GizmoQuad3DBorderType)EditorGUILayout.EnumPopup(content, DblSliderBorderType);
            if (newBorderType != DblSliderBorderType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetDblSliderBorderType(newBorderType);
            }

            if (DblSliderBorderType == GizmoQuad3DBorderType.Box)
            {
                content.text = "Border height";
                content.tooltip = "The border height for double-axis sliders when the border type is set to \'Box\'. The height grows perpendicular to the slider plane.";
                newFloat = EditorGUILayout.FloatField(content, DblSliderBorderBoxHeight);
                if (newFloat != DblSliderBorderBoxHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetDblSliderBorderBoxHeight(newFloat);
                }

                content.text = "Border depth";
                content.tooltip = "The border depth for double-axis sliders when the border type is set to \'Box\'. The depth grows inside the slider plane area.";
                newFloat = EditorGUILayout.FloatField(content, DblSliderBorderBoxDepth);
                if (newFloat != DblSliderBorderBoxDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetDblSliderBorderBoxDepth(newFloat);
                }
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Cap shape");
            content.text = "Slider cap type";
            content.tooltip = "The type of shape which is used to draw the single-axis slider caps.";
            newCap3DType = (GizmoCap3DType)EditorGUILayout.EnumPopup(content, SliderCapType);
            if (newCap3DType != SliderCapType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSliderCapType(newCap3DType);
            }

            if (SliderCapType == GizmoCap3DType.Box)
            {
                content.text = "Box width";
                content.tooltip = "The box width for single-axis slider caps when the cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderBoxCapWidth);
                if (newFloat != SliderBoxCapWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderBoxCapWidth(newFloat);
                }

                content.text = "Box height";
                content.tooltip = "The box height for single-axis slider caps when the cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderBoxCapHeight);
                if (newFloat != SliderBoxCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderBoxCapHeight(newFloat);
                }

                content.text = "Box depth";
                content.tooltip = "The box depth for single-axis slider caps when the cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderBoxCapDepth);
                if (newFloat != SliderBoxCapDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderBoxCapDepth(newFloat);
                }
            }
            else
            if (SliderCapType == GizmoCap3DType.Cone)
            {
                content.text = "Cone height";
                content.tooltip = "The cone height for single-axis slider caps when the cap type is set to \'Cone\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderConeCapHeight);
                if (newFloat != SliderConeCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderConeCapHeight(newFloat);
                }

                content.text = "Cone radius";
                content.tooltip = "The cone radius for single-axis slider caps when the cap type is set to \'Cone\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderConeCapBaseRadius);
                if (newFloat != SliderConeCapBaseRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderConeCapBaseRadius(newFloat);
                }
            }
            else
            if (SliderCapType == GizmoCap3DType.Pyramid)
            {
                content.text = "Pyramid width";
                content.tooltip = "The pyramid width for single-axis slider caps when the cap type is set to \'Pyramid\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderPyramidCapWidth);
                if (newFloat != SliderPyramidCapWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderPyramidCapWidth(newFloat);
                }

                content.text = "Pyramid height";
                content.tooltip = "The pyramid height for single-axis slider caps when the cap type is set to \'Pyramid\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderPyramidCapHeight);
                if (newFloat != SliderPyramidCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderPyramidCapHeight(newFloat);
                }

                content.text = "Pyramid depth";
                content.tooltip = "The pyramid depth for single-axis slider caps when the cap type is set to \'Pyramid\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderPyramidCapDepth);
                if (newFloat != SliderPyramidCapDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderPyramidCapDepth(newFloat);
                }
            }
            else
            if (SliderCapType == GizmoCap3DType.TriangPrism)
            {
                content.text = "Triang prism width";
                content.tooltip = "The prism width for single-axis slider caps when the cap type is set to \'TriangPrism\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderTriPrismCapWidth);
                if (newFloat != SliderTriPrismCapWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderTriPrismCapWidth(newFloat);
                }

                content.text = "Triang prism height";
                content.tooltip = "The prism height for single-axis slider caps when the cap type is set to \'TriangPrism\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderTriPrismCapHeight);
                if (newFloat != SliderTriPrismCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderTriPrismCapHeight(newFloat);
                }

                content.text = "Triang prism depth";
                content.tooltip = "The prism depth for single-axis slider caps when the cap type is set to \'TriangPrism\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderTriPrismCapDepth);
                if (newFloat != SliderTriPrismCapDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderTriPrismCapDepth(newFloat);
                }
            }
            else
            if (SliderCapType == GizmoCap3DType.Sphere)
            {
                content.text = "Sphere radius";
                content.tooltip = "The sphere radius for single-axis slider caps when the cap type is set to \'Sphere\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderSphereCapRadius);
                if (newFloat != SliderSphereCapRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderSphereCapRadius(newFloat);
                }
            }

            content.text = "Mid cap type";
            content.tooltip = "The type of shape which is used to draw the mid cap.";
            newCap3DType = (GizmoCap3DType)EditorGUILayoutEx.SelectiveEnumPopup(content, MidCapType, GetAllowedMidCapTypes());
            if (newCap3DType != MidCapType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMidCapType(newCap3DType);
            }

            if (MidCapType == GizmoCap3DType.Sphere)
            {
                content.text = "Sphere radius";
                content.tooltip = "The mid cap sphere radius when the mid cap type is set to \'Sphere\'.";
                newFloat = EditorGUILayout.FloatField(content, MidCapSphereRadius);
                if (newFloat != MidCapSphereRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMidCapSphereRadius(newFloat);
                }
            }
            else
            if (MidCapType == GizmoCap3DType.Box)
            {
                content.text = "Box width";
                content.tooltip = "The mid cap box width when the mid cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, MidCapBoxWidth);
                if (newFloat != MidCapBoxWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMidCapBoxWidth(newFloat);
                }

                content.text = "Box height";
                content.tooltip = "The mid cap box height when the mid cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, MidCapBoxHeight);
                if (newFloat != MidCapBoxHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMidCapBoxHeight(newFloat);
                }

                content.text = "Box depth";
                content.tooltip = "The mid cap box depth when the mid cap type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, MidCapBoxDepth);
                if (newFloat != MidCapBoxDepth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMidCapBoxDepth(newFloat);
                }
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Colors");
            string[] axesLabels = new string[] { "X", "Y", "Z" };
            for (int axisIndex = 0; axisIndex < 3; ++axisIndex)
            {
                GizmoLineSlider3DLookAndFeel sliderLookAndFeel = GetSglSliderLookAndFeel(axisIndex, AxisSign.Positive);

                content.text = axesLabels[axisIndex];
                content.tooltip = "The color of the " + axesLabels[axisIndex] + " axis when it is not hovered.";
                newColor = EditorGUILayout.ColorField(content, sliderLookAndFeel.Color);
                if (newColor != sliderLookAndFeel.Color)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetAxisColor(axisIndex, newColor);
                }
            }

            content.text = "Mid cap";
            content.tooltip = "The color of the mid cap.";
            newColor = EditorGUILayout.ColorField(content, MidCapColor);
            if (newColor != MidCapColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMidCapColor(newColor);
            }

            content.text = "Hovered";
            content.tooltip = "The gizmo hovered color.";
            newColor = EditorGUILayout.ColorField(content, HoveredColor);
            if (newColor != HoveredColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetHoveredColor(newColor);
            }

            content.text = "Dbl slider fill alpha";
            content.tooltip = "The alpha value used to draw the area of the double-axis sliders.";
            newFloat = EditorGUILayout.FloatField(content, DblSliderFillAlpha);
            if (newFloat != DblSliderFillAlpha)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetDblSliderFillAlpha(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Shading");
            content.text = "Sliders";
            content.tooltip = "The type of shading that is applied to single-axis sliders. Does not apply to caps. Caps have their own shade property.";
            newShadeMode = (GizmoShadeMode)EditorGUILayout.EnumPopup(content, SliderShadeMode);
            if (newShadeMode != SliderShadeMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSliderShadeMode(newShadeMode);
            }

            content.text = "Slider caps";
            content.tooltip = "The type of shading that is applied to single-axis slider caps.";
            newShadeMode = (GizmoShadeMode)EditorGUILayout.EnumPopup(content, SliderCapShadeMode);
            if (newShadeMode != SliderCapShadeMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSliderCapShadeMode(newShadeMode);
            }

            content.text = "Dbl slider borders";
            content.tooltip = "The type of shading that is applied to double-axis slider borders.";
            newShadeMode = (GizmoShadeMode)EditorGUILayout.EnumPopup(content, DblSliderBorderShadeMode);
            if (newShadeMode != DblSliderBorderShadeMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetDblSliderBorderShadeMode(newShadeMode);
            }

            content.text = "Mid cap";
            content.tooltip = "The type of shading that is applied to the mid cap.";
            newShadeMode = (GizmoShadeMode)EditorGUILayout.EnumPopup(content, MidCapShadeMode);
            if (newShadeMode != MidCapShadeMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMidCapShadeMode(newShadeMode);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Fill");
            content.text = "Sliders";
            content.tooltip = "Fill mode for single-axis sliders. Does not apply to caps. Caps have their own fill property.";
            newFillMode3D = (GizmoFillMode3D)EditorGUILayout.EnumPopup(content, SliderFillMode);
            if (newFillMode3D != SliderFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSliderFillMode(newFillMode3D);
            }

            content.text = "Slider caps";
            content.tooltip = "Fill mode for slider caps.";
            newFillMode3D = (GizmoFillMode3D)EditorGUILayout.EnumPopup(content, SliderCapFillMode);
            if (newFillMode3D != SliderCapFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSliderCapFillMode(newFillMode3D);
            }

            content.text = "Dbl slider borders";
            content.tooltip = "Fill mode for double-axis slider borders.";
            newFillMode3D = (GizmoFillMode3D)EditorGUILayout.EnumPopup(content, DblSliderBorderFillMode);
            if (newFillMode3D != DblSliderBorderFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetDblSliderBorderFillMode(newFillMode3D);
            }

            content.text = "Mid cap";
            content.tooltip = "Fill mode for the mid cap.";
            newFillMode3D = (GizmoFillMode3D)EditorGUILayout.EnumPopup(content, MidCapFillMode);
            if (newFillMode3D != MidCapFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMidCapFillMode(newFillMode3D);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Vertex snapping");
            content.text = "Cap type";
            content.tooltip = "The type of shape which is used to draw the vertex snap cap when vertex snapping is enabled.";
            newCap2DType = (GizmoCap2DType)EditorGUILayoutEx.SelectiveEnumPopup(content, VertSnapCapType, GetAllowedVertSnapCapTypes());
            if (newCap2DType != VertSnapCapType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetVertSnapCapType(newCap2DType);
            }

            if (VertSnapCapType == GizmoCap2DType.Quad)
            {
                content.text = "Quad width";
                content.tooltip = "The quad width for the vert snap cap when the cap type is set to \'Quad\'.";
                newFloat = EditorGUILayout.FloatField(content, VertSnapCapQuadWidth);
                if (newFloat != VertSnapCapQuadWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetVertSnapCapQuadWidth(newFloat);
                }

                content.text = "Quad height";
                content.tooltip = "The quad height for the vert snap cap when the cap type is set to \'Quad\'.";
                newFloat = EditorGUILayout.FloatField(content, VertSnapCapQuadHeight);
                if (newFloat != VertSnapCapQuadHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetVertSnapCapQuadHeight(newFloat);
                }
            }
            else
            if (VertSnapCapType == GizmoCap2DType.Circle)
            {
                content.text = "Circle radius";
                content.tooltip = "The circle radius for the vert snap cap when the cap type is set to \'Circle\'.";
                newFloat = EditorGUILayout.FloatField(content, VertSnapCapCircleRadius);
                if (newFloat != VertSnapCapCircleRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetVertSnapCapCircleRadius(newFloat);
                }
            }

            content.text = "Fill mode";
            content.tooltip = "The fill mode for the vertex snap cap.";
            newFillMode2D = (GizmoFillMode2D)EditorGUILayout.EnumPopup(content, VertSnapCapFillMode);
            if (newFillMode2D != VertSnapCapFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetVertSnapCapFillMode(newFillMode2D);
            }

            content.text = "Fill color";
            content.tooltip = "The fill color for the vertex snap cap.";
            newColor = EditorGUILayout.ColorField(content, VertSnapCapColor);
            if (newColor != VertSnapCapColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetVertSnapCapColor(newColor);
            }

            content.text = "Hovered fill color";
            content.tooltip = "The hovered fill color for the vertex snap cap.";
            newColor = EditorGUILayout.ColorField(content, VertSnapCapHoveredColor);
            if (newColor != VertSnapCapHoveredColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetVertSnapCapHoveredColor(newColor);
            }

            content.text = "Border color";
            content.tooltip = "The border color for the vertex snap cap.";
            newColor = EditorGUILayout.ColorField(content, VertSnapCapBorderColor);
            if (newColor != VertSnapCapBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetVertSnapCapBorderColor(newColor);
            }

            content.text = "Hovered border color";
            content.tooltip = "The hovered border color for the vertex snap cap.";
            newColor = EditorGUILayout.ColorField(content, VertSnapCapHoveredBorderColor);
            if (newColor != VertSnapCapHoveredBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetVertSnapCapHoveredBorderColor(newColor);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Slider visibility");
            DrawSliderVisibilityControls(AxisSign.Positive, undoRecordObject);
            DrawSliderVisibilityControls(AxisSign.Negative, undoRecordObject);
            DrawCheckUncheckAllSlidersVisButtons(false, undoRecordObject);

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Slider cap visibility");
            content.text = "Mid cap";
            content.tooltip = "If this is checked, a cap will be shown at the origin of the gizmo. This cap is only for display purposes and can not be interacted with.";
            newBool = EditorGUILayout.ToggleLeft(content, IsMidCapVisible);
            if (newBool != IsMidCapVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                IsMidCapVisible = newBool;
            }
            DrawSliderCapVisibilityControls(AxisSign.Positive, undoRecordObject);
            DrawSliderCapVisibilityControls(AxisSign.Negative, undoRecordObject);
            DrawCheckUncheckAllSlidersVisButtons(true, undoRecordObject);

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Dbl slider visibility");
            DrawDblSliderVisibilityControls(undoRecordObject);
            DrawCheckUncheckAllDblSlidersVisButtons(undoRecordObject);
        }

        private void DrawCheckUncheckAllSlidersVisButtons(bool forCaps, UnityEngine.Object undoRecordObject)
        {
            EditorGUILayout.BeginHorizontal();
            var content = new GUIContent();
            content.text = "Show all";
            content.tooltip = "Show all " + (forCaps ? "caps." : "sliders.");
            if(GUILayout.Button(content, GUILayout.Width(80.0f)))
            {
                EditorUndoEx.Record(undoRecordObject);
                var visFlags = forCaps ? _sglSliderCapVis : _sglSliderVis;
                for(int index = 0; index < visFlags.Length; ++index) visFlags[index] = true;
            }

            content.text = "Hide all";
            content.tooltip = "Hide all " + (forCaps ? "caps." : "sliders.");
            if(GUILayout.Button(content, GUILayout.Width(80.0f)))
            {
                EditorUndoEx.Record(undoRecordObject);
                var visFlags = forCaps ? _sglSliderCapVis : _sglSliderVis;
                for(int index = 0; index < visFlags.Length; ++index) visFlags[index] = false;
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawCheckUncheckAllDblSlidersVisButtons(UnityEngine.Object undoRecordObject)
        {
            EditorGUILayout.BeginHorizontal();
            var content = new GUIContent();
            content.text = "Show all";
            content.tooltip = "Show all double-axis sliders.";
            if (GUILayout.Button(content, GUILayout.Width(80.0f)))
            {
                EditorUndoEx.Record(undoRecordObject);
                for (int index = 0; index < _dblSliderVis.Length; ++index) _dblSliderVis[index] = true;
            }

            content.text = "Hide all";
            content.tooltip = "Hide all double-axis sliders.";
            if (GUILayout.Button(content, GUILayout.Width(80.0f)))
            {
                EditorUndoEx.Record(undoRecordObject);
                for (int index = 0; index < _dblSliderVis.Length; ++index) _dblSliderVis[index] = false;
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawSliderVisibilityControls(AxisSign axisSign, UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            EditorGUILayout.BeginHorizontal();
            string[] sliderLabels = axisSign == AxisSign.Positive ? new string[] { "+X", "+Y", "+Z" } : new string[] { "-X", "-Y", "-Z" };
            for (int sliderIndex = 0; sliderIndex < 3; ++sliderIndex)
            {
                content.text = sliderLabels[sliderIndex];
                content.tooltip = "Toggle visibility for the " + sliderLabels[sliderIndex] + " slider.";

                bool isVisible = IsSliderVisible(sliderIndex, axisSign);
                bool newBool = EditorGUILayout.ToggleLeft(content, isVisible, GUILayout.Width(60.0f));
                if (newBool != isVisible)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderVisible(sliderIndex, axisSign, newBool);
                }
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawDblSliderVisibilityControls(UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            EditorGUILayout.BeginHorizontal();
            string[] sliderLabels = new string[] { "XY", "YZ", "ZX" };
            for (int sliderIndex = 0; sliderIndex < 3; ++sliderIndex)
            {
                content.text = sliderLabels[sliderIndex];
                content.tooltip = "Toggle visibility for the " + sliderLabels[sliderIndex] + " double-axis slider.";

                bool isVisible = IsDblSliderVisible((PlaneId)sliderIndex);
                bool newBool = EditorGUILayout.ToggleLeft(content, isVisible, GUILayout.Width(60.0f));
                if (newBool != isVisible)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetDblSliderVisible((PlaneId)sliderIndex, newBool);
                }
            }
            EditorGUILayout.EndHorizontal();
        }

        private void DrawSliderCapVisibilityControls(AxisSign axisSign, UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            EditorGUILayout.BeginHorizontal();
            string[] sliderLabels = axisSign == AxisSign.Positive ? new string[] { "+X", "+Y", "+Z" } : new string[] { "-X", "-Y", "-Z" };
            for (int sliderIndex = 0; sliderIndex < 3; ++sliderIndex)
            {
                content.text = sliderLabels[sliderIndex];
                content.tooltip = "Toggle visibility for the " + sliderLabels[sliderIndex] + " cap.";

                bool isVisible = IsSliderCapVisible(sliderIndex, axisSign);
                bool newBool = EditorGUILayout.ToggleLeft(content, isVisible, GUILayout.Width(60.0f));
                if (newBool != isVisible)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderCapVisible(sliderIndex, axisSign, newBool);
                }
            }
            EditorGUILayout.EndHorizontal();
        }
        #endif
    }
}
