using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public enum RightAngTriPoint
    {
        RightAngleCorner = 0,
        Up,
        Right
    }

    public enum EqTrianglePoint
    {
        Left = 0,
        Top,
        Right
    }
    public enum EqTriangleEdge
    {
        LeftTop = 0,
        TopRight,
        RightLeft
    }

    public static class TriangleMath
    {
        private static readonly float _eqTriangleAltFactor = Mathf.Sqrt(3.0f) * 0.5f;
        public static float EqTriangleAltFactor { get { return _eqTriangleAltFactor; } }
        
        public static float GetEqTriangleAltitude(float sideLength)
        {
            return sideLength * _eqTriangleAltFactor;
        }

        public static float GetEqTriangleCentroidAltitude(float sideLength)
        {
            return sideLength * _eqTriangleAltFactor / 3.0f;
        }

        public static List<Vector3> CalcEqTriangle3DPoints(Vector3 centroid, float sideLength, Quaternion rotation)
        {
            float halfSideLength = sideLength * 0.5f;
            float centroidAltitude = TriangleMath.GetEqTriangleCentroidAltitude(sideLength);
            Vector3 midLeftRight = centroid - rotation * Vector3.up * centroidAltitude;

            return new List<Vector3>()
            {
                midLeftRight - rotation * Vector3.right * halfSideLength,
                centroid + rotation * Vector3.up * (TriangleMath.GetEqTriangleAltitude(sideLength) - centroidAltitude),
                midLeftRight + rotation * Vector3.right * halfSideLength
            };
        }

        public static List<Vector2> CalcEqTriangle2DPoints(Vector2 centroid, float sideLength, Quaternion rotation)
        {
            float halfSideLength = sideLength * 0.5f;
            float centroidAltitude = TriangleMath.GetEqTriangleCentroidAltitude(sideLength);

            Vector2 triangleRight = rotation * Vector2.right;
            Vector2 triangleUp = rotation * Vector2.up;
            Vector2 midLeftRight = centroid - triangleUp * centroidAltitude;

            return new List<Vector2>()
            {
                midLeftRight - triangleRight * halfSideLength,
                centroid + triangleUp* (TriangleMath.GetEqTriangleAltitude(sideLength) - centroidAltitude),
                midLeftRight + triangleRight * halfSideLength,
            };
        }

        public static float CalcRATriangleHypotenuse(float side0, float side1)
        {
            return Mathf.Sqrt(side0 * side0 + side1 * side1);
        }

        public static float CalcRATriangleHypotenuse(Vector2 sides)
        {
            return Mathf.Sqrt(sides.x * sides.x + sides.y * sides.y);
        }

        public static float CalcRATriangleAltitude(Vector2 sides)
        {
            return sides.x * sides.y / Mathf.Sqrt(sides.x * sides.x + sides.y * sides.y);
        }

        public static List<Vector3> CalcRATriangle3DPoints(Vector3 rightAngleCorner, float xLength, float yLength, Quaternion triangleRotation)
        {
            Vector3 right = triangleRotation * Vector3.right;
            Vector3 up = triangleRotation * Vector3.up;

            return new List<Vector3>()
            {
                rightAngleCorner,
                rightAngleCorner + up * yLength,
                rightAngleCorner + right * xLength
            };
        }

        public static List<Vector2> CalcRATriangle2DPoints(Vector2 rightAngleCorner, float xLength, float yLength, float degreeTriRotation)
        {
            Quaternion rotation = Quaternion.AngleAxis(degreeTriRotation, Vector3.forward);
            Vector2 right = rotation * Vector2.right;
            Vector2 up = rotation * Vector2.up;

            return new List<Vector2>()
            {
                rightAngleCorner,
                rightAngleCorner + up * yLength,
                rightAngleCorner + right * xLength
            };
        }

        public static OBB Calc3DTriangleOBB(Vector3 p0, Vector3 p1, Vector3 p2, Vector3 normal, TriangleEpsilon epsilon = new TriangleEpsilon())
        {
            const float eps = 1e-5f;    
            Vector3 lgEdgeStart = p0;
            Vector3 lgEdgeEnd = p1;
            Vector3 oppositePt = p2;
            float sqrEdgeLength = (p0 - p1).sqrMagnitude + eps; // Add small epsilon to avoid problems with equilateral triangles

            float nextSqrLength = (p1 - p2).sqrMagnitude;
            if (nextSqrLength > sqrEdgeLength)
            {
                lgEdgeStart = p1;
                lgEdgeEnd = p2;
                oppositePt = p0;
                sqrEdgeLength = nextSqrLength;
            }

            nextSqrLength = (p2 - p0).sqrMagnitude;
            if (nextSqrLength > sqrEdgeLength)
            {
                lgEdgeStart = p2;
                lgEdgeEnd = p0;
                oppositePt = p1;
                sqrEdgeLength = nextSqrLength;
            }

            Quaternion obbRotation = Quaternion.LookRotation((lgEdgeEnd - lgEdgeStart).normalized, normal);
            OBB obb = new OBB(obbRotation);
            float sizeAdd = 2.0f * epsilon.AreaEps;
            float obbDepth = Mathf.Sqrt(sqrEdgeLength) + sizeAdd;

            float dotRight = Vector3.Dot(obb.Right, (oppositePt - lgEdgeStart));
            float obbWidth = Mathf.Abs(dotRight) + sizeAdd;
            float obbHeight = epsilon.ExtrudeEps * 2.0f;
            obb.Size = new Vector3(obbWidth, obbHeight, obbDepth);

            Vector3 right = obb.Right * Mathf.Sign(dotRight);
            obb.Center = right * obbWidth * 0.5f - right * epsilon.AreaEps + 
                          lgEdgeStart - obb.Look * epsilon.AreaEps + obb.Look * obbDepth * 0.5f;

            return obb;
        }

        public static bool Raycast(Ray ray, out float t, Vector3 p0, Vector3 p1, Vector3 p2, TriangleEpsilon epsilon = new TriangleEpsilon())
        {
            t = 0.0f;

            float rayEnter;
            Plane trianglePlane = new Plane(p0, p1, p2);
            if (trianglePlane.Raycast(ray, out rayEnter) && 
                Contains3DPoint(ray.GetPoint(rayEnter), false, p0, p1, p2, epsilon))
            {
                t = rayEnter;
                return true;
            }
       
            if (epsilon.ExtrudeEps != 0.0f)
            {
                float dot = Vector3Ex.AbsDot(ray.direction, trianglePlane.normal);
                if (dot < ExtrudeEpsThreshold.Get)
                {
                    OBB obb = Calc3DTriangleOBB(p0, p1, p2, trianglePlane.normal, epsilon);
                    return BoxMath.Raycast(ray, obb.Center, obb.Size, obb.Rotation);
                }
            }

            return false;
        }

        public static bool RaycastWire(Ray ray, out float t, Vector3 p0, Vector3 p1, Vector3 p2, TriangleEpsilon epsilon = new TriangleEpsilon())
        {
            t = 0.0f;

            float rayEnter;
            Plane trianglePlane = new Plane(p0, p1, p2);
            if (trianglePlane.Raycast(ray, out rayEnter))
            {
                Vector3 intersectPt = ray.GetPoint(rayEnter);
                float distToSegment = intersectPt.GetDistanceToSegment(p0, p1);
                if (distToSegment <= epsilon.WireEps)
                {
                    t = rayEnter;
                    return true;
                }

                distToSegment = intersectPt.GetDistanceToSegment(p1, p2);
                if (distToSegment <= epsilon.WireEps)
                {
                    t = rayEnter;
                    return true;
                }

                distToSegment = intersectPt.GetDistanceToSegment(p2, p0);
                if (distToSegment <= epsilon.WireEps)
                {
                    t = rayEnter;
                    return true;
                }
            }

            if (epsilon.ExtrudeEps != 0.0f)
            {
                float dot = Vector3Ex.AbsDot(ray.direction, trianglePlane.normal);
                if (dot < ExtrudeEpsThreshold.Get)
                {
                    OBB obb = Calc3DTriangleOBB(p0, p1, p2, trianglePlane.normal, epsilon);
                    return BoxMath.Raycast(ray, obb.Center, obb.Size, obb.Rotation);
                }
            }

            return false;
        }

        public static bool Contains3DPoint(Vector3 point, bool checkOnPlane, Vector3 p0, Vector3 p1, Vector3 p2, TriangleEpsilon epsilon = new TriangleEpsilon())
        {
            Vector3 edge0 = p1 - p0;
            Vector3 edge1 = p2 - p1;
            Vector3 edge2 = p0 - p2;
            Vector3 normal = Vector3.Cross(edge0, -edge2).normalized;

            if(checkOnPlane)
            {
                float distanceToPt = Vector3.Dot(point - p0, normal);
                if (Mathf.Abs(distanceToPt) > epsilon.ExtrudeEps) return false;
            }

            Vector3 edgeNormal = Vector3.Cross(edge0, normal).normalized;
            if (Vector3.Dot(point - p0, edgeNormal) > epsilon.AreaEps) return false;

            edgeNormal = Vector3.Cross(edge1, normal).normalized;
            if (Vector3.Dot(point - p1, edgeNormal) > epsilon.AreaEps) return false;

            edgeNormal = Vector3.Cross(edge2, normal).normalized;
            if (Vector3.Dot(point - p2, edgeNormal) > epsilon.AreaEps) return false;

            return true;
        }

        public static bool Contains2DPoint(Vector2 point, Vector2 p0, Vector2 p1, Vector2 p2, TriangleEpsilon epsilon = new TriangleEpsilon())
        {
            return Contains3DPoint(point, false, p0, p1, p2, epsilon);
        }
    }
}
