using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class PolygonMath
    {
        public static bool Raycast(Ray ray, out float t, List<Vector3> cwPolyPoints, bool isClosed, Vector3 polyNormal, PolygonEpsilon epsilon = new PolygonEpsilon())
        {
            t = 0.0f;
            if (cwPolyPoints.Count < (isClosed ? 4 : 3)) return false;

            float rayEnter;
            Plane polyPlane = new Plane(polyNormal, cwPolyPoints[0]);
            if (polyPlane.Raycast(ray, out rayEnter) &&
                Contains3DPoint(ray.GetPoint(rayEnter), false, cwPolyPoints, isClosed, polyNormal, epsilon))
            {
                t = rayEnter;
                return true;
            }

            return false;
        }

        public static bool Contains3DPoint(Vector3 point, bool checkOnPlane, List<Vector3> cwPolyPoints, bool isClosed, Vector3 polyNormal, PolygonEpsilon epsilon = new PolygonEpsilon())
        {
            if (cwPolyPoints.Count < (isClosed ? 4 : 3)) return false;

            Plane polyPlane = new Plane(polyNormal, cwPolyPoints[0]);
            if (checkOnPlane && Mathf.Abs(polyPlane.GetDistanceToPoint(point)) > epsilon.ExtrudeEps) return false;

            if (isClosed)
            {
                for(int ptIndex = 0; ptIndex < cwPolyPoints.Count - 1; ++ptIndex)
                {
                    Vector3 segmentDir = cwPolyPoints[ptIndex + 1] - cwPolyPoints[ptIndex];
                    Vector3 egdeNormal = Vector3.Cross(segmentDir, polyNormal).normalized;

                    float distanceToPlane = Vector3.Dot((point - cwPolyPoints[ptIndex]), egdeNormal);
                    if (distanceToPlane > epsilon.AreaEps) return false;
                }
            }
            else
            {
                for (int ptIndex = 0; ptIndex < cwPolyPoints.Count; ++ptIndex)
                {
                    Vector3 segmentDir = cwPolyPoints[(ptIndex + 1) % cwPolyPoints.Count] - cwPolyPoints[ptIndex];
                    Vector3 egdeNormal = Vector3.Cross(segmentDir, polyNormal).normalized;

                    float distanceToPlane = Vector3.Dot((point - cwPolyPoints[ptIndex]), egdeNormal);
                    if (distanceToPlane > epsilon.AreaEps) return false;
                }
            }

            return true;
        }

        public static bool Contains2DPoint(Vector2 point, List<Vector2> polyPoints, bool isClosed, PolygonEpsilon epsilon = new PolygonEpsilon())
        {
            if (isClosed)
            {
                for (int ptIndex = 0; ptIndex < polyPoints.Count - 1; ++ptIndex)
                {
                    Vector2 segmentDir = polyPoints[ptIndex + 1] - polyPoints[ptIndex];
                    Vector2 egdeNormal = segmentDir.GetNormal();

                    float distanceToPlane = Vector2.Dot((point - polyPoints[ptIndex]), egdeNormal);
                    if (distanceToPlane > epsilon.AreaEps) return false;
                }
            }
            else
            {
                for (int ptIndex = 0; ptIndex < polyPoints.Count; ++ptIndex)
                {
                    Vector2 segmentDir = polyPoints[(ptIndex + 1) % polyPoints.Count] - polyPoints[ptIndex];
                    Vector2 egdeNormal = segmentDir.GetNormal();

                    float distanceToPlane = Vector2.Dot((point - polyPoints[ptIndex]), egdeNormal);
                    if (distanceToPlane > epsilon.AreaEps) return false;
                }
            }

            return true;
        }

        public static bool Is3DPointOnBorder(Vector3 point, bool checkOnPlane, List<Vector3> cwPolyPoints, bool isClosed, Vector3 polyNormal, PolygonEpsilon epsilon = new PolygonEpsilon())
        {
            if (cwPolyPoints.Count < (isClosed ? 4 : 3)) return false;

            Plane polyPlane = new Plane(polyNormal, cwPolyPoints[0]);
            if (checkOnPlane && Mathf.Abs(polyPlane.GetDistanceToPoint(point)) > epsilon.ExtrudeEps) return false;

            if (!checkOnPlane) point = polyPlane.ProjectPoint(point);

            if (isClosed)
            {
                for (int ptIndex = 0; ptIndex < cwPolyPoints.Count - 1; ++ptIndex)
                {
                    if (point.GetDistanceToSegment(cwPolyPoints[ptIndex], cwPolyPoints[ptIndex + 1]) <= epsilon.WireEps) return true;
                }
            }
            else
            {
                for (int ptIndex = 0; ptIndex < cwPolyPoints.Count; ++ptIndex)
                {
                    if (point.GetDistanceToSegment(cwPolyPoints[ptIndex], cwPolyPoints[(ptIndex + 1) % cwPolyPoints.Count]) <= epsilon.WireEps) return true;
                }
            }

            return false;
        }

        public static bool Is2DPointOnBorder(Vector2 point, List<Vector2> polyPoints, bool isClosed, PolygonEpsilon epsilon = new PolygonEpsilon())
        {
            if (polyPoints.Count < (isClosed ? 4 : 3)) return false;

            if (isClosed)
            {
                for (int ptIndex = 0; ptIndex < polyPoints.Count - 1; ++ptIndex)
                {
                    if (point.GetDistanceToSegment(polyPoints[ptIndex], polyPoints[ptIndex + 1]) <= epsilon.WireEps) return true;
                }
            }
            else
            {
                for (int ptIndex = 0; ptIndex < polyPoints.Count; ++ptIndex)
                {
                    if (point.GetDistanceToSegment(polyPoints[ptIndex], polyPoints[(ptIndex + 1) % polyPoints.Count]) <= epsilon.WireEps) return true;
                }
            }

            return false;
        }

        public static bool Is2DPointOnThickBorder(Vector2 point, List<Vector2> polyPoints, List<Vector2> thickBorderPoints, bool isClosed, PolygonEpsilon epsilon = new PolygonEpsilon())
        {
            if (polyPoints.Count != thickBorderPoints.Count) return false;
            if (polyPoints.Count < (isClosed ? 4 : 3)) return false;

            List<Vector2> quadPoints = new List<Vector2>(4);
            var eps = new PolygonEpsilon();
            eps.AreaEps = epsilon.ThickWireEps;
            for (int ptIndex = 0; ptIndex < polyPoints.Count - 1; ++ptIndex)
            {
                quadPoints.Clear();
                quadPoints.Add(polyPoints[ptIndex]);
                quadPoints.Add(thickBorderPoints[ptIndex]);
                quadPoints.Add(thickBorderPoints[ptIndex + 1]);
                quadPoints.Add(polyPoints[ptIndex + 1]);
                quadPoints.Add(polyPoints[ptIndex]);
                if (Contains2DPoint(point, quadPoints, true, eps)) return true;
            }

            return false;
        }
    }
}
