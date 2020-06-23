using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class CameraFocus
    {
        public class Data
        {
            private Vector3 _cameraWorldPosition;
            private Vector3 _focusPoint;
            private float _focusPointOffset;

            public Vector3 CameraWorldPosition { get { return _cameraWorldPosition; } }
            public Vector3 FocusPoint { get { return _focusPoint; } }
            public float FocusPointOffset { get { return _focusPointOffset; } }

            public Data(Vector3 cameraWorldPosition, Vector3 focusPoint)
            {
                _cameraWorldPosition = cameraWorldPosition;
                _focusPoint = focusPoint;
                _focusPointOffset = (cameraWorldPosition - focusPoint).magnitude;
            }
        }

        public static Data CalculateFocusData(Camera camera, AABB focusAABB, CameraFocusSettings focusSettings)
        {
            float frustumHeight = focusAABB.Size.magnitude;
            float frustumDistance = camera.GetFrustumDistanceFromHeight(frustumHeight) + focusSettings.FocusDistanceAdd;
            if (frustumDistance < camera.nearClipPlane) frustumDistance += (camera.nearClipPlane - frustumDistance);

            Vector3 cameraPosition = focusAABB.Center - camera.transform.forward * frustumDistance;
            return new Data(cameraPosition, focusAABB.Center);
        }
    }
}
