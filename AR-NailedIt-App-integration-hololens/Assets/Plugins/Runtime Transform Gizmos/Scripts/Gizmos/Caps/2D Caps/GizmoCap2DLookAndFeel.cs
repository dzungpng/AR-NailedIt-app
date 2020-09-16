using UnityEngine;
using System;

namespace RTG
{
    [Serializable]
    public class GizmoCap2DLookAndFeel
    {
        [SerializeField]
        private GizmoFillMode2D _fillMode = GizmoFillMode2D.FilledAndBorder;
        [SerializeField]
        private GizmoCap2DType _capType = GizmoCap2DType.Quad;

        [SerializeField]
        private float _scale = 1.0f;
        [SerializeField]
        private float _circleRadius = 12.0f;
        [SerializeField]
        private float _quadWidth = 25.0f;
        [SerializeField]
        private float _quadHeight = 25.0f;
        [SerializeField]
        private float _arrowBaseRadius = 5.0f;
        [SerializeField]
        private float _arrowHeight = 20.0f;
        [SerializeField]
        private Color _color = Color.white;
        [SerializeField]
        private Color _hoveredColor = RTSystemValues.HoveredAxisColor;
        [SerializeField]
        private Color _borderColor = Color.white;
        [SerializeField]
        private Color _hoveredBorderColor = RTSystemValues.HoveredAxisColor;

        public GizmoFillMode2D FillMode { get { return _fillMode; } set { _fillMode = value; } }
        public GizmoCap2DType CapType { get { return _capType; } set { _capType = value; } }
        public float Scale { get { return _scale; } set { _scale = Mathf.Max(0.0f, value); } }
        public float CircleRadius { get { return _circleRadius; } set { _circleRadius = value; } }
        public float QuadWidth { get { return _quadWidth; } set { _quadWidth = Mathf.Max(0.0f, value); } }
        public float QuadHeight { get { return _quadHeight; } set { _quadHeight = Mathf.Max(0.0f, value); } }
        public float ArrowBaseRadius { get { return _arrowBaseRadius; } set { _arrowBaseRadius = Mathf.Max(0.0f, value); } }
        public float ArrowHeight { get { return _arrowHeight; } set { _arrowHeight = Mathf.Max(0.0f, value); } }
        public Color Color { get { return _color; } set { _color = value; } }
        public Color HoveredColor { get { return _hoveredColor; } set { _hoveredColor = value; } }
        public Color BorderColor { get { return _borderColor; } set { _borderColor = value; } }
        public Color HoveredBorderColor { get { return _hoveredBorderColor; } set { _hoveredBorderColor = value; } }
    }
}
