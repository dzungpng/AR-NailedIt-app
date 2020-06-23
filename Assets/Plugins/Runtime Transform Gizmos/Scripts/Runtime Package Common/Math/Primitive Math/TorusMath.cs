using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public enum TorusExtent
    {
        Left = 0,
        Forward,
        Right,
        Back
    }

    public static class TorusMath
    {
        public static float CalcSphereRadius(float torusCoreRadius, float torusTubeRadius)
        {
            return torusCoreRadius + torusTubeRadius;
        }

        public static AABB CalcCylModelAABB(float torusCoreRadius, float torusHrzRadius, float torusVertRadius)
        {
            float hrzSize = (torusCoreRadius + torusHrzRadius) * 2.0f;
            Vector3 size = new Vector3(hrzSize, torusVertRadius * 2.0f, hrzSize);
            return new AABB(Vector3.zero, size);
        }

        public static AABB CalcCylAABB(Vector3 torusCenter, float torusCoreRadius, float torusHrzRadius, float torusVertRadius, Quaternion torusRotation)
        {
            AABB aabb = CalcCylModelAABB(torusCoreRadius, torusHrzRadius, torusVertRadius);
            aabb.Transform(Matrix4x4.TRS(torusCenter, torusRotation, Vector3.one));

            return aabb;
        }

        public static List<Vector3> Calc3DHrzExtentPoints(Vector3 torusCenter, float torusCoreRadius, float torusTubeRadius, Quaternion torusRotation)
        {
            Vector3 right = torusRotation * Vector3.right;
            Vector3 look = torusRotation * Vector3.forward;
            float extent = torusCoreRadius + torusTubeRadius;

            return new List<Vector3>()
            {
                torusCenter - right * extent,
                torusCenter + look * extent,
                torusCenter + right * extent,
                torusCenter - look * extent
            };
        }

        // Note: The function approximates the torus via 2 cylinders.
        public static bool Raycast(Ray ray, out float t, Vector3 torusCenter, float torusCoreRadius, float torusTubeRadius, Quaternion torusRotation, TorusEpsilon epsilon = new TorusEpsilon())
        {
            t = 0.0f;
            torusTubeRadius += epsilon.TubeRadiusEps;

            float cylinderRadius = torusCoreRadius + torusTubeRadius;
            Vector3 torusUp = torusRotation * Vector3.up;
            Vector3 firstPt = torusCenter - torusUp * torusTubeRadius;
            Vector3 secondPt = torusCenter + torusUp * torusTubeRadius;

            if (CylinderMath.Raycast(ray, out t, firstPt, secondPt, cylinderRadius))
            {
                float torusInnerRadius = torusCoreRadius - torusTubeRadius;
                Vector3 intersectPt = ray.GetPoint(t);
                Plane torusCentralPlane = new Plane(torusUp, torusCenter);
                Vector3 prjIntersectPt = torusCentralPlane.ProjectPoint(intersectPt);
                if ((prjIntersectPt - torusCenter).magnitude >= torusInnerRadius) return true;

                cylinderRadius = torusInnerRadius;
                Ray mirroredRay = ray.Mirror(intersectPt);
                if (CylinderMath.RaycastNoCaps(mirroredRay, out t, firstPt, secondPt, cylinderRadius))
                {
                    t = (ray.origin - mirroredRay.GetPoint(t)).magnitude;
                    return true;
                }
            }

            return false;
        }

        public static bool RaycastCylindrical(Ray ray, out float t, Vector3 torusCenter, float torusCoreRadius, float torusHrzRadius, float torusVertRadius, Quaternion torusRotation, TorusEpsilon epsilon = new TorusEpsilon())
        {
            t = 0.0f;
            torusHrzRadius += epsilon.CylHrzRadius;
            torusVertRadius += epsilon.CylVertRadius;

            float cylinderRadius = torusCoreRadius + torusHrzRadius;
            Vector3 torusUp = torusRotation * Vector3.up;
            Vector3 firstPt = torusCenter - torusUp * torusVertRadius;
            Vector3 secondPt = torusCenter + torusUp * torusVertRadius;

            if (CylinderMath.Raycast(ray, out t, firstPt, secondPt, cylinderRadius))
            {
                float torusInnerRadius = torusCoreRadius - torusHrzRadius;
                Vector3 intersectPt = ray.GetPoint(t);
                Plane torusCentralPlane = new Plane(torusUp, torusCenter);
                Vector3 prjIntersectPt = torusCentralPlane.ProjectPoint(intersectPt);
                if ((prjIntersectPt - torusCenter).magnitude >= torusInnerRadius) return true;

                cylinderRadius = torusInnerRadius;
                Ray mirroredRay = ray.Mirror(intersectPt);
                if (CylinderMath.RaycastNoCaps(mirroredRay, out t, firstPt, secondPt, cylinderRadius))
                {
                    t = (ray.origin - mirroredRay.GetPoint(t)).magnitude;
                    return true;
                }
            }

            return false;
        }
    }
}
