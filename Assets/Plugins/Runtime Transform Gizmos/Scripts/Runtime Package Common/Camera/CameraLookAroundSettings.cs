using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    public enum CameraLookAroundMode
    {
        Standard = 0,
        Smooth
    }

    [Serializable]
    public class CameraLookAroundSettings : Settings
    {
        [SerializeField]
        private CameraLookAroundMode _lookAroundMode = CameraLookAroundMode.Standard;
        [SerializeField]
        private float _standardLookAroundSensitivity = 5.0f;
        [SerializeField]
        private float _smoothLookAroundSensitivity = 5.0f;
        [SerializeField]
        private float smoothValue = 4.0f;
        [SerializeField]
        private bool _invertX = false;
        [SerializeField]
        private bool _invertY = false;
        [SerializeField]
        private bool _isLookAroundEnabled = true;

        public CameraLookAroundMode LookAroundMode { get { return _lookAroundMode; } set { _lookAroundMode = value; } }
        public float StandardLookAroundSensitivity { get { return _standardLookAroundSensitivity; } set { _standardLookAroundSensitivity = Mathf.Max(value, 1e-3f); } }
        public float SmoothLookAroundSensitivity { get { return _smoothLookAroundSensitivity; } set { _smoothLookAroundSensitivity = Mathf.Max(value, 1e-3f); } }
        public float Sensitivity { get { return _lookAroundMode == CameraLookAroundMode.Standard ? _standardLookAroundSensitivity : _smoothLookAroundSensitivity; } }
        public float SmoothValue { get { return smoothValue; } set { smoothValue = Mathf.Max(value, 1e-3f); } }
        public bool InvertX { get { return _invertX; } set { _invertX = value; } }
        public bool InvertY { get { return _invertY; } set { _invertY = value; } }
        public bool IsLookAroundEnabled { get { return _isLookAroundEnabled; } set { _isLookAroundEnabled = value; } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat; bool newBool;

            EditorGUILayout.BeginVertical();

            // Enabled/disabled
            GUIContent content = new GUIContent();
            content.text = "Enabled";
            content.tooltip = "If checked, camera look around is enabled. Otherwise it is disabled.";
            newBool = EditorGUILayout.ToggleLeft(content, IsLookAroundEnabled);
            if (newBool != IsLookAroundEnabled)
            {
                EditorUndoEx.Record(undoRecordObject);
                IsLookAroundEnabled = newBool;
            }

            // Look around mode
            content.text = "Look around mode";
            content.tooltip = "Allows you to choose the way in which the look around rotation is performed.";
            CameraLookAroundMode newLookAroundMode = (CameraLookAroundMode)EditorGUILayout.EnumPopup(content, LookAroundMode);
            if (newLookAroundMode != LookAroundMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                LookAroundMode = newLookAroundMode;
            }

            // Look around settings
            if (LookAroundMode == CameraLookAroundMode.Standard)
            {
                content.text = "Sensitivity";
                content.tooltip = "Allows you to control how sensitive camera look around is to the movement of the input device when " +
                                  "the look around mode is set to \'" + CameraLookAroundMode.Standard + "\'.";
                newFloat = EditorGUILayout.FloatField(content, StandardLookAroundSensitivity);
                if (newFloat != StandardLookAroundSensitivity)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    StandardLookAroundSensitivity = newFloat;
                }
            }
            else
            if (LookAroundMode == CameraLookAroundMode.Smooth)
            {
                content.text = "Sensitivity";
                content.tooltip = "Allows you to control how sensitive camera look around is to the movement of the input device when " +
                                    "the look around mode is set to \'" + CameraLookAroundMode.Smooth + "\'.";
                newFloat = EditorGUILayout.FloatField(content, SmoothLookAroundSensitivity);
                if (newFloat != SmoothLookAroundSensitivity)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SmoothLookAroundSensitivity = newFloat;
                }

                content.text = "Smooth value";
                content.tooltip = "When the look around mode is set to \'" + CameraLookAroundMode.Smooth + "\', this controls how fast the rotation speed decreases over time. Bigger values will decrease the " +
                                    "rotation speed faster. Smaller values have the opposite effect.";
                newFloat = EditorGUILayout.FloatField(content, SmoothValue);
                if (newFloat != SmoothValue)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SmoothValue = newFloat;
                }
            }

            // Axes inversion
            content.text = "Invert X";
            content.tooltip = "If checked, it reverses the camera rotation direction around the global Y axis.";
            newBool = EditorGUILayout.ToggleLeft(content, InvertX);
            if (newBool != InvertX)
            {
                EditorUndoEx.Record(undoRecordObject);
                InvertX = newBool;
            }

            content.text = "Invert Y";
            content.tooltip = "If checked, it reverses the camera rotation direction around its local X axis.";
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
