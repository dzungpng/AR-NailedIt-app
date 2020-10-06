using UnityEngine;

namespace RTG
{
    public class InputDeviceScreenDragSession
    {
        private Vector2 _dragPoint;
        private Vector2 _dragDelta;
        private Vector2 _accumDrag;
        private IInputDevice _inputDevice;
        private bool _isActive;

        public Vector2 DragPoint { get { return _dragPoint; } }
        public Vector2 DragDelta { get { return _dragDelta; } }
        public Vector2 AccumDrag { get { return _accumDrag; } }
        public bool IsActive { get { return _isActive; } }

        public InputDeviceScreenDragSession(IInputDevice inputDevice)
        {
            _inputDevice = inputDevice;
        }

        public bool Begin()
        {
            if (_isActive) return false;
            _isActive = UpdateDragPoint();
            return _isActive;
        }

        public void End()
        {
            if (_isActive)
            {
                _isActive = false;
                _dragPoint = Vector3.zero;
                _dragDelta = Vector3.zero;
                _accumDrag = Vector3.zero;
            }
        }

        public bool Update()
        {
            if (!_isActive) return false;

            Vector2 prevDragPoint = _dragPoint;
            if (!UpdateDragPoint())
            {
                _dragDelta = Vector3.zero;
                return false;
            }

            _dragDelta = _dragPoint - prevDragPoint;
            _accumDrag += _dragDelta;

            return true;
        }

        private bool UpdateDragPoint()
        {
            if(_inputDevice.HasPointer())
            {
                _dragPoint = _inputDevice.GetPositionYAxisUp();
                return true;
            }

            return false;
        }
    }
}
