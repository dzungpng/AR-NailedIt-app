using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public enum PyramidBaseCorner
    {
        RightForward = 0,
        RightBack,
        LeftBack,
        LeftForward
    }

    public static class PyramidMath
    {
        public static List<Vector3> CalcBaseCornerPoints(Vector3 baseCenter, float baseWidth, float baseDepth, Quaternion rotation)
        {
            Vector3 right = rotation * Vector3.right;
            Vector3 look = rotation * Vector3.forward;

            float halfBaseWidth = baseWidth * 0.5f;
            float halfBaseDepth = baseDepth * 0.5f;

            return new List<Vector3>()
            {
                baseCenter + right * halfBaseWidth + look * halfBaseDepth,
                baseCenter + right * halfBaseWidth - look * halfBaseDepth,
                baseCenter - right * halfBaseWidth - look * halfBaseDepth,
                baseCenter - right * halfBaseWidth + look * halfBaseDepth
            };
        }

        public static bool Raycast(Ray ray, out float t, Vector3 baseCenter, float baseWidth, float baseDepth, float height, Quaternion rotation)
        {
            t = 0.0f;
            ray = ray.InverseTransform(Matrix4x4.TRS(baseCenter, rotation, Vector3.one));

            Vector3 aabbSize = new Vector3(baseWidth, height, baseDepth);
            if (!BoxMath.Raycast(ray, Vector3.up * height * 0.5f, aabbSize, Quaternion.identity)) return false;

            List<float> tValues = new List<float>(5);

            Plane basePlane = new Plane(Vector3.up, Vector3.zero);
            float rayEnter = 0.0f;
            if (basePlane.Raycast(ray, out rayEnter) &&
                QuadMath.Contains3DPoint(ray.GetPoint(rayEnter), false, baseCenter, baseWidth, baseDepth, Vector3.right, Vector3.forward)) tValues.Add(rayEnter);

            float halfWidth = 0.5f * baseWidth;
            float halfDepth = 0.5f * baseDepth;
            Vector3 tipPosition = Vector3.up * height;
            Vector3 p0 = tipPosition;
            Vector3 p1 = Vector3.right * halfWidth - Vector3.forward * halfDepth;
            Vector3 p2 = p1 - Vector3.right * baseWidth;
            Plane trianglePlane = new Plane(p0, p1, p2);
            if (trianglePlane.Raycast(ray, out rayEnter) &&
                TriangleMath.Contains3DPoint(ray.GetPoint(rayEnter), false, p0, p1, p2)) tValues.Add(rayEnter);

            p0 = tipPosition;
            p1 = Vector3.right * halfWidth + Vector3.forward * halfDepth;
            p2 = p1 - Vector3.forward * baseDepth;
            trianglePlane = new Plane(p0, p1, p2);
            if (trianglePlane.Raycast(ray, out rayEnter) &&
                TriangleMath.Contains3DPoint(ray.GetPoint(rayEnter), false, p0, p1, p2)) tValues.Add(rayEnter);

            p0 = tipPosition;
            p1 = -Vector3.right * halfWidth + Vector3.forward * halfDepth;
            p2 = p1 + Vector3.right * baseWidth;
            trianglePlane = new Plane(p0, p1, p2);
            if (trianglePlane.Raycast(ray, out rayEnter) &&
                TriangleMath.Contains3DPoint(ray.GetPoint(rayEnter), false, p0, p1, p2)) tValues.Add(rayEnter);

            p0 = tipPosition;
            p1 = -Vector3.right * halfWidth - Vector3.forward * halfDepth;
            p2 = p1 + Vector3.forward * baseDepth;
            trianglePlane = new Plane(p0, p1, p2);
            if (trianglePlane.Raycast(ray, out rayEnter) &&
                TriangleMath.Contains3DPoint(ray.GetPoint(rayEnter), false, p0, p1, p2)) tValues.Add(rayEnter);

            if (tValues.Count == 0) return false;

            tValues.Sort(delegate(float t0, float t1) { return t0.CompareTo(t1); });
            t = tValues[0];

            return true;
        }

        public static bool ContainsPoint(Vector3 point, Vector3 baseCenter, float baseWidth, float baseDepth, float height, Quaternion rotation, PyramidEpsilon epsilon = new PyramidEpsilon())
        {
            Matrix4x4 transformMatrix = Matrix4x4.TRS(baseCenter, rotation, Vector3.one);
            point = transformMatrix.inverse.MultiplyPoint(point);

            Plane basePlane = new Plane(-Vector3.up, Vector3.zero);
            if (basePlane.GetDistanceToPoint(point) > epsilon.PtContainEps) return false;

            float halfWidth = 0.5f * baseWidth;
            float halfDepth = 0.5f * baseDepth;
            Vector3 tipPosition = Vector3.up * height;
            Vector3 p0 = tipPosition;
            Vector3 p1 = Vector3.right * halfWidth - Vector3.forward * halfDepth;
            Vector3 p2 = p1 - Vector3.right * baseWidth;
            Plane trianglePlane = new Plane(p0, p1, p2);
            if (trianglePlane.GetDistanceToPoint(point) > epsilon.PtContainEps) return false;

            p0 = tipPosition;
            p1 = Vector3.right * halfWidth + Vector3.forward * halfDepth;
            p2 = p1 - Vector3.forward * baseDepth;
            trianglePlane = new Plane(p0, p1, p2);
            if (trianglePlane.GetDistanceToPoint(point) > epsilon.PtContainEps) return false;

            p0 = tipPosition;
            p1 = -Vector3.right * halfWidth + Vector3.forward * halfDepth;
            p2 = p1 + Vector3.right * baseWidth;
            trianglePlane = new Plane(p0, p1, p2);
            if (trianglePlane.GetDistanceToPoint(point) > epsilon.PtContainEps) return false;

            p0 = tipPosition;
            p1 = -Vector3.right * halfWidth - Vector3.forward * halfDepth;
            p2 = p1 + Vector3.forward * baseDepth;
            trianglePlane = new Plane(p0, p1, p2);
            if (trianglePlane.GetDistanceToPoint(point) > epsilon.PtContainEps) return false;

            return true;
        }
    }
}