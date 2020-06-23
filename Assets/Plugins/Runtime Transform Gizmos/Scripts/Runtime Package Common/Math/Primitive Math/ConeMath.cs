using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public enum ConeBaseExtent
    {
        Right = 0,
        Back,
        Left,
        Forward
    }

    public static class ConeMath
    {
        public static List<Vector3> CalcConeBaseExtentPoints(Vector3 coneBaseCenter, float coneBaseRadius, Quaternion coneRotation)
        {
            Vector3 right = coneRotation * Vector3.right;
            Vector3 look = coneRotation * Vector3.forward;

            return new List<Vector3>()
            {
                coneBaseCenter + right * coneBaseRadius,
                coneBaseCenter - look * coneBaseRadius,
                coneBaseCenter - right * coneBaseRadius,
                coneBaseCenter + look * coneBaseRadius,
            };
        }

        public static bool Raycast(Ray ray, out float t, Vector3 coneBaseCenter, float coneBaseRadius, float coneHeight, Quaternion coneRotation, ConeEpsilon epsilon = new ConeEpsilon())
        {
            t = 0.0f;
            Ray coneSpaceRay = ray.InverseTransform(Matrix4x4.TRS(coneBaseCenter, coneRotation, Vector3.one));

            float xzAABBSize = coneBaseRadius * 2.0f;
            Vector3 aabbSize = new Vector3(xzAABBSize, coneHeight + epsilon.VertEps * 2.0f, xzAABBSize);
            if (!BoxMath.Raycast(coneSpaceRay, Vector3.up * coneHeight * 0.5f, aabbSize, Quaternion.identity)) return false;
          
            // We will first perform a preliminary check to see if the ray intersects the bottom cap of the cone.
            // This is necessary because the cone equation views the cone as infinite (i.e. no bottom cap), and
            // if we didn't perform this check, we would never be able to tell when the bottom cap was hit.
            float rayEnter;
            Plane bottomCapPlane = new Plane(-Vector3.up, Vector3.zero);
            if (bottomCapPlane.Raycast(coneSpaceRay, out rayEnter))
            {
                // If the ray intersects the plane of the bottom cap, we will calculate the intersection point
                // and if it lies inside the cone's bottom cap area, it means we have a valid intersection. We
                // store the t value and then return true.
                Vector3 intersectionPoint = coneSpaceRay.origin + coneSpaceRay.direction * rayEnter;
                if (intersectionPoint.magnitude <= coneBaseRadius)
                {
                    t = rayEnter;
                    return true;
                }
            }

            // We need this for the calculation of the quadratic coefficients
            float ratioSquared = coneBaseRadius / coneHeight;
            ratioSquared *= ratioSquared;

            // Calculate the coefficients.
            // Note: The cone equation which was used is: (X^2 + Z^2) / ratioSquared = (Y - coneHeight)^2.
            //       Where X, Y and Z are the coordinates of the point along the ray: (Origin + Direction * t).xyz
            float a = coneSpaceRay.direction.x * coneSpaceRay.direction.x + coneSpaceRay.direction.z * coneSpaceRay.direction.z - ratioSquared * coneSpaceRay.direction.y * coneSpaceRay.direction.y;
            float b = 2.0f * (coneSpaceRay.origin.x * coneSpaceRay.direction.x + coneSpaceRay.origin.z * coneSpaceRay.direction.z - ratioSquared * coneSpaceRay.direction.y * (coneSpaceRay.origin.y - coneHeight));
            float c = coneSpaceRay.origin.x * coneSpaceRay.origin.x + coneSpaceRay.origin.z * coneSpaceRay.origin.z - ratioSquared * (coneSpaceRay.origin.y - coneHeight) * (coneSpaceRay.origin.y - coneHeight);

            // The intersection happnes only if the quadratic equation has solutions
            float t1, t2;
            if (MathEx.SolveQuadratic(a, b, c, out t1, out t2))
            {
                // Make sure the ray does not intersect the cone only from behind
                if (t1 < 0.0f && t2 < 0.0f) return false;

                // Make sure we are using the smallest positive t value
                if (t1 < 0.0f)
                {
                    float temp = t1;
                    t1 = t2;
                    t2 = temp;
                }
                t = t1;

                // Make sure the intersection point does not sit below the cone's bottom cap or above the cone's cap
                Vector3 intersectionPoint = coneSpaceRay.origin + coneSpaceRay.direction * t;
                if (intersectionPoint.y < -epsilon.VertEps || intersectionPoint.y > coneHeight + epsilon.VertEps)
                {
                    t = 0.0f;
                    return false;
                }

                // The intersection point is valid
                return true;
            }

            // If we reached this point, it means the ray does not intersect the cone in any way
            return false;
        }

        public static bool ContainsPoint(Vector3 point, Vector3 coneBaseCenter, float coneBaseRadius, float coneHeight, Quaternion coneRotation, ConeEpsilon epsilon = new ConeEpsilon())
        {
            Matrix4x4 coneTransform = Matrix4x4.TRS(coneBaseCenter, coneRotation, Vector3.one);
            point = coneTransform.inverse.MultiplyPoint(point);

            float dotConeAxis = Vector3.Dot(Vector3.up, point);
            if (dotConeAxis < -epsilon.VertEps || dotConeAxis > coneHeight + epsilon.VertEps) return false;

            float tan = coneHeight / coneBaseRadius;
            float coneRadius = dotConeAxis * tan;
            return point.GetDistanceToSegment(Vector3.zero, Vector3.up * coneHeight) <= (coneRadius + epsilon.HrzEps);
        }
    }
}
