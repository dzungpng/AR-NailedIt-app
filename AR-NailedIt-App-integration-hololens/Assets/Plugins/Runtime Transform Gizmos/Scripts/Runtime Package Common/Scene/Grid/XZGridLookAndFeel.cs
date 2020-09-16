using UnityEngine;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace RTG
{
    [Serializable]
    public class XZGridLookAndFeel : Settings
    {
        [SerializeField]
        private Color _lineColor = RTSystemValues.GridLineColor;
        /// <summary>
        /// If this is true, the grid cells will fade in/out based on the distance between 
        /// the grid and the camera. This is consistent with how Unity renders the scene grid
        /// inside the Editor.
        /// </summary>
        [SerializeField]
        private bool _useCellFading = true;

        public Color LineColor { get { return _lineColor; } set { _lineColor = value; } }
        public bool UseCellFading { get { return _useCellFading; } set { _useCellFading = value; } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            Color newColor; bool newBool;

            // Grid line color
            var content = new GUIContent();
            content.text = "Line color";
            content.tooltip = "Allows you to control the color of the grid lines.";
            newColor = EditorGUILayout.ColorField(content, LineColor);
            if(newColor != LineColor)
            {
                EditorUndoEx.Record(undoRecordObject);
                LineColor = newColor;
            }

            // Cell fading
            content.text = "Use cell fading";
            content.tooltip = "If this is true, the grid cells will fade in/out based on the distance between the camera and the grid. This " + 
                              "is conistent with how Unity renders the scene grid inside the Editor.";
            newBool = EditorGUILayout.ToggleLeft(content, UseCellFading);
            if(newBool != UseCellFading)
            {
                EditorUndoEx.Record(undoRecordObject);
                UseCellFading = newBool;
            }
        }
        #endif
    }
}