using UnityEngine;
#if UNITY_EDITOR
using UnityEditor;
#endif
using System;

namespace RTG
{
    [Serializable]
    public class CameraMoveSettings : Settings
    {
        private static readonly float _minMoveSpeed = 1e-1f;

        [SerializeField]
        private float _moveSpeed = 6.0f;
        [SerializeField]
        private float _accelerationRate = 15.0f;

        public float MoveSpeed { get { return _moveSpeed; } set { _moveSpeed = Mathf.Max(_minMoveSpeed, value); } }
        public float AccelerationRate { get { return _accelerationRate; } set { _accelerationRate = Mathf.Max(0.0f, value); } }

        #if UNITY_EDITOR
        protected override void RenderContent(UnityEngine.Object undoRecordObject)
        {
            EditorGUILayout.BeginVertical();
            var content = new GUIContent();
            content.text = "Move speed";
            content.tooltip = "Allows you to specify the speed that is used to move the camera in the scene (defualt keys: WASDQE + RMB). The value is expressed in world units/second.";
            float newFloat = EditorGUILayout.FloatField(content, MoveSpeed);
            if (newFloat != MoveSpeed)
            {
                EditorUndoEx.Record(undoRecordObject);
                MoveSpeed = newFloat;
            }

            content.text = "Acceleration rate";
            content.tooltip = "When moving the camera around, an acceleration will be applied to the camera move speed. This field " + 
                              "allows you to control how fast the acceleration increases.";
            newFloat = EditorGUILayout.FloatField(content, AccelerationRate);
            if (newFloat != AccelerationRate)
            {
                EditorUndoEx.Record(undoRecordObject);
                AccelerationRate = newFloat;
            }
            EditorGUILayout.EndVertical();
        }
        #endif
    }
}
