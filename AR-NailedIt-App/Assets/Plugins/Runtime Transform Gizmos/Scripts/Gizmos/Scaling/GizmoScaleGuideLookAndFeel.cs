using UnityEngine;
using System;

namespace RTG
{
    [Serializable]
    public class GizmoScaleGuideLookAndFeel
    {
        [SerializeField]
        private bool _useZoomFactor = true;
        [SerializeField]
        private Color _xAxisColor = RTSystemValues.XAxisColor;
        [SerializeField]
        private Color _yAxisColor = RTSystemValues.YAxisColor;
        [SerializeField]
        private Color _zAxisColor = RTSystemValues.ZAxisColor;

        [SerializeField]
        private float _axisLength = 2.0f;

        public bool UseZoomFactor { get { return _useZoomFactor; } set { _useZoomFactor = value; } }
        public Color XAxisColor { get { return _xAxisColor; } set { _xAxisColor = value; } }
        public Color YAxisColor { get { return _yAxisColor; } set { _yAxisColor = value; } }
        public Color ZAxisColor { get { return _zAxisColor; } set { _zAxisColor = value; } }
        public float AxisLength { get { return _axisLength; } set { _axisLength = Mathf.Max(0.0f, value); } }
    }
}
