using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class CameraViewVolume
    {
        public enum VPoint
        {
            NearTopLeft = 0,
            NearTopRight,
            NearBottomRight,
            NearBottomLeft,

            FarTopLeft,
            FarTopRight,
            FarBottomRight,
            FarBottomLeft
        }

        public enum VPlane
        {
            Left = 0,
            Right,
            Bottom,
            Top,
            Near,
            Far
        }

        private const int _numWorldPoints = 8;
        private const int _numWorldPlanes = 6;

        private Vector3[] _worldPoints = new Vector3[_numWorldPoints];
        private Plane[] _worldPlanes = new Plane[_numWorldPlanes];
        private Vector2 _farPlaneSize = Vector2.zero;
        private Vector2 _nearPlaneSize = Vector2.zero;
        private AABB _worldAABB;
        private OBB _worldOBB;

        public Plane LeftPlane { get { return _worldPlanes[(int)VPlane.Left];} }
        public Plane RightPlane { get { return _worldPlanes[(int)VPlane.Right]; } }
        public Plane BottomPlane { get { return _worldPlanes[(int)VPlane.Bottom]; } }
        public Plane TopPlane { get { return _worldPlanes[(int)VPlane.Top]; } }
        public Plane NearPlane { get { return _worldPlanes[(int)VPlane.Near]; } }
        public Plane FarPlane { get { return _worldPlanes[(int)VPlane.Far]; } }

        public Vector3 NearTopLeft { get { return _worldPoints[(int)VPoint.NearTopLeft]; } }
        public Vector3 NearTopRight { get { return _worldPoints[(int)VPoint.NearTopRight]; } }
        public Vector3 NearBottomRight { get { return _worldPoints[(int)VPoint.NearBottomRight]; } }
        public Vector3 NearBottomLeft { get { return _worldPoints[(int)VPoint.NearBottomLeft]; } }
        public Vector3 FarTopLeft { get { return _worldPoints[(int)VPoint.FarTopLeft]; } }
        public Vector3 FarTopRight { get { return _worldPoints[(int)VPoint.FarTopRight]; } }
        public Vector3 FarBottomRight { get { return _worldPoints[(int)VPoint.FarBottomRight]; } }
        public Vector3 FarBottomLeft { get { return _worldPoints[(int)VPoint.FarBottomLeft]; } }

        public Vector2 FarPlaneSize { get { return _farPlaneSize; } }
        public Vector2 NearPlaneSize { get { return _nearPlaneSize; } }
        public AABB WorldAABB { get { return _worldAABB; } }
        public OBB WorldOBB { get { return _worldOBB; } }

        public CameraViewVolume()
        {
        }

        public CameraViewVolume(Camera camera)
        {
            FromCamera(camera);
        }

        public void FromCamera(Camera camera)
        {
            // Extract the world space planes and then use them to also calculate the world space points
            _worldPlanes = GeometryUtility.CalculateFrustumPlanes(camera.projectionMatrix * camera.worldToCameraMatrix);
            CalculateWorldPoints(camera);

            // Calculate the near and far plane sizes in view space
            _farPlaneSize.x = (FarTopLeft - FarTopRight).magnitude;
            _farPlaneSize.y = (FarTopLeft - FarBottomLeft).magnitude;

            _nearPlaneSize.x = (NearTopLeft - NearTopRight).magnitude;
            _nearPlaneSize.y = (NearTopLeft - NearBottomLeft).magnitude;

            // Calculate the volume's AABB
            _worldAABB = new AABB(_worldPoints);

            // Calculate the volume's OBB. Start with the size.
            Vector3 obbSize = new Vector3();
            obbSize.x = _farPlaneSize.x;
            obbSize.y = _farPlaneSize.y;
            obbSize.z = camera.farClipPlane - camera.nearClipPlane;

            // Calculate the OBB's center. In order to do this, we have to move from the
            // camera position along the view vector until we find ourselves in the middle
            // of the frustum.
            Transform cameraTransform = camera.transform;
            Vector3 obbCenter = cameraTransform.position + cameraTransform.forward * (camera.nearClipPlane + obbSize.z * 0.5f);
            _worldOBB = new OBB(obbCenter, obbSize, cameraTransform.rotation);
        }

        /// <summary>
        /// Returns a list of all points which make up the near plane. The points
        /// are stored in the following order: top-left, top-right, bottom-right,
        /// bottom-left.
        /// </summary>
        public List<Vector3> GetNearPlanePoints()
        {
            return new List<Vector3>
            {
                NearTopLeft, NearTopRight, 
                NearBottomRight, NearBottomLeft,
            };
        }

        public static Plane[] GetCameraWorldPlanes(Camera camera)
        {
            return GeometryUtility.CalculateFrustumPlanes(camera.projectionMatrix * camera.worldToCameraMatrix); ;
        }

        public bool CheckAABB(AABB aabb)
        {
            return GeometryUtility.TestPlanesAABB(_worldPlanes, aabb.ToBounds());
        }

        public static bool CheckAABB(Camera camera, AABB aabb)
        {
            var planes = GeometryUtility.CalculateFrustumPlanes(camera.projectionMatrix * camera.worldToCameraMatrix);
            return GeometryUtility.TestPlanesAABB(planes, aabb.ToBounds());
        }

        public static bool CheckAABB(Camera camera, AABB aabb, Plane[] cameraWorldPlanes)
        {
            return GeometryUtility.TestPlanesAABB(cameraWorldPlanes, aabb.ToBounds());
        }

        /// <summary>
        /// Calculates the volume world space points for the specified camera. 
        /// Must be called after the world planes have been calculated.
        /// </summary>
        private void CalculateWorldPoints(Camera camera)
        {
            Transform camTransform = camera.transform;

            // Cast a ray from the camera position towards the far plane. The intersection point
            // bewteen the ray and the plane represents the far plane middle point. We have to 
            // take into account that all volume planes point inside the volume, so the ray will
            // be cast along the reverse of the far plane normal.
            Plane farPlane = FarPlane;
            Ray ray = new Ray(camTransform.position, -farPlane.normal);
            float t;
            if (farPlane.Raycast(ray, out t))
            {
                Vector3 ptOnMidFar = ray.GetPoint(t);
                Vector3 ptOnMidTopFar = Vector3.zero, ptOnMidRightFar = Vector3.zero;

                // We have the point which sits in the middle of the far plane. The next step is
                // to calculate the points which sit to the right and up of this point. These will
                // be used to calculate the half dimension of the far plane.
                ray = new Ray(ptOnMidFar, camTransform.up);
                if (TopPlane.Raycast(ray, out t)) ptOnMidTopFar = ray.GetPoint(t);
                ray = new Ray(ptOnMidFar, camTransform.right);
                if (RightPlane.Raycast(ray, out t)) ptOnMidRightFar = ray.GetPoint(t);

                // Calculate the half plane dimensions using the points we calculated earlier
                float planeHalfWidth = (ptOnMidRightFar - ptOnMidFar).magnitude;
                float planeHalfHeight = (ptOnMidTopFar - ptOnMidFar).magnitude;

                // Move from the far plane middle point left/right and bottom/top to calculate the
                // far plane corner points. Because the camera volume is rotated along with the camera
                // coordinate system, the camera local axes are used to move left/right and top/bottom.
                _worldPoints[(int)VPoint.FarTopLeft] = ptOnMidFar - camTransform.right * planeHalfWidth + camTransform.up * planeHalfHeight;
                _worldPoints[(int)VPoint.FarTopRight] = ptOnMidFar + camTransform.right * planeHalfWidth + camTransform.up * planeHalfHeight;
                _worldPoints[(int)VPoint.FarBottomRight] = ptOnMidFar + camTransform.right * planeHalfWidth - camTransform.up * planeHalfHeight;
                _worldPoints[(int)VPoint.FarBottomLeft] = ptOnMidFar - camTransform.right * planeHalfWidth - camTransform.up * planeHalfHeight;
            }

            // Do the same for the near plane. 
            // Note: For an ortho camera, the near plane can reside behind the camera position. So an additional
            //       step is needed to identify the ray direction vector. We check if the distance from the plane
            //       to the camera position is >= 0. If it is, it means the camera position is in front of the plane.
            //       Considering that the plane points inwards, it means we have to travel along the reverse of the
            //       plane normal to hit the plane. If the distance is negative, the camera position lies behind the
            //       plane and we can travel along the plane normal to hit the plane.
            Plane nearPlane = NearPlane;
            bool camInFrontOfNearPlane = nearPlane.GetDistanceToPoint(camTransform.position) >= 0.0f;
            Vector3 rayDir = camInFrontOfNearPlane ? -nearPlane.normal : nearPlane.normal;
           
            ray = new Ray(camTransform.position, rayDir);
            if(nearPlane.Raycast(ray, out t))
            {
                Vector3 ptOnMidNear = ray.GetPoint(t);
                Vector3 ptOnMidTopNear = Vector3.zero, ptOnMidRightFar = Vector3.zero;

                ray = new Ray(ptOnMidNear, camTransform.up);
                if (TopPlane.Raycast(ray, out t)) ptOnMidTopNear = ray.GetPoint(t);
                ray = new Ray(ptOnMidNear, camTransform.right);
                if (RightPlane.Raycast(ray, out t)) ptOnMidRightFar = ray.GetPoint(t);

                float planeHalfWidth = (ptOnMidRightFar - ptOnMidNear).magnitude;
                float planeHalfHeight = (ptOnMidTopNear - ptOnMidNear).magnitude;

                _worldPoints[(int)VPoint.NearTopLeft] = ptOnMidNear - camTransform.right * planeHalfWidth + camTransform.up * planeHalfHeight;
                _worldPoints[(int)VPoint.NearTopRight] = ptOnMidNear + camTransform.right * planeHalfWidth + camTransform.up * planeHalfHeight;
                _worldPoints[(int)VPoint.NearBottomRight] = ptOnMidNear + camTransform.right * planeHalfWidth - camTransform.up * planeHalfHeight;
                _worldPoints[(int)VPoint.NearBottomLeft] = ptOnMidNear - camTransform.right * planeHalfWidth - camTransform.up * planeHalfHeight;
            }
        }
    }
}
