using UnityEngine;
using UnityEditor;

namespace RTG
{
    [CustomEditor(typeof(RTGizmosEngine))]
    public class RTGizmoEngineInspector : Editor
    {
        private const int _generalTab = 0;
        private const int _sceneGizmo = _generalTab + 1;
        private const int _moveGizmoTab = _sceneGizmo + 1;
        private const int _rotationGizmoTab = _moveGizmoTab + 1;
        private const int _scaleGizmoTab = _rotationGizmoTab + 1;
        private const int _universalGizmoTab = _scaleGizmoTab + 1;

        private RTGizmosEngine _gizmoEngine;

        public override void OnInspectorGUI()
        {
            EditorGUILayout.Separator();
            _gizmoEngine.MainToolbar.RenderEditorGUI(_gizmoEngine);
        }

        private void OnEnable()
        {
            _gizmoEngine = target as RTGizmosEngine;

            _gizmoEngine.MainToolbar.GetTabByIndex(_generalTab).AddTargetSettings(_gizmoEngine.Settings);
            _gizmoEngine.MainToolbar.GetTabByIndex(_sceneGizmo).AddTargetSettings(_gizmoEngine.SceneGizmoLookAndFeel);

            _gizmoEngine.MoveGizmoSettings2D.FoldoutLabel = "2D Mode settings";
            _gizmoEngine.MoveGizmoSettings2D.UsesFoldout = true;
            _gizmoEngine.MoveGizmoSettings3D.FoldoutLabel = "3D Mode settings";
            _gizmoEngine.MoveGizmoSettings3D.UsesFoldout = true;
            _gizmoEngine.MoveGizmoLookAndFeel2D.FoldoutLabel = "2D Mode look & feel";
            _gizmoEngine.MoveGizmoLookAndFeel2D.UsesFoldout = true;
            _gizmoEngine.MoveGizmoLookAndFeel3D.FoldoutLabel = "3D Mode look & feel";
            _gizmoEngine.MoveGizmoLookAndFeel3D.UsesFoldout = true;
            _gizmoEngine.MoveGizmoHotkeys.FoldoutLabel = "Hotkeys";
            _gizmoEngine.MoveGizmoHotkeys.UsesFoldout = true;
            _gizmoEngine.ObjectMoveGizmoSettings.FoldoutLabel = "Object settings";
            _gizmoEngine.ObjectMoveGizmoSettings.UsesFoldout = true;

            _gizmoEngine.RotationGizmoSettings3D.FoldoutLabel = "Settings";
            _gizmoEngine.RotationGizmoSettings3D.UsesFoldout = true;
            _gizmoEngine.RotationGizmoLookAndFeel3D.FoldoutLabel = "Look & feel";
            _gizmoEngine.RotationGizmoLookAndFeel3D.UsesFoldout = true;
            _gizmoEngine.RotationGizmoHotkeys.FoldoutLabel = "Hotkeys";
            _gizmoEngine.RotationGizmoHotkeys.UsesFoldout = true;
            _gizmoEngine.ObjectRotationGizmoSettings.FoldoutLabel = "Object settings";
            _gizmoEngine.ObjectRotationGizmoSettings.UsesFoldout = true;

            _gizmoEngine.ScaleGizmoSettings3D.FoldoutLabel = "Settings";
            _gizmoEngine.ScaleGizmoSettings3D.UsesFoldout = true;
            _gizmoEngine.ScaleGizmoLookAndFeel3D.FoldoutLabel = "Look & feel";
            _gizmoEngine.ScaleGizmoLookAndFeel3D.UsesFoldout = true;
            _gizmoEngine.ScaleGizmoHotkeys.FoldoutLabel = "Hotkeys";
            _gizmoEngine.ScaleGizmoHotkeys.UsesFoldout = true;
            _gizmoEngine.ObjectScaleGizmoSettings.FoldoutLabel = "Object settings";
            _gizmoEngine.ObjectScaleGizmoSettings.UsesFoldout = true;

            _gizmoEngine.UniversalGizmoSettings2D.FoldoutLabel = "2D Mode settings";
            _gizmoEngine.UniversalGizmoSettings2D.UsesFoldout = true;
            _gizmoEngine.UniversalGizmoSettings3D.FoldoutLabel = "3D Mode settings";
            _gizmoEngine.UniversalGizmoSettings3D.UsesFoldout = true;
            _gizmoEngine.UniversalGizmoLookAndFeel2D.FoldoutLabel = "2D Mode look & feel";
            _gizmoEngine.UniversalGizmoLookAndFeel2D.UsesFoldout = true;
            _gizmoEngine.UniversalGizmoLookAndFeel3D.FoldoutLabel = "3D Mode look & feel";
            _gizmoEngine.UniversalGizmoLookAndFeel3D.UsesFoldout = true;
            _gizmoEngine.UniversalGizmoHotkeys.FoldoutLabel = "Hotkeys";
            _gizmoEngine.UniversalGizmoHotkeys.UsesFoldout = true;
            _gizmoEngine.ObjectUniversalGizmoSettings.FoldoutLabel = "Object settings";
            _gizmoEngine.ObjectUniversalGizmoSettings.UsesFoldout = true;

            var tab = _gizmoEngine.MainToolbar.GetTabByIndex(_moveGizmoTab);
            tab.AddTargetSettings(_gizmoEngine.ObjectMoveGizmoSettings);
            tab.AddTargetSettings(_gizmoEngine.MoveGizmoSettings3D);
            tab.AddTargetSettings(_gizmoEngine.MoveGizmoSettings2D);
            tab.AddTargetSettings(_gizmoEngine.MoveGizmoLookAndFeel3D);
            tab.AddTargetSettings(_gizmoEngine.MoveGizmoLookAndFeel2D);
            tab.AddTargetSettings(_gizmoEngine.MoveGizmoHotkeys);

            tab = _gizmoEngine.MainToolbar.GetTabByIndex(_rotationGizmoTab);
            tab.AddTargetSettings(_gizmoEngine.ObjectRotationGizmoSettings);
            tab.AddTargetSettings(_gizmoEngine.RotationGizmoSettings3D);
            tab.AddTargetSettings(_gizmoEngine.RotationGizmoLookAndFeel3D);
            tab.AddTargetSettings(_gizmoEngine.RotationGizmoHotkeys);

            tab = _gizmoEngine.MainToolbar.GetTabByIndex(_scaleGizmoTab);
            tab.AddTargetSettings(_gizmoEngine.ObjectScaleGizmoSettings);
            tab.AddTargetSettings(_gizmoEngine.ScaleGizmoSettings3D);
            tab.AddTargetSettings(_gizmoEngine.ScaleGizmoLookAndFeel3D);
            tab.AddTargetSettings(_gizmoEngine.ScaleGizmoHotkeys);

            tab = _gizmoEngine.MainToolbar.GetTabByIndex(_universalGizmoTab);
            tab.AddTargetSettings(_gizmoEngine.UniversalGizmoConfig);
            tab.AddTargetSettings(_gizmoEngine.ObjectUniversalGizmoSettings);
            tab.AddTargetSettings(_gizmoEngine.UniversalGizmoSettings2D);
            tab.AddTargetSettings(_gizmoEngine.UniversalGizmoSettings3D);
            tab.AddTargetSettings(_gizmoEngine.UniversalGizmoLookAndFeel2D);
            tab.AddTargetSettings(_gizmoEngine.UniversalGizmoLookAndFeel3D);
            tab.AddTargetSettings(_gizmoEngine.UniversalGizmoHotkeys);
        }
    }
}
