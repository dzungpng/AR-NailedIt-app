using UnityEngine;
using System.Collections.Generic;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public class MoveGizmoLookAndFeel2D : Settings
    {
        [SerializeField]
        private GizmoPlaneSlider2DLookAndFeel _dblSliderLookAndFeel = new GizmoPlaneSlider2DLookAndFeel();
        [SerializeField]
        private GizmoLineSlider2DLookAndFeel[] _sglSliderLookAndFeel = new GizmoLineSlider2DLookAndFeel[4];

        [SerializeField]
        private bool _isDblSliderVisible = true;
        [SerializeField]
        private bool[] _sglSliderVis = new bool[4];
        [SerializeField]
        private bool[] _sglSliderCapVis = new bool[4];

        public float Scale { get { return _sglSliderLookAndFeel[0].Scale; } }
        public float SliderLength { get { return _sglSliderLookAndFeel[0].Length; } }
        public float BoxSliderThickness { get { return _sglSliderLookAndFeel[0].BoxThickness; } }
        public float SliderArrowCapHeight { get { return _sglSliderLookAndFeel[0].CapLookAndFeel.ArrowHeight; } }
        public float SliderArrowCapBaseRadius { get { return _sglSliderLookAndFeel[0].CapLookAndFeel.ArrowBaseRadius; } }
        public float SliderQuadCapWidth { get { return _sglSliderLookAndFeel[0].CapLookAndFeel.QuadWidth; } }
        public float SliderQuadCapHeight { get { return _sglSliderLookAndFeel[0].CapLookAndFeel.QuadHeight; } }
        public float SliderCircleCapRadius { get { return _sglSliderLookAndFeel[0].CapLookAndFeel.CircleRadius; } }
        public float DblSliderQuadWidth { get { return _dblSliderLookAndFeel.QuadWidth; } }
        public float DblSliderQuadHeight { get { return _dblSliderLookAndFeel.QuadHeight; } }
        public float DblSliderCircleRadius { get { return _dblSliderLookAndFeel.CircleRadius; } }
        public Color XColor { get { return GetSliderLookAndFeel(0, AxisSign.Positive).Color; } }
        public Color YColor { get { return GetSliderLookAndFeel(1, AxisSign.Positive).Color; } }
        public Color XBorderColor { get { return GetSliderLookAndFeel(0, AxisSign.Positive).BorderColor; } }
        public Color YBorderColor { get { return GetSliderLookAndFeel(1, AxisSign.Positive).BorderColor; } }
        public Color DblSliderColor { get { return _dblSliderLookAndFeel.Color; } }
        public Color DblSliderBorderColor { get { return _dblSliderLookAndFeel.BorderColor; } }
        public Color DblSliderHoveredColor { get { return _dblSliderLookAndFeel.HoveredColor; } }
        public Color DblSliderHoveredBorderColor { get { return _dblSliderLookAndFeel.HoveredBorderColor; } }
        public bool IsDblSliderVisible { get { return _isDblSliderVisible; } }
        public Color SliderHoveredColor { get { return _sglSliderLookAndFeel[0].HoveredColor; } }
        public Color SliderHoveredBorderColor { get { return _sglSliderLookAndFeel[0].HoveredBorderColor; } }
        public GizmoFillMode2D SliderFillMode { get { return _sglSliderLookAndFeel[0].FillMode; } }
        public GizmoFillMode2D SliderCapFillMode { get { return _sglSliderLookAndFeel[0].CapLookAndFeel.FillMode; } }
        public GizmoFillMode2D DblSliderFillMode { get { return _dblSliderLookAndFeel.FillMode; } }
        public GizmoCap2DType SliderCapType { get { return _sglSliderLookAndFeel[0].CapLookAndFeel.CapType; } }
        public GizmoLine2DType SliderLineType { get { return _sglSliderLookAndFeel[0].LineType; } }
        public GizmoPlane2DType DblSliderPlaneType { get { return _dblSliderLookAndFeel.PlaneType; } }

        public MoveGizmoLookAndFeel2D()
        {
            for (int axisIndex = 0; axisIndex < _sglSliderLookAndFeel.Length; ++axisIndex)
            {
                _sglSliderLookAndFeel[axisIndex] = new GizmoLineSlider2DLookAndFeel();
            }

            SetAxisColor(0, RTSystemValues.XAxisColor);
            SetAxisColor(1, RTSystemValues.YAxisColor);
            SetAxisBorderColor(0, RTSystemValues.XAxisColor);
            SetAxisBorderColor(1, RTSystemValues.YAxisColor);
            SetSliderHoveredFillColor(RTSystemValues.HoveredAxisColor);
            SetSliderHoveredBorderColor(RTSystemValues.HoveredAxisColor);
            SetSliderCapType(GizmoCap2DType.Arrow);
            SetSliderCapFillMode(GizmoFillMode2D.Filled);

            SetSliderFillMode(GizmoFillMode2D.Filled);
            SetSliderVisible(0, AxisSign.Positive, true);
            SetSliderVisible(1, AxisSign.Positive, true);
            SetSliderCapVisible(0, AxisSign.Positive, true);
            SetSliderCapVisible(1, AxisSign.Positive, true);

            SetDblSliderFillMode(GizmoFillMode2D.Border);
            SetDblSliderColor(ColorEx.KeepAllButAlpha(Color.white, RTSystemValues.AxisAlpha));
            SetDblSliderBorderColor(Color.white);
            SetDblSliderHoveredColor(ColorEx.KeepAllButAlpha(RTSystemValues.HoveredAxisColor, RTSystemValues.AxisAlpha));
            SetDblSliderHoveredBorderColor(RTSystemValues.HoveredAxisColor);
        }

        public bool IsDblSliderPlaneTypeAllowed(GizmoPlane2DType planeType)
        {
            return planeType == GizmoPlane2DType.Circle || planeType == GizmoPlane2DType.Quad;
        }

        public List<Enum> GetAllowedDblSliderPlaneTypes()
        {
            return new List<Enum>() { GizmoPlane2DType.Circle, GizmoPlane2DType.Quad };
        }

        public void SetDblSliderVisible(bool isVisible)
        {
            _isDblSliderVisible = isVisible;
        }

        public bool IsSliderVisible(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _sglSliderVis[axisIndex];
            else return _sglSliderVis[2 + axisIndex];
        }

        public bool IsPositiveSliderVisible(int axisIndex)
        {
            return _sglSliderVis[axisIndex];
        }

        public bool IsNegativeSliderVisible(int axisIndex)
        {
            return _sglSliderVis[2 + axisIndex];
        }

        public void SetSliderVisible(int axisIndex, AxisSign axisSign, bool isVisible)
        {
            if (axisSign == AxisSign.Positive) _sglSliderVis[axisIndex] = isVisible;
            else _sglSliderVis[2 + axisIndex] = isVisible;
        }

        public bool IsSliderCapVisible(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _sglSliderCapVis[axisIndex];
            else return _sglSliderCapVis[2 + axisIndex];
        }

        public bool IsPositiveSliderCapVisible(int axisIndex)
        {
            return _sglSliderCapVis[axisIndex];
        }

        public bool IsNegativeSliderCapVisible(int axisIndex)
        {
            return _sglSliderCapVis[2 + axisIndex];
        }

        public void SetSliderCapVisible(int axisIndex, AxisSign axisSign, bool isVisible)
        {
            if (axisSign == AxisSign.Positive) _sglSliderCapVis[axisIndex] = isVisible;
            else _sglSliderCapVis[2 + axisIndex] = isVisible;
        }

        public void SetAxisColor(int axisIndex, Color color)
        {
            GetSliderLookAndFeel(axisIndex, AxisSign.Positive).Color = color;
            GetSliderLookAndFeel(axisIndex, AxisSign.Positive).CapLookAndFeel.Color = color;
            GetSliderLookAndFeel(axisIndex, AxisSign.Negative).Color = color;
            GetSliderLookAndFeel(axisIndex, AxisSign.Negative).CapLookAndFeel.Color = color;
        }

        public void SetAxisBorderColor(int axisIndex, Color color)
        {
            GetSliderLookAndFeel(axisIndex, AxisSign.Positive).BorderColor = color;
            GetSliderLookAndFeel(axisIndex, AxisSign.Positive).CapLookAndFeel.BorderColor = color;
            GetSliderLookAndFeel(axisIndex, AxisSign.Negative).BorderColor = color;
            GetSliderLookAndFeel(axisIndex, AxisSign.Negative).CapLookAndFeel.BorderColor = color;
        }

        public void SetSliderHoveredFillColor(Color color)
        {
            foreach(var lookAndFeel in _sglSliderLookAndFeel)
            {
                lookAndFeel.HoveredColor = color;
                lookAndFeel.CapLookAndFeel.HoveredColor = color;
            }
        }

        public void SetSliderHoveredBorderColor(Color color)
        {
            foreach (var lookAndFeel in _sglSliderLookAndFeel)
            {
                lookAndFeel.HoveredBorderColor = color;
                lookAndFeel.CapLookAndFeel.HoveredBorderColor = color;
            }
        }

        public void SetSliderFillMode(GizmoFillMode2D fillMode)
        {
            foreach (var lookAndFeel in _sglSliderLookAndFeel)
                lookAndFeel.FillMode = fillMode;
        }

        public void SetDblSliderFillMode(GizmoFillMode2D fillMode)
        {
            _dblSliderLookAndFeel.FillMode = fillMode;
        }

        public void SetSliderCapFillMode(GizmoFillMode2D fillMode)
        {
            foreach (var lookAndFeel in _sglSliderLookAndFeel)
                lookAndFeel.CapLookAndFeel.FillMode = fillMode;
        }

        public void SetSliderLineType(GizmoLine2DType lineType)
        {
            foreach (var lookAndFeel in _sglSliderLookAndFeel)
                lookAndFeel.LineType = lineType;
        }

        public void SetBoxSliderThickness(float thickness)
        {
            foreach (var lookAndFeel in _sglSliderLookAndFeel)
                lookAndFeel.BoxThickness = thickness;
        }

        public void SetSliderLength(float length)
        {
            foreach (var lookAndFeel in _sglSliderLookAndFeel)
                lookAndFeel.Length = length;
        }

        public void SetSliderCapType(GizmoCap2DType capType)
        {
            foreach (var lookAndFeel in _sglSliderLookAndFeel)
                lookAndFeel.CapLookAndFeel.CapType = capType;
        }

        public void SetSliderArrowCapBaseRadius(float radius)
        {
            foreach (var lookAndFeel in _sglSliderLookAndFeel)
                lookAndFeel.CapLookAndFeel.ArrowBaseRadius = radius;
        }

        public void SetSliderArrowCapHeight(float height)
        {
            foreach (var lookAndFeel in _sglSliderLookAndFeel)
                lookAndFeel.CapLookAndFeel.ArrowHeight = height;
        }

        public void SetSliderQuadCapWidth(float width)
        {
            foreach (var lookAndFeel in _sglSliderLookAndFeel)
                lookAndFeel.CapLookAndFeel.QuadWidth = width;
        }

        public void SetSliderQuadCapHeight(float height)
        {
            foreach (var lookAndFeel in _sglSliderLookAndFeel)
                lookAndFeel.CapLookAndFeel.QuadHeight = height;
        }

        public void SetSliderCircleCapRadius(float radius)
        {
            foreach (var lookAndFeel in _sglSliderLookAndFeel)
                lookAndFeel.CapLookAndFeel.CircleRadius = radius;
        }

        public void SetDblSliderPlaneType(GizmoPlane2DType sliderType)
        {
            _dblSliderLookAndFeel.PlaneType = sliderType;
        }

        public void SetDblSliderQuadWidth(float width)
        {
            _dblSliderLookAndFeel.QuadWidth = width;
        }

        public void SetDblSliderQuadHeight(float height)
        {
            _dblSliderLookAndFeel.QuadHeight = height;
        }

        public void SetDblSliderCircleRadius(float radius)
        {
            _dblSliderLookAndFeel.CircleRadius = radius;
        }

        public void SetDblSliderColor(Color color)
        {
            _dblSliderLookAndFeel.Color = color;
        }

        public void SetDblSliderBorderColor(Color color)
        {
            _dblSliderLookAndFeel.BorderColor = color;
        }

        public void SetDblSliderHoveredColor(Color color)
        {
            _dblSliderLookAndFeel.HoveredColor = color;
        }

        public void SetDblSliderHoveredBorderColor(Color color)
        {
            _dblSliderLookAndFeel.HoveredBorderColor = color;
        }

        public void SetScale(float scale)
        {
            foreach (var lookAndFeel in _sglSliderLookAndFeel)
            {
                lookAndFeel.Scale = scale;
                lookAndFeel.CapLookAndFeel.Scale = scale;
            }

            _dblSliderLookAndFeel.Scale = scale;
        }

        public void ConnectSliderLookAndFeel(GizmoLineSlider2D slider, int axisIndex, AxisSign axisSign)
        {
            slider.SharedLookAndFeel = GetSliderLookAndFeel(axisIndex, axisSign);
        }

        public void ConnectDblSliderLookAndFeel(GizmoPlaneSlider2D slider)
        {
            slider.SharedLookAndFeel = _dblSliderLookAndFeel;
        }

        private GizmoLineSlider2DLookAndFeel GetSliderLookAndFeel(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _sglSliderLookAndFeel[axisIndex];
            else return _sglSliderLookAndFeel[2 + axisIndex];
        }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
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
            newLine2DType = (GizmoLine2DType)EditorGUILayout.EnumPopup(content, SliderLineType);
            if (newLine2DType != SliderLineType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSliderLineType(newLine2DType);
            }

            content.text = "Slider length";
            content.tooltip = "The single-axis slider length.";
            newFloat = EditorGUILayout.FloatField(content, SliderLength);
            if (newFloat != SliderLength)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSliderLength(newFloat);
            }

            if (SliderLineType == GizmoLine2DType.Box)
            {
                content.text = "Slider box thickness";
                content.tooltip = "The box thickness for single-axis sliders when the slider type is set to \'Box\'.";
                newFloat = EditorGUILayout.FloatField(content, BoxSliderThickness);
                if (newFloat != BoxSliderThickness)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetBoxSliderThickness(newFloat);
                }
            }

            content.text = "Dbl slider type";
            content.tooltip = "The type of shape which is used to draw the double-axis slider.";
            newPlane2DType = (GizmoPlane2DType)EditorGUILayoutEx.SelectiveEnumPopup(content, DblSliderPlaneType, GetAllowedDblSliderPlaneTypes());
            if (newPlane2DType != DblSliderPlaneType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetDblSliderPlaneType(newPlane2DType);
            }

            if (DblSliderPlaneType == GizmoPlane2DType.Quad)
            {
                content.text = "Quad width";
                content.tooltip = "The double-axis slider quad width when the dbl slider type is set to \'Quad\'.";
                newFloat = EditorGUILayout.FloatField(content, DblSliderQuadWidth);
                if (newFloat != DblSliderQuadWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetDblSliderQuadWidth(newFloat);
                }

                content.text = "Quad height";
                content.tooltip = "The double-axis slider quad height when the dbl slider type is set to \'Quad\'.";
                newFloat = EditorGUILayout.FloatField(content, DblSliderQuadHeight);
                if (newFloat != DblSliderQuadHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetDblSliderQuadHeight(newFloat);
                }
            }
            else
            if (DblSliderPlaneType == GizmoPlane2DType.Circle)
            {
                content.text = "Circle radius";
                content.tooltip = "The double-axis slider circle radius when the dbl slider type is set to \'Circle\'.";
                newFloat = EditorGUILayout.FloatField(content, DblSliderCircleRadius);
                if (newFloat != DblSliderCircleRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetDblSliderCircleRadius(newFloat);
                }
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Cap shape");
            content.text = "Slider cap type";
            content.tooltip = "The type of shape which is used to draw the single-axis slidre caps.";
            newCap2DType = (GizmoCap2DType)EditorGUILayout.EnumPopup(content, SliderCapType);
            if (newCap2DType != SliderCapType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSliderCapType(newCap2DType);
            }

            if (SliderCapType == GizmoCap2DType.Arrow)
            {
                content.text = "Arrow height";
                content.tooltip = "The arrow height for slider caps when the cap type is set to \'Arrow\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderArrowCapHeight);
                if (newFloat != SliderArrowCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderArrowCapHeight(newFloat);
                }

                content.text = "Arrow radius";
                content.tooltip = "The arrow radius for slider caps when the cap type is set to \'Arrow\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderArrowCapBaseRadius);
                if (newFloat != SliderArrowCapBaseRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderArrowCapBaseRadius(newFloat);
                }
            }
            else
            if (SliderCapType == GizmoCap2DType.Quad)
            {
                content.text = "Quad width";
                content.tooltip = "The quad width for slider caps when the cap type is set to \'Quad\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderQuadCapWidth);
                if (newFloat != SliderQuadCapWidth)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderQuadCapWidth(newFloat);
                }

                content.text = "Quad height";
                content.tooltip = "The quad height for slider caps when the cap type is set to \'Quad\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderQuadCapHeight);
                if (newFloat != SliderQuadCapHeight)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderQuadCapHeight(newFloat);
                }
            }
            else
            if (SliderCapType == GizmoCap2DType.Circle)
            {
                content.text = "Circle radius";
                content.tooltip = "The circle radius for slider caps when the cap type is set to \'Circle\'.";
                newFloat = EditorGUILayout.FloatField(content, SliderCircleCapRadius);
                if (newFloat != SliderCircleCapRadius)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SetSliderCircleCapRadius(newFloat);
                }
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Colors");
            content.text = "X fill";
            content.tooltip = "The X axis fill color. Applies to the X axis slider and its cap.";
            newColor = EditorGUILayout.ColorField(content, XColor);
            if (newColor != XColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisColor(0, newColor);
            }

            content.text = "X border";
            content.tooltip = "The X axis border color. Applies to the X axis slider and its cap.";
            newColor = EditorGUILayout.ColorField(content, XBorderColor);
            if (newColor != XBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisBorderColor(0, newColor);
            }

            content.text = "Y fill";
            content.tooltip = "The Y axis fill color. Applies to the Y axis slider and its cap.";
            newColor = EditorGUILayout.ColorField(content, YColor);
            if (newColor != YColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisColor(1, newColor);
            }

            content.text = "Y border";
            content.tooltip = "The Y axis border color. Applies to the Y axis slider and its cap.";
            newColor = EditorGUILayout.ColorField(content, YBorderColor);
            if (newColor != YBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetAxisBorderColor(1, newColor);
            }

            content.text = "Hovered fill";
            content.tooltip = "The hovered fill color. Applies to single sliders and their caps only. The double slider has its own color properties.";
            newColor = EditorGUILayout.ColorField(content, SliderHoveredColor);
            if (newColor != SliderHoveredColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSliderHoveredFillColor(newColor);
            }

            content.text = "Hovered border";
            content.tooltip = "The hovered border color. Applies to single sliders and their caps only. The double slider has its own color properties.";
            newColor = EditorGUILayout.ColorField(content, SliderHoveredBorderColor);
            if (newColor != SliderHoveredBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSliderHoveredBorderColor(newColor);
            }

            EditorGUILayout.Separator();
            content.text = "Dbl slider fill";
            content.tooltip = "The double-axis slider fill color.";
            newColor = EditorGUILayout.ColorField(content, DblSliderColor);
            if (newColor != DblSliderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetDblSliderColor(newColor);
            }

            content.text = "Dbl slider border";
            content.tooltip = "The double-axis slider border color.";
            newColor = EditorGUILayout.ColorField(content, DblSliderBorderColor);
            if (newColor != DblSliderBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetDblSliderBorderColor(newColor);
            }

            content.text = "Hovered dbl slider fill";
            content.tooltip = "The fill color of the double-axis slider when it is hovered.";
            newColor = EditorGUILayout.ColorField(content, DblSliderHoveredColor);
            if (newColor != DblSliderHoveredColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetDblSliderHoveredColor(newColor);
            }

            content.text = "Hovered dbl slider border";
            content.tooltip = "The border color of the double-axis slider when it is hovered.";
            newColor = EditorGUILayout.ColorField(content, DblSliderHoveredBorderColor);
            if (newColor != DblSliderHoveredBorderColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetDblSliderHoveredBorderColor(newColor);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Fill");
            content.text = "Sliders";
            content.tooltip = "The fill mode for single-axis sliders. Does not affet caps. Caps have their own fill property.";
            newFillMode2D = (GizmoFillMode2D)EditorGUILayout.EnumPopup(content, SliderFillMode);
            if (newFillMode2D != SliderFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSliderFillMode(newFillMode2D);
            }

            content.text = "Caps";
            content.tooltip = "The fill mode for single-axis slider caps.";
            newFillMode2D = (GizmoFillMode2D)EditorGUILayout.EnumPopup(content, SliderCapFillMode);
            if (newFillMode2D != SliderCapFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetSliderCapFillMode(newFillMode2D);
            }

            content.text = "Dbl slider";
            content.tooltip = "The double-slider fill mode.";
            newFillMode2D = (GizmoFillMode2D)EditorGUILayout.EnumPopup(content, DblSliderFillMode);
            if (newFillMode2D != DblSliderFillMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetDblSliderFillMode(newFillMode2D);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Slider visibility");
            DrawSliderVisibilityControls(AxisSign.Positive, undoRecordObject);
            DrawSliderVisibilityControls(AxisSign.Negative, undoRecordObject);
            DrawCheckUncheckAllSlidersVisButtons(false, undoRecordObject);

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Slider cap visibility");
            DrawSliderCapVisibilityControls(AxisSign.Positive, undoRecordObject);
            DrawSliderCapVisibilityControls(AxisSign.Negative, undoRecordObject);
            DrawCheckUncheckAllSlidersVisButtons(true, undoRecordObject);

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Dbl slider visibility");
            content.text = "Is visible";
            content.tooltip = "Controls the visiblity of the double slider.";
            newBool = EditorGUILayout.ToggleLeft(content, IsDblSliderVisible);
            if (newBool != IsDblSliderVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetDblSliderVisible(newBool);
            }
        }

        private void DrawSliderVisibilityControls(AxisSign axisSign, UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            EditorGUILayout.BeginHorizontal();
            string[] sliderLabels = axisSign == AxisSign.Positive ? new string[] { "+X", "+Y" } : new string[] { "-X", "-Y" };
            for (int sliderIndex = 0; sliderIndex < 2; ++sliderIndex)
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

        private void DrawSliderCapVisibilityControls(AxisSign axisSign, UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            EditorGUILayout.BeginHorizontal();
            string[] sliderLabels = axisSign == AxisSign.Positive ? new string[] { "+X", "+Y"} : new string[] { "-X", "-Y" };
            for (int sliderIndex = 0; sliderIndex < 2; ++sliderIndex)
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

        private void DrawCheckUncheckAllSlidersVisButtons(bool forCaps, UnityEngine.Object undoRecordObject)
        {
            EditorGUILayout.BeginHorizontal();
            var content = new GUIContent();
            content.text = "Show all";
            content.tooltip = "Show all " + (forCaps ? "caps." : "sliders.");
            if (GUILayout.Button(content, GUILayout.Width(80.0f)))
            {
                EditorUndoEx.Record(undoRecordObject);
                var visFlags = forCaps ? _sglSliderCapVis : _sglSliderVis;
                for (int index = 0; index < visFlags.Length; ++index) visFlags[index] = true;
            }

            content.text = "Hide all";
            content.tooltip = "Hide all " + (forCaps ? "caps." : "sliders.");
            if (GUILayout.Button(content, GUILayout.Width(80.0f)))
            {
                EditorUndoEx.Record(undoRecordObject);
                var visFlags = forCaps ? _sglSliderCapVis : _sglSliderVis;
                for (int index = 0; index < visFlags.Length; ++index) visFlags[index] = false;
            }
            EditorGUILayout.EndHorizontal();
        }
        #endif
    }
}
