using UnityEngine;
using System;

namespace RTG
{
    [Serializable]
    public class GizmoPlaneSlider2DSettings
    {
        [SerializeField]
        private float _areaHoverEps = 1e-5f;
        [SerializeField]
        private float _borderLineHoverEps = 7.0f;
        [SerializeField]
        private float _thickBorderPolyHoverEps = 7.0f;

        [SerializeField]
        private float _offsetSnapStepRight = 1.0f;
        [SerializeField]
        private float _offsetSnapStepUp = 1.0f;
        [SerializeField]
        private float _rotationSnapStep = 15.0f;
        [SerializeField]
        private GizmoSnapMode _rotationSnapMode = GizmoSnapMode.Relative;
        [SerializeField]
        private GizmoDblAxisScaleMode _scaleMode = GizmoDblAxisScaleMode.Proportional;
        [SerializeField]
        private float _scaleSnapStepRight = 0.1f;
        [SerializeField]
        private float _scaleSnapStepUp = 0.1f;
        [SerializeField]
        private float _proportionalScaleSnapStep = 0.1f;

        [SerializeField]
        private float _offsetSensitivity = 1.0f;
        [SerializeField]
        private float _rotationSensitivity = 0.45f;
        [SerializeField]
        private float _scaleSensitivity = 1.0f;

        public float AreaHoverEps { get { return _areaHoverEps; } set { _areaHoverEps = Mathf.Max(0.0f, value); } }
        public float BorderLineHoverEps { get { return _borderLineHoverEps; } set { _borderLineHoverEps = Mathf.Max(0.0f, value); } }
        public float ThickBorderPolyHoverEps { get { return _thickBorderPolyHoverEps; } set { _thickBorderPolyHoverEps = Mathf.Max(0.0f, value); } }
        public float OffsetSnapStepRight { get { return _offsetSnapStepRight; } set { _offsetSnapStepRight = Mathf.Max(1e-4f, value); } }
        public float OffsetSnapStepUp { get { return _offsetSnapStepUp; } set { _offsetSnapStepUp = Mathf.Max(1e-4f, value); } }
        public float RotationSnapStep { get { return _rotationSnapStep; } set { _rotationSnapStep = Mathf.Max(1e-4f, value); } }
        public GizmoSnapMode RotationSnapMode { get { return _rotationSnapMode; } set { _rotationSnapMode = value; } }
        public GizmoDblAxisScaleMode ScaleMode { get { return _scaleMode; } set { _scaleMode = value; } }
        public float ScaleSnapStepRight { get { return _scaleSnapStepRight; } set { _scaleSnapStepRight = Mathf.Max(1e-4f, value); } }
        public float ScaleSnapStepUp { get { return _scaleSnapStepUp; } set { _scaleSnapStepUp = Mathf.Max(1e-4f, value); } }
        public float ProportionalScaleSnapStep { get { return _proportionalScaleSnapStep; } set { _proportionalScaleSnapStep = Mathf.Max(1e-4f, value); } }
        public float OffsetSensitivity { get { return _offsetSensitivity; } set { _offsetSensitivity = Mathf.Max(1e-4f, value); } }
        public float RotationSensitivity { get { return _rotationSensitivity; } set { _rotationSensitivity = Mathf.Max(1e-4f, value); } }
        public float ScaleSensitivity { get { return _scaleSensitivity; } set { _scaleSensitivity = Mathf.Max(1e-4f, value); } }
    }
}
