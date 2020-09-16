using UnityEngine;

namespace RTG
{
    public abstract class GizmoScreenDrag : GizmoDragSession
    {
        private bool _isSnapEnabled;
        private float _sensitivity = 1.0f;

        protected InputDeviceScreenDragSession _screenDragSession;

        public bool IsSnapEnabled { get { return _isSnapEnabled; } set { _isSnapEnabled = value; } }
        public float Sensitivity { get { return _sensitivity; } set { _sensitivity = Mathf.Max(1e-4f, value); } }

        public override bool IsActive { get { return _screenDragSession != null && _screenDragSession.IsActive; } }

        protected override bool DoBeginSession()
        {
            _screenDragSession = new InputDeviceScreenDragSession(RTInputDevice.Get.Device);
            return _screenDragSession.Begin();
        }

        protected override bool DoUpdateSession()
        {
            return _screenDragSession.Update();
        }

        protected override void DoEndSession()
        {
            _screenDragSession.End();
            _screenDragSession = null;
        }

        protected bool CanSnap()
        {
            return _isSnapEnabled;
        }
    }
}
