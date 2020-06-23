using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public class CameraHotkeys : Settings
    {
        [SerializeField]
        private Hotkeys _moveForward = new Hotkeys("Move forward")
        {
            Key = KeyCode.W,
            UseStrictModifierCheck = false,
            RMouseButton = true
        };
        [SerializeField]
        private Hotkeys _moveBack = new Hotkeys("Move back")
        {
            Key = KeyCode.S,
            UseStrictModifierCheck = false,
            RMouseButton = true
        };
        [SerializeField]
        private Hotkeys _strafeLeft = new Hotkeys("Strafe left")
        {
            Key = KeyCode.A,
            UseStrictModifierCheck = false,
            RMouseButton = true
        };
        [SerializeField]
        private Hotkeys _strafeRight = new Hotkeys("Strafe right")
        {
            Key = KeyCode.D,
            UseStrictModifierCheck = false,
            RMouseButton = true
        };
        [SerializeField]
        private Hotkeys _moveUp = new Hotkeys("Move up")
        {
            Key = KeyCode.E,
            UseStrictModifierCheck = false,
            RMouseButton = true
        };
        [SerializeField]
        private Hotkeys _moveDown = new Hotkeys("Move down")
        {
            Key = KeyCode.Q,
            UseStrictModifierCheck = false,
            RMouseButton = true
        };
        [SerializeField]
        private Hotkeys _pan = new Hotkeys("Pan")
        {
            UseStrictModifierCheck = false,
            MMouseButton = true
        };
        [SerializeField]
        private Hotkeys _lookAround = new Hotkeys("Look around")
        {
            UseStrictModifierCheck = false,
            RMouseButton = true
        };
        [SerializeField]
        private Hotkeys _orbit = new Hotkeys("Orbit")
        {
            UseStrictModifierCheck = false,
            LAlt = true,
            RMouseButton = true,
        };

        public Hotkeys MoveForward { get { return _moveForward; } }
        public Hotkeys MoveBack { get { return _moveBack; } }
        public Hotkeys StrafeLeft { get { return _strafeLeft; } }
        public Hotkeys StrafeRight { get { return _strafeRight; } }
        public Hotkeys MoveUp { get { return _moveUp; } }
        public Hotkeys MoveDown { get { return _moveDown; } }
        public Hotkeys Pan { get { return _pan; } }
        public Hotkeys LookAround { get { return _lookAround; } }
        public Hotkeys Orbit { get { return _orbit; } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            MoveForward.RenderEditorGUI(undoRecordObject);
            MoveBack.RenderEditorGUI(undoRecordObject);
            StrafeLeft.RenderEditorGUI(undoRecordObject);
            StrafeRight.RenderEditorGUI(undoRecordObject);
            MoveUp.RenderEditorGUI(undoRecordObject);
            MoveDown.RenderEditorGUI(undoRecordObject);
            Pan.RenderEditorGUI(undoRecordObject);
            LookAround.RenderEditorGUI(undoRecordObject);
            Orbit.RenderEditorGUI(undoRecordObject);
        }
        #endif
    }
}
