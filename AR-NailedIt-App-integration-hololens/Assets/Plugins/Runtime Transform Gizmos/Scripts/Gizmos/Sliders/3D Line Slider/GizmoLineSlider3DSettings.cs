using UnityEngine;
using System;

namespace RTG
{
    [Serializable]
    public class GizmoLineSlider3DSettings
    {
        [SerializeField]
        private float _lineHoverEps = 0.7f;
        [SerializeField]
        private float _boxHoverEps = 0.5f;
        [SerializeField]
        private float _cylinderHoverEps = 0.5f;

        [SerializeField]
        private float _offsetSnapStep = 1.0f;
        [SerializeField]
        private float _rotationSnapStep = 15.0f;
        [SerializeField]
        private GizmoSnapMode _rotationSnapMode = GizmoSnapMode.Relative;
        [SerializeField]
        private float _scaleSnapStep = 0.1f;

        [SerializeField]
        private float _offsetSensitivity = 1.0f;
        [SerializeField]
        private float _rotationSensitivity = 0.45f;
        [SerializeField]
        private float _scaleSensitivity = 1.0f;

        public float LineHoverEps { get { return _lineHoverEps; } set { _lineHoverEps = Mathf.Max(0.0f, value); } }
        public float BoxHoverEps { get { return _boxHoverEps; } set { _boxHoverEps = Mathf.Max(0.0f, value); } }
        public float CylinderHoverEps { get { return _cylinderHoverEps; } set { _cylinderHoverEps = Mathf.Max(0.0f, value); } }
        public float OffsetSnapStep { get { return _offsetSnapStep; } set { _offsetSnapStep = Mathf.Max(1e-4f, value); } }
        public float RotationSnapStep { get { return _rotationSnapStep; } set { _rotationSnapStep = Mathf.Max(1e-4f, value); } }
        public GizmoSnapMode RotationSnapMode { get { return _rotationSnapMode; } set { _rotationSnapMode = value; } }
        public float ScaleSnapStep { get { return _scaleSnapStep; } set { _scaleSnapStep = Mathf.Max(1e-4f, value); } }
        public float OffsetSensitivity { get { return _offsetSensitivity; } set { _offsetSensitivity = Mathf.Max(1e-4f, value); } }
        public float RotationSensitivity { get { return _rotationSensitivity; } set { _rotationSensitivity = Mathf.Max(1e-4f, value); } }
        public float ScaleSensitivity { get { return _scaleSensitivity; } set { _scaleSensitivity = Mathf.Max(1e-4f, value); } }
    }
}
