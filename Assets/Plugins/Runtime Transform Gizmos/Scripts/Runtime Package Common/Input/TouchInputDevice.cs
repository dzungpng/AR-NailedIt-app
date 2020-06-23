using System;
using UnityEngine;

namespace RTG
{
    public class TouchInputDevice : InputDeviceBase
    {
        private int _maxNumberOfTouches;

        public int MaxNumberOfTouches { get { return _maxNumberOfTouches; } }
        public int TouchCount { get { return Input.touchCount; } }
        public override InputDeviceType DeviceType { get { return InputDeviceType.Touch; } }

        public TouchInputDevice(int maxNumberOfTouches)
        {
            _maxNumberOfTouches = Mathf.Max(1, maxNumberOfTouches);
        }

        public override Vector3 GetFrameDelta()
        {
            if (TouchCount != 0) return Input.GetTouch(0).deltaPosition;
            return Vector3.zero;
        }

        public override Ray GetRay(Camera camera)
        {
            Ray ray = new Ray(Vector3.zero, Vector3.zero);
            if (TouchCount != 0)
            {
                Touch touch = Input.GetTouch(0);
                ray = camera.ScreenPointToRay(touch.position);
            }
            return ray;
        }

        public override Vector3 GetPositionYAxisUp()
        {
            if (TouchCount != 0) return Input.GetTouch(0).position;
            return Vector3.zero;
        }

        public override bool HasPointer()
        {
            return TouchCount != 0;
        }

        public override bool IsButtonPressed(int buttonIndex)
        {
            int touchCount = TouchCount;
            if (buttonIndex >= touchCount || touchCount > MaxNumberOfTouches) return false;
            return true;
        }

        public override bool WasButtonPressedInCurrentFrame(int buttonIndex)
        {
            int touchCount = TouchCount;
            if (buttonIndex >= touchCount || touchCount > MaxNumberOfTouches) return false;
            return Input.GetTouch(buttonIndex).phase == TouchPhase.Began;
        }

        public override bool WasButtonReleasedInCurrentFrame(int buttonIndex)
        {
            int touchCount = TouchCount;
            if (buttonIndex >= touchCount || touchCount > MaxNumberOfTouches) return false;

            Touch touch = Input.GetTouch(buttonIndex);
            return touch.phase == TouchPhase.Ended || touch.phase == TouchPhase.Canceled;
        }

        public override bool WasMoved()
        {
            int touchCount = TouchCount;
            if (touchCount != 0)
            {
                for (int touchIndex = 0; touchIndex < touchCount; ++touchIndex)
                {
                    if (touchIndex >= MaxNumberOfTouches) return false;

                    Touch touch = Input.GetTouch(touchIndex);
                    if (touch.phase == TouchPhase.Moved) return true;
                }
            }
            return false;
        }

        protected override void UpateFrameDeltas()
        {
            // No implementation needed since for a touch device the delta
            // information is stored inside the 'Touch' struct.
        }
    }
}
