using UnityEngine;

namespace RTG
{
    public delegate void InputDeviceDoubleTapHandler(IInputDevice inputDevice, Vector2 position);

    public interface IInputDevice
    {
        event InputDeviceDoubleTapHandler DoubleTap;

        bool DidDoubleTap { get; }
        float DoubleTapDelay { get; set; }
        InputDeviceType DeviceType { get; }

        Ray GetRay(Camera camera);
        Vector3 GetPositionYAxisUp();
        bool HasPointer();
        bool IsButtonPressed(int buttonIndex);
        bool WasButtonPressedInCurrentFrame(int buttonIndex);
        bool WasButtonReleasedInCurrentFrame(int buttonIndex);
        bool WasMoved();
        bool CreateDeltaCapture(Vector3 deltaOrigin, out int deltaCaptureId);
        void RemoveDeltaCapture(int deltaCaptureId);
        Vector3 GetCaptureDelta(int deltaCaptureId);
        Vector3 GetFrameDelta();
        void Update();
    }
}
