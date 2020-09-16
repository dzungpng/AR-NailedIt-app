using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    public enum CameraOrbitMode
    {
        Standard = 0,
        Smooth
    }

    [Serializable]
    public class CameraOrbitSettings : Settings
    {
        [SerializeField]
        private CameraOrbitMode _orbitMode = CameraOrbitMode.Standard;
        [SerializeField]
        private float _standardOrbitSensitivity = 5.0f;
        [SerializeField]
        private float _smoothOrbitSensitivity = 5.0f;
        [SerializeField]
        private float _smoothValue = 8.0f;
        [SerializeField]
        private bool _invertX = false;
        [SerializeField]
        private bool _invertY = false;
        [SerializeField]
        private bool _isOrbitEnabled = true;

        public CameraOrbitMode OrbitMode { get { return _orbitMode; } set { _orbitMode = value; } }
        public float StandardOrbitSensitivity { get { return _standardOrbitSensitivity; } set { _standardOrbitSensitivity = Mathf.Max(value, 1e-3f); } }
        public float SmoothOrbitSensitivity { get { return _smoothOrbitSensitivity; } set { _smoothOrbitSensitivity = Mathf.Max(value, 1e-3f); } }
        public float OrbitSensitivity { get { return _orbitMode == CameraOrbitMode.Smooth ? _smoothOrbitSensitivity : _standardOrbitSensitivity; } }
        public float SmoothValue { get { return _smoothValue; } set { _smoothValue = Mathf.Max(value, 1e-3f); } }
        public bool InvertX { get { return _invertX; } set { _invertX = value; } }
        public bool InvertY { get { return _invertY; } set { _invertY = value; } }
        public bool IsOrbitEnabled { get { return _isOrbitEnabled; } set { _isOrbitEnabled = value; } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            bool newBool; float newFloat;
            CameraOrbitMode newOrbitMode;

            // Enabled/disabled
            GUIContent content = new GUIContent();
            content.text = "Enabled";
            content.tooltip = "If checked, camera orbit is enabled. Otherwise it is disabled.";
            newBool = EditorGUILayout.ToggleLeft(content, IsOrbitEnabled);
            if (newBool != IsOrbitEnabled)
            {
                EditorUndoEx.Record(undoRecordObject);
                IsOrbitEnabled = newBool;
            }

            // Orbit mode
            content.text = "Orbit mode";
            content.tooltip = "Allows you to control the way in which the camera will orbit.";
            newOrbitMode = (CameraOrbitMode)EditorGUILayout.EnumPopup(content, OrbitMode);
            if(newOrbitMode != OrbitMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                OrbitMode = newOrbitMode;
            }

            // Standard sensitivity
            if(OrbitMode == CameraOrbitMode.Standard)
            {
                content.text = "Sensitivity";
                content.tooltip = "Allows you to specify how sensitive the camera is to the movement of the input device when performing a standard orbit.";
                newFloat = EditorGUILayout.FloatField(content, StandardOrbitSensitivity);
                if(newFloat != StandardOrbitSensitivity)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    StandardOrbitSensitivity = newFloat;
                }
            }
            else
            if(OrbitMode == CameraOrbitMode.Smooth)
            {
                // Smooth sensitivity
                content.text = "Sensitivity";
                content.tooltip = "Allows you to specify how sensitive the camera is to the movement of the input device when performing a smooth orbit.";
                newFloat = EditorGUILayout.FloatField(content, SmoothOrbitSensitivity);
                if (newFloat != SmoothOrbitSensitivity)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SmoothOrbitSensitivity = newFloat;
                }

                // Smooth value
                content.text = "Smooth value";
                content.tooltip = "This is a value which allows you to control how fast the orbit speed decreases over time when performing a smooth orbit. " + 
                                  "Bigger values will decrease the speed more rapidly.";
                newFloat = EditorGUILayout.FloatField(content, SmoothValue);
                if(newFloat != SmoothValue)
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
        }
        #endif
    }
}
