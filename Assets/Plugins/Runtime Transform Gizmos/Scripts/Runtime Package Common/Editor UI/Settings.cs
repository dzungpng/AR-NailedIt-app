using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public abstract class Settings
    {
        [SerializeField]
        private bool _canBeDisplayed = true;
        [SerializeField]
        protected bool _isExpanded = true;
        private string _foldoutLabel = "Settings";

        public bool CanBeDisplayed { get { return _canBeDisplayed; } set { _canBeDisplayed = value; } }
        public bool UsesFoldout { get; set; }
        public string FoldoutLabel { get { return _foldoutLabel; } set { if (value != null) _foldoutLabel = value; } }
        public bool IsExpanded { get { return _isExpanded; } set { _isExpanded = value; } }

        #if UNITY_EDITOR
        public void RenderEditorGUI(UnityEngine.Object undoRecordObject)
        {
            if (!CanBeDisplayed) return;

            if (UsesFoldout)
            {
                _isExpanded = EditorGUILayout.Foldout(_isExpanded, FoldoutLabel);
                if (_isExpanded) RenderContent(undoRecordObject);
            }
            else RenderContent(undoRecordObject);
        }

        protected abstract void RenderContent(UnityEngine.Object undoRecordObject);
        #endif
    }
}
