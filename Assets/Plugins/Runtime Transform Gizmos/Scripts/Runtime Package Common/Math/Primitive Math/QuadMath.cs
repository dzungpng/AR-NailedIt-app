using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public enum QuadCorner
    {
        TopLeft = 0,
        TopRight,
        BottomRight,
        BottomLeft
    }

    public static class QuadMath
    {
        public static void Calc2DQuadRightUp(float degreeRotation, out Vector2 right, out Vector2 up)
        {
            right = Vector2.right;
            up = Vector2.up;

            Quaternion rotationQuat = Quaternion.AngleAxis(degreeRotation, Vector3.forward);
            right = rotationQuat * right;
            up = rotationQuat * up;
        }

        public static List<Vector2> Calc2DQuadCornerPoints(Vector2 quadCenter, Vector2 quadSize, float degreeRotation)
        {
            Vector2 right = Vector2.right;
            Vector2 up = Vector2.up;
            Calc2DQuadRightUp(degreeRotation, out right, out up);

            Vector2 extents = quadSize * 0.5f;
            return new List<Vector2>()
            {
                quadCenter - right * extents.x + up * extents.y,
                quadCenter + right * extents.x + up * extents.y,
                quadCenter + right * extents.x - up * extents.y,
                quadCenter - right * extents.x - up * extents.y
            };
        }

        public static List<Vector2> Calc2DQuadCornerPoints(Vector2 quadCenter, Vector2 quadSize, Vector2 right, Vector2 up)
        {
            Vector2 extents = quadSize * 0.5f;
            return new List<Vector2>()
            {
                quadCenter - right * extents.x + up * extents.y,
                quadCenter + right * extents.x + up * extents.y,
                quadCenter + right * extents.x - up * extents.y,
                quadCenter - right * extents.x - up * extents.y
            };
        }

        public static List<Vector3> Calc3DQuadCornerPoints(Vector3 quadCenter, Vector2 quadSize, Quaternion quadRotation)
        {
            Vector3 right = quadRotation * Vector3.right;
            Vector3 up = quadRotation * Vector3.up;

            Vector3 extents = quadSize * 0.5f;
            return new List<Vector3>()
            {
                quadCenter - right * extents.x + up * extents.y,
                quadCenter + right * extents.x + up * extents.y,
                quadCenter + right * extents.x - up * extents.y,
                quadCenter - right * extents.x - up * extents.y
            };
        }

        public static Vector3 Calc3DQuadCorner(Vector3 quadCenter, Vector2 quadSize, Quaternion quadRotation, QuadCorner quadCorner)
        {
            Vector3 right = quadRotation * Vector3.right;
            Vector3 up = quadRotation * Vector3.up;
            Vector3 extents = quadSize * 0.5f;

            if (quadCorner == QuadCorner.TopLeft) return quadCenter - right * extents.x + up * extents.y;
            else if (quadCorner == QuadCorner.TopRight) return quadCenter + right * extents.x + up * extents.y;
            else if (quadCorner == QuadCorner.BottomRight) return quadCenter + right * extents.x - up * extents.y;
            return quadCenter - right * extents.x - up * extents.y;
        }

        public static OBB Calc3DQuadOBB(Vector3 quadCenter, Vector2 quadSize, Quaternion quadRotation, QuadEpsilon epsilon = new QuadEpsilon())
        {
            Vector3 size = quadSize + epsilon.SizeEps;
            size.z = epsilon.ExtrudeEps * 2.0f;
            return new OBB(quadCenter, size, quadRotation);
        }

        public static bool Raycast(Ray ray, out float t, Vector3 quadCenter, float quadWidth, float quadHeight, Vector3 quadRight, Vector3 quadUp, QuadEpsilon epsilon = new QuadEpsilon())
        {
            t = 0.0f;
            Vector3 quadNormal = Vector3.Normalize(Vector3.Cross(quadRight, quadUp));
            Plane quadPlane = new Plane(quadNormal, quadCenter);

            float rayEnter;
            if (quadPlane.Raycast(ray, out rayEnter) &&
                Contains3DPoint(ray.GetPoint(rayEnter), false, quadCenter, quadWidth, quadHeight, quadRight, quadUp, epsilon))
            {
                t = rayEnter;
                return true;
            }

            if (epsilon.ExtrudeEps != 0.0f)
            {
                float dot = Vector3Ex.AbsDot(ray.direction, quadPlane.normal);
                if (dot < ExtrudeEpsThreshold.Get)
                {
                    OBB quadOBB = Calc3DQuadOBB(quadCenter, new Vector2(quadWidth, quadHeight), Quaternion.LookRotation(quadNormal, quadUp), epsilon);
                    return BoxMath.Raycast(ray, quadOBB.Center, quadOBB.Size, quadOBB.Rotation);
                }
            }

            return false;
        }

        public static bool RaycastWire(Ray ray, out float t, Vector3 quadCenter, float quadWidth, float quadHeight, Vector3 quadRight, Vector3 quadUp, QuadEpsilon epsilon = new QuadEpsilon())
        {
            t = 0.0f;
            Vector3 quadNormal = Vector3.Normalize(Vector3.Cross(quadRight, quadUp));
            Plane quadPlane = new Plane(quadNormal, quadCenter);
            Vector2 quadSize = new Vector2(quadWidth, quadHeight);
            Quaternion quadRotation = Quaternion.LookRotation(quadNormal, quadUp);

            float rayEnter;
            if (quadPlane.Raycast(ray, out rayEnter))
            {
                Vector3 intersectPt = ray.GetPoint(rayEnter);
                var cornerPoints = Calc3DQuadCornerPoints(quadCenter, quadSize, quadRotation);

                float distFromSegment = intersectPt.GetDistanceToSegment(cornerPoints[(int)QuadCorner.TopLeft], cornerPoints[(int)QuadCorner.TopRight]);
                if (distFromSegment <= epsilon.WireEps)
                {
                    t = rayEnter;
                    return true;
                }

                distFromSegment = intersectPt.GetDistanceToSegment(cornerPoints[(int)QuadCorner.TopRight], cornerPoints[(int)QuadCorner.BottomRight]);
                if (distFromSegment <= epsilon.WireEps)
                {
                    t = rayEnter;
                    return true;
                }

                distFromSegment = intersectPt.GetDistanceToSegment(cornerPoints[(int)QuadCorner.BottomRight], cornerPoints[(int)QuadCorner.BottomLeft]);
                if (distFromSegment <= epsilon.WireEps)
                {
                    t = rayEnter;
                    return true;
                }

                distFromSegment = intersectPt.GetDistanceToSegment(cornerPoints[(int)QuadCorner.BottomLeft], cornerPoints[(int)QuadCorner.TopLeft]);
                if (distFromSegment <= epsilon.WireEps)
                {
                    t = rayEnter;
                    return true;
                }
            }

            if (epsilon.ExtrudeEps != 0.0f)
            {
                float dot = Vector3Ex.AbsDot(ray.direction, quadPlane.normal);
                if (dot < ExtrudeEpsThreshold.Get)
                {
                    OBB quadOBB = Calc3DQuadOBB(quadCenter, quadSize, Quaternion.LookRotation(quadNormal, quadUp), epsilon);
                    return BoxMath.Raycast(ray, quadOBB.Center, quadOBB.Size, quadOBB.Rotation);
                }
            }

            return false;
        }

        public static bool Contains3DPoint(Vector3 point, bool checkOnPlane, Vector3 quadCenter, float quadWidth, float quadHeight, Vector3 quadRight, 
            Vector3 quadUp, QuadEpsilon epsilon = new QuadEpsilon())
        {
            Plane quadPlane = new Plane(Vector3.Cross(quadRight, quadUp).normalized, quadCenter);
            if (checkOnPlane && quadPlane.GetAbsDistanceToPoint(point) > epsilon.ExtrudeEps) return false;

            quadWidth += epsilon.WidthEps;
            quadHeight += epsilon.HeightEps;

            Vector3 toPoint = point - quadCenter;
            float dotRight = toPoint.AbsDot(quadRight);
            float dotUp = toPoint.AbsDot(quadUp);

            if (dotRight > quadWidth * 0.5f) return false;
            if (dotUp > quadHeight * 0.5f) return false;

            return true;
        }

        public static bool Contains2DPoint(Vector2 point, Vector2 quadCenter, float quadWidth, float quadHeight, 
            float degreeRotation, QuadEpsilon epsilon = new QuadEpsilon())
        {
            Vector2 right, up;
            Calc2DQuadRightUp(degreeRotation, out right, out up);
            return Contains2DPoint(point, quadCenter, quadWidth, quadHeight, right, up, epsilon);
        }

        public static bool Contains2DPoint(Vector2 point, Vector2 quadCenter, float quadWidth, float quadHeight, Vector2 quadRight,
            Vector2 quadUp, QuadEpsilon epsilon = new QuadEpsilon())
        {
            quadWidth += epsilon.WidthEps;
            quadHeight += epsilon.HeightEps;

            Vector2 toPoint = point - quadCenter;
            float dotRight = toPoint.AbsDot(quadRight);
            float dotUp = toPoint.AbsDot(quadUp);

            if (dotRight > quadWidth * 0.5f) return false;
            if (dotUp > quadHeight * 0.5f) return false;

            return true;
        }

        public static bool Is2DPointOnBorder(Vector2 point, Vector2 quadCenter, float quadWidth, float quadHeight,
            float degreeRotation, QuadEpsilon epsilon = new QuadEpsilon())
        {
            Vector2 right, up;
            Calc2DQuadRightUp(degreeRotation, out right, out up);
            return Is2DPointOnBorder(point, quadCenter, quadWidth, quadHeight, right, up, epsilon);
        }

        public static bool Is2DPointOnBorder(Vector2 point, Vector2 quadCenter, float quadWidth, float quadHeight, Vector2 quadRight,
            Vector2 quadUp, QuadEpsilon epsilon = new QuadEpsilon())
        {
            var segmentEps = new SegmentEpsilon();
            segmentEps.PtOnSegmentEps = epsilon.WireEps;

            var corners = Calc2DQuadCornerPoints(quadCenter, new Vector2(quadWidth, quadHeight), quadRight, quadUp);
            for(int ptIndex = 0; ptIndex < corners.Count; ++ptIndex)
            {
                Vector2 startPt = corners[ptIndex];
                Vector2 endPt = corners[(ptIndex + 1) % corners.Count];
                if (SegmentMath.Is2DPointOnSegment(point, startPt, endPt, segmentEps)) return true;
            }

            return false;
        }
    }
}
