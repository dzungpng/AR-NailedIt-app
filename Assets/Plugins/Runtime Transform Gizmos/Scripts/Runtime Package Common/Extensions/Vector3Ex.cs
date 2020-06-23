using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class Vector3Ex
    {
        public static void OffsetPoints(List<Vector3> points, Vector3 offset)
        {
            for (int ptIndex = 0; ptIndex < points.Count; ++ptIndex)
            {
                points[ptIndex] += offset;
            }
        }

        public static Vector2 ConvertDirTo2D(Vector3 start, Vector3 end, Camera camera)
        {
            Vector2 start2D = camera.WorldToScreenPoint(start);
            Vector2 end2D = camera.WorldToScreenPoint(end);
            return end2D - start2D;
        }

        public static Vector3 Abs(this Vector3 v)
        {
            return new Vector3(Mathf.Abs(v.x), Mathf.Abs(v.y), Mathf.Abs(v.z));
        }

        public static Vector3 GetSignVector(this Vector3 v)
        {
            return new Vector3(Mathf.Sign(v.x), Mathf.Sign(v.y), Mathf.Sign(v.z));
        }

        public static float GetMaxAbsComp(this Vector3 v)
        {
            float maxAbsComp = Mathf.Abs(v.x);

            float absY = Mathf.Abs(v.y);
            if (absY > maxAbsComp) maxAbsComp = absY;
            float absZ = Mathf.Abs(v.z);
            if (absZ > maxAbsComp) maxAbsComp = absZ;

            return maxAbsComp;
        }

        public static float Dot(this Vector3 v1, Vector3 v2)
        {
            return Vector3.Dot(v1, v2);
        }

        public static float AbsDot(this Vector3 v1, Vector3 v2)
        {
            return Mathf.Abs(Vector3.Dot(v1, v2));
        }

        public static Vector3 FromValue(float value)
        {
            return new Vector3(value, value, value);
        }

        // Unity versions below 2017 don't have Vector3.SignedAngle
        public static float SignedAngle(Vector3 from, Vector3 to, Vector3 axis)
        {
            float dot = Vector3.Dot(from.normalized, to.normalized);
            if ((1.0f - dot) < 1e-5f) return 0.0f;
            if ((1.0f + dot) < 1e-5f) return 180.0f;

            Vector3 cross = Vector3.Cross(from, to).normalized;
            float angle = MathEx.SafeAcos(dot) * Mathf.Rad2Deg;
            if (Vector3.Dot(cross, axis) < 0.0f) angle = -angle;

            return angle;
        }

        public static float GetDistanceToSegment(this Vector3 point, Vector3 point0, Vector3 point1)
        {
            Vector3 segmentDir = (point1 - point0);
            float segmentLength = segmentDir.magnitude;
            segmentDir.Normalize();

            Vector3 fromStartToPt = (point - point0);
            float projection = Vector3.Dot(segmentDir, fromStartToPt);

            if (projection >= 0.0f && projection <= segmentLength)
                return ((point0 + segmentDir * projection) - point).magnitude;

            if (projection < 0.0f) return fromStartToPt.magnitude;
            return (point1 - point).magnitude;
        }

        public static Vector3 ProjectOnSegment(this Vector3 point, Vector3 point0, Vector3 point1)
        {
            Vector3 segmentDir = (point1 - point0).normalized;
            return point0 + segmentDir * Vector3.Dot((point - point0), segmentDir);
        }

        public static int GetPointClosestToPoint(List<Vector3> points, Vector3 pt)
        {
            float minDistSq = float.MaxValue;
            int closestPtIndex = -1;

            for(int ptIndex = 0; ptIndex < points.Count; ++ptIndex)
            {
                Vector3 point = points[ptIndex];

                float distSq = (point - pt).sqrMagnitude;
                if(distSq < minDistSq)
                {
                    minDistSq = distSq;
                    closestPtIndex = ptIndex;
                }
            }

            return closestPtIndex;
        }

        public static Vector3 GetPointCloudCenter(IEnumerable<Vector3> ptCloud)
        {
            Vector3 max = Vector3Ex.FromValue(float.MinValue);
            Vector3 min = Vector3Ex.FromValue(float.MaxValue);

            foreach(var pt in ptCloud)
            {
                max = Vector3.Max(max, pt);
                min = Vector3.Min(min, pt);
            }

            return (max + min) * 0.5f;
        }

        public static Vector3 GetInverse(this Vector3 vector)
        {
            return new Vector3(1.0f / vector.x, 1.0f / vector.y, 1.0f / vector.z);
        }

        public static bool IsAligned(this Vector3 vector, Vector3 other, bool checkSameDirection)
        {
            if (!checkSameDirection)
            {
                float absDot = vector.AbsDot(other);
                return Mathf.Abs(absDot - 1.0f) < 1e-5f;
            }
            else
            {
                float dot = vector.Dot(other);
                return dot > 0.0f && Mathf.Abs(dot - 1.0f) < 1e-5f;
            }
        }

        public static bool PointsSameDir(this Vector3 vector, Vector3 other)
        {
            float dot = vector.Dot(other);
            return dot > 0.0f;
        }

        public static int GetMostAligned(Vector3[] vectors, Vector3 dir, bool checkSameDirection)
        {
            if (vectors.Length == 0) return -1;

            float bestAlignment = float.MinValue;
            int bestIndex = -1;

            if(!checkSameDirection)
            {
                // Loop through each test vector
                for(int dirIndex = 0; dirIndex < vectors.Length; ++dirIndex)
                {
                    // Calculate the absolute dot product with 'dir'. If this is gerater
                    // than what we have so far, it means we found vector which is more
                    // aligned with 'dir'.
                    Vector3 testDir = vectors[dirIndex];
                    float absDot = testDir.AbsDot(dir);
                    if(absDot > bestAlignment)
                    {
                        bestAlignment = absDot;
                        bestIndex = dirIndex;
                    }
                }

                return bestIndex;
            }
            else
            {
                // Loop through each test vector
                for (int dirIndex = 0; dirIndex < vectors.Length; ++dirIndex)
                {
                    // Calculate the dot product with 'dir'. If this is gerater than 0
                    // and greater than what we have so far, it means we found vector 
                    // which is more aligned with 'dir'.
                    Vector3 testDir = vectors[dirIndex];
                    float dot = testDir.Dot(dir);
                    if (dot > 0.0f && dot > bestAlignment)
                    {
                        bestAlignment = dot;
                        bestIndex = dirIndex;
                    }
                }

                return bestIndex;
            }
        }
    }
}
