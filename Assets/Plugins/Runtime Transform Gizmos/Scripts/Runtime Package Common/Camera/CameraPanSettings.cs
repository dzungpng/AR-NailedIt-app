using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    public enum CameraPanMode
    {
        Standard = 0,
        Smooth
    }

    [Serializable]
    public class CameraPanSettings : Settings
    {
        [SerializeField]
        private CameraPanMode _panMode = CameraPanMode.Standard;
        [SerializeField]
        private float _standardPanSensitivity = 1.0f;
        [SerializeField]
        private float _smoothPanSensitivity = 0.7f;
        [SerializeField]
        private float _smoothValue = 4.0f;
        [SerializeField]
        private bool _invertX = false;
        [SerializeField]
        private bool _invertY = false;
        [SerializeField]
        private bool _isPanningEnabled = true;

        public CameraPanMode PanMode { get { return _panMode; } set { _panMode = value; } }
        public float StandardPanSensitivity { get { return _standardPanSensitivity; } set { _standardPanSensitivity = Mathf.Max(value, 1e-3f); } }
        public float SmoothPanSensitivity { get { return _smoothPanSensitivity; } set { _smoothPanSensitivity = Mathf.Max(value, 1e-3f); } }
        public float Sensitivity { get { return _panMode == CameraPanMode.Standard ? _standardPanSensitivity : _smoothPanSensitivity; } }
        public float SmoothValue { get { return _smoothValue; } set { _smoothValue = Mathf.Max(value, 1e-3f); } }
        public bool InvertX { get { return _invertX; } set { _invertX = value; } }
        public bool InvertY { get { return _invertY; } set { _invertY = value; } }
        public bool IsPanningEnabled { get { return _isPanningEnabled; } set { _isPanningEnabled = value; } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat; bool newBool;

            EditorGUILayout.BeginVertical();

            // Enabled/disabled
            GUIContent content = new GUIContent();
            content.text = "Enabled";
            content.tooltip = "If checked, camera panning is enabled. Otherwise it is disabled.";
            newBool = EditorGUILayout.ToggleLeft(content, IsPanningEnabled);
            if(newBool != IsPanningEnabled)
            {
                EditorUndoEx.Record(undoRecordObject);
                IsPanningEnabled = newBool;
            }

            // Pan mode
            content.text = "Pan mode";
            content.tooltip = "Allows you to choose the way in which camera panning is performed.";
            CameraPanMode newPanMode = (CameraPanMode)EditorGUILayout.EnumPopup(content, PanMode);
            if (newPanMode != PanMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                PanMode = newPanMode;
            }

            // Pan settings
            if (PanMode == CameraPanMode.Standard)
            {
                content.text = "Sensitivity";
                content.tooltip = "Allows you to control how sensitive camera panning is to the movement of the input device when " +
                                  "the pan mode is set to \'" + CameraPanMode.Standard + "\'.";
                newFloat = EditorGUILayout.FloatField(content, StandardPanSensitivity);
                if (newFloat != StandardPanSensitivity)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    StandardPanSensitivity = newFloat;
                }
            }
            else
            if (PanMode == CameraPanMode.Smooth)
            {
                content.text = "Sensitivity";
                content.tooltip = "Allows you to control how sensitive camera panning is to the movement of the input device when " +
                                    "the pan mode is set to \'" + CameraPanMode.Smooth + "\'.";
                newFloat = EditorGUILayout.FloatField(content, SmoothPanSensitivity);
                if (newFloat != SmoothPanSensitivity)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SmoothPanSensitivity = newFloat;
                }

                content.text = "Smooth value";
                content.tooltip = "When the pan mode is set to \'" + CameraPanMode.Smooth + "\', this controls how fast the pan speed decreases over time. Bigger values will decrease the " +
                                    "pan speed faster. Smaller values have the opposite effect.";
                newFloat = EditorGUILayout.FloatField(content, SmoothValue);
                if (newFloat != SmoothValue)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SmoothValue = newFloat;
                }
            }

            // Axes inversion
            content.text = "Invert X";
            content.tooltip = "If checked, it reverses the camera pan direction along the X axis.";
            newBool = EditorGUILayout.ToggleLeft(content, InvertX);
            if (newBool != InvertX)
            {
                EditorUndoEx.Record(undoRecordObject);
                InvertX = newBool;
            }

            content.text = "Invert Y";
            content.tooltip = "If checked, it reverses the camera pan direction along the Y axis.";
            newBool = EditorGUILayout.ToggleLeft(content, InvertY);
            if (newBool != InvertY)
            {
                EditorUndoEx.Record(undoRecordObject);
                InvertY = newBool;
            }
            EditorGUILayout.EndVertical();
        }
        #endif
    }
}
