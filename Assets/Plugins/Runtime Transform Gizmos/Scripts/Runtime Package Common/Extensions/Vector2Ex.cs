using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class Vector2Ex
    {
        public static Vector3 ConvertDirTo3D(Vector2 start, Vector2 end, Vector3 zPos, Camera camera)
        {           
            float z = camera.GetPointZDistance(zPos);
            Vector3 start3D = camera.ScreenToWorldPoint(new Vector3(start.x, start.y, z));
            Vector3 end3D = camera.ScreenToWorldPoint(new Vector3(end.x, end.y, z));
            return end3D - start3D;
        }

        public static Vector3 ConvertDirTo3D(Vector2 dir, Vector3 zPos, Camera camera)
        {
            float z = camera.GetPointZDistance(zPos);
            Vector3 start3D = camera.ScreenToWorldPoint(new Vector3(0.0f, 0.0f, z));
            Vector3 end3D = camera.ScreenToWorldPoint(new Vector3(dir.x, dir.y, z));
            return end3D - start3D;
        }

        public static Vector2 Abs(this Vector2 v)
        {
            return new Vector2(Mathf.Abs(v.x), Mathf.Abs(v.y));
        }

        public static float AbsDot(this Vector2 v1, Vector2 v2)
        {
            return Mathf.Abs(Vector2.Dot(v1, v2));
        }

        public static Vector3 ToVector3(this Vector2 vec, float z = 0.0f)
        {
            return new Vector3(vec.x, vec.y, z);
        }

        public static Vector2 GetNormal(this Vector2 vec)
        {
            return (new Vector2(-vec.y, vec.x)).normalized;
        }

        public static Vector2 FromValue(float value)
        {
            return new Vector2(value, value);
        }

        public static float GetDistanceToSegment(this Vector2 point, Vector2 point0, Vector2 point1)
        {
            Vector2 segmentDir = (point1 - point0);
            float segmentLength = segmentDir.magnitude;
            segmentDir.Normalize();

            Vector2 fromStartToPt = (point - point0);

            float projection = Vector2.Dot(segmentDir, fromStartToPt);

            if (projection >= 0.0f && projection <= segmentLength)
                return ((point0 + segmentDir * projection) - point).magnitude;

            if (projection < 0.0f) return fromStartToPt.magnitude;
            return (point1 - point).magnitude;
        }

        public static int GetPointClosestToPoint(List<Vector2> points, Vector2 pt)
        {
            float minDistSq = float.MaxValue;
            int closestPtIndex = -1;

            for (int ptIndex = 0; ptIndex < points.Count; ++ptIndex)
            {
                Vector2 point = points[ptIndex];

                float distSq = (point - pt).sqrMagnitude;
                if (distSq < minDistSq)
                {
                    minDistSq = distSq;
                    closestPtIndex = ptIndex;
                }
            }

            return closestPtIndex;
        }
    }
}
