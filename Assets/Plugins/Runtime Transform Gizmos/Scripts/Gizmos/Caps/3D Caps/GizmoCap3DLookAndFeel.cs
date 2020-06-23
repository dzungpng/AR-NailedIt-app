using UnityEngine;
using System;

namespace RTG
{
    [Serializable]
    public class GizmoCap3DLookAndFeel
    {
        [SerializeField]
        private GizmoCap3DType _capType = GizmoCap3DType.Cone;
        [SerializeField]
        private GizmoFillMode3D _fillMode = GizmoFillMode3D.Filled;
        [SerializeField]
        private GizmoShadeMode _shadeMode = GizmoShadeMode.Lit;

        [SerializeField]
        private float _scale = 1.0f;
        [SerializeField]
        private bool _useZoomFactor = true;

        [SerializeField]
        private float _coneHeight = 1.65f;
        [SerializeField]
        private float _coneRadius = 0.5f;

        [SerializeField]
        private float _pyramidHeight = 1.65f;
        [SerializeField]
        private float _pyramidWidth = 0.8f;
        [SerializeField]
        private float _pyramidDepth = 0.8f;

        [SerializeField]
        private float _boxWidth = 0.7f;
        [SerializeField]
        private float _boxHeight = 0.7f;
        [SerializeField]
        private float _boxDepth = 0.7f;

        [SerializeField]
        private float _sphereRadius = 0.45f;

        [SerializeField]
        private float _trPrismWidth = 1.0f;
        [SerializeField]
        private float _trPrismHeight = 1.0f;
        [SerializeField]
        private float _trPrismDepth = 1.0f;

        [SerializeField]
        private bool _isSphereBorderVisible;
        [SerializeField]
        private Color _sphereBorderColor = Color.white;
        [SerializeField]
        private int _numSphereBorderPoints = 100;

        [SerializeField]
        private Color _color = RTSystemValues.XAxisColor;
        [SerializeField]
        private Color _hoveredColor = RTSystemValues.HoveredAxisColor;

        public GizmoCap3DType CapType { get { return _capType; } set { _capType = value; } }
        public GizmoFillMode3D FillMode { get { return _fillMode; } set { _fillMode = value; } }
        public GizmoShadeMode ShadeMode { get { return _shadeMode; } set { _shadeMode = value; } }
        public float Scale { get { return _scale; } set { _scale = Mathf.Max(0.0f, value); } }
        public bool UseZoomFactor { get { return _useZoomFactor; } set { _useZoomFactor = value; } }
        public float ConeHeight { get { return _coneHeight; } set { _coneHeight = Mathf.Max(1e-5f, value); } }
        public float ConeRadius { get { return _coneRadius; } set { _coneRadius = Mathf.Max(1e-5f, value); } }
        public float PyramidHeight { get { return _pyramidHeight; } set { _pyramidHeight = Mathf.Max(1e-5f, value); } }
        public float PyramidWidth { get { return _pyramidWidth; } set { _pyramidWidth = Mathf.Max(1e-5f, value); } }
        public float PyramidDepth { get { return _pyramidDepth; } set { _pyramidDepth = Mathf.Max(1e-5f, value); } }
        public float BoxWidth { get { return _boxWidth; } set { _boxWidth = Mathf.Max(1e-5f, value); } }
        public float BoxHeight { get { return _boxHeight; } set { _boxHeight = Mathf.Max(1e-5f, value); } }
        public float BoxDepth { get { return _boxDepth; } set { _boxDepth = Mathf.Max(1e-5f, value); } }
        public float SphereRadius { get { return _sphereRadius; } set { _sphereRadius = Mathf.Max(1e-5f, value); } }
        public float TrPrismWidth { get { return _trPrismWidth; } set { _trPrismWidth = Mathf.Max(1e-5f, value); } }
        public float TrPrismHeight { get { return _trPrismHeight; } set { _trPrismHeight = Mathf.Max(1e-5f, value); } }
        public float TrPrismDepth { get { return _trPrismDepth; } set { _trPrismDepth = Mathf.Max(1e-5f, value); } }
        public bool IsSphereBorderVisible { get { return _isSphereBorderVisible; } set { _isSphereBorderVisible = value; } }
        public Color SphereBorderColor { get { return _sphereBorderColor; } set { _sphereBorderColor = value; } }
        public int NumSphereBorderPoints { get { return _numSphereBorderPoints; } set { _numSphereBorderPoints = Mathf.Max(3, value); } }
        public Color Color { get { return _color; } set { _color = value; } }
        public Color HoveredColor { get { return _hoveredColor; } set { _hoveredColor = value; } }

        public static float DefaultConeHeight { get { return 1.65f; } }
        public static float DefaultConeRadius { get { return 0.5f; } }
        public static float DefaultPyramidHeight { get { return 1.65f; } }
        public static float DefaultPyramidWidth { get { return 0.8f; } }
        public static float DefaultPyramidDepth { get { return 0.8f; } }
    }
}
