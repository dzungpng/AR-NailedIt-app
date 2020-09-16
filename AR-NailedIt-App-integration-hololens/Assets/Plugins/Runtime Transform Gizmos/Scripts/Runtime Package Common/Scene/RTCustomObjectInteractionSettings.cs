using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public class RTCustomObjectInteractionSettings : Settings
    {
        /// <summary>
        /// The custom interaction system needs to know the size of objects that have no 
        /// volume. This defines a volume for these objects in the 3D world so that they
        /// can still be involved in raycasts, overlap tests etc.
        /// </summary>
        [SerializeField]
        private Vector3 _noVolumeObjectSize = Vector3Ex.FromValue(0.5f);

        public Vector3 NoVolumeObjectSize { get { return _noVolumeObjectSize; } set { if (!Application.isPlaying) _noVolumeObjectSize = Vector3.Max(Vector3.zero, value); } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            Vector3 newVector3;

            // No-volume object size
            var content = new GUIContent();
            content.text = "No-volume object size";
            content.tooltip = "The custom interaction system needs to know the size of objects that have no volume. This defines a volume for these objects in the 3D world so that they " +
                              "can still be involved in raycasts, overlap tests etc";
            newVector3 = EditorGUILayout.Vector3Field(content, NoVolumeObjectSize);
            if(newVector3 != NoVolumeObjectSize)
            {
                EditorUndoEx.Record(undoRecordObject);
                NoVolumeObjectSize = newVector3;
            }
        }
        #endif
    }
}
