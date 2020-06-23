using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    public enum CameraProjectionSwitchMode
    {
        Transition = 0,
        Instant
    }

    [Serializable]
    public class CameraProjectionSwitchSettings : Settings
    {
        [SerializeField]
        private CameraProjectionSwitchMode _switchMode = CameraProjectionSwitchMode.Transition;
        [SerializeField]
        private float _transitionDurationInSeconds = 0.23f;

        public CameraProjectionSwitchMode SwitchMode { get { return _switchMode; } set { _switchMode = value; } }
        public float TransitionDurationInSeconds { get { return _transitionDurationInSeconds; } set { _transitionDurationInSeconds = Mathf.Max(value, 1e-2f); } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat;

            EditorGUILayout.BeginVertical();

            // Switch mode
            GUIContent content = new GUIContent();
            content.text = "Switch mode";
            content.tooltip = "Allows you to control the way in which a camera projection switch is performed.";
            CameraProjectionSwitchMode newSwitchMode = (CameraProjectionSwitchMode)EditorGUILayout.EnumPopup(content, SwitchMode);
            if (newSwitchMode != SwitchMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SwitchMode = newSwitchMode;
            }

            if (SwitchMode == CameraProjectionSwitchMode.Transition)
            {
                content.text = "Duration (in seconds)";
                content.tooltip = "Allows you to specify the duration of the projection transition in seconds.";
                newFloat = EditorGUILayout.FloatField(content, TransitionDurationInSeconds);
                if (newFloat != TransitionDurationInSeconds)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    TransitionDurationInSeconds = newFloat;
                }
            }

            EditorGUILayout.EndVertical();
        }
        #endif
    }
}
