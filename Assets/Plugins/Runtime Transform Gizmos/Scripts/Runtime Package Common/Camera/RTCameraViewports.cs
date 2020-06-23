using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class RTCameraViewports : Singleton<RTCameraViewports>
    {
        public delegate void CameraAddedHandler(Camera camera);
        public delegate void CameraRemovedHandler(Camera camera);
        public delegate void FocusCameraChangedHandler(Camera oldFocusCam, Camera newFocusCam);

        public event CameraAddedHandler CameraAdded;
        public event CameraRemovedHandler CameraRemoved;
        public event FocusCameraChangedHandler FocusCameraChanged;

        private List<Camera> _cameras = new List<Camera>();

        public Camera FocusCamera { get { return RTFocusCamera.Get.TargetCamera; } }
        public int NumCameras { get { return _cameras.Count; } }

        public bool ContainsCamera(Camera camera)
        {
            return _cameras.Contains(camera);
        }

        public void AddCamera(Camera camera, Rect normViewRect)
        {
            if (camera != null && !ContainsCamera(camera))
            {
                _cameras.Add(camera);
                camera.rect = normViewRect;

                if (CameraAdded != null) CameraAdded(camera);
            }
        }

        public void AddCamera(Camera camera)
        {
            if (camera != null && !ContainsCamera(camera))
            {
                _cameras.Add(camera);
                if (CameraAdded != null) CameraAdded(camera);
            }
        }

        public void RemoveCamera(Camera camera)
        {
            if (camera == null) return;

            _cameras.Remove(camera);
            if (CameraRemoved != null) CameraRemoved(camera);
        }
        
        public void SetFocusCamera(int cameraIndex)
        {
            if (cameraIndex < 0 || cameraIndex >= NumCameras) return;
            SetFocusCamera(_cameras[cameraIndex]);
        }

        public void SetFocusCamera(Camera camera)
        {
            if (FocusCamera != camera && ContainsCamera(camera))
            {
                Camera oldFocusCamera = FocusCamera;
                RTFocusCamera.Get.SetTargetCamera(camera);

                if (FocusCameraChanged != null) FocusCameraChanged(oldFocusCamera, FocusCamera);
            }
        }
    }
}
