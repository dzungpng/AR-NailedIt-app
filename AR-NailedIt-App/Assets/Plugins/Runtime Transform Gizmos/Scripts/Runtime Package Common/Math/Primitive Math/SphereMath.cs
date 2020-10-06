using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public enum SphereRightUpExtent
    {
        Left = 0,
        Up,
        Right,
        Down
    }

    public static class SphereMath
    {
        public static List<Vector3> CalcRightUpExtents(Vector3 sphereCenter, float sphereRadius, Vector3 right, Vector3 up)
        {
            var extents = new List<Vector3>(4);
            extents.Add(sphereCenter - right * sphereRadius);
            extents.Add(sphereCenter + up * sphereRadius);
            extents.Add(sphereCenter + right * sphereRadius);
            extents.Add(sphereCenter - up * sphereRadius);

            return extents;
        }

        public static bool Raycast(Ray ray, Vector3 sphereCenter, float sphereRadius, SphereEpsilon epsilon = new SphereEpsilon())
        {
            float t;
            return Raycast(ray, out t, sphereCenter, sphereRadius, epsilon);
        }

        public static bool Raycast(Ray ray, out float t, Vector3 sphereCenter, float sphereRadius, SphereEpsilon epsilon = new SphereEpsilon())
        {
            t = 0.0f;
            sphereRadius += epsilon.RadiusEps;

            Vector3 sphereCenterToRayOrigin = ray.origin - sphereCenter;
            float a = Vector3.SqrMagnitude(ray.direction);
            float b = 2.0f * Vector3.Dot(ray.direction, sphereCenterToRayOrigin);
            float c = Vector3.SqrMagnitude(sphereCenterToRayOrigin) - sphereRadius * sphereRadius;

            float t1, t2;
            if (MathEx.SolveQuadratic(a, b, c, out t1, out t2))
            {
                if (t1 < 0.0f && t2 < 0.0f) return false;

                if (t1 < 0.0f)
                {
                    float temp = t1;
                    t1 = t2;
                    t2 = temp;
                }
                t = t1;

                return true;
            }

            return false;
        }

        public static bool Raycast(Ray ray, out float t0, out float t1, Vector3 sphereCenter, float sphereRadius, SphereEpsilon epsilon = new SphereEpsilon())
        {
            t0 = t1 = 0.0f;
            sphereRadius += epsilon.RadiusEps;

            Vector3 sphereCenterToRayOrigin = ray.origin - sphereCenter;
            float a = Vector3.SqrMagnitude(ray.direction);
            float b = 2.0f * Vector3.Dot(ray.direction, sphereCenterToRayOrigin);
            float c = Vector3.SqrMagnitude(sphereCenterToRayOrigin) - sphereRadius * sphereRadius;

            if (MathEx.SolveQuadratic(a, b, c, out t0, out t1))
            {
                if (t0 < 0.0f && t1 < 0.0f) return false;

                if (t0 > t1)
                {
                    float temp = t0;
                    t0 = t1;
                    t1 = temp;
                }

                if (t0 < 0.0f) t0 = t1;
                return true;
            }

            return false;
        }

        public static bool ContainsPoint(Vector3 point, Vector3 sphereCenter, float sphereRadius, SphereEpsilon epsilon = new SphereEpsilon())
        {
            sphereRadius += epsilon.RadiusEps;
            return (point - sphereCenter).sqrMagnitude <= (sphereRadius * sphereRadius);
        }
    }
}
