using UnityEngine;

namespace RTG
{
    public static class SegmentMath
    {
        public static bool Raycast(Ray ray, out float t, Vector3 startPoint, Vector3 endPoint, SegmentEpsilon epsilon = new SegmentEpsilon())
        {
            if (CylinderMath.Raycast(ray, out t, startPoint, endPoint, epsilon.RaycastEps)) return true;

            if (SphereMath.Raycast(ray, out t, startPoint, epsilon.RaycastEps)) return true;
            return SphereMath.Raycast(ray, out t, endPoint, epsilon.RaycastEps);
        }

        public static bool Is3DPointOnSegment(Vector3 point, Vector3 startPoint, Vector3 endPoint, SegmentEpsilon epsilon = new SegmentEpsilon())
        {
            float pointDistToSegment = point.GetDistanceToSegment(startPoint, endPoint);
            return pointDistToSegment <= epsilon.PtOnSegmentEps;
        }

        public static bool Is2DPointOnSegment(Vector2 point, Vector2 startPoint, Vector2 endPoint, SegmentEpsilon epsilon = new SegmentEpsilon())
        {
            float pointDistToSegment = point.GetDistanceToSegment(startPoint, endPoint);
            return pointDistToSegment <= epsilon.PtOnSegmentEps;
        }

        public static Vector3 ProjectPtOnSegment(Vector3 point, Vector3 startPoint, Vector3 endPoint)
        {
            Vector3 segmentDir = (endPoint - startPoint).normalized;
            float dot = Vector3.Dot(segmentDir, (point - startPoint));

            return startPoint + segmentDir * dot;
        }
    }
}
