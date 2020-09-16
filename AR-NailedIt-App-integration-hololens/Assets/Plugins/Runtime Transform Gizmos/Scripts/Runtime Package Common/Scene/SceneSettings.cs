using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public class SceneSettings : Settings
    {
        [SerializeField]
        private ScenePhysicsMode _physicsMode = ScenePhysicsMode.RLD;
        [SerializeField]
        private float _nonMeshObjectSize = 1.0f;

        public ScenePhysicsMode PhysicsMode { get { return _physicsMode; } set { if (!Application.isPlaying) _physicsMode = value; } }
        public float NonMeshObjectSize { get { return _nonMeshObjectSize; } set { if (!Application.isPlaying) _nonMeshObjectSize = Mathf.Max(1e-1f, value); } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            ScenePhysicsMode newPhysicsMode; float newFloat;
            var content = new GUIContent();

            content.text = "Physics mode";
            content.tooltip = "Controls the way in which raycasts, overlap tests etc are performed. It is recommended to leave this to \'RLD\'. Otherwise, some " + 
                              "plugin features might not work as expected (e.g. object 2 object snap, selection grab).";
            newPhysicsMode = (ScenePhysicsMode)EditorGUILayout.EnumPopup(content, PhysicsMode);
            if (newPhysicsMode != PhysicsMode)
            {
                EditorUndoEx.Record(undoRecordObject);
                PhysicsMode = newPhysicsMode;
            }

            content.text = "Non-mesh object size";
            content.tooltip = "This field is used to define the volume size of the objects that do not have a mesh (e.g. lights, particle systems etc). This size is " + 
                              "needed to allow the system to perform raycasts or overlap tests for such objects.";
            newFloat = EditorGUILayout.FloatField(content, NonMeshObjectSize);
            if (newFloat != NonMeshObjectSize)
            {
                EditorUndoEx.Record(undoRecordObject);
                NonMeshObjectSize = newFloat;
            }
        }
        #endif
    }
}
