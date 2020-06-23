using UnityEngine;

namespace RTG
{
    public abstract class InputDeviceBase : IInputDevice
    {
        public event InputDeviceDoubleTapHandler DoubleTap;

        private float _doubleTapDelay = 0.5f;
        private float _lastTapTime = 0.0f;

        private bool _didDoubleTap;
        private int _maxNumDeltaCaptures;
        private InputDeviceDeltaCapture[] _deltaCaptures;

        public bool DidDoubleTap { get { return _didDoubleTap; } }
        public float DoubleTapDelay { get { return _doubleTapDelay; } set { _doubleTapDelay = Mathf.Max(value, 0.0f); } }
        public abstract InputDeviceType DeviceType { get; }

        public InputDeviceBase()
        {
            SetMaxNumDeltaCaptures(50);
        }

        public void SetMaxNumDeltaCaptures(int maxNumDeltaCaptures)
        {
            _maxNumDeltaCaptures = Mathf.Max(1, maxNumDeltaCaptures);
            _deltaCaptures = new InputDeviceDeltaCapture[_maxNumDeltaCaptures];
        }

        public bool CreateDeltaCapture(Vector3 deltaOrigin, out int deltaCaptureId)
        {
            deltaCaptureId = 0;
            while (deltaCaptureId < _maxNumDeltaCaptures && _deltaCaptures[deltaCaptureId] != null) ++deltaCaptureId;
            if (deltaCaptureId == _maxNumDeltaCaptures)
            {
                deltaCaptureId = -1;
                return false;
            }

            var deltaCapture = new InputDeviceDeltaCapture(deltaCaptureId, deltaOrigin);
            _deltaCaptures[deltaCaptureId] = deltaCapture;

            return true;
        }

        public void RemoveDeltaCapture(int deltaCaptureId)
        {
            if (deltaCaptureId >= 0 && deltaCaptureId < _maxNumDeltaCaptures) _deltaCaptures[deltaCaptureId] = null;
        }

        public Vector3 GetCaptureDelta(int deltaCaptureId)
        {
     
            if (deltaCaptureId >= 0 && 
                deltaCaptureId < _maxNumDeltaCaptures && _deltaCaptures[deltaCaptureId] != null) return _deltaCaptures[deltaCaptureId].Delta;
            return Vector3.zero;
        }

        public abstract Vector3 GetFrameDelta();
        public abstract Ray GetRay(Camera camera);
        public abstract Vector3 GetPositionYAxisUp();
        public abstract bool HasPointer();
        public abstract bool IsButtonPressed(int buttonIndex);
        public abstract bool WasButtonPressedInCurrentFrame(int buttonIndex);
        public abstract bool WasButtonReleasedInCurrentFrame(int buttonIndex);
        public abstract bool WasMoved();

        public void Update()
        {
            UpateFrameDeltas();
            UpdateDeltaCaptures();
            DetectAndHandleDoubleTap();
        }

        protected abstract void UpateFrameDeltas();

        private void UpdateDeltaCaptures()
        {
            int deltaCaptureId = 0;
            Vector3 devicePosition = GetPositionYAxisUp();
            while (deltaCaptureId < _maxNumDeltaCaptures && _deltaCaptures[deltaCaptureId] != null)
            {
                _deltaCaptures[deltaCaptureId++].Update(devicePosition);
            }
        }

        private void DetectAndHandleDoubleTap()
        {
            if (WasButtonPressedInCurrentFrame(0))
            {
                if ((Time.time - _lastTapTime) < _doubleTapDelay)
                {
                    _lastTapTime = 0.0f;
                    _didDoubleTap = true;
                    if (DoubleTap != null) DoubleTap(this, GetPositionYAxisUp());
                }
                else
                {
                    _didDoubleTap = false;
                    _lastTapTime = Time.time;
                }
            }
        }
    }
}
