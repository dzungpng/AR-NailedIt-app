using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public class GizmoObjectVertexSnapSettings : Settings
    {
        [SerializeField]
        private int _snapDestinationLayers = ~0;
        [SerializeField]
        private bool _canSnapToGrid = true;
        [SerializeField]
        private bool _canSnapToObjectVerts = true;

        public int SnapDestinationLayers { get { return _snapDestinationLayers; } set { _snapDestinationLayers = value; } }
        public bool CanSnapToGrid { get { return _canSnapToGrid; } set { _canSnapToGrid = value; } }
        public bool CanSnapToObjectVerts { get { return _canSnapToObjectVerts; } set { _canSnapToObjectVerts = value; } }

        public bool IsLayerSnapDestination(int objectLayer)
        {
            return LayerEx.IsLayerBitSet(_snapDestinationLayers, objectLayer);
        }

        public void SetLayerSnapDestination(int objectLayer, bool isSnapDestination)
        {
            if (isSnapDestination) _snapDestinationLayers = LayerEx.SetLayerBit(_snapDestinationLayers, objectLayer);
            else _snapDestinationLayers = LayerEx.ClearLayerBit(_snapDestinationLayers, objectLayer);
        }

        public void Transfer(GizmoObjectVertexSnapSettings destination)
        {
            destination.SnapDestinationLayers = SnapDestinationLayers;
            destination.CanSnapToGrid = CanSnapToGrid;
            destination.CanSnapToObjectVerts = CanSnapToObjectVerts;
        }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            int newInt; bool newBool;

            var content = new GUIContent();
            content.text = "Can snap to grid";
            content.tooltip = "When turned on, vertices can be snapped to grid cells.";
            newBool = EditorGUILayout.ToggleLeft(content, CanSnapToGrid);
            if (newBool != CanSnapToGrid)
            {
                EditorUndoEx.Record(undoRecordObject);
                CanSnapToGrid = newBool;
            }

            content.text = "Can snap to object verts";
            content.tooltip = "When turned on, vertices can be snapped to other object vertices.";
            newBool = EditorGUILayout.ToggleLeft(content, CanSnapToObjectVerts);
            if (newBool != CanSnapToObjectVerts)
            {
                EditorUndoEx.Record(undoRecordObject);
                CanSnapToObjectVerts = newBool;
            }

            content.text = "Snap destination layers";
            content.tooltip = "Allows you to specify which layers can be used as snap destinations when doing vertex snapping.";
            newInt = EditorGUILayoutEx.LayerMaskField(content, SnapDestinationLayers);
            if (newInt != SnapDestinationLayers)
            {
                EditorUndoEx.Record(undoRecordObject);
                SnapDestinationLayers = newInt;
            }
        }
        #endif
    }
}
