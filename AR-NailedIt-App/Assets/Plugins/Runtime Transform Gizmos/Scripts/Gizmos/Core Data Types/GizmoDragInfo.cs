using UnityEngine;

namespace RTG
{
    public struct GizmoDragInfo
    {
        private bool _isDragged;
        private int _handleId;
        private Vector3 _dragBeginPoint;
        private GizmoDragChannel _dragChannel;
        private GizmoDimension _handleDimension;
        private Vector3 _totalOffset;
        private Quaternion _totalRotation;
        private Vector3 _totalScale;
        private Vector3 _relativeOffset;
        private Quaternion _relativeRotation;
        private Vector3 _relativeScale;

        public bool IsDragged { get { return _isDragged; } set { _isDragged = value; } }
        public int HandleId { get { return _handleId; } set { _handleId = value; } }
        public Vector3 DragBeginPoint { get { return _dragBeginPoint; } set { _dragBeginPoint = value; } }
        public GizmoDragChannel DragChannel { get { return _dragChannel; } set { _dragChannel = value; } }
        public GizmoDimension HandleDimension { get { return _handleDimension; } set { _handleDimension = value; } }
        public Vector3 TotalOffset { get { return _totalOffset; } set { _totalOffset = value; } }
        public Quaternion TotalRotation { get { return _totalRotation; } set { _totalRotation = value; } }
        public Vector3 TotalScale { get { return _totalScale; } set { _totalScale = value; } }
        public Vector3 RelativeOffset { get { return _relativeOffset; } set { _relativeOffset = value; } }
        public Quaternion RelativeRotation { get { return _relativeRotation; } set { _relativeRotation = value; } }
        public Vector3 RelativeScale { get { return _relativeScale; } set { _relativeScale = value; } }

        public void Reset()
        {
            _isDragged = false;
            _handleId = GizmoHandleId.None;
            _dragBeginPoint = Vector3.zero;
            _dragChannel = GizmoDragChannel.None;
            _handleDimension = GizmoDimension.None;
            _totalOffset = _relativeOffset = Vector3.zero;
            _totalRotation = _relativeRotation = Quaternion.identity;
            _totalScale = _relativeScale = Vector3.one;
        }
    }
}
