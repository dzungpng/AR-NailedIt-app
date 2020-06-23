using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public class ScaleGizmoHotkeys : Settings
    {
        [SerializeField]
        private Hotkeys _enableSnapping = new Hotkeys("Enable snapping", new HotkeysStaticData { CanHaveMouseButtons = false })
        {
            Key = KeyCode.None,
            LCtrl = true
        };
        [SerializeField]
        private Hotkeys _changeMultiAxisMode = new Hotkeys("Change multi-axis mode", new HotkeysStaticData { CanHaveMouseButtons = false })
        {
            Key = KeyCode.None,
            LShift = true
        };

        public Hotkeys EnableSnapping { get { return _enableSnapping; } }
        public Hotkeys ChangeMultiAxisMode { get { return _changeMultiAxisMode; } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            _enableSnapping.RenderEditorGUI(undoRecordObject);
            _changeMultiAxisMode.RenderEditorGUI(undoRecordObject);
        }
        #endif
    }
}
