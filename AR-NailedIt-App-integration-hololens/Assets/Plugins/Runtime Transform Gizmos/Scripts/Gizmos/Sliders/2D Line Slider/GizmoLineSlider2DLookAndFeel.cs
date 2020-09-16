using UnityEngine;
using System;

namespace RTG
{
    [Serializable]
    public class GizmoLineSlider2DLookAndFeel
    {
        [SerializeField]
        private GizmoLine2DType _lineType = GizmoLine2DType.Thin;
        [SerializeField]
        private GizmoFillMode2D _fillMode = GizmoFillMode2D.Filled;

        [SerializeField]
        private float _length = 50.0f;
        [SerializeField]
        private float _scale = 1.0f;

        [SerializeField]
        private float _boxThickness = 3.0f;
        [SerializeField]
        private bool _isRotationArcVisible = true;

        [SerializeField]
        private Color _color = Color.white;
        [SerializeField]
        private Color _hoveredColor = RTSystemValues.HoveredAxisColor;
        [SerializeField]
        private Color _borderColor = Color.white;
        [SerializeField]
        private Color _hoveredBorderColor = RTSystemValues.HoveredAxisColor;
        [SerializeField]
        private GizmoRotationArc2DLookAndFeel _rotationArcLookAndFeel = new GizmoRotationArc2DLookAndFeel();
        [SerializeField]
        private GizmoCap2DLookAndFeel _capLookAndFeel = new GizmoCap2DLookAndFeel();

        public GizmoLine2DType LineType { get { return _lineType; } set { _lineType = value; } }
        public GizmoFillMode2D FillMode { get { return _fillMode; } set { _fillMode = value; } }
        public float Length { get { return _length; } set { _length = Mathf.Max(0.0f, value); } }
        public float Scale { get { return _scale; } set { _scale = Mathf.Max(0.0f, value); } }
        public GizmoCap2DLookAndFeel CapLookAndFeel { get { return _capLookAndFeel; } }
        public float BoxThickness { get { return _boxThickness; } set { _boxThickness = Mathf.Max(0.0f, value); } }
        public bool IsRotationArcVisible { get { return _isRotationArcVisible; } set { _isRotationArcVisible = value; } }
        public Color Color { get { return _color; } set { _color = value; } }
        public Color HoveredColor { get { return _hoveredColor; } set { _hoveredColor = value; } }
        public Color BorderColor { get { return _borderColor; } set { _borderColor = value; } }
        public Color HoveredBorderColor { get { return _hoveredBorderColor; } set { _hoveredBorderColor = value; } }
        public GizmoRotationArc2DLookAndFeel RotationArcLookAndFeel { get { return _rotationArcLookAndFeel; } }
    }
}
