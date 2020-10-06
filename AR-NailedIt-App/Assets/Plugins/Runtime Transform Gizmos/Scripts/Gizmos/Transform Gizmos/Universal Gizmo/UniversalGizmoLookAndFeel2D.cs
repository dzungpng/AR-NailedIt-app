using UnityEngine;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace RTG
{
    [Serializable]
    public class UniversalGizmoLookAndFeel2D : Settings
    {
        [SerializeField]
        private UniversalGizmoSettingsCategory _displayCategory = UniversalGizmoSettingsCategory.Move;

        #region Move
        [SerializeField]
        private GizmoPlaneSlider2DLookAndFeel _mvDblSliderLookAndFeel = new GizmoPlaneSlider2DLookAndFeel();
        [SerializeField]
        private GizmoLineSlider2DLookAndFeel[] _mvSglSliderLookAndFeel = new GizmoLineSlider2DLookAndFeel[4];

        [SerializeField]
        private bool _isMvDblSliderVisible = true;
        [SerializeField]
        private bool[] _mvSglSliderVis = new bool[4];
        [SerializeField]
        private bool[] _mvSglSliderCapVis = new bool[4];

        public float MvScale { get { return _mvSglSliderLookAndFeel[0].Scale; } }
        public float MvSliderLength { get { return _mvSglSliderLookAndFeel[0].Length; } }
        public float MvBoxSliderThickness { get { return _mvSglSliderLookAndFeel[0].BoxThickness; } }
        public float MvSliderArrowCapHeight { get { return _mvSglSliderLookAndFeel[0].CapLookAndFeel.ArrowHeight; } }
        public float MvSliderArrowCapBaseRadius { get { return _mvSglSliderLookAndFeel[0].CapLookAndFeel.ArrowBaseRadius; } }
        public float MvSliderQuadCapWidth { get { return _mvSglSliderLookAndFeel[0].CapLookAndFeel.QuadWidth; } }
        public float MvSliderQuadCapHeight { get { return _mvSglSliderLookAndFeel[0].CapLookAndFeel.QuadHeight; } }
        public float MvSliderCircleCapRadius { get { return _mvSglSliderLookAndFeel[0].CapLookAndFeel.CircleRadius; } }
        public float MvDblSliderQuadWidth { get { return _mvDblSliderLookAndFeel.QuadWidth; } }
        public float MvDblSliderQuadHeight { get { return _mvDblSliderLookAndFeel.QuadHeight; } }
        public float MvDblSliderCircleRadius { get { return _mvDblSliderLookAndFeel.CircleRadius; } }
        public Color MvXColor { get { return GetMvSliderLookAndFeel(0, AxisSign.Positive).Color; } }
        public Color MvYColor { get { return GetMvSliderLookAndFeel(1, AxisSign.Positive).Color; } }
        public Color MvXBorderColor { get { return GetMvSliderLookAndFeel(0, AxisSign.Positive).BorderColor; } }
        public Color MvYBorderColor { get { return GetMvSliderLookAndFeel(1, AxisSign.Positive).BorderColor; } }
        public Color MvDblSliderColor { get { return _mvDblSliderLookAndFeel.Color; } }
        public Color MvDblSliderBorderColor { get { return _mvDblSliderLookAndFeel.BorderColor; } }
        public Color MvDblSliderHoveredColor { get { return _mvDblSliderLookAndFeel.HoveredColor; } }
        public Color MvDblSliderHoveredBorderColor { get { return _mvDblSliderLookAndFeel.HoveredBorderColor; } }
        public bool IsMvDblSliderVisible { get { return _isMvDblSliderVisible; } }
        public Color MvSliderHoveredColor { get { return _mvSglSliderLookAndFeel[0].HoveredColor; } }
        public Color MvSliderHoveredBorderColor { get { return _mvSglSliderLookAndFeel[0].HoveredBorderColor; } }
        public GizmoFillMode2D MvSliderFillMode { get { return _mvSglSliderLookAndFeel[0].FillMode; } }
        public GizmoFillMode2D MvSliderCapFillMode { get { return _mvSglSliderLookAndFeel[0].CapLookAndFeel.FillMode; } }
        public GizmoFillMode2D MvDblSliderFillMode { get { return _mvDblSliderLookAndFeel.FillMode; } }
        public GizmoCap2DType MvSliderCapType { get { return _mvSglSliderLookAndFeel[0].CapLookAndFeel.CapType; } }
        public GizmoLine2DType MvSliderLineType { get { return _mvSglSliderLookAndFeel[0].LineType; } }
        public GizmoPlane2DType MvDblSliderPlaneType { get { return _mvDblSliderLookAndFeel.PlaneType; } }
        #endregion

        public UniversalGizmoSettingsCategory DisplayCategory { get { return _displayCategory; } set { _displayCategory = value; } }

        public UniversalGizmoLookAndFeel2D()
        {
            for (int axisIndex = 0; axisIndex < _mvSglSliderLookAndFeel.Length; ++axisIndex)
            {
                _mvSglSliderLookAndFeel[axisIndex] = new GizmoLineSlider2DLookAndFeel();
            }

            SetMvAxisColor(0, RTSystemValues.XAxisColor);
            SetMvAxisColor(1, RTSystemValues.YAxisColor);
            SetMvAxisBorderColor(0, RTSystemValues.XAxisColor);
            SetMvAxisBorderColor(1, RTSystemValues.YAxisColor);
            SetMvSliderHoveredFillColor(RTSystemValues.HoveredAxisColor);
            SetMvSliderHoveredBorderColor(RTSystemValues.HoveredAxisColor);
            SetMvSliderCapType(GizmoCap2DType.Arrow);
            SetMvSliderCapFillMode(GizmoFillMode2D.Filled);

            SetMvSliderFillMode(GizmoFillMode2D.Filled);
            SetMvSliderVisible(0, AxisSign.Positive, true);
            SetMvSliderVisible(1, AxisSign.Positive, true);
            SetMvSliderCapVisible(0, AxisSign.Positive, true);
            SetMvSliderCapVisible(1, AxisSign.Positive, true);

            SetMvDblSliderFillMode(GizmoFillMode2D.Border);
            SetMvDblSliderColor(ColorEx.KeepAllButAlpha(Color.white, RTSystemValues.AxisAlpha));
            SetMvDblSliderBorderColor(Color.white);
            SetMvDblSliderHoveredColor(ColorEx.KeepAllButAlpha(RTSystemValues.HoveredAxisColor, RTSystemValues.AxisAlpha));
            SetMvDblSliderHoveredBorderColor(RTSystemValues.HoveredAxisColor);
        }

        #region Move
        public void SetMvDblSliderVisible(bool isVisible)
        {
            _isMvDblSliderVisible = isVisible;
        }

        public bool IsMvSliderVisible(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _mvSglSliderVis[axisIndex];
            else return _mvSglSliderVis[2 + axisIndex];
        }

        public bool IsMvPositiveSliderVisible(int axisIndex)
        {
            return _mvSglSliderVis[axisIndex];
        }

        public bool IsMvNegativeSliderVisible(int axisIndex)
        {
            return _mvSglSliderVis[2 + axisIndex];
        }

        public void SetMvSliderVisible(int axisIndex, AxisSign axisSign, bool isVisible)
        {
            if (axisSign == AxisSign.Positive) _mvSglSliderVis[axisIndex] = isVisible;
            else _mvSglSliderVis[2 + axisIndex] = isVisible;
        }

        public bool IsMvSliderCapVisible(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _mvSglSliderCapVis[axisIndex];
            else return _mvSglSliderCapVis[2 + axisIndex];
        }

        public bool IsMvPositiveSliderCapVisible(int axisIndex)
        {
            return _mvSglSliderCapVis[axisIndex];
        }

        public bool IsMvNegativeSliderCapVisible(int axisIndex)
        {
            return _mvSglSliderCapVis[2 + axisIndex];
        }

        public void SetMvSliderCapVisible(int axisIndex, AxisSign axisSign, bool isVisible)
        {
            if (axisSign == AxisSign.Positive) _mvSglSliderCapVis[axisIndex] = isVisible;
            else _mvSglSliderCapVis[2 + axisIndex] = isVisible;
        }

        public void SetMvAxisColor(int axisIndex, Color color)
        {
            GetMvSliderLookAndFeel(axisIndex, AxisSign.Positive).Color = color;
            GetMvSliderLookAndFeel(axisIndex, AxisSign.Positive).CapLookAndFeel.Color = color;
            GetMvSliderLookAndFeel(axisIndex, AxisSign.Negative).Color = color;
            GetMvSliderLookAndFeel(axisIndex, AxisSign.Negative).CapLookAndFeel.Color = color;
        }

        public void SetMvAxisBorderColor(int axisIndex, Color color)
        {
            GetMvSliderLookAndFeel(axisIndex, AxisSign.Positive).BorderColor = color;
            GetMvSliderLookAndFeel(axisIndex, AxisSign.Positive).CapLookAndFeel.BorderColor = color;
            GetMvSliderLookAndFeel(axisIndex, AxisSign.Negative).BorderColor = color;
            GetMvSliderLookAndFeel(axisIndex, AxisSign.Negative).CapLookAndFeel.BorderColor = color;
        }

        public void SetMvSliderHoveredFillColor(Color color)
        {
            foreach (var lookAndFeel in _mvSglSliderLookAndFeel)
            {
                lookAndFeel.HoveredColor = color;
                lookAndFeel.CapLookAndFeel.HoveredColor = color;
            }
        }

        public void SetMvSliderHoveredBorderColor(Color color)
        {
            foreach (var lookAndFeel in _mvSglSliderLookAndFeel)
            {
                lookAndFeel.HoveredBorderColor = color;
                lookAndFeel.CapLookAndFeel.HoveredBorderColor = color;
            }
        }

        public void SetMvSliderFillMode(GizmoFillMode2D fillMode)
        {
            foreach (var lookAndFeel in _mvSglSliderLookAndFeel)
                lookAndFeel.FillMode = fillMode;
        }

        public void SetMvDblSliderFillMode(GizmoFillMode2D fillMode)
        {
            _mvDblSliderLookAndFeel.FillMode = fillMode;
        }

        public void SetMvSliderCapFillMode(GizmoFillMode2D fillMode)
        {
            foreach (var lookAndFeel in _mvSglSliderLookAndFeel)
                lookAndFeel.CapLookAndFeel.FillMode = fillMode;
        }

        public void SetMvSliderLineType(GizmoLine2DType lineType)
        {
            foreach (var lookAndFeel in _mvSglSliderLookAndFeel)
                lookAndFeel.LineType = lineType;
        }

        public void SetMvBoxSliderThickness(float thickness)
        {
            foreach (var lookAndFeel in _mvSglSliderLookAndFeel)
                lookAndFeel.BoxThickness = thickness;
        }

        public void SetMvSliderLength(float length)
        {
            foreach (var lookAndFeel in _mvSglSliderLookAndFeel)
                lookAndFeel.Length = length;
        }

        public void SetMvSliderCapType(GizmoCap2DType capType)
        {
            foreach (var lookAndFeel in _mvSglSliderLookAndFeel)
                lookAndFeel.CapLookAndFeel.CapType = capType;
        }

        public void SetMvSliderArrowCapBaseRadius(float radius)
        {
            foreach (var lookAndFeel in _mvSglSliderLookAndFeel)
                lookAndFeel.CapLookAndFeel.ArrowBaseRadius = radius;
        }

        public void SetMvSliderArrowCapHeight(float height)
        {
            foreach (var lookAndFeel in _mvSglSliderLookAndFeel)
                lookAndFeel.CapLookAndFeel.ArrowHeight = height;
        }

        public void SetMvSliderQuadCapWidth(float width)
        {
            foreach (var lookAndFeel in _mvSglSliderLookAndFeel)
                lookAndFeel.CapLookAndFeel.QuadWidth = width;
        }

        public void SetMvSliderQuadCapHeight(float height)
        {
            foreach (var lookAndFeel in _mvSglSliderLookAndFeel)
                lookAndFeel.CapLookAndFeel.QuadHeight = height;
        }

        public void SetMvSliderCircleCapRadius(float radius)
        {
            foreach (var lookAndFeel in _mvSglSliderLookAndFeel)
                lookAndFeel.CapLookAndFeel.CircleRadius = radius;
        }

        public void SetMvDblSliderPlaneType(GizmoPlane2DType sliderType)
        {
            _mvDblSliderLookAndFeel.PlaneType = sliderType;
        }

        public void SetMvDblSliderQuadWidth(float width)
        {
            _mvDblSliderLookAndFeel.QuadWidth = width;
        }

        public void SetMvDblSliderQuadHeight(float height)
        {
            _mvDblSliderLookAndFeel.QuadHeight = height;
        }

        public void SetMvDblSliderCircleRadius(float radius)
        {
            _mvDblSliderLookAndFeel.CircleRadius = radius;
        }

        public void SetMvDblSliderColor(Color color)
        {
            _mvDblSliderLookAndFeel.Color = color;
        }

        public void SetMvDblSliderBorderColor(Color color)
        {
            _mvDblSliderLookAndFeel.BorderColor = color;
        }

        public void SetMvDblSliderHoveredColor(Color color)
        {
            _mvDblSliderLookAndFeel.HoveredColor = color;
        }

        public void SetMvDblSliderHoveredBorderColor(Color color)
        {
            _mvDblSliderLookAndFeel.HoveredBorderColor = color;
        }

        public void SetMvScale(float scale)
        {
            foreach (var lookAndFeel in _mvSglSliderLookAndFeel)
            {
                lookAndFeel.Scale = scale;
                lookAndFeel.CapLookAndFeel.Scale = scale;
            }

            _mvDblSliderLookAndFeel.Scale = scale;
        }

        public void ConnectMvSliderLookAndFeel(GizmoLineSlider2D slider, int axisIndex, AxisSign axisSign)
        {
            slider.SharedLookAndFeel = GetMvSliderLookAndFeel(axisIndex, axisSign);
        }

        public void ConnectMvDblSliderLookAndFeel(GizmoPlaneSlider2D slider)
        {
            slider.SharedLookAndFeel = _mvDblSliderLookAndFeel;
        }

        public void Inherit(MoveGizmoLookAndFeel2D lookAndFeel)
        {
            SetMvAxisBorderColor(0, lookAndFeel.XBorderColor);
            SetMvAxisBorderColor(1, lookAndFeel.YBorderColor);
            SetMvAxisColor(0, lookAndFeel.XColor);
            SetMvAxisColor(1, lookAndFeel.YColor);
            SetMvBoxSliderThickness(lookAndFeel.BoxSliderThickness);
            SetMvDblSliderBorderColor(lookAndFeel.DblSliderBorderColor);
            SetMvDblSliderCircleRadius(lookAndFeel.DblSliderCircleRadius);
            SetMvDblSliderColor(lookAndFeel.DblSliderColor);
            SetMvDblSliderFillMode(lookAndFeel.DblSliderFillMode);
            SetMvDblSliderHoveredBorderColor(lookAndFeel.DblSliderHoveredBorderColor);
            SetMvDblSliderHoveredColor(lookAndFeel.DblSliderHoveredColor);
            SetMvDblSliderQuadHeight(lookAndFeel.DblSliderQuadHeight);
            SetMvDblSliderQuadWidth(lookAndFeel.DblSliderQuadWidth);
            SetMvDblSliderPlaneType(lookAndFeel.DblSliderPlaneType);
            SetMvDblSliderVisible(lookAndFeel.IsDblSliderVisible);
            SetMvScale(lookAndFeel.Scale);
            SetMvSliderArrowCapHeight(lookAndFeel.SliderArrowCapHeight);
            SetMvSliderArrowCapBaseRadius(lookAndFeel.SliderArrowCapBaseRadius);
            SetMvSliderCircleCapRadius(lookAndFeel.SliderCircleCapRadius);
            SetMvSliderCapFillMode(lookAndFeel.SliderCapFillMode);
            SetMvSliderCapType(lookAndFeel.SliderCapType);
            SetMvSliderCapVisible(0, AxisSign.Positive, lookAndFeel.IsSliderCapVisible(0, AxisSign.Positive));
            SetMvSliderCapVisible(1, AxisSign.Positive, lookAndFeel.IsSliderCapVisible(1, AxisSign.Positive));
            SetMvSliderCapVisible(0, AxisSign.Negative, lookAndFeel.IsSliderCapVisible(0, AxisSign.Negative));
            SetMvSliderCapVisible(1, AxisSign.Negative, lookAndFeel.IsSliderCapVisible(1, AxisSign.Negative));
            SetMvSliderFillMode(lookAndFeel.SliderFillMode);
            SetMvSliderHoveredBorderColor(lookAndFeel.SliderHoveredBorderColor);
            SetMvSliderHoveredFillColor(lookAndFeel.SliderHoveredColor);
            SetMvSliderLength(lookAndFeel.SliderLength);
            SetMvSliderLineType(lookAndFeel.SliderLineType);
            SetMvSliderQuadCapHeight(lookAndFeel.SliderQuadCapHeight);
            SetMvSliderQuadCapWidth(lookAndFeel.SliderQuadCapWidth);
            SetMvSliderVisible(0, AxisSign.Positive, lookAndFeel.IsSliderVisible(0, AxisSign.Positive));
            SetMvSliderVisible(1, AxisSign.Positive, lookAndFeel.IsSliderVisible(1, AxisSign.Positive));
            SetMvSliderVisible(0, AxisSign.Negative, lookAndFeel.IsSliderVisible(0, AxisSign.Negative));
            SetMvSliderVisible(1, AxisSign.Negative, lookAndFeel.IsSliderVisible(1, AxisSign.Negative));
        }

        private GizmoLineSlider2DLookAndFeel GetMvSliderLookAndFeel(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _mvSglSliderLookAndFeel[axisIndex];
            else return _mvSglSliderLookAndFeel[2 + axisIndex];
        }
        #endregion

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            if (DisplayCategory == UniversalGizmoSettingsCategory.Move) RenderMoveContent(undoRecordObject);
        }

        private void RenderMoveContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat; Color newColor; bool newBool;
            GizmoLine2DType newLine2DType;
            GizmoCap2DType newCap2DType;
            GizmoFillMode2D newFillMode2D;
            GizmoPlane2DType newPlane2DType;

            EditorGUILayoutEx.SectionHeader("Scale");
            var content = new GUIContent();
            content.text = "Scale";
            content.tooltip = "The gizmo 2D scale. This is useful when you need to make the gizmo bigger or smaller because it maintains the relationship between different size properties.";
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
            newLine2DType = (GizmoLine2DType)EditorGUILayout.EnumPopup(content, MvSliderLineType);
            if (newLine2DType != MvSliderLineType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvSliderLineType(newLine2DType);
            }

            content.text = "Slider length";
            content.tooltip = "The single-axis slider length.";
            newFloat = EditorGUILayout.FloatField(content, MvSliderLength);
            if (newFloat != MvSliderLength)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvSliderLength(newFloat);
            }

            if (MvSliderLineType == GizmoLine2DType.Box)
            {
                content.text = "Slider box thickness";
                content.tooltip = "The box thickness for single-axis sliders when the slider type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, MvBoxSliderThickness);
                if (newFloat != MvBoxSliderThickness)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvBoxSliderThickness(newFloat);
                }
            }

            content.text = "Dbl slider type";
            content.tooltip = "The type of shape which is used to draw the double-axis slider.";
            newPlane2DType = (GizmoPlane2DType)EditorGUILayout.EnumPopup(content, MvDblSliderPlaneType);
            if (newPlane2DType != MvDblSliderPlaneType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvDblSliderPlaneType(newPlane2DType);
            }

            if (MvDblSliderPlaneType == GizmoPlane2DType.Quad)
            {
                content.text = "Quad width";
                content.tooltip = "The double-axis slider quad width when the dbl slider type is set to \'Quad\'.";
                newFloat = EditorGUILayout.FloatField(content, MvDblSliderQuadWidth);
                if (newFloat != MvDblSliderQuadWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvDblSliderQuadWidth(newFloat);
                }

                content.text = "Quad height";
                content.tooltip = "The double-axis slider quad height when the dbl slider type is set to \'Quad\'.";
                newFloat = EditorGUILayout.FloatField(content, MvDblSliderQuadHeight);
                if (newFloat != MvDblSliderQuadHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvDblSliderQuadHeight(newFloat);
                }
            }
            else
            if (MvDblSliderPlaneType == GizmoPlane2DType.Circle)
            {
                content.text = "Circle radius";
                content.tooltip = "The double-axis slider circle radius when the dbl slider type is set to \'Circle\'.";
                newFloat = EditorGUILayout.FloatField(content, MvDblSliderCircleRadius);
                if (newFloat != MvDblSliderCircleRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvDblSliderCircleRadius(newFloat);
                }
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Cap shape");
            content.text = "Slider cap type";
            content.tooltip = "The type of shape which is used to draw the single-axis slidre caps.";
            newCap2DType = (GizmoCap2DType)EditorGUILayout.EnumPopup(content, MvSliderCapType);
            if (newCap2DType != MvSliderCapType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvSliderCapType(newCap2DType);
            }

            if (MvSliderCapType == GizmoCap2DType.Arrow)
            {
                content.text = "Arrow height";
                content.tooltip = "The arrow height for slider caps when the cap type is set to \'Arrow\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderArrowCapHeight);
                if (newFloat != MvSliderArrowCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderArrowCapHeight(newFloat);
                }

                content.text = "Arrow radius";
                content.tooltip = "The arrow radius for slider caps when the cap type is set to \'Arrow\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderArrowCapBaseRadius);
                if (newFloat != MvSliderArrowCapBaseRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderArrowCapBaseRadius(newFloat);
                }
            }
            else
            if (MvSliderCapType == GizmoCap2DType.Quad)
            {
                content.text = "Quad width";
                content.tooltip = "The quad width for slider caps when the cap type is set to \'Quad\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderQuadCapWidth);
                if (newFloat != MvSliderQuadCapWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderQuadCapWidth(newFloat);
                }

                content.text = "Quad height";
                content.tooltip = "The quad height for slider caps when the cap type is set to \'Quad\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderQuadCapHeight);
                if (newFloat != MvSliderQuadCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderQuadCapHeight(newFloat);
                }
            }
            else
            if (MvSliderCapType == GizmoCap2DType.Circle)
            {
                content.text = "Circle radius";
                content.tooltip = "The circle radius for slider caps when the cap type is set to \'Circle\'.";
                newFloat = EditorGUILayout.FloatField(content, MvSliderCircleCapRadius);
                if (newFloat != MvSliderCircleCapRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetMvSliderCircleCapRadius(newFloat);
                }
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Colors");
            content.text = "X fill";
            content.tooltip = "The X axis fill color. Applies to the X axis slider and its cap.";
            newColor = EditorGUILayout.ColorField(content, MvXColor);
            if (newColor != MvXColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvAxisColor(0, newColor);
            }

            content.text = "X border";
            content.tooltip = "The X axis border color. Applies to the X axis slider and its cap.";
            newColor = EditorGUILayout.ColorField(content, MvXBorderColor);
            if (newColor != MvXBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvAxisBorderColor(0, newColor);
            }

            content.text = "Y fill";
            content.tooltip = "The Y axis fill color. Applies to the Y axis slider and its cap.";
            newColor = EditorGUILayout.ColorField(content, MvYColor);
            if (newColor != MvYColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvAxisColor(1, newColor);
            }

            content.text = "Y border";
            content.tooltip = "The Y axis border color. Applies to the Y axis slider and its cap.";
            newColor = EditorGUILayout.ColorField(content, MvYBorderColor);
            if (newColor != MvYBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvAxisBorderColor(1, newColor);
            }

            content.text = "Hovered fill";
            content.tooltip = "The hovered fill color. Applies to single sliders and their caps only. The double slider has its own color properties.";
            newColor = EditorGUILayout.ColorField(content, MvSliderHoveredColor);
            if (newColor != MvSliderHoveredColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvSliderHoveredFillColor(newColor);
            }

            content.text = "Hovered border";
            content.tooltip = "The hovered border color. Applies to single sliders and their caps only. The double slider has its own color properties.";
            newColor = EditorGUILayout.ColorField(content, MvSliderHoveredBorderColor);
            if (newColor != MvSliderHoveredBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvSliderHoveredBorderColor(newColor);
            }

            EditorGUILayout.Separator();
            content.text = "Dbl slider fill";
            content.tooltip = "The double-axis slider fill color.";
            newColor = EditorGUILayout.ColorField(content, MvDblSliderColor);
            if (newColor != MvDblSliderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvDblSliderColor(newColor);
            }

            content.text = "Dbl slider border";
            content.tooltip = "The double-axis slider border color.";
            newColor = EditorGUILayout.ColorField(content, MvDblSliderBorderColor);
            if (newColor != MvDblSliderBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvDblSliderBorderColor(newColor);
            }

            content.text = "Hovered dbl slider fill";
            content.tooltip = "The fill color of the double-axis slider when it is hovered.";
            newColor = EditorGUILayout.ColorField(content, MvDblSliderHoveredColor);
            if (newColor != MvDblSliderHoveredColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvDblSliderHoveredColor(newColor);
            }

            content.text = "Hovered dbl slider border";
            content.tooltip = "The border color of the double-axis slider when it is hovered.";
            newColor = EditorGUILayout.ColorField(content, MvDblSliderHoveredBorderColor);
            if (newColor != MvDblSliderHoveredBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvDblSliderHoveredBorderColor(newColor);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Fill");
            content.text = "Sliders";
            content.tooltip = "The fill mode for single-axis sliders. Does not affet caps. Caps have their own fill property.";
            newFillMode2D = (GizmoFillMode2D)EditorGUILayout.EnumPopup(content, MvSliderFillMode);
            if (newFillMode2D != MvSliderFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvSliderFillMode(newFillMode2D);
            }

            content.text = "Caps";
            content.tooltip = "The fill mode for single-axis slider caps.";
            newFillMode2D = (GizmoFillMode2D)EditorGUILayout.EnumPopup(content, MvSliderCapFillMode);
            if (newFillMode2D != MvSliderCapFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvSliderCapFillMode(newFillMode2D);
            }

            content.text = "Dbl slider";
            content.tooltip = "The double-slider fill mode.";
            newFillMode2D = (GizmoFillMode2D)EditorGUILayout.EnumPopup(content, MvDblSliderFillMode);
            if (newFillMode2D != MvDblSliderFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvDblSliderFillMode(newFillMode2D);
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
            content.text = "Is visible";
            content.tooltip = "Controls the visiblity of the double slider.";
            newBool = EditorGUILayout.ToggleLeft(content, IsMvDblSliderVisible);
            if (newBool != IsMvDblSliderVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvDblSliderVisible(newBool);
            }
        }

        private void DrawMvSliderVisibilityControls(AxisSign axisSign, UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            EditorGUILayout.BeginHorizontal();
            string[] sliderLabels = axisSign == AxisSign.Positive ? new string[] { "+X", "+Y" } : new string[] { "-X", "-Y" };
            for (int sliderIndex = 0; sliderIndex < 2; ++sliderIndex)
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

        private void DrawMvSliderCapVisibilityControls(AxisSign axisSign, UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            EditorGUILayout.BeginHorizontal();
            string[] sliderLabels = axisSign == AxisSign.Positive ? new string[] { "+X", "+Y" } : new string[] { "-X", "-Y" };
            for (int sliderIndex = 0; sliderIndex < 2; ++sliderIndex)
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
        #endif
    }
}
