using UnityEngine;
using UnityEditor;

namespace RTG
{
    [CustomEditor(typeof(RTCameraBackground))]
    public class RTCameraBackgroundInspector : Editor
    {       
        private RTCameraBackground _cameraBk;

        public override void OnInspectorGUI()
        {
            _cameraBk.Settings.UsesFoldout = true;
            _cameraBk.Settings.FoldoutLabel = "Settings";
            _cameraBk.Settings.RenderEditorGUI(_cameraBk);
        }

        private void OnEnable()
        {
            _cameraBk = target as RTCameraBackground;
        }
    }
}