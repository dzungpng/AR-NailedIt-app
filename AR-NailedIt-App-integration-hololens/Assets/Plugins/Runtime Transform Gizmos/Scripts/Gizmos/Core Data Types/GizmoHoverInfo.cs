using UnityEngine;

namespace RTG
{
    public struct GizmoHoverInfo
    {
        private bool _isHovered;
        private int _handleId;
        private GizmoDimension _handleDimension;
        private Vector3 _hoverPoint;

        public bool IsHovered { get { return _isHovered; } set { _isHovered = value; } }
        public int HandleId { get { return _handleId; } set { _handleId = value; } }
        public GizmoDimension HandleDimension { get { return _handleDimension; } set { _handleDimension = value; } }
        public Vector3 HoverPoint { get { return _hoverPoint; } set { _hoverPoint = value; } }

        public void Reset()
        {
            _isHovered = false;
            _handleId = GizmoHandleId.None;
            _handleDimension = GizmoDimension.None;
            _hoverPoint = Vector3.zero;
        }
    }
}
