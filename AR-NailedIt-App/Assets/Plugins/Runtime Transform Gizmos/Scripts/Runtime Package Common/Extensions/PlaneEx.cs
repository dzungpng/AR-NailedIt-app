using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class PlaneEx
    {
        public static Plane InvertNormal(this Plane plane)
        {
            return new Plane(-plane.normal, -plane.distance);
        }

        public static float GetAbsDistanceToPoint(this Plane plane, Vector3 point)
        {
            return Mathf.Abs(plane.GetDistanceToPoint(point));
        }

        public static Vector3 ProjectPoint(this Plane plane, Vector3 pt)
        {
            float distanceToPt = plane.GetDistanceToPoint(pt);
            return pt - distanceToPt * plane.normal;
        }

        public static List<Vector3> ProjectAllPoints(this Plane plane, List<Vector3> points)
        {
            if (points.Count == 0) return new List<Vector3>();

            var projectedPoints = new List<Vector3>(points.Count);
            foreach (var pt in points) projectedPoints.Add(plane.ProjectPoint(pt));

            return projectedPoints;
        }

        public static int GetFurthestPtInFront(this Plane plane, List<Vector3> points)
        {
            int furthestPtIndex = -1;
            float maxDist = float.MinValue;

            for (int ptIndex = 0; ptIndex < points.Count; ++ptIndex)
            {
                Vector3 pt = points[ptIndex];
                float distance = plane.GetDistanceToPoint(pt);

                if (distance > 0.0f && distance > maxDist)
                {
                    maxDist = distance;
                    furthestPtIndex = ptIndex;
                }
            }

            return furthestPtIndex;
        }

        public static int GetClosestPtInFront(this Plane plane, List<Vector3> points)
        {
            int closestPtIndex = -1;
            float minDist = float.MaxValue;

            for (int ptIndex = 0; ptIndex < points.Count; ++ptIndex)
            {
                Vector3 pt = points[ptIndex];
                float distance = plane.GetDistanceToPoint(pt);

                if (distance > 0.0f && distance < minDist)
                {
                    minDist = distance;
                    closestPtIndex = ptIndex;
                }
            }

            return closestPtIndex;
        }

        public static int GetClosestPtInFrontOrOnPlane(this Plane plane, List<Vector3> points)
        {
            int closestPtIndex = -1;
            float minDist = float.MaxValue;

            for (int ptIndex = 0; ptIndex < points.Count; ++ptIndex)
            {
                Vector3 pt = points[ptIndex];
                float distance = plane.GetDistanceToPoint(pt);

                if ((distance >= 0.0f && distance < minDist) || Mathf.Abs(distance) < 1e-4f)
                {
                    minDist = distance;
                    closestPtIndex = ptIndex;
                }
            }

            return closestPtIndex;
        }

        public static int GetFurthestPtBehind(this Plane plane, List<Vector3> points)
        {
            int furthestPtIndex = -1;
            float minDist = float.MaxValue;

            for (int ptIndex = 0; ptIndex < points.Count; ++ptIndex)
            {
                Vector3 pt = points[ptIndex];
                float distance = plane.GetDistanceToPoint(pt);

                if (distance < 0.0f && distance < minDist)
                {
                    minDist = distance;
                    furthestPtIndex = ptIndex;
                }
            }

            return furthestPtIndex;
        }

        public static Plane GetCameraFacingAxisSlicePlane(Vector3 axisOrigin, Vector3 axis, Camera camera)
        {
            Vector3 crossAxis = camera.transform.forward;
            if (crossAxis.IsAligned(axis, false)) crossAxis = camera.transform.right;

            Vector3 cross = Vector3.Normalize(Vector3.Cross(crossAxis, axis));
            if (cross.magnitude < 1e-4f) return new Plane();

            Vector3 planeNormal = Vector3.Normalize(Vector3.Cross(cross, axis));
            return new Plane(planeNormal, axisOrigin);

            //Vector3 cameraLook = camera.transform.forward;
            //if (cameraLook.IsAligned(axis, false)) return new Plane(camera.transform.up, axisOrigin);

            //Vector3 cross = Vector3.Normalize(Vector3.Cross(cameraLook, axis));
            //if (cross.magnitude < 1e-4f) return new Plane();

            //Vector3 planeNormal = Vector3.Normalize(Vector3.Cross(cross, axis));
            //return new Plane(planeNormal, axisOrigin);
        }
    }
}
