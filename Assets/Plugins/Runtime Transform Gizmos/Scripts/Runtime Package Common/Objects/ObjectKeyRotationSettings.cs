using UnityEngine;
using System;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace RTG
{
    [Serializable]
    public class ObjectKeyRotationSettings : Settings
    {
        [SerializeField]
        private float _xRotationStep = 90.0f;
        [SerializeField]
        private float _yRotationStep = 90.0f;
        [SerializeField]
        private float _zRotationStep = 90.0f;

        public float XRotationStep { get { return _xRotationStep; } set { _xRotationStep = Mathf.Max(1e-4f, value); } }
        public float YRotationStep { get { return _yRotationStep; } set { _yRotationStep = Mathf.Max(1e-4f, value); } }
        public float ZRotationStep { get { return _zRotationStep; } set { _zRotationStep = Mathf.Max(1e-4f, value); } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            float newFloat;

            var content = new GUIContent();
            content.text = "X rotation step";
            content.tooltip = "The amount of rotation applied around the X axis.";
            newFloat = EditorGUILayout.FloatField(content, XRotationStep);
            if (newFloat != XRotationStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                XRotationStep = newFloat;
            }

            content.text = "Y rotation step";
            content.tooltip = "The amount of rotation applied around the Y axis.";
            newFloat = EditorGUILayout.FloatField(content, YRotationStep);
            if (newFloat != YRotationStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                YRotationStep = newFloat;
            }

            content.text = "Z rotation step";
            content.tooltip = "The amount of rotation applied around the Z axis.";
            newFloat = EditorGUILayout.FloatField(content, ZRotationStep);
            if (newFloat != ZRotationStep)
            {
                EditorUndoEx.Record(undoRecordObject);
                ZRotationStep = newFloat;
            }
        }
        #endif
    }
}
