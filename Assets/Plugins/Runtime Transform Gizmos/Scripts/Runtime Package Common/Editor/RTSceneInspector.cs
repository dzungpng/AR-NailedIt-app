using UnityEngine;
using UnityEditor;

namespace RTG
{
    [CustomEditor(typeof(RTScene))]
    public class RTSceneInspector : Editor
    {
        private RTScene _scene;

        public override void OnInspectorGUI()
        {
            _scene.Settings.RenderEditorGUI(_scene);
        }

        private void OnEnable()
        {
            _scene = target as RTScene;

            _scene.Settings.FoldoutLabel = "Settings";
            _scene.Settings.UsesFoldout = true;
        }
    }
}
