//#define INPUT_DEVICE_VR_CONTROLLER
using UnityEngine;

namespace RTG
{
    public class RTInputDevice : MonoSingleton<RTInputDevice>
    {
        private IInputDevice _inputDevice;

        public IInputDevice Device { get { return _inputDevice; } }
        public InputDeviceType DeviceType { get { return _inputDevice.DeviceType; } }

        public void Update_SystemCall()
        {
            _inputDevice.Update();
        }

        private void Awake()
        {
            #if !UNITY_EDITOR && (UNITY_IOS || UNITY_ANDROID || UNITY_WP_8_1)
            _inputDevice = new TouchInputDevice(10);
            #elif INPUT_DEVICE_VR_CONTROLLER
            //_inputDevice = new MyVRCtrlImplementation(...);
            #else
            _inputDevice = new MouseInputDevice();
            #endif
        }
    }
}
