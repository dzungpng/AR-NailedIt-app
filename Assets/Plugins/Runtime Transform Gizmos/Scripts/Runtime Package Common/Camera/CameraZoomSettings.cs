using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    public enum CameraZoomMode
    {
        Standard = 0,
        Smooth
    }

    [Serializable]
    public class CameraZoomSettings : Settings
    {
        [SerializeField]
        private CameraZoomMode _zoomMode = CameraZoomMode.Standard;
        [SerializeField]
        private float _orthoStandardZoomSensitivity = 10.0f;
        [SerializeField]
        private float _perspStandardZoomSensitivity = 10.0f;
        [SerializeField]
        private float _orthoSmoothZoomSensitivity = 5.0f;
        [SerializeField]
        private float _perspSmoothZoomSensitivity = 5.0f;
        [SerializeField]
        private float _orthoZoomSmoothValue = 5.0f;
        [SerializeField]
        private float _perspZoomSmoothValue = 5.0f;
        [SerializeField]
        private bool _invertZoomAxis = false;
        [SerializeField]
        private bool _isZoomEnabled = true;

        public CameraZoomMode ZoomMode { get { return _zoomMode; } set { _zoomMode = value; } }
        public float OrthoStandardZoomSensitivity { get { return _orthoStandardZoomSensitivity; } set { _orthoStandardZoomSensitivity = Mathf.Max(value, 1e-3f); } }
        public float PerspStandardZoomSensitivity { get { return _perspStandardZoomSensitivity; } set { _perspStandardZoomSensitivity = Mathf.Max(value, 1e-3f); } }
        public float OrthoSmoothZoomSensitivity { get { return _orthoSmoothZoomSensitivity; } set { _orthoSmoothZoomSensitivity = Mathf.Max(value, 1e-3f); } }
        public float PerspSmoothZoomSensitivity { get { return _perspSmoothZoomSensitivity; } set { _perspSmoothZoomSensitivity = Mathf.Max(value, 1e-3f); } }
        public float OrthoZoomSmoothValue { get { return _orthoZoomSmoothValue; } set { _orthoZoomSmoothValue = Mathf.Max(value, 1e-3f); } }
        public float PerspZoomSmoothValue { get { return _perspZoomSmoothValue; } set { _perspZoomSmoothValue = Mathf.Max(value, 1e-3f); } }
        public bool InvertZoomAxis { get { return _invertZoomAxis; } set { _invertZoomAxis = value; } }
        public bool IsZoomEnabled { get { return _isZoomEnabled; } set { _isZoomEnabled = value; } }

        public float GetZoomSmoothValue(Camera camera)
        {
            return camera.orthographic ? OrthoZoomSmoothValue : PerspZoomSmoothValue;
        }

        public float GetZoomSensitivity(Camera camera)
        {
            if (_zoomMode == CameraZoomMode.Standard) return camera.orthographic ? OrthoStandardZoomSensitivity : PerspStandardZoomSensitivity;
            else
            if (_zoomMode == CameraZoomMode.Smooth) return camera.orthographic ? OrthoSmoothZoomSensitivity : PerspSmoothZoomSensitivity;

            return 0.0f;
        }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat; bool newBool;

            EditorGUILayout.BeginVertical();

            // Enabled/disabled
            GUIContent content = new GUIContent();
            content.text = "Enabled";
            content.tooltip = "If checked, camera zooming is enabled. Otherwise it is disabled.";
            newBool = EditorGUILayout.ToggleLeft(content, IsZoomEnabled);
            if (newBool != IsZoomEnabled)
            {
                EditorUndoEx.Record(undoRecordObject);
                IsZoomEnabled = newBool;
            }

            // Zoom mode
            content.text = "Zoom mode";
            content.tooltip = "Allows you to choose the way in which camera zooming is performed.";
            CameraZoomMode newZoomMode = (CameraZoomMode)EditorGUILayout.EnumPopup(content, ZoomMode);
            if (newZoomMode != ZoomMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                ZoomMode = newZoomMode;
            }

            // Zoom settings
            if(ZoomMode == CameraZoomMode.Standard)
            {
                // Perspective sensitivity
                content.text = "Sensitivity (perspective)";
                content.tooltip = "(PERSPECTIVE CAMERAS ONLY) Allows you to control how sensitive camera zooming is to the movement of the input device when " +
                                  "the zoom mode is set to \'" + CameraZoomMode.Standard + "\'.";
                newFloat = EditorGUILayout.FloatField(content, PerspStandardZoomSensitivity);
                if (newFloat != PerspStandardZoomSensitivity)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    PerspStandardZoomSensitivity = newFloat;
                }

                // Ortho sensitivity
                content.text = "Sensitivity (ortho)";
                content.tooltip = "(ORTHO CAMERAS ONLY) Allows you to control how sensitive camera zooming is to the movement of the input device when " +
                                  "the zoom mode is set to \'" + CameraZoomMode.Standard + "\'.";
                newFloat = EditorGUILayout.FloatField(content, OrthoStandardZoomSensitivity);
                if(newFloat != OrthoStandardZoomSensitivity)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    OrthoStandardZoomSensitivity = newFloat;
                }
            }
            else
            if(ZoomMode == CameraZoomMode.Smooth)
            {
                // Perspective sensitivity
                content.text = "Sensitivity (perspective)";
                content.tooltip = "(PERSPECTIVE CAMERAS ONLY) Allows you to control how sensitive camera zooming is to the movement of the input device when " +
                                  "the zoom mode is set to \'" + CameraZoomMode.Smooth + "\'.";
                newFloat = EditorGUILayout.FloatField(content, PerspSmoothZoomSensitivity);
                if (newFloat != PerspSmoothZoomSensitivity)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    PerspSmoothZoomSensitivity = newFloat;
                }

                // Perspective smooth value
                content.text = "Smooth value (perspective)";
                content.tooltip = "(PERSPECTIVE CAMERAS ONLY) Allows you to control the smooth value which is to the movement of the input device when " +
                                  "the zoom mode is set to \'" + CameraZoomMode.Smooth + "\'.";
                newFloat = EditorGUILayout.FloatField(content, PerspZoomSmoothValue);
                if (newFloat != PerspZoomSmoothValue)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    PerspZoomSmoothValue = newFloat;
                }

                // Ortho sensitivity
                content.text = "Sensitivity (ortho)";
                content.tooltip = "(ORTHO CAMERAS ONLY) Allows you to control how sensitive camera zooming is to the movement of the input device when " +
                                  "the zoom mode is set to \'" + CameraZoomMode.Smooth + "\'.";
                newFloat = EditorGUILayout.FloatField(content, OrthoSmoothZoomSensitivity);
                if (newFloat != OrthoSmoothZoomSensitivity)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    OrthoSmoothZoomSensitivity = newFloat;
                }

                // Ortho smooth value
                content.text = "Smooth value (ortho)";
                content.tooltip = "(ORTHO CAMERAS ONLY) Allows you to control the smooth value which is to the movement of the input device when " +
                                  "the zoom mode is set to \'" + CameraZoomMode.Smooth + "\'.";
                newFloat = EditorGUILayout.FloatField(content, OrthoZoomSmoothValue);
                if (newFloat != OrthoZoomSmoothValue)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    OrthoZoomSmoothValue = newFloat;
                }
            }

            // Axis inversion
            content.text = "Invert axis";
            content.tooltip = "If checked, it inverts the zoom axis.";
            newBool = EditorGUILayout.ToggleLeft(content, InvertZoomAxis);
            if(newBool != InvertZoomAxis)
            {
                EditorUndoEx.Record(undoRecordObject);
                InvertZoomAxis = newBool;
            }

            EditorGUILayout.EndVertical();
        }
        #endif
    }
}
