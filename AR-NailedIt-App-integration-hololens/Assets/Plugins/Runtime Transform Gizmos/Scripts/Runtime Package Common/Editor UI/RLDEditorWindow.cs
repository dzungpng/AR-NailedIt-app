#if UNITY_EDITOR
using UnityEngine;
using UnityEditor;

namespace RTG
{
    public abstract class RLDEditorWindow : EditorWindow
    {
        private bool _isVisible;

        public bool IsVisible { get { return _isVisible; } }

        public static T ShowRLDWindow<T>(string title, Vector2 size) where T : EditorWindow
        {
            var window = GetWindow<T>(title, true);
            window.position = new Rect(Screen.width * 0.5f, Screen.height * 0.5f, size.x, size.y);
            window.Show();

            return window;
        }

        public void RepaintIfVisible()
        {
            if (_isVisible) Repaint();
        }

        private void OnEnable()
        {
            _isVisible = true;
            EditorApplication.modifierKeysChanged += Repaint;
        }

        private void OnDisable()
        {
            _isVisible = false;
            EditorApplication.modifierKeysChanged -= Repaint;
        }

        private void OnDestroy()
        {
            _isVisible = false;
            EditorApplication.modifierKeysChanged -= Repaint;
        }
    }
}
#endif