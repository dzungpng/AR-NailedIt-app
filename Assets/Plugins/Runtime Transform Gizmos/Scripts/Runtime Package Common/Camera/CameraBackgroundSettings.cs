using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public class CameraBackgroundSettings : Settings
    {
        [SerializeField]
        private Color _firstColor = RTSystemValues.CameraBkGradientFirstColor;
        [SerializeField]
        private Color _secondColor = RTSystemValues.CameraBkGradientSecondColor;
        [SerializeField]
        private float _gradientOffset = 0.0f;
        [SerializeField]
        private bool _isVisible = false;

        public Color FirstColor { get { return _firstColor; } set { _firstColor = value; } }
        public Color SecondColor { get { return _secondColor; } set { _secondColor = value; } }
        public float GradientOffset { get { return _gradientOffset; } set { _gradientOffset = Mathf.Clamp(value, -1.0f, 1.0f); } }
        public bool IsVisible { get { return _isVisible; } set { _isVisible = value; } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat; bool newBool; Color newColor;

            if (IsVisible)
            {
                EditorGUILayout.HelpBox("When the camera background is visible, it will obscure all sprites in the scene. This is an unfortunate side-effect of making " +
                                        "the camera background behave correctly in scenarios such as camera transform change and multiple viewports.", MessageType.Warning);
            }

            // Toggle visibility
            var content = new GUIContent();
            content.text = "Is visible";
            content.tooltip = "Allows you to toggle the visibility of the camera background.";
            newBool = EditorGUILayout.ToggleLeft(content, IsVisible);
            if (newBool != IsVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                IsVisible = newBool;
            }

            // First and second colors
            content.text = "First color";
            content.tooltip = "Allows you to control the first color in the gradient.";
            newColor = EditorGUILayout.ColorField(content, FirstColor);
            if(newColor != FirstColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                FirstColor = newColor;
            }

            content.text = "Second color";
            content.tooltip = "Allows you to control the second color in the gradient.";
            newColor = EditorGUILayout.ColorField(content, SecondColor);
            if (newColor != SecondColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                SecondColor = newColor;
            }

            // Gradient offset
            content.text = "Gradient offset";
            content.tooltip = "Allows you to control the gradient offset. Possible values are in the [-1, 1] interval. " + 
                              "A value of -1 will render only the first color. A value of 1 will render only the second color.";
            newFloat = EditorGUILayout.Slider(content, GradientOffset, -1.0f, 1.0f);
            if(newFloat != GradientOffset)
            {
                EditorUndoEx.Record(undoRecordObject);
                GradientOffset = newFloat;
            }
        }
        #endif
    }
}
