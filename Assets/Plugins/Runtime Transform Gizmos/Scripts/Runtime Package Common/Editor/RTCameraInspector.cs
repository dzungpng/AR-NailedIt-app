using UnityEngine;
using UnityEditor;

namespace RTG
{
    [CustomEditor(typeof(RTFocusCamera))]
    public class RTCameraInspector : Editor
    {
        private RTFocusCamera _camera;

        public override void OnInspectorGUI()
        {
            Camera newCamera;

            var content = new GUIContent();
            content.text = "Target camera";
            content.tooltip = "Allows you to specify the camera object which will be controlled by the RTFocusCamera script. Note: Prefabs are not allowed. Only scene cameras can be used.";
            newCamera = EditorGUILayout.ObjectField(content, _camera.TargetCamera, typeof(Camera), true) as Camera;
            if (newCamera != _camera.TargetCamera)
            {
                EditorUndoEx.Record(_camera);
                _camera.SetTargetCamera(newCamera);
            }

            _camera.Settings.RenderEditorGUI(_camera);

            EditorGUILayout.Separator();
            _camera.MoveSettings.UsesFoldout = true;
            _camera.MoveSettings.FoldoutLabel = "Move settings";
            _camera.MoveSettings.RenderEditorGUI(_camera);

            _camera.PanSettings.UsesFoldout = true;
            _camera.PanSettings.FoldoutLabel = "Pan settings";
            _camera.PanSettings.RenderEditorGUI(_camera);

            _camera.LookAroundSettings.UsesFoldout = true;
            _camera.LookAroundSettings.FoldoutLabel = "Look around settings";
            _camera.LookAroundSettings.RenderEditorGUI(_camera);

            _camera.OrbitSettings.UsesFoldout = true;
            _camera.OrbitSettings.FoldoutLabel = "Orbit settings";
            _camera.OrbitSettings.RenderEditorGUI(_camera);

            _camera.ZoomSettings.UsesFoldout = true;
            _camera.ZoomSettings.FoldoutLabel = "Zoom settings";
            _camera.ZoomSettings.RenderEditorGUI(_camera);

            _camera.FocusSettings.UsesFoldout = true;
            _camera.FocusSettings.FoldoutLabel = "Focus settings";
            _camera.FocusSettings.RenderEditorGUI(_camera);

            _camera.RotationSwitchSettings.UsesFoldout = true;
            _camera.RotationSwitchSettings.FoldoutLabel = "Rotation switch settings";
            _camera.RotationSwitchSettings.RenderEditorGUI(_camera);

            _camera.ProjectionSwitchSettings.UsesFoldout = true;
            _camera.ProjectionSwitchSettings.FoldoutLabel = "Projection switch settings";
            _camera.ProjectionSwitchSettings.RenderEditorGUI(_camera);

            _camera.Hotkeys.UsesFoldout = true;
            _camera.Hotkeys.FoldoutLabel = "Hotkeys";
            _camera.Hotkeys.RenderEditorGUI(_camera);
        }

        private void OnEnable()
        {
            _camera = target as RTFocusCamera;
        }
    }
}