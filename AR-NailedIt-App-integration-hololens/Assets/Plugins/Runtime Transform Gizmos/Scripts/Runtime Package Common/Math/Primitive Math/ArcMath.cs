using System;
using UnityEngine;

namespace RTG
{
    public static class ArcMath
    {
        public static float ConvertToSh3DArcAngle(Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart)
        {
            degreesFromStart %= 360.0f;
            if (Mathf.Abs(degreesFromStart) > 180.0f)
            {
                Vector3 toStartPt = (arcStartPoint - arcOrigin);
                Vector3 toEndPt = (Quaternion.AngleAxis(degreesFromStart, arcPlaneNormal) * toStartPt).normalized;
                degreesFromStart = Vector3Ex.SignedAngle(toStartPt, toEndPt, arcPlaneNormal);
            }

            return degreesFromStart;
        }

        public static float ConvertToSh2DArcAngle(Vector2 arcOrigin, Vector2 arcStartPoint, float degreesFromStart)
        {
            degreesFromStart %= 360.0f;
            if (Mathf.Abs(degreesFromStart) > 180.0f)
            {
                Vector2 toStartPt = (arcStartPoint - arcOrigin);
                Vector2 toEndPt = (Quaternion.AngleAxis(degreesFromStart, Vector3.forward) * toStartPt).normalized;
                degreesFromStart = Vector3Ex.SignedAngle(toStartPt, toEndPt, Vector3.forward);
            }

            return degreesFromStart;
        }

        public static OBB CalcSh3DArcOBB(Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = new ArcEpsilon())
        {
            degreesFromStart = ConvertToSh3DArcAngle(arcOrigin, arcStartPoint, arcPlaneNormal, degreesFromStart);

            Vector3 toStartPt = (arcStartPoint - arcOrigin);
            Vector3 toMidBorderPt = Quaternion.AngleAxis(degreesFromStart * 0.5f, arcPlaneNormal) * toStartPt;
            Vector3 midBorderPt = arcOrigin + toMidBorderPt;

            Quaternion obbRotation = Quaternion.LookRotation(toMidBorderPt.normalized, arcPlaneNormal);
            Vector3 obbCenter = arcOrigin + toMidBorderPt * 0.5f;
            OBB obb = new OBB(obbCenter, obbRotation);

            Vector3 toEndPt = Quaternion.AngleAxis(degreesFromStart, arcPlaneNormal) * toStartPt;
            float sizeEpsAdd = 2.0f * epsilon.AreaEps;
            float obbWidth = Vector3Ex.AbsDot(toEndPt, obb.Right) + Vector3Ex.AbsDot(toStartPt, obb.Right) + sizeEpsAdd;
            float obbDepth = midBorderPt.magnitude + sizeEpsAdd;
            float obbHeight = epsilon.ExtrudeEps * 2.0f;
            obb.Size = new Vector3(obbWidth, obbHeight, obbDepth);

            return obb;
        }

        public static OBB CalcLg3DArcOBB(Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = new ArcEpsilon())
        {
            if (Math.Abs(degreesFromStart) <= 180.0f) return CalcSh3DArcOBB(arcOrigin, arcStartPoint, arcPlaneNormal, degreesFromStart, epsilon);

            Vector3 toStartPt = (arcStartPoint - arcOrigin);
            Vector3 toEndPt = Quaternion.AngleAxis(degreesFromStart, arcPlaneNormal) * toStartPt;
            Vector3 endPt = arcOrigin + toEndPt;
            Vector3 fromStartToEnd = (endPt - arcStartPoint);
            Vector3 midPt = arcStartPoint + fromStartToEnd * 0.5f;
            Vector3 toMidPt = midPt - arcOrigin;
            midPt += toMidPt.normalized * epsilon.AreaEps;

            float radius = (arcOrigin - arcStartPoint).magnitude;
            float obbDepth = radius + toMidPt.magnitude + 2.0f * epsilon.AreaEps;
            Quaternion obbRotation = Quaternion.LookRotation(toMidPt.normalized, arcPlaneNormal);
            Vector3 obbCenter = midPt - toMidPt.normalized * obbDepth * 0.5f;
            OBB obb = new OBB(obbCenter, obbRotation);

            float obbWidth = (radius + epsilon.AreaEps) * 2.0f;
            float obbHeight = epsilon.ExtrudeEps * 2.0f;
            obb.Size = new Vector3(obbWidth, obbHeight, obbDepth);

            return obb;
        }

        public static bool RaycastShArc(Ray ray, out float t, Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = new ArcEpsilon())
        {
            t = 0.0f;

            degreesFromStart = ConvertToSh3DArcAngle(arcOrigin, arcStartPoint, arcPlaneNormal, degreesFromStart);
            Plane arcPlane = new Plane(arcPlaneNormal, arcOrigin);

            float rayEnter;
            if (arcPlane.Raycast(ray, out rayEnter) &&
                ShArcContains3DPoint(ray.GetPoint(rayEnter), false, arcOrigin,
                arcStartPoint, arcPlaneNormal, degreesFromStart, epsilon))
            {
                t = rayEnter;
                return true;
            }

            if (epsilon.ExtrudeEps != 0.0f)
            {
                float dot = Vector3Ex.AbsDot(ray.direction, arcPlaneNormal);
                if (dot < ExtrudeEpsThreshold.Get)
                {
                    OBB arcOBB = CalcSh3DArcOBB(arcOrigin, arcStartPoint, arcPlaneNormal, degreesFromStart, epsilon);
                    return BoxMath.Raycast(ray, arcOBB.Center, arcOBB.Size, arcOBB.Rotation);
                }
            }

            return false;
        }

        public static bool RaycastShArcWire(Ray ray, out float t, Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = new ArcEpsilon())
        {
            t = 0.0f;

            degreesFromStart = ConvertToSh3DArcAngle(arcOrigin, arcStartPoint, arcPlaneNormal, degreesFromStart);
            Plane arcPlane = new Plane(arcPlaneNormal, arcOrigin);

            float rayEnter;
            if (arcPlane.Raycast(ray, out rayEnter) &&
                Is3DPointOnShArcWire(ray.GetPoint(rayEnter), false, arcOrigin,
                arcStartPoint, arcPlaneNormal, degreesFromStart, epsilon))
            {
                t = rayEnter;
                return true;
            }

            if (epsilon.ExtrudeEps != 0.0f)
            {
                float dot = Vector3Ex.AbsDot(ray.direction, arcPlaneNormal);
                if (dot < ExtrudeEpsThreshold.Get)
                {
                    OBB arcOBB = CalcSh3DArcOBB(arcOrigin, arcStartPoint, arcPlaneNormal, degreesFromStart, epsilon);
                    return BoxMath.Raycast(ray, arcOBB.Center, arcOBB.Size, arcOBB.Rotation);
                }
            }

            return false;
        }

        public static bool RaycastLgArc(Ray ray, out float t, Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = new ArcEpsilon())
        {
            t = 0.0f;
            Plane arcPlane = new Plane(arcPlaneNormal, arcOrigin);

            float rayEnter;
            if (arcPlane.Raycast(ray, out rayEnter) &&
                LgArcContains3DPoint(ray.GetPoint(rayEnter), false, arcOrigin,
                arcStartPoint, arcPlaneNormal, degreesFromStart, epsilon))
            {
                t = rayEnter;
                return true;
            }

            if (epsilon.ExtrudeEps != 0.0f)
            {
                float dot = Vector3Ex.AbsDot(ray.direction, arcPlaneNormal);
                if (dot < ExtrudeEpsThreshold.Get)
                {
                    OBB arcOBB = CalcLg3DArcOBB(arcOrigin, arcStartPoint, arcPlaneNormal, degreesFromStart, epsilon);
                    return BoxMath.Raycast(ray, arcOBB.Center, arcOBB.Size, arcOBB.Rotation);
                }
            }

            return false;
        }

        public static bool RaycastLgArcWire(Ray ray, out float t, Vector3 arcOrigin, Vector3 arcStartPoint, Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = new ArcEpsilon())
        {
            t = 0.0f;
            Plane arcPlane = new Plane(arcPlaneNormal, arcOrigin);

            float rayEnter;
            if (arcPlane.Raycast(ray, out rayEnter) &&
                Is3DPointOnLgArcWire(ray.GetPoint(rayEnter), false, arcOrigin,
                arcStartPoint, arcPlaneNormal, degreesFromStart, epsilon))
            {
                t = rayEnter;
                return true;
            }

            if (epsilon.ExtrudeEps != 0.0f)
            {
                float dot = Vector3Ex.AbsDot(ray.direction, arcPlaneNormal);
                if (dot < ExtrudeEpsThreshold.Get)
                {
                    OBB arcOBB = CalcLg3DArcOBB(arcOrigin, arcStartPoint, arcPlaneNormal, degreesFromStart, epsilon);
                    return BoxMath.Raycast(ray, arcOBB.Center, arcOBB.Size, arcOBB.Rotation);
                }
            }

            return false;
        }

        public static bool ShArcContains3DPoint(Vector3 point, bool checkOnPlane, Vector3 arcOrigin, Vector3 arcStartPoint, 
            Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = new ArcEpsilon())
        {
            Vector3 toStartPt = (arcStartPoint - arcOrigin);
            Vector3 toPt = (point - arcOrigin);

            float arcRadius = (arcOrigin - arcStartPoint).magnitude + epsilon.AreaEps;
            if (arcRadius < toPt.magnitude) return false;

            Plane arcPlane = new Plane(arcPlaneNormal, arcOrigin);
            if (checkOnPlane && arcPlane.GetAbsDistanceToPoint(point) > epsilon.ExtrudeEps) return false;

            float startToPtAngle = Vector3Ex.SignedAngle(toStartPt, toPt, arcPlaneNormal);
            if (Mathf.Sign(startToPtAngle) == Mathf.Sign(degreesFromStart) &&
                Mathf.Abs(startToPtAngle) <= Mathf.Abs(degreesFromStart)) return true;

            if (epsilon.AreaEps != 0.0f)
            {
                Vector3 arcEndPoint = Quaternion.AngleAxis(degreesFromStart, arcPlaneNormal) * toStartPt + arcOrigin;
                float distanceFromSegment = point.GetDistanceToSegment(arcOrigin, arcStartPoint);
                if (distanceFromSegment <= epsilon.AreaEps) return true;

                distanceFromSegment = point.GetDistanceToSegment(arcOrigin, arcEndPoint);
                if (distanceFromSegment <= epsilon.AreaEps) return true;
            }

            return false;
        }

        public static bool Is3DPointOnShArcWire(Vector3 point, bool checkOnPlane, Vector3 arcOrigin, Vector3 arcStartPoint,
            Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = new ArcEpsilon())
        {
            Vector3 toStartPt = (arcStartPoint - arcOrigin);
            Vector3 toPt = (point - arcOrigin);

            float distToPt = toPt.magnitude;
            float arcRadius = (arcOrigin - arcStartPoint).magnitude;

            Plane arcPlane = new Plane(arcPlaneNormal, arcOrigin);
            if (checkOnPlane && arcPlane.GetAbsDistanceToPoint(point) > epsilon.ExtrudeEps) return false;

            float startToPtAngle = Vector3Ex.SignedAngle(toStartPt, toPt, arcPlaneNormal);
            if (Mathf.Sign(startToPtAngle) == Mathf.Sign(degreesFromStart) &&
                Mathf.Abs(startToPtAngle) <= Mathf.Abs(degreesFromStart))
            {
                if (distToPt >= arcRadius - epsilon.WireEps &&
                    distToPt <= arcRadius + epsilon.WireEps) return true;
            }

            Vector3 arcEndPoint = Quaternion.AngleAxis(degreesFromStart, arcPlaneNormal) * toStartPt + arcOrigin;
            float distanceFromSegment = point.GetDistanceToSegment(arcOrigin, arcStartPoint);
            if (distanceFromSegment <= epsilon.WireEps) return true;

            distanceFromSegment = point.GetDistanceToSegment(arcOrigin, arcEndPoint);
            if (distanceFromSegment <= epsilon.WireEps) return true;

            return false;
        }

        public static bool ShArcContains2DPoint(Vector2 point, Vector2 arcOrigin, Vector2 arcStartPoint, float degreesFromStart, ArcEpsilon epsilon = new ArcEpsilon())
        {
            degreesFromStart = ArcMath.ConvertToSh2DArcAngle(arcOrigin, arcStartPoint, degreesFromStart);
            epsilon.ExtrudeEps = 0.0f;

            return ShArcContains3DPoint(point.ToVector3(), false, arcOrigin.ToVector3(), arcStartPoint.ToVector3(), Vector3.forward, degreesFromStart, epsilon);
        }

        public static bool LgArcContains3DPoint(Vector3 point, bool checkOnPlane, Vector3 arcOrigin, Vector3 arcStartPoint, 
            Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = new ArcEpsilon())
        {
            degreesFromStart %= 360.0f;
            if (Mathf.Abs(degreesFromStart) <= 180.0f) return ShArcContains3DPoint(point, checkOnPlane, arcOrigin, arcStartPoint, arcPlaneNormal, degreesFromStart, epsilon);

            Vector3 toPt = (point - arcOrigin);
            Vector3 toStartPt = (arcStartPoint - arcOrigin);

            degreesFromStart = ConvertToSh3DArcAngle(arcOrigin, arcStartPoint, arcPlaneNormal, degreesFromStart);
            float startToPtAngle = Vector3Ex.SignedAngle(toStartPt, toPt, arcPlaneNormal);
            bool isInsideShortestArc = Mathf.Sign(startToPtAngle) == Mathf.Sign(degreesFromStart) &&
                                       Mathf.Abs(startToPtAngle) <= Mathf.Abs(degreesFromStart);

            if (isInsideShortestArc && epsilon.AreaEps != 0.0f)
            {
                Vector3 arcEndPoint = Quaternion.AngleAxis(degreesFromStart, arcPlaneNormal) * toStartPt + arcOrigin;
                float distanceFromSegment = point.GetDistanceToSegment(arcOrigin, arcStartPoint);
                if (distanceFromSegment <= epsilon.AreaEps) return true;

                distanceFromSegment = point.GetDistanceToSegment(arcOrigin, arcEndPoint);
                if (distanceFromSegment <= epsilon.AreaEps) return true;

                return false;
            }

            float arcRadius = (arcOrigin - arcStartPoint).magnitude + epsilon.AreaEps;
            return toPt.magnitude <= arcRadius;
        }

        public static bool Is3DPointOnLgArcWire(Vector3 point, bool checkOnPlane, Vector3 arcOrigin, Vector3 arcStartPoint,
            Vector3 arcPlaneNormal, float degreesFromStart, ArcEpsilon epsilon = new ArcEpsilon())
        {
            if (Mathf.Abs(degreesFromStart) <= 180.0f) return Is3DPointOnShArcWire(point, checkOnPlane, arcOrigin, arcStartPoint, arcPlaneNormal, degreesFromStart, epsilon);

            Vector3 toStartPt = (arcStartPoint - arcOrigin);
            Vector3 toPt = (point - arcOrigin);

            float distToPt = toPt.magnitude;
            float arcRadius = (arcOrigin - arcStartPoint).magnitude;

            Plane arcPlane = new Plane(arcPlaneNormal, arcOrigin);
            if (checkOnPlane && arcPlane.GetAbsDistanceToPoint(point) > epsilon.ExtrudeEps) return false;

            Vector3 arcEndPoint = Quaternion.AngleAxis(degreesFromStart, arcPlaneNormal) * toStartPt + arcOrigin;
            float distanceFromSegment = point.GetDistanceToSegment(arcOrigin, arcStartPoint);
            if (distanceFromSegment <= epsilon.WireEps) return true;

            distanceFromSegment = point.GetDistanceToSegment(arcOrigin, arcEndPoint);
            if (distanceFromSegment <= epsilon.WireEps) return true;

            degreesFromStart = ConvertToSh3DArcAngle(arcOrigin, arcStartPoint, arcPlaneNormal, degreesFromStart);
            float startToPtAngle = Vector3Ex.SignedAngle(toStartPt, toPt, arcPlaneNormal);
            if (Mathf.Sign(startToPtAngle) == Mathf.Sign(degreesFromStart) &&
                Mathf.Abs(startToPtAngle) <= Mathf.Abs(degreesFromStart)) return false;

            return (distToPt >= arcRadius - epsilon.WireEps &&
                    distToPt <= arcRadius + epsilon.WireEps);
        }

        public static bool LgArcContains2DPoint(Vector2 point, Vector2 arcOrigin, Vector2 arcStartPoint, float degreesFromStart, ArcEpsilon epsilon = new ArcEpsilon())
        {
            epsilon.ExtrudeEps = 0.0f;
            return LgArcContains3DPoint(point.ToVector3(), false, arcOrigin.ToVector3(), arcStartPoint.ToVector3(), Vector3.forward, degreesFromStart, epsilon);
        }
    }
}
