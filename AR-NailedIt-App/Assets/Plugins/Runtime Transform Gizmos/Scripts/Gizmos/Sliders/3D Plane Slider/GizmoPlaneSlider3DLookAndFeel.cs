using UnityEngine;
using System;

namespace RTG
{
    [Serializable]
    public class GizmoPlaneSlider3DLookAndFeel
    {
        [SerializeField]
        private GizmoPlane3DType _planeType = GizmoPlane3DType.Quad;

        [SerializeField]
        private float _scale = 1.0f;
        [SerializeField]
        private bool _useZoomFactor = true;

        [SerializeField]
        private float _quadWidth = 1.0f;
        [SerializeField]
        private float _quadHeight = 1.0f;

        [SerializeField]
        private float _raTriangleXLength = 1.0f;
        [SerializeField]
        private float _raTriangleYLength = 1.0f;

        [SerializeField]
        private float _circleRadius = 0.5f;

        [SerializeField]
        private float _borderBoxHeight = 0.18f;
        [SerializeField]
        private float _borderBoxDepth = 0.18f;

        [SerializeField]
        private float _borderTorusThickness = 0.18f;
        [SerializeField]
        private int _numBorderTorusWireAxialSlices = 5;

        [SerializeField]
        private float _borderCylTorusWidth = 0.18f;
        [SerializeField]
        private float _borderCylTorusHeight = 0.18f;

        [SerializeField]
        private GizmoShadeMode _shadeMode = GizmoShadeMode.Flat;
        [SerializeField]
        private Color _color = Color.white;
        [SerializeField]
        private Color _hoveredColor = RTSystemValues.HoveredAxisColor;
        [SerializeField]
        private Color _borderColor = Color.white;
        [SerializeField]
        private Color _hoveredBorderColor = RTSystemValues.HoveredAxisColor;
        [SerializeField]
        private float _borderCircleCullAlphaScale = 0.0f;

        [SerializeField]
        private GizmoShadeMode _borderShadeMode = GizmoShadeMode.Lit;
        [SerializeField]
        private GizmoFillMode3D _borderFillMode = GizmoFillMode3D.Filled;

        [SerializeField]
        private GizmoQuad3DBorderType _quadBorderType = GizmoQuad3DBorderType.Thin;
        [SerializeField]
        private GizmoRATriangle3DBorderType _raTriangleBorderType = GizmoRATriangle3DBorderType.Thin;
        [SerializeField]
        private GizmoCircle3DBorderType _circleBorderType = GizmoCircle3DBorderType.Thin;

        [SerializeField]
        private bool _isRotationArcVisible = true;
        [SerializeField]
        private GizmoRotationArc3DLookAndFeel _rotationArcLookAndFeel = new GizmoRotationArc3DLookAndFeel();

        public GizmoShadeMode ShadeMode { get { return _shadeMode; } set { _shadeMode = value; } }
        public GizmoPlane3DType PlaneType { get { return _planeType; } set { _planeType = value; } }
        public float Scale { get { return _scale; } set { _scale = Mathf.Max(0.0f, value); } }
        public bool UseZoomFactor { get { return _useZoomFactor; } set { _useZoomFactor = value; } }
        public float QuadWidth { get { return _quadWidth; } set { _quadWidth = Mathf.Max(0.0f, value); } }
        public float QuadHeight { get { return _quadHeight; } set { _quadHeight = Mathf.Max(0.0f, value); } }
        public float RATriangleXLength { get { return _raTriangleXLength; } set { _raTriangleXLength = Mathf.Max(0.0f, value); } }
        public float RATriangleYLength { get { return _raTriangleYLength; } set { _raTriangleYLength = Mathf.Max(0.0f, value); } }
        public float CircleRadius { get { return _circleRadius; } set { _circleRadius = Mathf.Max(0.0f, value); } }
        public float BorderCircleCullAlphaScale { get { return _borderCircleCullAlphaScale; } set { _borderCircleCullAlphaScale = Mathf.Clamp(value, 0.0f, 1.0f); } }
        public float BorderBoxHeight { get { return _borderBoxHeight; } set { _borderBoxHeight = Mathf.Max(0.0f, value); } }
        public float BorderBoxDepth { get { return _borderBoxDepth; } set { _borderBoxDepth = Mathf.Max(0.0f, value); } }
        public float BorderTorusThickness { get { return _borderTorusThickness; } set { _borderTorusThickness = Mathf.Max(0.0f, value); } }
        public float BorderCylTorusWidth { get { return _borderCylTorusWidth; } set { _borderCylTorusWidth = Mathf.Max(0.0f, value); } }
        public float BorderCylTorusHeight { get { return _borderCylTorusHeight; } set { _borderCylTorusHeight = Mathf.Max(0.0f, value); } }
        public int NumBorderTorusWireAxialSlices { get { return _numBorderTorusWireAxialSlices; } set { _numBorderTorusWireAxialSlices = Mathf.Max(2, value); } }
        public Color Color { get { return _color; } set { _color = value; } }
        public Color HoveredColor { get { return _hoveredColor; } set { _hoveredColor = value; } }
        public Color BorderColor { get { return _borderColor; } set { _borderColor = value; } }
        public Color HoveredBorderColor { get { return _hoveredBorderColor; } set { _hoveredBorderColor = value; } }
        public GizmoShadeMode BorderShadeMode { get { return _borderShadeMode; } set { _borderShadeMode = value; } }
        public GizmoFillMode3D BorderFillMode { get { return _borderFillMode; } set { _borderFillMode = value; } }
        public GizmoQuad3DBorderType QuadBorderType { get { return _quadBorderType; } set { _quadBorderType = value; } }
        public GizmoCircle3DBorderType CircleBorderType { get { return _circleBorderType; } set { _circleBorderType = value; } }
        public GizmoRATriangle3DBorderType RATriangleBorderType { get { return _raTriangleBorderType; } set { _raTriangleBorderType = value; } }
        public bool IsRotationArcVisible { get { return _isRotationArcVisible; } set { _isRotationArcVisible = value; } }
        public GizmoRotationArc3DLookAndFeel RotationArcLookAndFeel { get { return _rotationArcLookAndFeel; } }
    }
}
