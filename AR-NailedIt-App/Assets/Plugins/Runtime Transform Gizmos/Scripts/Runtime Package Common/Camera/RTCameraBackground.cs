using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class RTCameraBackground : MonoSingleton<RTCameraBackground>
    {
        [SerializeField]
        private CameraBackgroundSettings _bkSettings = new CameraBackgroundSettings();
        [SerializeField]
        private List<Camera> _renderIgnoreCameras = new List<Camera>();
        private Dictionary<Camera, CameraBackgroundSettings> _cameraToBkSettings = new Dictionary<Camera, CameraBackgroundSettings>();

        public CameraBackgroundSettings Settings { get { return _bkSettings; } }

        public void SetCameraBkSettings(Camera camera, CameraBackgroundSettings bkSettings)
        {
            if (bkSettings == null && _cameraToBkSettings.ContainsKey(camera))
            {
                _cameraToBkSettings.Remove(camera);
                return;
            }

            if (!_cameraToBkSettings.ContainsKey(camera)) _cameraToBkSettings.Add(camera, bkSettings);
            else _cameraToBkSettings[camera] = bkSettings;
        }

        public List<Camera> GetAllRenderIgnoreCameras()
        {
            return new List<Camera>(_renderIgnoreCameras);
        }

        public bool IsRenderIgnoreCamera(Camera camera)
        {
            return _renderIgnoreCameras.Contains(camera);
        }

        public void AddRenderIgnoreCamera(Camera camera)
        {
            if (!IsRenderIgnoreCamera(camera)) _renderIgnoreCameras.Add(camera);
        }

        public void RemoveRenderIgnoreCamera(Camera camera)
        {
            _renderIgnoreCameras.Remove(camera);
        }

        public void Render_SystemCall()
        {
            Camera bkCamera = Camera.current;
            if (!IsRenderIgnoreCamera(bkCamera))
            {
                CameraBackgroundSettings bkSettings = _bkSettings;
                if (_cameraToBkSettings.ContainsKey(bkCamera)) bkSettings = _cameraToBkSettings[bkCamera];
                if(bkSettings.IsVisible)
                {
                    Transform cameraTransform = bkCamera.transform;

                    QuadShape3D bkQuad = new QuadShape3D();
                    float farPlaneWidth = bkCamera.GetFrustumWidthFromDistance(bkCamera.farClipPlane);
                    float farPlaneHeight = bkCamera.GetFrustumHeightFromDistance(bkCamera.farClipPlane);
                    bkQuad.Size = new Vector3(farPlaneWidth + 0.01f, farPlaneHeight + 0.01f, 1.0f);
                    bkQuad.Rotation = cameraTransform.rotation;
                    bkQuad.Center = cameraTransform.position + cameraTransform.forward * bkCamera.farClipPlane * 0.98f;

                    Material material = MaterialPool.Get.LinearGradientCameraBk;
                    material.SetColor("_FirstColor", bkSettings.FirstColor);
                    material.SetColor("_SecondColor", bkSettings.SecondColor);
                    material.SetFloat("_GradientOffset", bkSettings.GradientOffset);
                    material.SetFloat("_FarPlaneHeight", bkQuad.Size.y);
                    material.SetPass(0);
                    bkQuad.RenderSolid();
                }
            }
        }
    }
}
