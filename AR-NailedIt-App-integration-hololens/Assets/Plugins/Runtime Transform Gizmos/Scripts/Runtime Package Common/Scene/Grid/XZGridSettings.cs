using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public class XZGridSettings : Settings
    {
        [SerializeField]
        private bool _isVisible = true;
        [SerializeField]
        private float _cellSizeX = 1.0f;
        [SerializeField]
        private float _cellSizeZ = 1.0f;
        [SerializeField]
        private float _yOffset = 0.0f;
        [SerializeField]
        private Vector3 _rotationAngles = Vector3.zero;
        [SerializeField]
        private float _upDownStep = 1.0f;

        public bool IsVisible { get { return _isVisible; } set { _isVisible = value; } }
        public float CellSizeX { get { return _cellSizeX; } set { _cellSizeX = Mathf.Max(value, 0.01f); } }
        public float CellSizeZ { get { return _cellSizeZ; } set { _cellSizeZ = Mathf.Max(value, 0.01f); } }
        public Vector3 RotationAngles { get { return _rotationAngles; } set { _rotationAngles = value; } }
        public float YOffset { get { return _yOffset; } set { _yOffset = value; } }
        public float UpDownStep { get { return _upDownStep; } set { _upDownStep = Mathf.Max(1e-4f, value); } }
        
        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat; bool newBool; Vector3 newVec3;

            EditorGUILayout.BeginVertical();
            var content = new GUIContent();
            content.text = "Is visible";
            content.tooltip = "Allows you to specify if the grid is visible in the scene. If the grid is not visible, it can not be interacted with.";
            newBool = EditorGUILayout.ToggleLeft(content, IsVisible);
            if (newBool != IsVisible)
            {
                EditorUndoEx.Record(undoRecordObject);
                IsVisible = newBool;
            }

            content.text = "Cell size X";
            content.tooltip = "Allows you to change the cell size along the X axis.";
            newFloat = EditorGUILayout.FloatField(content, CellSizeX);
            if(newFloat != CellSizeX)
            {
                EditorUndoEx.Record(undoRecordObject);
                CellSizeX = newFloat;
            }

            content.text = "Cell size Z";
            content.tooltip = "Allows you to change the cell size along the Z axis.";
            newFloat = EditorGUILayout.FloatField(content, CellSizeZ);
            if (newFloat != CellSizeZ)
            {
                EditorUndoEx.Record(undoRecordObject);
                CellSizeZ = newFloat;
            }

            content.text = "Rotation";
            content.tooltip = "Grid rotation expressed in degree angles.";
            newVec3 = EditorGUILayout.Vector3Field(content, RotationAngles);
            if (newVec3 != RotationAngles)
            {
                EditorUndoEx.Record(undoRecordObject);
                RotationAngles = newVec3;
            }

            EditorGUILayout.Separator();
            content.text = "Y offset";
            content.tooltip = "Allows you to specify the offset of the grid along its local Y axis.";
            newFloat = EditorGUILayout.FloatField(content, YOffset);
            if (newFloat != YOffset)
            {
                EditorUndoEx.Record(undoRecordObject);
                YOffset = newFloat;
            } 

            content.text = "Up/down step";
            content.tooltip = "Allows you to specify the step value that is used to modify the grid Y offset via input.";
            newFloat = EditorGUILayout.FloatField(content, UpDownStep);
            if (newFloat != UpDownStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                UpDownStep = newFloat;
            } 
            EditorGUILayout.EndVertical();
        }
        #endif
    }
}
