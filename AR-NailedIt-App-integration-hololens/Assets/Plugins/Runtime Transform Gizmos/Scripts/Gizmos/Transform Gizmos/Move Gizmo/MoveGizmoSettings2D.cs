using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public class MoveGizmoSettings2D : Settings
    {
        [SerializeField]
        private GizmoPlaneSlider2DSettings _dblSliderSettings = new GizmoPlaneSlider2DSettings();
        [SerializeField]
        private GizmoLineSlider2DSettings[] _sglSliderSettings = new GizmoLineSlider2DSettings[4];

        public float LineSliderHoverEps { get { return _sglSliderSettings[0].LineHoverEps; } }
        public float BoxSliderHoverEps { get { return _sglSliderSettings[0].BoxHoverEps; } }
        public float XSnapStep { get { return _dblSliderSettings.OffsetSnapStepRight; } }
        public float YSnapStep { get { return _dblSliderSettings.OffsetSnapStepUp; } }
        public float DragSensitivity { get { return _dblSliderSettings.OffsetSensitivity; } }

        public MoveGizmoSettings2D()
        {
            for (int axisIndex = 0; axisIndex < _sglSliderSettings.Length; ++axisIndex)
            {
                _sglSliderSettings[axisIndex] = new GizmoLineSlider2DSettings();
            }
            _dblSliderSettings.ScaleMode = GizmoDblAxisScaleMode.Proportional;
        }

        public void SetLineSliderHoverEps(float eps)
        {
            foreach (var settings in _sglSliderSettings)
                settings.LineHoverEps = eps;
        }

        public void SetBoxSliderHoverEps(float eps)
        {
            foreach (var settings in _sglSliderSettings)
                settings.BoxHoverEps = eps;
        }

        public void SetXSnapStep(float snapStep)
        {
            GetSliderSettings(0, AxisSign.Positive).OffsetSnapStep = snapStep;
            GetSliderSettings(0, AxisSign.Negative).OffsetSnapStep = snapStep;
            _dblSliderSettings.OffsetSnapStepRight = snapStep;
        }

        public void SetYSnapStep(float snapStep)
        {
            GetSliderSettings(1, AxisSign.Positive).OffsetSnapStep = snapStep;
            GetSliderSettings(1, AxisSign.Negative).OffsetSnapStep = snapStep;
            _dblSliderSettings.OffsetSnapStepUp = snapStep;
        }

        public void SetDragSensitivity(float sensitivity)
        {
            foreach (var settings in _sglSliderSettings)
                settings.OffsetSensitivity = sensitivity;

            _dblSliderSettings.OffsetSensitivity = sensitivity;
        }

        public void ConnectSliderSettings(GizmoLineSlider2D slider, int axisIndex, AxisSign axisSign)
        {
            slider.SharedSettings = GetSliderSettings(axisIndex, axisSign);
        }

        public void ConnectDblSliderSettings(GizmoPlaneSlider2D slider)
        {
            slider.SharedSettings = _dblSliderSettings;
        }

        private GizmoLineSlider2DSettings GetSliderSettings(int axisIndex, AxisSign axisSign)
        {
            if (axisSign == AxisSign.Positive) return _sglSliderSettings[axisIndex];
            else return _sglSliderSettings[2 + axisIndex];
        }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat;

            EditorGUILayoutEx.SectionHeader("Hover epsilon");
            var content = new GUIContent();
            content.text = "Line slider";
            content.tooltip = "Controls the precision used when hovering line sliders.";
            newFloat = EditorGUILayout.FloatField(content, LineSliderHoverEps);
            if (newFloat != LineSliderHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetLineSliderHoverEps(newFloat);
            }

            content.text = "Box slider";
            content.tooltip = "Controls the precision used when hovering box sliders.";
            newFloat = EditorGUILayout.FloatField(content, BoxSliderHoverEps);
            if (newFloat != BoxSliderHoverEps)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetBoxSliderHoverEps(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Snapping");
            content.text = "X";
            content.tooltip = "Snap step value used when moving along the X axis.";
            newFloat = EditorGUILayout.FloatField(content, XSnapStep);
            if (newFloat != XSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetXSnapStep(newFloat);
            }

            content.text = "Y";
            content.tooltip = "Snap step value used when moving along the Y axis.";
            newFloat = EditorGUILayout.FloatField(content, YSnapStep);
            if (newFloat != YSnapStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetYSnapStep(newFloat);
            }

            EditorGUILayout.Separator();
            EditorGUILayoutEx.SectionHeader("Drag sensitivity");
            content.text = "Sensitivity";
            content.tooltip = "This value allows you to scale the slider drag speed.";
            newFloat = EditorGUILayout.FloatField(content, DragSensitivity);
            if (newFloat != DragSensitivity)
            {
                EditorUndoEx.Record(undoRecordObject);
                SetDragSensitivity(newFloat);
            }
        }
        #endif
    }
}
