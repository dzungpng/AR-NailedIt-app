using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public class CameraSettings : Settings
    {
        [SerializeField]
        private bool _canProcessInput = true;
        public bool CanProcessInput { get { return _canProcessInput; } set { _canProcessInput = value; } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            bool newBool;

            var content = new GUIContent();
            content.text = "Can process input";
            content.tooltip = "Allows you to toggle input handling. You will usually want to turn this off when you have " +
                              "your own camera class that handles user input. Note: Turning this off will disable all actions " +
                              "that can be performed with the camera (zoom, pan, rotate, focus etc).";
            newBool = EditorGUILayout.ToggleLeft(content, CanProcessInput);
            if (newBool != CanProcessInput)
            {
                EditorUndoEx.Record(undoRecordObject);
                CanProcessInput = newBool;
            }
        }
        #endif
    }
}