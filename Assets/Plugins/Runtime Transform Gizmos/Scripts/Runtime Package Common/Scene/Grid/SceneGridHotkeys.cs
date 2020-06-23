using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public class SceneGridHotkeys : Settings
    {
        [SerializeField]
        private Hotkeys _gridUp = new Hotkeys("Grid up", new HotkeysStaticData() { CanHaveMouseButtons = false } )
        {
            Key = KeyCode.RightBracket,
        };
        [SerializeField]
        private Hotkeys _gridDown = new Hotkeys("Grid down", new HotkeysStaticData() { CanHaveMouseButtons = false })
        {
            Key = KeyCode.LeftBracket,
        };
        private Hotkeys _snapToCursorPickPoint = new Hotkeys("Snap to cursor pick point", new HotkeysStaticData() { CanHaveMouseButtons = false } )
        {
            LAlt = true,
        };

        public Hotkeys GridUp { get { return _gridUp; } }
        public Hotkeys GridDown { get { return _gridDown; } }
        public Hotkeys SnapToCursorPickPoint { get { return _snapToCursorPickPoint; } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            GridUp.RenderEditorGUI(undoRecordObject);
            GridDown.RenderEditorGUI(undoRecordObject);
            SnapToCursorPickPoint.RenderEditorGUI(undoRecordObject);
        }
        #endif
    }
}
