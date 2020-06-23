using UnityEngine;
using System;

namespace RTG
{
    [Serializable]
    public class GizmoRotationArc3DLookAndFeel
    {
        [SerializeField]
        private bool _useShortestRotation = true;
        [SerializeField]
        private GizmoRotationArcFillFlags _fillFlags = GizmoRotationArcFillFlags.Area | GizmoRotationArcFillFlags.ExtremitiesBorder;
        [SerializeField]
        private Color _color = RTSystemValues.GuideFillColor;
        [SerializeField]
        private Color _borderColor = RTSystemValues.GuideBorderColor;

        public bool UseShortestRotation { get { return _useShortestRotation; } set { _useShortestRotation = value; } }
        public GizmoRotationArcFillFlags FillFlags { get { return _fillFlags; } set { _fillFlags = value; } }
        public Color Color { get { return _color; } set { _color = value; } }
        public Color BorderColor { get { return _borderColor; } set { _borderColor = value; } }
    }
}
