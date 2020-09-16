using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public enum CircleExtent
    {
        Up = 0,
        Right,
        Bottom,
        Left
    }

    public static class CircleMath
    {
        public static List<Vector3> Calc3DExtentPoints(Vector3 circleCenter, float circleRadius, Quaternion circleRotation)
        {
            Vector3 right = circleRotation * Vector3.right;
            Vector3 up = circleRotation * Vector3.up;

            return new List<Vector3>()
            {
                circleCenter + up * circleRadius,
                circleCenter + right * circleRadius,
                circleCenter - up * circleRadius,
                circleCenter - right * circleRadius
            };
        }

        public static List<Vector2> Calc2DExtentPoints(Vector2 circleCenter, float circleRadius, float degreeCircleRotation)
        {
            Quaternion rotation = Quaternion.AngleAxis(degreeCircleRotation, Vector3.forward);
            Vector2 right = rotation * Vector2.right;
            Vector2 up = rotation * Vector2.up;

            return new List<Vector2>()
            {
                circleCenter + up * circleRadius,
                circleCenter + right * circleRadius,
                circleCenter - up * circleRadius,
                circleCenter - right * circleRadius
            };
        }

        public static bool Raycast(Ray ray, out float t, Vector3 circleCenter, float circleRadius, Vector3 circleNormal, CircleEpsilon epsilon = new CircleEpsilon())
        {
            t = 0.0f;
            circleRadius += epsilon.RadiusEps;
            Plane circlePlane = new Plane(circleNormal, circleCenter);

            float rayEnter;
            if (circlePlane.Raycast(ray, out rayEnter) && (ray.GetPoint(rayEnter) - circleCenter).magnitude <= circleRadius)
            {
                t = rayEnter;
                return true;
            }
         
            if (epsilon.ExtrudeEps != 0.0f)
            {
                float dot = Vector3Ex.AbsDot(ray.direction, circleNormal);
                if (dot < ExtrudeEpsThreshold.Get)
                {
                    Vector3 cylinderAxisPt0 = circleCenter - circleNormal * epsilon.ExtrudeEps;
                    Vector3 cylinderAxisPt1 = circleCenter + circleNormal * epsilon.ExtrudeEps;
                    return CylinderMath.Raycast(ray, out t, cylinderAxisPt0, cylinderAxisPt1, circleRadius);
                }
            }

            return false;
        }

        public static bool RaycastWire(Ray ray, out float t, Vector3 circleCenter, float circleRadius, Vector3 circleNormal, CircleEpsilon epsilon = new CircleEpsilon())
        {
            t = 0.0f;
            Plane circlePlane = new Plane(circleNormal, circleCenter);

            float rayEnter;
            if (circlePlane.Raycast(ray, out rayEnter))
            {
                Vector3 intersectPt = ray.GetPoint(rayEnter);
                float distFromOrigin = (circleCenter - intersectPt).magnitude;

                if(distFromOrigin >= circleRadius - epsilon.WireEps &&
                   distFromOrigin <= circleRadius + epsilon.WireEps)
                {
                    t = rayEnter;
                    return true;
                }
            }
    
            if (epsilon.ExtrudeEps != 0.0f)
            {
                float dot = Vector3Ex.AbsDot(ray.direction, circleNormal);
                if (dot < ExtrudeEpsThreshold.Get)
                {
                    Vector3 cylinderAxisPt0 = circleCenter - circleNormal * epsilon.ExtrudeEps;
                    Vector3 cylinderAxisPt1 = circleCenter + circleNormal * epsilon.ExtrudeEps;
                    return CylinderMath.Raycast(ray, out t, cylinderAxisPt0, cylinderAxisPt1, circleRadius + epsilon.WireEps);
                }
            }

            return false;
        }

        public static bool Contains3DPoint(Vector3 point, bool checkOnPlane, Vector3 circleCenter, float circleRadius, Vector3 circleNormal, CircleEpsilon epsilon = new CircleEpsilon())
        {
            Plane circlePlane = new Plane(circleNormal, circleCenter);
            if (checkOnPlane && circlePlane.GetAbsDistanceToPoint(point) > epsilon.ExtrudeEps) return false;

            circleRadius += epsilon.RadiusEps;
            point = circlePlane.ProjectPoint(point);

            return (point - circleCenter).magnitude <= circleRadius;
        }

        public static bool Contains2DPoint(Vector2 point, Vector2 circleCenter, float circleRadius, CircleEpsilon epsilon = new CircleEpsilon())
        {
            circleRadius += epsilon.RadiusEps;
            return (point - circleCenter).magnitude <= circleRadius;
        }

        public static bool Is2DPointOnBorder(Vector2 point, Vector2 circleCenter, float circleRadius, CircleEpsilon epsilon = new CircleEpsilon())
        {
            float distFromOrigin = (point - circleCenter).magnitude;
            return (distFromOrigin >= circleRadius - epsilon.WireEps &&
                    distFromOrigin <= circleRadius + epsilon.WireEps) ;
        }
    }
}
