using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    public enum CameraFocusMode
    {
        Instant = 0,
        Constant,
        Smooth
    }

    [Serializable]
    public class CameraFocusSettings : Settings
    {
        [SerializeField]
        private CameraFocusMode _focusMode = CameraFocusMode.Smooth;
        [SerializeField]
        private float _constantSpeed = 10.0f;
        [SerializeField]
        private float _smoothTime = 1.5f;
        [SerializeField]
        private float _focusDistanceAdd = 1.2f;

        public CameraFocusMode FocusMode { get { return _focusMode; } set { _focusMode = value; } }
        public float ConstantSpeed { get { return _constantSpeed; } set { _constantSpeed = Mathf.Max(value, 1e-4f); } }
        public float SmoothTime { get { return _smoothTime; } set { _smoothTime = Mathf.Max(value, 1e-4f); } }
        public float FocusDistanceAdd { get { return _focusDistanceAdd; } set { _focusDistanceAdd = Mathf.Max(value, 0.0001f); } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat;
            CameraFocusMode newFocusMode;

            // Focus mode
            var content = new GUIContent();
            content.text = "Focus mode";
            content.tooltip = "Allows you to control the focus mode.";
            newFocusMode = (CameraFocusMode)EditorGUILayout.EnumPopup(content, FocusMode);
            if(newFocusMode != FocusMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                FocusMode = newFocusMode;
            }

            // Distance add
            content.text = "Focus distance add";
            content.tooltip = "When a camera is focused, it will be placed at some distance away from the focus target. " + 
                              "This value can be used to increase this distance if needed. It can not take on negative values.";
            newFloat = EditorGUILayout.FloatField(content, FocusDistanceAdd);
            if(newFloat != FocusDistanceAdd)
            {
                EditorUndoEx.Record(undoRecordObject);
                FocusDistanceAdd = newFloat;
            }

            // Constant speed
            if(FocusMode == CameraFocusMode.Constant)
            {
                content.text = "Speed (units/sec)";
                content.tooltip = "Allows you to control the speed at which the camera is focused.";
                newFloat = EditorGUILayout.FloatField(content, ConstantSpeed);
                if(newFloat != ConstantSpeed)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    ConstantSpeed = newFloat;
                }
            }
            else
            // Smooth duration
            if(FocusMode == CameraFocusMode.Smooth)
            {
                content.text = "Smooth time (seconds)";
                content.tooltip = "Allows you to control the duration of the smooth focus.";
                newFloat = EditorGUILayout.FloatField(content, SmoothTime);
                if (newFloat != SmoothTime)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SmoothTime = newFloat;
                }
            }
        }
        #endif
    }
}
