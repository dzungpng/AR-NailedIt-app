using UnityEngine;
using System;
using System.Collections.Generic;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace RTG
{
    [Serializable]
    public struct HotkeysStaticData
    {
        [SerializeField]
        public bool CanHaveMouseButtons;
    }

    [Serializable]
    public class Hotkeys
    {
        private static List<KeyCode> _availableKeys;
        private static List<string> _availableKeyNames;

        static Hotkeys()
        {
            _availableKeys = new List<KeyCode>();
            _availableKeys.Add(KeyCode.Space);
            _availableKeys.Add(KeyCode.Backspace);
            _availableKeys.Add(KeyCode.Return);
            _availableKeys.Add(KeyCode.Tab);
            _availableKeys.Add(KeyCode.Delete);
            _availableKeys.Add(KeyCode.LeftBracket);
            _availableKeys.Add(KeyCode.RightBracket);

            for (int keyCode = (int)KeyCode.A; keyCode <= (int)KeyCode.Z; ++keyCode)
            {
                _availableKeys.Add((KeyCode)keyCode);
            }
            for (int keyCode = (int)KeyCode.Alpha0; keyCode <= (int)KeyCode.Alpha9; ++keyCode)
            {
                _availableKeys.Add((KeyCode)keyCode);
            }
            _availableKeys.Add(KeyCode.None);

            _availableKeyNames = new List<string>();
            for (int keyIndex = 0; keyIndex < _availableKeys.Count; ++keyIndex)
            {
                _availableKeyNames.Add(_availableKeys[keyIndex].ToString());
            }
        }

        private const int _maxNumberOfKeys = 2;

        [SerializeField]
        private bool _isEnabled = true;

        [SerializeField]
        private KeyCode _key = KeyCode.None;

        [SerializeField]
        private bool _lCtrl = false;
        [SerializeField]
        private bool _lCmd = false;
        [SerializeField]
        private bool _lAlt = false;
        [SerializeField]
        private bool _lShift = false;
        [SerializeField]
        private bool _useStrictModifierCheck = true;

        [SerializeField]
        private bool _lMouseBtn = false;
        [SerializeField]
        private bool _rMouseBtn = false;
        [SerializeField]
        private bool _mMouseBtn = false;
        [SerializeField]
        private bool _useStrictMouseCheck = false;

        [SerializeField]
        private string _name = "Hotkeys";

        [NonSerialized]
        private List<Hotkeys> _potentialOverlaps = new List<Hotkeys>();
        [SerializeField]
        private HotkeysStaticData _staticData;

        public static List<KeyCode> AvailableKeys { get { return new List<KeyCode>(_availableKeys); } }
        public static List<string> AvailableKeyNames { get { return new List<string>(_availableKeyNames); } }

        public bool IsEnabled { get { return _isEnabled; } set { _isEnabled = value; } }
        public string Name { get { return _name; } }
        public KeyCode Key { get { return _key; } set { if (_availableKeys.Contains(value)) _key = value; } }
        public bool LCtrl { get { return _lCtrl; } set { _lCtrl = value; } }
        public bool LCmd { get { return _lCmd; } set { _lCmd = value; } }
        public bool LAlt { get { return _lAlt; } set { _lAlt = value; } }
        public bool LShift { get { return _lShift; } set { _lShift = value; } }
        public bool LMouseButton { get { return _lMouseBtn; } set { _lMouseBtn = value; } }
        public bool RMouseButton { get { return _rMouseBtn; } set { _rMouseBtn = value; } }
        public bool MMouseButton { get { return _mMouseBtn; } set { _mMouseBtn = value; } }
        public bool UseStrictMouseCheck { get { return _useStrictMouseCheck; } set { _useStrictMouseCheck = value; } }
        public bool UseStrictModifierCheck { get { return _useStrictModifierCheck; } set { _useStrictModifierCheck = value; } }

        public Hotkeys(string name)
        {
            _name = name;
            _key = KeyCode.None;

            _staticData = new HotkeysStaticData()
            {
                CanHaveMouseButtons = true
            };
        }

        public Hotkeys(string name, HotkeysStaticData staticData)
        {
            _name = name;
            _key = KeyCode.None;
            _staticData = staticData;
        }

        public static void EstablishPotentialOverlaps(List<Hotkeys> hotkeysCollection)
        {
            foreach (var shKeys in hotkeysCollection)
            {
                foreach (var sh in hotkeysCollection)
                {
                    shKeys.AddPotentialOverlap(sh);
                }
            }
        }

        public int GetNumModifiers()
        {
            int counter = 0;
            if (LAlt) ++counter;
            if (LCtrl) ++counter;
            if (LShift) ++counter;

            return counter;
        }

        public int GetNumMouseButtons()
        {
            int counter = 0;
            if (LMouseButton) ++counter;
            if (RMouseButton) ++counter;
            if (MMouseButton) ++counter;

            return counter;
        }

        public List<MouseButton> GetAllUsedMouseButtons()
        {
            if (GetNumMouseButtons() == 0) return new List<MouseButton>();

            var buttons = new List<MouseButton>(3);
            if (LMouseButton) buttons.Add(MouseButton.Left);
            if (RMouseButton) buttons.Add(MouseButton.Right);
            if (MMouseButton) buttons.Add(MouseButton.Middle);

            return buttons;
        }

        public bool UsesMouseButtons(List<MouseButton> buttons)
        {
            var allButtons = GetAllUsedMouseButtons();
            foreach (var btn in buttons)
            {
                if (!allButtons.Contains(btn)) return false;
            }

            return true;
        }

        public List<KeyCode> GetAllUsedModifiers()
        {
            if (GetNumMouseButtons() == 0) return new List<KeyCode>();

            var modifiers = new List<KeyCode>(3);
            if (LAlt) modifiers.Add(KeyCode.LeftAlt);
            if (LShift) modifiers.Add(KeyCode.LeftShift);
            if (LCtrl) modifiers.Add(KeyCode.LeftControl);
            
            return modifiers;
        }

        public bool UsesModifiers(List<KeyCode> modifiers)
        {
            var allModifiers = GetAllUsedModifiers();
            foreach (var modifier in modifiers)
            {
                if (!allModifiers.Contains(modifier)) return false;
            }

            return true;
        }

        public void AddPotentialOverlap(Hotkeys hotkeys)
        {
            if (hotkeys == null || ReferenceEquals(hotkeys, this)) return;

            if (!ContainsPotentialOverlap(hotkeys)) _potentialOverlaps.Add(hotkeys);
        }

        public bool ContainsPotentialOverlap(Hotkeys hotkeys)
        {
            return _potentialOverlaps.Contains(hotkeys);
        }

        public bool IsOverlappedBy(Hotkeys hotkeys)
        {
            if (hotkeys == null || ReferenceEquals(hotkeys, this)) return false;

            if (GetNumModifiers() <= hotkeys.GetNumModifiers() && 
                GetNumMouseButtons() <= hotkeys.GetNumMouseButtons())
            {
                if (hotkeys.Key == Key && 
                    hotkeys.UsesModifiers(GetAllUsedModifiers()) &&
                    hotkeys.UsesMouseButtons(GetAllUsedMouseButtons())) return true;
            }

            return false;
        }

        public bool IsActive(bool checkForOverlaps = true)
        {
            if (!IsEnabled || IsEmpty()) return false;

            if (Key != KeyCode.None && !Input.GetKey(Key)) return false;

            // If strict modifier check is used but at least one modifier key is pressed,
            // it means the key is not active and we return false.
            if (UseStrictModifierCheck && HasNoModifiers() && IsAnyModifierKeyPressed()) return false;

            // Check if the corresponding modifier keys are pressed
            if (_lCtrl && !Input.GetKey(KeyCode.LeftControl)) return false;
            if (_lCmd && !Input.GetKey(KeyCode.LeftCommand)) return false;
            if (_lAlt && !Input.GetKey(KeyCode.LeftAlt)) return false;
            if (_lShift && !Input.GetKey(KeyCode.LeftShift)) return false;

            // Perform the mouse button strict check in the same way we did for the modifier keys
            if (UseStrictMouseCheck && HasNoMouseButtons() && IsAnyMouseButtonPressed()) return false;

            // Check if the corresponding mouse buttons are pressed
            if (_lMouseBtn && !Input.GetMouseButton((int)MouseButton.Left)) return false;
            if (_rMouseBtn && !Input.GetMouseButton((int)MouseButton.Right)) return false;
            if (_mMouseBtn && !Input.GetMouseButton((int)MouseButton.Middle)) return false;

            if (checkForOverlaps)
            {
                foreach (var potentialOverlap in _potentialOverlaps)
                {
                    if (potentialOverlap.IsActive(false) &&
                        IsOverlappedBy(potentialOverlap))
                    {
                        return false;
                    }
                }
            }

            return true;
        }

        public bool IsActiveInFrame(bool checkForOverlaps = true)
        {
            if (!IsEnabled || IsEmpty()) return false;

            if (Key != KeyCode.None && !Input.GetKeyDown(Key)) return false;

            // If strict modifier check is used but at least one modifier key is pressed,
            // it means the key is not active and we return false.
            if (UseStrictModifierCheck && HasNoModifiers() && IsAnyModifierKeyPressed()) return false;

            // Check if the corresponding modifier keys are pressed
            if (_lCtrl && !Input.GetKey(KeyCode.LeftControl)) return false;
            if (_lCmd && !Input.GetKey(KeyCode.LeftCommand)) return false;
            if (_lAlt && !Input.GetKey(KeyCode.LeftAlt)) return false;
            if (_lShift && !Input.GetKey(KeyCode.LeftShift)) return false;

            // Perform the mouse button strict check in the same way we did for the modifier keys
            if (UseStrictMouseCheck && HasNoMouseButtons() && IsAnyMouseButtonPressed()) return false;

            // Check if the corresponding mouse buttons are pressed
            if (_lMouseBtn && !Input.GetMouseButtonDown((int)MouseButton.Left)) return false;
            if (_rMouseBtn && !Input.GetMouseButtonDown((int)MouseButton.Right)) return false;
            if (_mMouseBtn && !Input.GetMouseButtonDown((int)MouseButton.Middle)) return false;

            if (checkForOverlaps)
            {
                foreach (var potentialOverlap in _potentialOverlaps)
                {
                    if (potentialOverlap.IsActiveInFrame(false) &&
                        IsOverlappedBy(potentialOverlap))
                    {
                        return false;
                    }
                }
            }

            return true;
        }

        public bool HasNoKeys()
        {
            return Key == KeyCode.None;
        }

        /// <summary>
        /// Checks if the shortcut has any modifiers assigned to it.
        /// </summary>
        public bool HasNoModifiers()
        {
            return !_lAlt && !_lCmd && !_lCtrl && !_lShift;
        }

        /// <summary>
        /// Checks if the shortcut has any mouse buttons assigned to it.
        /// </summary>
        public bool HasNoMouseButtons()
        {
            return !_lMouseBtn && !_rMouseBtn && !_mMouseBtn;
        }

        /// <summary>
        /// Checks if no keys, mouse buttons or modifier keys are available for this shortcut. 
        /// </summary>
        public bool IsEmpty()
        {
            return HasNoKeys() && HasNoModifiers() && HasNoMouseButtons();
        }

        #if UNITY_EDITOR
        public void RenderEditorGUI(UnityEngine.Object undoRecordObject)
        {
            bool newBool;
            const float toggleWidth = 65.0f;

            // Shortcut name label
            EditorGUILayout.BeginVertical("Box");
            EditorGUILayoutEx.SectionHeader(Name);

            // Enabled/disabled
            var content = new GUIContent();
            content.text = "Is enabled";
            content.tooltip = "Allows you to enable/disable a shortcut key.";
            newBool = EditorGUILayout.ToggleLeft(content, IsEnabled);
            if(newBool != IsEnabled)
            {
                EditorUndoEx.Record(undoRecordObject);
                IsEnabled = newBool;
            }

            int selectedIndex = _availableKeyNames.IndexOf(Key.ToString());
            int newIndex = EditorGUILayout.Popup("Key", selectedIndex, _availableKeyNames.ToArray());
            if (newIndex != selectedIndex)
            {
                EditorUndoEx.Record(undoRecordObject);
                Key = _availableKeys[newIndex];
            }

            // Modifiers
            EditorGUILayout.BeginHorizontal();
            EditorGUILayout.BeginVertical("Box");
            newBool = EditorGUILayout.ToggleLeft("LCtrl", _lCtrl, GUILayout.Width(toggleWidth));
            if (newBool != _lCtrl)
            {
                EditorUndoEx.Record(undoRecordObject);
                _lCtrl = newBool;
            }
            EditorGUILayout.EndVertical();

            EditorGUILayout.BeginVertical("Box");
            newBool = EditorGUILayout.ToggleLeft("LCmd", _lCmd, GUILayout.Width(toggleWidth));
            if (newBool != _lCmd)
            {
                EditorUndoEx.Record(undoRecordObject);
                _lCmd = newBool;
            }
            EditorGUILayout.EndVertical();

            EditorGUILayout.BeginVertical("Box");
            newBool = EditorGUILayout.ToggleLeft("LAlt", _lAlt, GUILayout.Width(toggleWidth));
            if (newBool != _lAlt)
            {
                EditorUndoEx.Record(undoRecordObject);
                _lAlt = newBool;
            }
            EditorGUILayout.EndVertical();

            EditorGUILayout.BeginVertical("Box");
            newBool = EditorGUILayout.ToggleLeft("LShift", _lShift, GUILayout.Width(toggleWidth));
            if (newBool != _lShift)
            {
                EditorUndoEx.Record(undoRecordObject);
                _lShift = newBool;
            }
            EditorGUILayout.EndVertical();
            EditorGUILayout.EndHorizontal();

            // Mouse buttons
            if (_staticData.CanHaveMouseButtons)
            {
                EditorGUILayout.BeginHorizontal();
                EditorGUILayout.BeginVertical("Box");
                newBool = EditorGUILayout.ToggleLeft("LMouse", _lMouseBtn, GUILayout.Width(toggleWidth));
                if (newBool != _lMouseBtn)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    _lMouseBtn = newBool;
                }
                EditorGUILayout.EndVertical();

                EditorGUILayout.BeginVertical("Box");
                newBool = EditorGUILayout.ToggleLeft("RMouse", _rMouseBtn, GUILayout.Width(toggleWidth));
                if (newBool != _rMouseBtn)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    _rMouseBtn = newBool;
                }
                EditorGUILayout.EndVertical();

                EditorGUILayout.BeginVertical("Box");
                newBool = EditorGUILayout.ToggleLeft("MMouse", _mMouseBtn, GUILayout.Width(toggleWidth));
                if (newBool != _mMouseBtn)
                {
                    EditorUndoEx.Record(undoRecordObject);
                    _mMouseBtn = newBool;
                }
                EditorGUILayout.EndVertical();
                EditorGUILayout.EndHorizontal();
            }
            EditorGUILayout.EndVertical();
        }
        #endif

        /// <summary>
        /// Checks if at least one modifier key is pressed.
        /// </summary>
        private bool IsAnyModifierKeyPressed()
        {
            if (Input.GetKey(KeyCode.LeftControl)) return true;
            if (Input.GetKey(KeyCode.LeftCommand)) return true;
            if (Input.GetKey(KeyCode.LeftAlt)) return true;
            if (Input.GetKey(KeyCode.LeftShift)) return true;

            return false;
        }

        /// <summary>
        /// Checks if at least one mouse button is pressed.
        /// </summary>
        private bool IsAnyMouseButtonPressed()
        {
            if (Input.GetMouseButton((int)MouseButton.Left)) return true;
            if (Input.GetMouseButton((int)MouseButton.Right)) return true;
            if (Input.GetMouseButton((int)MouseButton.Middle)) return true;

            return false;
        }
    }
}
