using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    public enum CameraRotationSwitchMode
    {
        Constant = 0,
        Smooth,
        Instant
    }

    public enum CameraRotationSwitchType
    {
        InPlace = 0,
        AroundFocusPoint
    }

    [Serializable]
    public class CameraRotationSwitchSettings : Settings
    {
        private static readonly float _minConstantDuration= 1e-1f;

        [SerializeField]       
        private CameraRotationSwitchMode _switchMode = CameraRotationSwitchMode.Smooth;
        [SerializeField]
        private CameraRotationSwitchType _switchType = CameraRotationSwitchType.InPlace;
        [SerializeField]
        private float _constantSwitchDurationInSeconds = 0.3f;
        [SerializeField]
        private float _smoothValue = 8.0f;

        public CameraRotationSwitchMode SwitchMode { get { return _switchMode; } set { _switchMode = value; } }
        public CameraRotationSwitchType SwitchType { get { return _switchType; } set { _switchType = value; } }
        public float ConstantSwitchDurationInSeconds { get { return _constantSwitchDurationInSeconds; } set { _constantSwitchDurationInSeconds = Mathf.Max(value, _minConstantDuration); } }
        public float SmoothValue { get { return _smoothValue; } set { _smoothValue = Mathf.Max(value, 1e-3f); } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat;

            EditorGUILayout.BeginVertical();

            // Switch mode
            GUIContent content = new GUIContent();
            content.text = "Switch mode";
            content.tooltip = "Allows you to control the way in which a rotation switch is performed.";
            CameraRotationSwitchMode newSwitchMode = (CameraRotationSwitchMode)EditorGUILayout.EnumPopup(content, SwitchMode);
            if (newSwitchMode != SwitchMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                SwitchMode = newSwitchMode;
            }

            content.text = "Switch type";
            content.tooltip = "Allows you to control the type of rotation switch.";
            CameraRotationSwitchType newSwitchType = (CameraRotationSwitchType)EditorGUILayout.EnumPopup(content, SwitchType);
            if (newSwitchType != SwitchType)
            {
                EditorUndoEx.Record(undoRecordObject);
                SwitchType = newSwitchType;
            }

            // Constant switch mode settings
            if(SwitchMode == CameraRotationSwitchMode.Constant)
            {
                content.text = "~Duration (in seconds)";
                content.tooltip = "The amount of time in seconds it takes the rotation switch to complete. This value is an approximation.";
                newFloat = EditorGUILayout.FloatField(content, ConstantSwitchDurationInSeconds);
                if(newFloat != ConstantSwitchDurationInSeconds)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    ConstantSwitchDurationInSeconds = newFloat;
                }
            }
            else
            // Smooth switch mode settings
            if(SwitchMode == CameraRotationSwitchMode.Smooth)
            {
                // Smooth value
                content.text = "Smooth value";
                content.tooltip = "The smooth value used to adjust the switch speed over time. The bigger the value, the faster " + 
                                  "the target rotation is reached.";
                newFloat = EditorGUILayout.FloatField(content, SmoothValue);
                if (newFloat != SmoothValue)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    SmoothValue = newFloat;
                }
            }

            EditorGUILayout.EndVertical();
        }
        #endif
    }
}
