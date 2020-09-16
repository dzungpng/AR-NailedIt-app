using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class CameraEx
    {
        public static bool IsCurrent(this Camera camera)
        {
            return Camera.current == camera;
        }

        public static float GetFrustumDistanceFromHeight(this Camera camera, float frustumHeight)
        {
            return (frustumHeight * 0.5f) / Mathf.Tan(camera.fieldOfView * 0.5f * Mathf.Deg2Rad);
        }

        public static float GetFOVFromDistanceAndHeight(this Camera camera, float frustumHeight, float distance)
        {
            return 2.0f * Mathf.Atan2(frustumHeight * 0.5f, distance) * Mathf.Rad2Deg;
        }

        public static float GetFrustumWidthFromDistance(this Camera camera, float distance)
        {
            return 2.0f * distance * Mathf.Tan(camera.fieldOfView * 0.5f * Mathf.Deg2Rad) * camera.aspect;
        }

        public static float GetFrustumHeightFromDistance(this Camera camera, float distance)
        {
            return 2.0f * distance * Mathf.Tan(camera.fieldOfView * 0.5f * Mathf.Deg2Rad);
        }

        public static AABB CalculateVolumeAABB(this Camera camera)
        {
            if (!camera.orthographic) return camera.CalculateFrustumAABB();
            return camera.CalculateOrthoAABB();
        }

        public static AABB CalculateFrustumAABB(this Camera camera)
        {
            Transform camTransform = camera.transform;
            float frustumWidth = camera.GetFrustumWidthFromDistance(camera.farClipPlane);
            float frustumHeight = camera.GetFrustumHeightFromDistance(camera.farClipPlane);

            Vector3 topLeftFar = camTransform.position + camTransform.forward * camera.farClipPlane -
                                 camTransform.right * frustumWidth * 0.5f + camTransform.up * frustumHeight * 0.5f;
            Vector3 topRightFar = topLeftFar + camTransform.right * frustumWidth;
            Vector3 bottomLeftFar = topLeftFar - camTransform.up * frustumHeight;
            Vector3 bottomRightFar = bottomLeftFar + camTransform.right * frustumWidth;

            return new AABB(new Vector3[] { camTransform.position, topLeftFar, topRightFar, bottomLeftFar, bottomRightFar });        
        }

        public static AABB CalculateOrthoAABB(this Camera camera)
        {
            float orthoHeight = camera.orthographicSize * 2.0f;
            float orthoWidth = orthoHeight * camera.aspect;

            Transform camTransform = camera.transform;
            Vector3 nearMidPt = camTransform.position + camTransform.forward * camera.nearClipPlane;
            Vector3 nearTopLeft = nearMidPt - camTransform.right * orthoWidth * 0.5f + camTransform.up * orthoHeight * 0.5f;
            Vector3 nearTopRight = nearTopLeft + camTransform.right * orthoWidth;
            Vector3 nearBottomRight = nearTopRight - camTransform.up * orthoHeight;
            Vector3 nearBottomLeft = nearBottomRight - camTransform.right * orthoWidth;

            Vector3 farMidPt = camTransform.position + camTransform.forward * camera.farClipPlane;
            Vector3 farTopLeft = farMidPt - camTransform.right * orthoWidth * 0.5f + camTransform.up * orthoHeight * 0.5f;
            Vector3 farTopRight = farTopLeft + camTransform.right * orthoWidth;
            Vector3 farBottomRight = farTopRight - camTransform.up * orthoHeight;
            Vector3 farBottomLeft = farBottomRight - camTransform.right * orthoWidth;

            return new AABB(new Vector3[] { nearTopLeft, nearTopRight, nearBottomRight, nearBottomLeft,
                                            farTopLeft, farTopRight, farBottomRight, farBottomLeft});
        }

        public static bool IsPointInFrontNearPlane(this Camera camera, Vector3 position)
        {
            Plane nearPlane = camera.GetNearPlaneForward();
            float distToPt = nearPlane.GetDistanceToPoint(position);
            return distToPt > 0.0f;
        }

        public static Plane GetNearPlaneForward(this Camera camera)
        {
            Transform camTransform = camera.transform;
            return new Plane(camTransform.forward, camTransform.position + camTransform.forward * camera.nearClipPlane);
        }

        public static Vector3 GetFarMidPoint(this Camera camera)
        {
            Transform cameraTransform = camera.transform;
            return cameraTransform.position + cameraTransform.forward * camera.farClipPlane;
        }

        public static Vector3 GetFarMidOrthoTop(this Camera camera)
        {
            Vector3 farMidPoint = camera.GetFarMidPoint();
            return farMidPoint + camera.transform.up * camera.orthographicSize;
        }

        public static float GetOrthoFOV(this Camera camera)
        {
            Vector3 camPos = camera.transform.position;
            Vector3 toMidFar = camera.GetFarMidPoint() - camPos;
            Vector3 toMidFarTop = camera.GetFarMidOrthoTop() - camPos;

            return Vector3.Angle(toMidFar, toMidFarTop) * 2.0f;
        }

        public static bool IsPointFacingCamera(this Camera camera, Vector3 point, Vector3 pointNormal)
        {
            Vector3 lookRay = point - camera.transform.position;
            if (camera.orthographic) lookRay = camera.transform.forward;
            return Vector3.Dot(lookRay, pointNormal) < 0.0f;
        }

        public static float GetPointZDistance(this Camera camera, Vector3 point)
        {
            Transform camTransform = camera.transform;
            return Vector3.Dot((point - camTransform.position), camTransform.forward);
        }

        public static List<Vector3> GetVisibleSphereExtents(this Camera camera, Sphere sphere)
        {
            Transform cameraTransform = camera.transform;
            List<Vector3> extents = sphere.GetRightUpExtents(cameraTransform.right, cameraTransform.up);

            if (!camera.orthographic)
            {
                for (int extentIndex = 0; extentIndex < 4; ++extentIndex)
                {
                    Vector3 prjCenter = sphere.Center.ProjectOnSegment(cameraTransform.position, extents[extentIndex]);
                    extents[extentIndex] = sphere.Center + (prjCenter - sphere.Center).normalized * sphere.Radius;
                }
            }

            return extents;
        }

        public static List<Vector2> ConvertWorldToScreenPoints(this Camera camera, List<Vector3> worldPoints)
        {
            if (worldPoints.Count == 0) return new List<Vector2>();

            var screenPoints = new List<Vector2>(worldPoints.Count);
            foreach(var pt in worldPoints)
            {
                screenPoints.Add(camera.WorldToScreenPoint(pt));
            }

            return screenPoints;
        }

        public static float ScreenToEstimatedWorldSize(this Camera camera, Vector3 worldPos, float screenSize)
        {
            float viewHeight = camera.pixelHeight;

            if (camera.orthographic) return screenSize * (camera.orthographicSize * 2.0f / viewHeight);
            else
            {
                Transform camTransform = camera.transform;
                float distFromCam = Vector3.Dot(camTransform.forward, (worldPos - camTransform.position));
                float volumeSize = 2.0f * distFromCam * Mathf.Tan(camera.fieldOfView * 0.5f * Mathf.Deg2Rad);

                return screenSize * (volumeSize / viewHeight);
            }
        }

        public static float EstimateZoomFactor(this Camera camera, Vector3 worldPos)
        {
            const float viewHeightScaleOrtho = 0.071f;
            const float viewHeightScalePersp = 0.046f;

            if (camera.orthographic) return (camera.orthographicSize * 2.0f) / (viewHeightScaleOrtho * camera.pixelHeight);
            else
            {
                Transform camTransform = camera.transform;
                float distFromCam = Vector3.Dot(camTransform.forward, (worldPos - camTransform.position));
                return distFromCam / (viewHeightScalePersp * camera.pixelHeight * 90.0f / camera.fieldOfView);
            }
        }

        public static float EstimateZoomFactorSpherical(this Camera camera, Vector3 worldPos)
        {
            const float viewHeightScaleOrtho = 0.071f;
            const float viewHeightScalePersp = 0.046f;

            if (camera.orthographic) return (camera.orthographicSize * 2.0f) / (viewHeightScaleOrtho * camera.pixelHeight);
            else
            {
                Transform camTransform = camera.transform;
                float distFromCam = (worldPos - camTransform.position).magnitude;
                return distFromCam / (viewHeightScalePersp * camera.pixelHeight * 90.0f / camera.fieldOfView);
            }
        }

        public static List<GameObject> GetVisibleObjects(this Camera camera, CameraViewVolume viewVolume)
        {         
            // Retrieve the objects which are overlapped by the camera volume's OBB
            List<GameObject> overlappedObjects = RTScene.Get.OverlapBox(viewVolume.WorldOBB);
            if (overlappedObjects.Count == 0) return new List<GameObject>();

            // Loop through each overlapped object
            var boundsQConfig = new ObjectBounds.QueryConfig();
            boundsQConfig.ObjectTypes = GameObjectTypeHelper.AllCombined;
            boundsQConfig.NoVolumeSize = Vector3Ex.FromValue(1e-5f);

            var visibleObjects = new List<GameObject>(overlappedObjects.Count);
            foreach (var gameObject in overlappedObjects)
            {
                // Retrieve the object's world AABB
                AABB worldAABB = ObjectBounds.CalcWorldAABB(gameObject, boundsQConfig);

                // If the AABB is valid and if the camera's view volume intersects the AABB,
                // it means we are dealing with a visible object so we store it inside the 
                // output list.
                if (worldAABB.IsValid && viewVolume.CheckAABB(worldAABB)) visibleObjects.Add(gameObject);
            }

            return visibleObjects;
        }
    }
}
