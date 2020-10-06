using UnityEngine;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace RTG
{
    [Serializable]
    public class UniversalGizmoSettings2D : Settings
    {
        [SerializeField]
        private UniversalGizmoSettingsCategory _displayCategory = UniversalGizmoSettingsCategory.Move;

        #region Move
        [SerializeField]
        private GizmoPlaneSlider2DSettings _mvDblSliderSettings = new GizmoPlaneSlider2DSettings();
        [SerializeField]
        private GizmoLineSlider2DSettings[] _mvSglSliderSettings = new GizmoLineSlider2DSettings[4];

        public float MvLineSliderHoverEps { get { return _mvSglSliderSettings[0].LineHoverEps; } }
        public float MvBoxSliderHoverEps { get { return _mvSglSliderSettings[0].BoxHoverEps; } }
        public float MvXSnapStep { get { return _mvDblSliderSettings.OffsetSnapStepRight; } }
        public float MvYSnapStep { get { return _mvDblSliderSettings.OffsetSnapStepUp; } }
        public float MvDragSensitivity { get { return _mvDblSliderSettings.OffsetSensitivity; } }
        #endregion

        public UniversalGizmoSettingsCategory DisplayCategory { get { return _displayCategory; } set { _displayCategory = value; } }

        public UniversalGizmoSettings2D()
        {
            // Move
            for (int axisIndex = 0; axisIndex < _mvSglSliderSettings.Length; ++axisIndex)
            {
                _mvSglSliderSettings[axisIndex] = new GizmoLineSlider2DSettings();
            }
            _mvDblSliderSettings.ScaleMode = GizmoDblAxisScaleMode.Proportional;
        }

        #region Move
        public void SetMvLineSliderHoverEps(float eps)
        {
            foreach (var settings in _mvSglSliderSettings)
                settings.LineHoverEps = eps;
        }

        public void SetMvBoxSliderHoverEps(float eps)
        {
            foreach (var settings in _mvSglSliderSettings)
                settings.BoxHoverEps = eps;
        }

        public void SetMvXSnapStep(float snapStep)
        {
            GetMvSliderSettings(0, AxisSign.Positive).OffsetSnapStep = snapStep;
            GetMvSliderSettings(0, AxisSign.Negative).OffsetSnapStep = snapStep;
            _mvDblSliderSettings.OffsetSnapStepRight = snapStep;
        }

        public void SetMvYSnapStep(float snapStep)
        {
            GetMvSliderSettings(1, AxisSign.Positive).OffsetSnapStep = snapStep;
            GetMvSliderSettings(1, AxisSign.Negative).OffsetSnapStep = snapStep;
            _mvDblSliderSettings.OffsetSnapStepUp = snapStep;
        }

        public void SetMvDragSensitivity(float sensitivity)
        {
            foreach (var settings in _mvSglSliderSettings)
                settings.OffsetSensitivity = sensitivity;

            _mvDblSliderSettings.OffsetSensitivity = sensitivity;
        }

        public void ConnectMvSliderSettings(GizmoLineSlider2D slider, int axisIndex, AxisSign axisSign)
        {
            slider.SharedSettings = GetMvSliderSettings(axisIndex, axisSign);
        }

        public void ConnectMvDblSliderSettings(GizmoPlaneSlider2D slider)
        {
            slider.SharedSettings = _mvDblSliderSettings;
        }

        public void Inherit(MoveGizmoSettings2D settings)
        {
            SetMvLineSliderHoverEps(settings.LineSliderHoverEps);
            SetMvBoxSliderHoverEps(settings.BoxSliderHoverEps);
            SetMvXSnapStep(settings.XSnapStep);
            SetMvYSnapStep(settings.YSnapStep);
            SetMvDragSensitivity(settings.DragSensitivity);
        }

        private GizmoLineSlider2DSettings GetMvSliderSettings(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _mvSglSliderSettings[axisIndex];
            else return _mvSglSliderSettings[2 + axisIndex];
        }
        #endregion

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            if (DisplayCategory == UniversalGizmoSettingsCategory.Move) RenderMoveContent(undoRecordObject);
        }

        private void RenderMoveContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat;

            EditorGUILayoutEx.SectionHeader("Hover epsilon");
            var content = new GUIContent();
            content.text = "Line slider";
            content.tooltip = "Controls the precision used when hovering line sliders.";
            newFloat = EditorGUILayout.FloatField(content, MvLineSliderHoverEps);
            if (newFloat != MvLineSliderHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvLineSliderHoverEps(newFloat);
            }

            content.text = "Box slider";
            content.tooltip = "Controls the precision used when hovering box sliders.";
            newFloat = EditorGUILayout.FloatField(content, MvBoxSliderHoverEps);
            if (newFloat != MvBoxSliderHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvBoxSliderHoverEps(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Snapping");
            content.text = "X";
            content.tooltip = "Snap step value used when moving along the X axis.";
            newFloat = EditorGUILayout.FloatField(content, MvXSnapStep);
            if (newFloat != MvXSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvXSnapStep(newFloat);
            }

            content.text = "Y";
            content.tooltip = "Snap step value used when moving along the Y axis.";
            newFloat = EditorGUILayout.FloatField(content, MvYSnapStep);
            if (newFloat != MvYSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvYSnapStep(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Drag sensitivity");
            content.text = "Sensitivity";
            content.tooltip = "This value allows you to scale the slider drag speed.";
            newFloat = EditorGUILayout.FloatField(content, MvDragSensitivity);
            if (newFloat != MvDragSensitivity)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetMvDragSensitivity(newFloat);
            }
        }
        #endif
    }
}
