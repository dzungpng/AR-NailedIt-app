using UnityEngine;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace RTG
{
    [Serializable]
    public class UniversalGizmoConfig : Settings
    {
        [SerializeField]
        private UniversalGizmoSettingsCategory _inheritCategory = UniversalGizmoSettingsCategory.Move;
        [SerializeField]
        private UniversalGizmoSettingsType _inheritType = UniversalGizmoSettingsType.LookAndFeel3D;
        [SerializeField]
        private UniversalGizmoSettingsCategory _displayCategory = UniversalGizmoSettingsCategory.Move;

        public UniversalGizmoSettingsCategory InheritCategory { get { return _inheritCategory; } set { _inheritCategory = value; } }
        public UniversalGizmoSettingsType InheritType { get { return _inheritType; } set { _inheritType = value; } }
        public UniversalGizmoSettingsCategory DisplayCategory { get { return _displayCategory; } set { _displayCategory = value; } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            RTGizmosEngine gizmosEngine = RTGizmosEngine.Get;
            var content = new GUIContent();

            EditorGUILayout.BeginHorizontal();
            content.text = "Inherit";
            content.tooltip = "Inherit different category of settings from the other gizmos (move, rotate or scale).";
            if (GUILayout.Button(content))
            {
                EditorUndoEx.Record(undoRecordObject);
                if (InheritCategory == UniversalGizmoSettingsCategory.Move)
                {
                    if (InheritType == UniversalGizmoSettingsType.Settings2D)
                    {
                        gizmosEngine.UniversalGizmoSettings2D.Inherit(gizmosEngine.MoveGizmoSettings2D);
                    }
                    else
                    if (InheritType == UniversalGizmoSettingsType.Settings3D)
                    {
                        gizmosEngine.UniversalGizmoSettings3D.Inherit(gizmosEngine.MoveGizmoSettings3D);
                    }
                    else
                    if (InheritType == UniversalGizmoSettingsType.LookAndFeel2D)
                    {
                        gizmosEngine.UniversalGizmoLookAndFeel2D.Inherit(gizmosEngine.MoveGizmoLookAndFeel2D);
                    }
                    else
                    if (InheritType == UniversalGizmoSettingsType.LookAndFeel3D)
                    {
                        gizmosEngine.UniversalGizmoLookAndFeel3D.Inherit(gizmosEngine.MoveGizmoLookAndFeel3D);
                    }
                }
                else
                if (InheritCategory == UniversalGizmoSettingsCategory.Rotate)
                {
                    if (InheritType == UniversalGizmoSettingsType.Settings3D)
                    {
                        gizmosEngine.UniversalGizmoSettings3D.Inherit(gizmosEngine.RotationGizmoSettings3D);
                    }
                    else
                    if (InheritType == UniversalGizmoSettingsType.LookAndFeel3D)
                    {
                        gizmosEngine.UniversalGizmoLookAndFeel3D.Inherit(gizmosEngine.RotationGizmoLookAndFeel3D);
                    }
                }
                else
                if (InheritCategory == UniversalGizmoSettingsCategory.Scale)
                {
                    if (InheritType == UniversalGizmoSettingsType.Settings3D)
                    {
                        gizmosEngine.UniversalGizmoSettings3D.Inherit(gizmosEngine.ScaleGizmoSettings3D);
                    }
                    else
                    if (InheritType == UniversalGizmoSettingsType.LookAndFeel3D)
                    {
                        gizmosEngine.UniversalGizmoLookAndFeel3D.Inherit(gizmosEngine.ScaleGizmoLookAndFeel3D);
                    }
                }
            }

            UniversalGizmoSettingsCategory newCategory;
            UniversalGizmoSettingsType newInheritType;

            newCategory = (UniversalGizmoSettingsCategory)EditorGUILayout.EnumPopup(InheritCategory);
            if (newCategory != InheritCategory)
            {
                EditorUndoEx.Record(undoRecordObject);
                InheritCategory = newCategory;
            }
            newInheritType = (UniversalGizmoSettingsType)EditorGUILayout.EnumPopup(InheritType);
            if (newInheritType != InheritType)
            {
                EditorUndoEx.Record(undoRecordObject);
                InheritType = newInheritType;
            }
            EditorGUILayout.EndHorizontal();

            content.text = "Display category";
            content.tooltip = "Specifies what category of settings are currently displayed for modification.";
            newCategory = (UniversalGizmoSettingsCategory)EditorGUILayout.EnumPopup(content, DisplayCategory);
            if (newCategory != DisplayCategory)
            {
                EditorUndoEx.Record(undoRecordObject);
                DisplayCategory = newCategory;
            }

            gizmosEngine.UniversalGizmoSettings2D.DisplayCategory = DisplayCategory;
            gizmosEngine.UniversalGizmoSettings3D.DisplayCategory = DisplayCategory;
            gizmosEngine.UniversalGizmoLookAndFeel2D.DisplayCategory = DisplayCategory;
            gizmosEngine.UniversalGizmoLookAndFeel3D.DisplayCategory = DisplayCategory;

            gizmosEngine.UniversalGizmoSettings2D.CanBeDisplayed = true;
            gizmosEngine.UniversalGizmoLookAndFeel2D.CanBeDisplayed = true;
            gizmosEngine.UniversalGizmoSettings3D.CanBeDisplayed = true;
            gizmosEngine.UniversalGizmoLookAndFeel3D.CanBeDisplayed = true;

            if(DisplayCategory != UniversalGizmoSettingsCategory.Move)
            {
                gizmosEngine.UniversalGizmoSettings2D.CanBeDisplayed = false;
                gizmosEngine.UniversalGizmoLookAndFeel2D.CanBeDisplayed = false;
            }
        }
        #endif
    }
}
