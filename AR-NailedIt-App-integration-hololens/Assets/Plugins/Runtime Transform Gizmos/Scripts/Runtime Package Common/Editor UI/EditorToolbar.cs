using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public class EditorToolbar
    {
        [SerializeField]
        private Color _activeTabColor = Color.green;
        [SerializeField]
        private int _numTabsPerRow = 3;

        [SerializeField]
        private EditorToolbarTab[] _tabs;
        [SerializeField]
        private int _activeTabIndex = 0;

        public int ActiveTabIndex { get { return _activeTabIndex; } }
        public EditorToolbarTab ActiveTab { get { return _tabs[_activeTabIndex]; } }
        public Color ActiveTabColor { get { return _activeTabColor; } set { _activeTabColor = value; } }
        public int NumTabsPerRow { get { return _numTabsPerRow; } set { _numTabsPerRow = Mathf.Max(1, value); } }
        public int NumTabs { get { return _tabs.Length; } }

        public EditorToolbar(EditorToolbarTab[] tabs, int numTabsPerRow, Color activeTabColor)
        {
            _tabs = tabs;
            _activeTabColor = activeTabColor;
            _numTabsPerRow = numTabsPerRow;
        }

        public EditorToolbarTab GetTabByIndex(int tabIndex)
        {
            return _tabs[tabIndex];
        }

        #if UNITY_EDITOR
        public void RenderEditorGUI(UnityEngine.Object undoRecordObject)
        {
            var content = new GUIContent();
            for(int tabIndex = 0; tabIndex < _tabs.Length; ++tabIndex)
            {
                if(tabIndex % _numTabsPerRow == 0)
                {
                    if (tabIndex == 0) EditorGUILayout.BeginHorizontal(EditorStyles.toolbar);
                    else
                    {
                        EditorGUILayout.EndHorizontal();
                        EditorGUILayout.BeginHorizontal();
                    }
                }

                content.text = _tabs[tabIndex].Text;
                content.tooltip = _tabs[tabIndex].Tooltip;

                if (tabIndex == _activeTabIndex) GUIEx.PushColor(_activeTabColor);
                else GUIEx.PushColor(Color.white);
                if(GUILayout.Button(content, EditorStyles.toolbarButton))
                {
                    EditorUndoEx.Record(undoRecordObject);
                    _activeTabIndex = tabIndex;
                }
                GUIEx.PopColor();
            }
            EditorGUILayout.EndHorizontal();

            EditorToolbarTab activeTab = ActiveTab;
            if (activeTab.NumTargetSettings != 0) activeTab.RenderTargetSettingsEditorGUI(undoRecordObject);
            else
            if (activeTab.TargetToolbar != null) activeTab.TargetToolbar.RenderEditorGUI(undoRecordObject);
        }
        #endif
    }
}