using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;
using System.Collections.Generic;

namespace RTG
{
    [Serializable]
    public class ObjectTransformGizmoSettings : Settings
    {
        [SerializeField]
        private int _transformableLayers = ~0;
        private HashSet<GameObject> _nonTransformableObjects = new HashSet<GameObject>();

        public int TransformableLayers { get { return _transformableLayers; } set { _transformableLayers = value; } }

        public bool IsLayerTransformable(int objectLayer)
        {
            return LayerEx.IsLayerBitSet(_transformableLayers, objectLayer);
        }

        public void SetLayerTransformable(int objectLayer, bool isTransformable)
        {
            if (isTransformable) _transformableLayers = LayerEx.SetLayerBit(_transformableLayers, objectLayer);
            else _transformableLayers = LayerEx.ClearLayerBit(_transformableLayers, objectLayer);
        }

        public bool IsObjectTransformable(GameObject gameObject)
        {
            if (gameObject == null) return false;
            return !_nonTransformableObjects.Contains(gameObject);
        }

        public void SetObjectTransformable(GameObject gameObject, bool isTransformable)
        {
            if (gameObject == null) return;

            if (isTransformable) _nonTransformableObjects.Remove(gameObject);
            else _nonTransformableObjects.Add(gameObject);
        }

        public void SetObjectCollectionTransformable(List<GameObject> gameObjectCollection, bool areTransformable)
        {
            foreach (var gameObject in gameObjectCollection)
            {
                SetObjectTransformable(gameObject, areTransformable);
            }
        }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            int newInt;

            var content = new GUIContent();
            content.text = "Transformable layers";
            content.tooltip = "Allows you to specify which layers can be transformed by the gizmo. Objects which do not belong to a transformable layer will not be transformed by the gizmo.";
            newInt = EditorGUILayoutEx.LayerMaskField(content, TransformableLayers);
            if (newInt != TransformableLayers)
            {
                EditorUndoEx.Record(undoRecordObject);
                TransformableLayers = newInt;
            }
        }
        #endif
    }
}
