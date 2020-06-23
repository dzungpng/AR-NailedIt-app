using UnityEngine;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace RTG
{
    [Serializable]
    public class GizmoEngineSettings : Settings
    {
        [SerializeField]
        private bool _enableGizmoSorting = true;

        public bool EnableGizmoSorting { get { return _enableGizmoSorting; } set { _enableGizmoSorting = value; } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            bool newBool;

            var content = new GUIContent();
            content.text = "Enable gizmo sorting";
            content.tooltip = "If this is checked, the gizmos wil be sorted by their distance from the camera so that they can be rendered in back to front order.";
            newBool = EditorGUILayout.ToggleLeft(content, EnableGizmoSorting);
            if (newBool != EnableGizmoSorting)
            {
                EditorUndoEx.Record(undoRecordObject);
                EnableGizmoSorting = newBool;
            }
        }
        #endif
    }
}