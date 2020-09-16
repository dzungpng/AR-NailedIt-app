using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public enum TriangularPrismCorner
    {
        BaseLeft = 0,
        BaseRight,
        BaseForward,

        TopLeft,
        TopForward,
        TopRight
    }

    public static class PrismMath
    {
        public static List<Vector3> CalcTriangPrismCornerPoints(Vector3 baseCenter, float baseWidth, float baseDepth, 
            float topWidth, float topDepth, float height, Quaternion prismRotation)
        {
            float halfBaseWidth = baseWidth * 0.5f;
            float halfBaseDepth = baseDepth * 0.5f;
            float halfTopWidth = topWidth * 0.5f;
            float halfTopDepth = topDepth * 0.5f;

            Vector3 baseLeftPt = -Vector3.forward * halfBaseDepth - Vector3.right * halfBaseWidth;
            Vector3 baseRightPt = baseLeftPt + Vector3.right * baseWidth;
            Vector3 baseForwardPt = Vector3.forward * halfBaseDepth;

            Vector3 topCenter = Vector3.up * height;
            Vector3 topLeftPt = topCenter - Vector3.forward * halfTopDepth - Vector3.right * halfTopWidth;
            Vector3 topForwardPt = topCenter + Vector3.forward * halfTopDepth;
            Vector3 topRightPt = topLeftPt + Vector3.right * topWidth;

            List<Vector3> cornerPoints = new List<Vector3>(6);
            Matrix4x4 transformMatrix = Matrix4x4.TRS(baseCenter, prismRotation, Vector3.one);
            cornerPoints.Add(transformMatrix.MultiplyPoint(baseLeftPt));
            cornerPoints.Add(transformMatrix.MultiplyPoint(baseRightPt));
            cornerPoints.Add(transformMatrix.MultiplyPoint(baseForwardPt));
            cornerPoints.Add(transformMatrix.MultiplyPoint(topLeftPt));
            cornerPoints.Add(transformMatrix.MultiplyPoint(topForwardPt));
            cornerPoints.Add(transformMatrix.MultiplyPoint(topRightPt));

            return cornerPoints;
        }

        public static bool RaycastTriangular(Ray ray, out float t, Vector3 baseCenter,
            float baseWidth, float baseDepth, float topWidth, float topDepth, float height, Quaternion prismRotation)
        {
            t = 0.0f;
            if (baseWidth == 0.0f || baseDepth == 0.0f ||
                topWidth == 0.0f || topDepth == 0.0f || height == 0.0f) return false;

            baseWidth = Mathf.Abs(baseWidth);
            baseDepth = Mathf.Abs(baseDepth);
            topWidth = Mathf.Abs(topWidth);
            topDepth = Mathf.Abs(topDepth);

            ray = ray.InverseTransform(Matrix4x4.TRS(baseCenter, prismRotation, Vector3.one));

            // Since the raycast calculations can be quite expensive for a prism, we will
            // first check if the ray intersects its AABB to quickly return false if no
            // intersection is found. If the ray does not intersect the AABB it can not
            // possibly intersect the prism.
            Vector3 aabbSize = Vector3.Max(new Vector3(baseWidth, height, baseDepth), new Vector3(topWidth, height, topDepth));
            if (!BoxMath.Raycast(ray, Vector3.up * height * 0.5f, aabbSize, Quaternion.identity)) return false;

            List<Vector3> cornerPoints = CalcTriangPrismCornerPoints(Vector3.zero, baseWidth, baseDepth, topWidth, topDepth, height, Quaternion.identity);
            Vector3 baseLeftPt = cornerPoints[(int)TriangularPrismCorner.BaseLeft];
            Vector3 baseRightPt = cornerPoints[(int)TriangularPrismCorner.BaseRight];
            Vector3 baseForwardPt = cornerPoints[(int)TriangularPrismCorner.BaseForward];

            Vector3 topLeftPt = cornerPoints[(int)TriangularPrismCorner.TopLeft];
            Vector3 topRightPt = cornerPoints[(int)TriangularPrismCorner.TopRight];
            Vector3 topForwardPt = cornerPoints[(int)TriangularPrismCorner.TopForward];

            List<float> tValues = new List<float>(5);

            // Base triangle
            float rayEnter;
            if (TriangleMath.Raycast(ray, out rayEnter, baseLeftPt, baseRightPt, baseForwardPt)) tValues.Add(rayEnter);

            // Top triangle
            if (TriangleMath.Raycast(ray, out rayEnter, topLeftPt, topForwardPt, topRightPt)) tValues.Add(rayEnter);

            // Back face
            List<Vector3> facePoints = new List<Vector3>(4) { baseLeftPt, topLeftPt, topRightPt, baseRightPt };
            Vector3 faceNormal = Vector3.Cross((facePoints[1] - facePoints[0]), facePoints[3] - facePoints[0]).normalized;
            if (PolygonMath.Raycast(ray, out rayEnter, facePoints, false, faceNormal)) tValues.Add(rayEnter);

            // Left face
            // facePoints[0] = baseLeftPt;
            facePoints[1] = baseForwardPt;
            facePoints[2] = topForwardPt;
            facePoints[3] = topLeftPt;
            faceNormal = Vector3.Cross((facePoints[1] - facePoints[0]), facePoints[3] - facePoints[0]).normalized;
            if (PolygonMath.Raycast(ray, out rayEnter, facePoints, false, faceNormal)) tValues.Add(rayEnter);

            // Right face
            facePoints[0] = baseRightPt;
            facePoints[1] = topRightPt;
            // facePoints[2] = topForwardPt;
            facePoints[3] = baseForwardPt;
            faceNormal = Vector3.Cross((facePoints[1] - facePoints[0]), facePoints[3] - facePoints[0]).normalized;
            if (PolygonMath.Raycast(ray, out rayEnter, facePoints, false, faceNormal)) tValues.Add(rayEnter);

            if (tValues.Count == 0) return false;

            tValues.Sort(delegate(float t0, float t1) { return t0.CompareTo(t1); });
            t = tValues[0];

            return true;
        }

        public static bool ContainsPoint(Vector3 point, Vector3 baseCenter,
            float baseWidth, float baseDepth, float topWidth, float topDepth, float height, Quaternion prismRotation, PrismEpsilon epsilon = new PrismEpsilon())
        {
            Matrix4x4 prismMatrix = Matrix4x4.TRS(baseCenter, prismRotation, Vector3.one);
            point = prismMatrix.inverse.MultiplyPoint(point);

            List<Vector3> cornerPoints = CalcTriangPrismCornerPoints(Vector3.zero, baseWidth, baseDepth, topWidth, topDepth, height, Quaternion.identity);
            Vector3 baseLeftPt = cornerPoints[(int)TriangularPrismCorner.BaseLeft];
            Vector3 baseRightPt = cornerPoints[(int)TriangularPrismCorner.BaseRight];
            Vector3 baseForwardPt = cornerPoints[(int)TriangularPrismCorner.BaseForward];

            Vector3 topLeftPt = cornerPoints[(int)TriangularPrismCorner.TopLeft];
            Vector3 topRightPt = cornerPoints[(int)TriangularPrismCorner.TopRight];
            Vector3 topForwardPt = cornerPoints[(int)TriangularPrismCorner.TopForward];

            // Check top plane
            Plane plane = new Plane(Vector3.up, topForwardPt);
            if (plane.GetDistanceToPoint(point) > epsilon.PtContainEps) return false;

            // Check bottom plane
            plane = new Plane(-Vector3.up, baseForwardPt);
            if (plane.GetDistanceToPoint(point) > epsilon.PtContainEps) return false;
  
            // Check left plane
            plane = new Plane(baseLeftPt, baseForwardPt, topForwardPt);
            if (plane.GetDistanceToPoint(point) > epsilon.PtContainEps) return false;

            // Check right plane
            plane = new Plane(baseRightPt, topRightPt, topForwardPt);
            if (plane.GetDistanceToPoint(point) > epsilon.PtContainEps) return false;

            // Check back plane
            plane = new Plane(baseRightPt, baseLeftPt, topLeftPt);
            if (plane.GetDistanceToPoint(point) > epsilon.PtContainEps) return false;

            return true;
        }
    }
}
