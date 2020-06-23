using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class PrimitiveFactory
    {
        public enum PolyBorderDirection
        {
            Inward = 0,
            Outward
        }

        public static List<Vector2> Generate2DPolyBorderQuadsCW(List<Vector2> cwPolyPoints, List<Vector2> cwBorderPts, PolyBorderDirection borderDirection, bool isClosed)
        {
            if (cwPolyPoints.Count != cwBorderPts.Count) return new List<Vector2>();

            int numQuads = cwPolyPoints.Count - 1;
            if (isClosed && numQuads < 3) return new List<Vector2>();
            if (!isClosed && numQuads < 2) return new List<Vector2>();

            var quadPoints = new List<Vector2>(numQuads * 4);

            if (borderDirection == PolyBorderDirection.Outward)
            {
                for (int ptIndex = 0; ptIndex < cwPolyPoints.Count - 1; ++ptIndex)
                {
                    quadPoints.Add(cwPolyPoints[ptIndex]);
                    quadPoints.Add(cwBorderPts[ptIndex]);
                    quadPoints.Add(cwBorderPts[ptIndex + 1]);
                    quadPoints.Add(cwPolyPoints[ptIndex + 1]);
                }
            }
            else
            {
                for (int ptIndex = 0; ptIndex < cwPolyPoints.Count - 1; ++ptIndex)
                {
                    quadPoints.Add(cwPolyPoints[ptIndex]);
                    quadPoints.Add(cwPolyPoints[ptIndex + 1]);
                    quadPoints.Add(cwBorderPts[ptIndex + 1]);
                    quadPoints.Add(cwBorderPts[ptIndex]);
                }
            }

            return quadPoints;
        }

        public static float PolyBorderDirToSign(PolyBorderDirection borderDirection)
        {
            return borderDirection == PolyBorderDirection.Inward ? -1.0f : 1.0f;
        }

        public static List<Vector2> Generate2DPolyBorderPointsCW(List<Vector2> cwPolyPoints, PolyBorderDirection borderDirection, float borderThickness, bool isClosed)
        {
            int numSegments = cwPolyPoints.Count - 1;
            if (isClosed && numSegments < 3) return new List<Vector2>();
            if (!isClosed && numSegments < 2) return new List<Vector2>();

            float borderWidth = borderThickness * PolyBorderDirToSign(borderDirection);
            var outputPoints = new List<Vector2>(cwPolyPoints.Count);

            if (isClosed)
            {
                Vector2 start0 = cwPolyPoints[0];
                Vector2 end0 = cwPolyPoints[1];
                Vector2 normal0 = (end0 - start0).GetNormal();

                Vector2 start1 = cwPolyPoints[cwPolyPoints.Count - 2];
                Vector2 end1 = cwPolyPoints[cwPolyPoints.Count - 1];
                Vector2 normal1 = (end1 - start1).GetNormal();

                float t;
                Vector2 rayDir = (end1 - start1).normalized;
                Vector2 rayOrigin = start1 + normal1 * borderWidth;
                if (PlaneMath.Raycast2D(rayOrigin, rayDir, normal0, start0 + normal0 * borderWidth, out t)) outputPoints.Add(rayOrigin + rayDir * t);                 
                else outputPoints.Add(start0);

                for (int segmentIndex = 0; segmentIndex < numSegments - 1; ++segmentIndex)
                {
                    Vector2 segmentStart = cwPolyPoints[segmentIndex];
                    Vector2 segmentEnd = cwPolyPoints[segmentIndex + 1];
                    Vector2 prevOutputPt = outputPoints[segmentIndex];

                    Vector2 nextSegmentEnd = cwPolyPoints[segmentIndex + 2];
                    Vector2 nextPlaneNormal = (nextSegmentEnd - segmentEnd).GetNormal();
                    Vector2 ptOnNextPlane = nextSegmentEnd + nextPlaneNormal * borderWidth;

                    rayDir = (segmentEnd - segmentStart).normalized;
                    if (PlaneMath.Raycast2D(prevOutputPt, rayDir, nextPlaneNormal, ptOnNextPlane, out t))
                    {
                        outputPoints.Add(prevOutputPt + rayDir * t);
                    }
                }

                outputPoints.Add(outputPoints[0]);
                
                return outputPoints;
            }
            else
            {
                Vector2 start = cwPolyPoints[0];
                Vector2 end = cwPolyPoints[1];
                Vector2 normal = (end - start).GetNormal();
                outputPoints.Add(start + normal * borderWidth);

                float t;
                for(int segmentIndex = 0; segmentIndex < numSegments - 1; ++segmentIndex)
                {
                    Vector2 segmentStart = cwPolyPoints[segmentIndex];
                    Vector2 segmentEnd = cwPolyPoints[segmentIndex + 1];
                    Vector2 prevOutputPt = outputPoints[segmentIndex];

                    Vector2 nextSegmentEnd = cwPolyPoints[segmentIndex + 2];
                    Vector2 nextPlaneNormal = (nextSegmentEnd - segmentEnd).GetNormal();
                    Vector2 ptOnNextPlane = nextSegmentEnd + nextPlaneNormal * borderWidth;

                    Vector2 rayDir = (segmentEnd - segmentStart).normalized;
                    if (PlaneMath.Raycast2D(prevOutputPt, rayDir, nextPlaneNormal, ptOnNextPlane, out t))
                    {
                        outputPoints.Add(prevOutputPt + rayDir * t);
                    }
                }

                start = cwPolyPoints[cwPolyPoints.Count - 2];
                end = cwPolyPoints[cwPolyPoints.Count - 1];
                normal = (end - start).GetNormal();
                outputPoints.Add(end + normal * borderWidth);

                return outputPoints;
            }
        }

        public static List<Vector2> Generate2DCircleBorderPointsCW(Vector2 circleCenter, float circleRadius, int numPoints)
        {
            numPoints = Mathf.Max(numPoints, 4);
            var points = new List<Vector2>(numPoints);

            float angleStep = 360.0f / (numPoints - 1);
            for (int ptIndex = 0; ptIndex < numPoints; ++ptIndex)
            {
                float angle = angleStep * ptIndex * Mathf.Deg2Rad;
                points.Add(circleCenter + new Vector2(Mathf.Sin(angle) * circleRadius, Mathf.Cos(angle) * circleRadius));
            }

            return points;
        }

        public static List<Vector3> Generate3DCircleBorderPoints(Vector3 circleCenter, float circleRadius, Vector3 circleRight, Vector3 circleUp, int numPoints)
        {
            numPoints = Mathf.Max(numPoints, 4);
            var points = new List<Vector3>(numPoints);

            float angleStep = 360.0f / (numPoints - 1);
            for (int ptIndex = 0; ptIndex < numPoints; ++ptIndex)
            {
                float angle = angleStep * ptIndex * Mathf.Deg2Rad;
                points.Add(circleCenter + circleRight * Mathf.Sin(angle) * circleRadius + circleUp * Mathf.Cos(angle) * circleRadius);
            }

            return points;
        }

        public static List<Vector3> GenerateSphereBorderPoints(Camera camera, Vector3 sphereCenter, float sphereRadius, int numPoints)
        {
            if (numPoints < 3) return new List<Vector3>();

            Transform cameraTransform = camera.transform;
            List<Vector3> borderPoints = Generate3DCircleBorderPoints(sphereCenter, sphereRadius, cameraTransform.right, cameraTransform.up, numPoints);

            for (int ptIndex = 0; ptIndex < numPoints; ++ptIndex)
            {
                Vector3 borderPt = borderPoints[ptIndex];
                Vector3 borderNormal = (borderPt - sphereCenter).normalized;
                Vector3 cameraRay = (borderPt - cameraTransform.position).normalized;
                if (camera.orthographic) cameraRay = cameraTransform.forward;

                float dot = Vector3.Dot(borderNormal, cameraRay);
                if (Mathf.Abs(dot) > 1e-5f)
                {
                    float angle = MathEx.SafeAcos(dot) * Mathf.Rad2Deg;
                    Vector3 rotationAxis = Vector3.Cross(cameraRay, borderNormal).normalized;

                    Quaternion rotation = Quaternion.AngleAxis(90.0f - angle, rotationAxis);
                    borderNormal = (rotation * borderNormal).normalized;

                    borderPoints[ptIndex] = sphereCenter + borderNormal * sphereRadius;
                }
            }

            return borderPoints;
        }

        public static List<Vector2> Generate2DArcBorderPoints(Vector2 arcOrigin, Vector2 arcStartPoint, float degreesFromStart, bool forceShortestArc, int numPoints)
        {
            if (numPoints < 2) return new List<Vector2>();

            var arcPoints = new List<Vector2>(numPoints);
            degreesFromStart %= 360.0f;

            Vector2 toStartPt = (arcStartPoint - arcOrigin);
            Quaternion rotation = Quaternion.AngleAxis(degreesFromStart, Vector3.forward);
            float arcRadius = toStartPt.magnitude;
            toStartPt.Normalize();

            if (forceShortestArc) degreesFromStart = ArcMath.ConvertToSh2DArcAngle(arcOrigin, arcStartPoint, degreesFromStart);

            float angleStep = degreesFromStart / (numPoints - 1);
            for (int ptIndex = 0; ptIndex < numPoints; ++ptIndex)
            {
                float angle = ptIndex * angleStep;
                rotation = Quaternion.AngleAxis(angle, Vector3.forward);
                Vector2 rotatedAxis = (rotation * toStartPt).normalized;
                arcPoints.Add(arcOrigin + rotatedAxis * arcRadius);
            }

            return arcPoints;
        }

        public static List<Vector2> ProjectArcPointsOnPoly2DBorder(Vector2 arcOrigin, List<Vector2> arcPoints, List<Vector2> clockwisePolyPoints)
        {
            if (arcPoints.Count < 2 || clockwisePolyPoints.Count < 3) return new List<Vector2>();

            int numPolyPoints = clockwisePolyPoints.Count;
            var projectedPoints = new List<Vector2>(arcPoints.Count);
            foreach (var arcPoint in arcPoints)
            {
                for (int polyPointIndex = 0; polyPointIndex < numPolyPoints; ++polyPointIndex)
                {
                    Vector2 firstPolyPoint = clockwisePolyPoints[polyPointIndex];
                    Vector2 secondPolyPoint = clockwisePolyPoints[(polyPointIndex + 1) % numPolyPoints];

                    Vector2 polySegment = secondPolyPoint - firstPolyPoint;
                    Plane2D segmentPlane = new Plane2D(polySegment.GetNormal(), firstPolyPoint);

                    float hitEnter;
                    Vector2 rayDir = (arcPoint - arcOrigin).normalized;
                    if (segmentPlane.Raycast(arcOrigin, rayDir, out hitEnter))
                    {
                        Vector2 hitPoint = arcOrigin + rayDir * hitEnter;
                        Vector2 toHitPoint = hitPoint - firstPolyPoint;
                        float dot = Vector2.Dot(toHitPoint, polySegment.normalized);
                        if (dot >= 0.0f && dot <= polySegment.magnitude)
                        {
                            projectedPoints.Add(hitPoint);
                            break;
                        }
                    }
                }
            }

            return projectedPoints;
        }

        public static List<Vector3> Generate3DArcBorderPoints(Vector3 arcOrigin, Vector3 arcStartPoint, Plane arcPlane, float degreesFromStart, bool forceShortestArc, int numPoints)
        {
            if (numPoints < 2) return new List<Vector3>();

            var arcPoints = new List<Vector3>(numPoints);
            degreesFromStart %= 360.0f;

            arcOrigin = arcPlane.ProjectPoint(arcOrigin);
            arcStartPoint = arcPlane.ProjectPoint(arcStartPoint);

            Vector3 toStartPt = (arcStartPoint - arcOrigin);
            Quaternion rotation = Quaternion.AngleAxis(degreesFromStart, arcPlane.normal);
            float arcRadius = toStartPt.magnitude;
            toStartPt.Normalize();

            if (forceShortestArc) degreesFromStart = ArcMath.ConvertToSh3DArcAngle(arcOrigin, arcStartPoint, arcPlane.normal, degreesFromStart);

            float angleStep = degreesFromStart / (numPoints - 1);
            for (int ptIndex = 0; ptIndex < numPoints; ++ptIndex)
            {
                float angle = ptIndex * angleStep;
                rotation = Quaternion.AngleAxis(angle, arcPlane.normal);
                Vector3 rotatedAxis = (rotation * toStartPt).normalized;
                arcPoints.Add(arcOrigin + rotatedAxis * arcRadius);
            }

            return arcPoints;
        }
    }
}
