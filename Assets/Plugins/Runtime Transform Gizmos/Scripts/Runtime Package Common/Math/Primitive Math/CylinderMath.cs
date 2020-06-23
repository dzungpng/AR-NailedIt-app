using System.Collections.Generic;
using UnityEngine;

namespace RTG
{
    public enum CylinderExtent
    {
        Right = 0,
        Back,
        Left,
        Forward
    }

    public static class CylinderMath
    {
        public static List<Vector3> CalcExtentPoints(Vector3 center, float cylinderRadius, Quaternion cylinderRotation)
        {
            Vector3 right = cylinderRotation * Vector3.right;
            Vector3 look = cylinderRotation * Vector3.forward;

            return new List<Vector3>()
            {
                center + right * cylinderRadius,
                center - look * cylinderRadius,
                center - right * cylinderRadius,
                center + look * cylinderRadius
            };
        }

        public static bool Raycast(Ray ray, out float t, Vector3 cylinderAxisPt0, 
            Vector3 cylinderAxisPt1, float cylinderRadius, CylinderEpsilon epsilon = new CylinderEpsilon())
        {
            return Raycast(ray, out t, cylinderAxisPt0, cylinderAxisPt1, cylinderRadius, (cylinderAxisPt1 - cylinderAxisPt0).magnitude, epsilon);
        }

        public static bool Raycast(Ray ray, out float t, Vector3 cylinderAxisPt0, 
            Vector3 cylinderAxisPt1, float cylinderRadius, float cylinderHeight, CylinderEpsilon epsilon = new CylinderEpsilon())
        {
            t = 0.0f;
            cylinderRadius += epsilon.RadiusEps;

            Vector3 cylinderAxis = (cylinderAxisPt1 - cylinderAxisPt0).normalized;
            cylinderHeight += epsilon.VertEps * 2.0f;
            const float minCylinderHeight = 1e-6f;
            if (cylinderHeight < minCylinderHeight) return false;

            cylinderAxisPt0 -= cylinderAxis * epsilon.VertEps;
            cylinderAxisPt1 += cylinderAxis * epsilon.VertEps;

            // Check intersection with cylinder plane caps
            float capEnterBottom = 0.0f, capEnterTop = 0.0f;
            bool hitBottomCap = false, hitTopCap = false;
            Plane bottomCapPlane = new Plane(cylinderAxis, cylinderAxisPt0);
            if (bottomCapPlane.Raycast(ray, out capEnterBottom))
            {
                Vector3 ptOnCap = ray.GetPoint(capEnterBottom);
                if ((ptOnCap - cylinderAxisPt0).sqrMagnitude <= cylinderRadius * cylinderRadius) hitBottomCap = true;
            }

            Plane topCapPlane = new Plane(cylinderAxis, cylinderAxisPt1);
            if (topCapPlane.Raycast(ray, out capEnterTop))
            {
                Vector3 ptOnCap = ray.GetPoint(capEnterTop);
                if ((ptOnCap - cylinderAxisPt1).sqrMagnitude <= cylinderRadius * cylinderRadius) hitTopCap = true;
            }

            // We need these for the quadratic coefficients calculation
            Vector3 crossRayDirectionCylinderAxis = Vector3.Cross(ray.direction, cylinderAxis);
            Vector3 crossToOriginCylinderAxis = Vector3.Cross((ray.origin - cylinderAxisPt0), cylinderAxis);

            // Calculate the quadratic coefficients
            float a = crossRayDirectionCylinderAxis.sqrMagnitude;
            float b = 2.0f * Vector3.Dot(crossRayDirectionCylinderAxis, crossToOriginCylinderAxis);
            float c = crossToOriginCylinderAxis.sqrMagnitude - cylinderRadius * cylinderRadius;

            // If we have a solution to the equation, the ray most likely intersects the cylinder.
            float t1, t2;
            if (MathEx.SolveQuadratic(a, b, c, out t1, out t2))
            {
                // Make sure the ray doesn't intersect the cylinder only from behind
                if (t1 < 0.0f && t2 < 0.0f) return false;

                // Make sure we are using the smallest positive t value
                if (t1 < 0.0f)
                {
                    float temp = t1;
                    t1 = t2;
                    t2 = temp;
                }
                t = t1;

                // Now make sure that the intersection point lies within the boundaries of the cylinder axis. That is,
                // make sure its projection on the cylinder axis lies between the first and second axis points.
                Vector3 intersectionPoint = ray.origin + ray.direction * t;
                float projection = Vector3.Dot(cylinderAxis, (intersectionPoint - cylinderAxisPt0));

                // Below the first cylinder axis point?
                if (projection < 0.0f)
                {
                    // Check for intersection with caps
                    if (hitTopCap || hitBottomCap)
                    {
                        t = float.MaxValue;
                        if (hitTopCap) t = capEnterTop;
                        if (hitBottomCap && t > capEnterBottom) t = capEnterBottom;
                    }
                    else
                    {
                        t = 0.0f;
                        return false;
                    }
                }

                // Above the second cylinder axis point?
                if (projection > cylinderHeight)
                {
                    // Check for intersection with caps
                    if (hitTopCap || hitBottomCap)
                    {
                        t = float.MaxValue;
                        if (hitTopCap) t = capEnterTop;
                        if (hitBottomCap && t > capEnterBottom) t = capEnterBottom;
                    }
                    else
                    {
                        t = 0.0f;
                        return false;
                    }
                }

                // The intersection point is valid, so we can return true
                return true;
            }

            // If we reach this point, it means the ray does not intersect the cylinder in any way
            return false;
        }

        public static bool RaycastNoCaps(Ray ray, out float t, Vector3 cylinderAxisPt0,
            Vector3 cylinderAxisPt1, float cylinderRadius, CylinderEpsilon epsilon = new CylinderEpsilon())
        {
            return RaycastNoCaps(ray, out t, cylinderAxisPt0, cylinderAxisPt1, cylinderRadius, (cylinderAxisPt1 - cylinderAxisPt0).magnitude, epsilon);
        }

        public static bool RaycastNoCaps(Ray ray, out float t, Vector3 cylinderAxisPt0,
            Vector3 cylinderAxisPt1, float cylinderRadius, float cylinderHeight, CylinderEpsilon epsilon = new CylinderEpsilon())
        {
            t = 0.0f;
            cylinderRadius += epsilon.RadiusEps;

            Vector3 cylinderAxis = (cylinderAxisPt1 - cylinderAxisPt0).normalized;
            cylinderHeight += epsilon.VertEps * 2.0f;
            const float minCylinderHeight = 1e-6f;
            if (cylinderHeight < minCylinderHeight) return false;

            cylinderAxisPt0 -= cylinderAxis * epsilon.VertEps;
            cylinderAxisPt1 += cylinderAxis * epsilon.VertEps;

            // We need these for the quadratic coefficients calculation
            Vector3 crossRayDirectionCylinderAxis = Vector3.Cross(ray.direction, cylinderAxis);
            Vector3 crossToOriginCylinderAxis = Vector3.Cross((ray.origin - cylinderAxisPt0), cylinderAxis);

            // Calculate the quadratic coefficients
            float a = crossRayDirectionCylinderAxis.sqrMagnitude;
            float b = 2.0f * Vector3.Dot(crossRayDirectionCylinderAxis, crossToOriginCylinderAxis);
            float c = crossToOriginCylinderAxis.sqrMagnitude - cylinderRadius * cylinderRadius;

            // If we have a solution to the equation, the ray most likely intersects the cylinder.
            float t1, t2;
            if (MathEx.SolveQuadratic(a, b, c, out t1, out t2))
            {
                // Make sure the ray doesn't intersect the cylinder only from behind
                if (t1 < 0.0f && t2 < 0.0f) return false;

                // Make sure we are using the smallest positive t value
                if (t1 < 0.0f)
                {
                    float temp = t1;
                    t1 = t2;
                    t2 = temp;
                }
                t = t1;

                // Now make sure that the intersection point lies within the boundaries of the cylinder axis. That is,
                // make sure its projection on the cylinder axis lies between the first and second axis points.
                Vector3 intersectionPoint = ray.origin + ray.direction * t;
                float projection = Vector3.Dot(cylinderAxis, (intersectionPoint - cylinderAxisPt0));

                // Below the first cylinder axis point?
                if (projection < 0.0f)
                {
                    t = 0.0f;
                    return false;
                }

                // Above the second cylinder axis point?
                if (projection > cylinderHeight)
                {
                    t = 0.0f;
                    return false;
                }

                // The intersection point is valid, so we can return true
                return true;
            }

            // If we reach this point, it means the ray does not intersect the cylinder in any way
            return false;
        }

        public static bool ContainsPoint(Vector3 point, Vector3 cylinderAxisPt0, Vector3 cylinderAxisPt1, float cylinderRadius, CylinderEpsilon epsilon = new CylinderEpsilon())
        {
            return ContainsPoint(point, cylinderAxisPt0, cylinderAxisPt1, cylinderRadius, (cylinderAxisPt1 - cylinderAxisPt0).magnitude, epsilon);
        }

        public static bool ContainsPoint(Vector3 point, Vector3 cylinderAxisPt0, Vector3 cylinderAxisPt1, float cylinderRadius, float cylinderHeight, CylinderEpsilon epsilon = new CylinderEpsilon())
        {
            Vector3 centralAxis = (cylinderAxisPt1 - cylinderAxisPt0).normalized;
            Vector3 toPoint = point - cylinderAxisPt0;

            float dotCentralAxis = Vector3.Dot(centralAxis, toPoint);
            if (dotCentralAxis < -epsilon.VertEps || dotCentralAxis > cylinderHeight + epsilon.VertEps) return false;

            return ((cylinderAxisPt0 + centralAxis * dotCentralAxis) - point).magnitude <= (cylinderRadius + epsilon.RadiusEps);
        }
    }
}
