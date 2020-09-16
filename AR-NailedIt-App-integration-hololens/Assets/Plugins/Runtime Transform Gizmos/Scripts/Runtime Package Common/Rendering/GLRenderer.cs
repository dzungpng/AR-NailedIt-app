using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class GLRenderer
    {
        public static void DrawQuads2D(List<Vector2> quadPoints, Camera camera)
        {
            int numQuads = quadPoints.Count / 4;
            if (numQuads < 1) return;

            GL.PushMatrix();
            GL.LoadOrtho();

            GL.Begin(GL.QUADS);
            for (int quadIndex = 0; quadIndex < numQuads; ++quadIndex )
            {
                int basePtIndex = quadIndex * 4;
                GL.Vertex(camera.ScreenToViewportPoint(quadPoints[basePtIndex]));
                GL.Vertex(camera.ScreenToViewportPoint(quadPoints[basePtIndex + 1]));
                GL.Vertex(camera.ScreenToViewportPoint(quadPoints[basePtIndex + 2]));
                GL.Vertex(camera.ScreenToViewportPoint(quadPoints[basePtIndex + 3]));
            }

            GL.End();
            GL.PopMatrix();
        }

        public static void DrawLineLoop2D(List<Vector2> linePoints, Camera camera)
        {
            if (linePoints.Count < 2) return;

            GL.PushMatrix();
            GL.LoadOrtho();

            GL.Begin(GL.LINES);
            for (int pointIndex = 0; pointIndex < linePoints.Count; ++pointIndex)
            {
                Vector3 firstPoint = linePoints[pointIndex];
                Vector3 secondPoint = linePoints[(pointIndex + 1) % linePoints.Count];

                firstPoint = camera.ScreenToViewportPoint(firstPoint);
                secondPoint = camera.ScreenToViewportPoint(secondPoint);

                GL.Vertex(new Vector3(firstPoint.x, firstPoint.y, 0.0f));
                GL.Vertex(new Vector3(secondPoint.x, secondPoint.y, 0.0f));
            }

            GL.End();
            GL.PopMatrix();
        }

        public static void DrawLineLoop2D(List<Vector2> linePoints, Vector2 translation, Vector2 scale, Camera camera)
        {
            if (linePoints.Count < 2) return;

            GL.PushMatrix();
            GL.LoadOrtho();

            GL.Begin(GL.LINES);
            for (int pointIndex = 0; pointIndex < linePoints.Count; ++pointIndex)
            {
                Vector3 firstPoint = Vector2.Scale(linePoints[pointIndex], scale) + translation;
                Vector3 secondPoint = Vector2.Scale(linePoints[(pointIndex + 1) % linePoints.Count], scale) + translation;

                firstPoint = camera.ScreenToViewportPoint(firstPoint);
                secondPoint = camera.ScreenToViewportPoint(secondPoint);

                GL.Vertex(new Vector3(firstPoint.x, firstPoint.y, 0.0f));
                GL.Vertex(new Vector3(secondPoint.x, secondPoint.y, 0.0f));
            }

            GL.End();
            GL.PopMatrix();
        }

        public static void DrawLines2D(List<Vector2> linePoints, Camera camera)
        {
            if (linePoints.Count < 2) return;

            GL.PushMatrix();
            GL.LoadOrtho();

            GL.Begin(GL.LINES);
            for (int pointIndex = 0; pointIndex < linePoints.Count - 1; ++pointIndex)
            {
                Vector3 firstPoint = linePoints[pointIndex];
                Vector3 secondPoint = linePoints[pointIndex + 1];

                firstPoint = camera.ScreenToViewportPoint(firstPoint);
                secondPoint = camera.ScreenToViewportPoint(secondPoint);

                GL.Vertex(new Vector3(firstPoint.x, firstPoint.y, 0.0f));
                GL.Vertex(new Vector3(secondPoint.x, secondPoint.y, 0.0f));
            }

            GL.End();
            GL.PopMatrix();
        }

        public static void DrawLines2D(List<Vector2> linePoints, Vector2 translation, Vector2 scale, Camera camera)
        {
            if (linePoints.Count < 2) return;

            GL.PushMatrix();
            GL.LoadOrtho();

            GL.Begin(GL.LINES);
            for (int pointIndex = 0; pointIndex < linePoints.Count - 1; ++pointIndex)
            {
                Vector3 firstPoint = Vector2.Scale(linePoints[pointIndex], scale) + translation;
                Vector3 secondPoint = Vector2.Scale(linePoints[pointIndex + 1], scale) + translation;

                firstPoint = camera.ScreenToViewportPoint(firstPoint);
                secondPoint = camera.ScreenToViewportPoint(secondPoint);

                GL.Vertex(new Vector3(firstPoint.x, firstPoint.y, 0.0f));
                GL.Vertex(new Vector3(secondPoint.x, secondPoint.y, 0.0f));
            }

            GL.End();
            GL.PopMatrix();
        }

        public static void DrawLine2D(Vector2 startPoint, Vector2 endPoint, Camera camera)
        {
            GL.PushMatrix();
            GL.LoadOrtho();

            GL.Begin(GL.LINES);
            GL.Vertex(camera.ScreenToViewportPoint(startPoint));
            GL.Vertex(camera.ScreenToViewportPoint(endPoint));
            GL.End();

            GL.PopMatrix();
        }

        public static void DrawLine3D(Vector3 startPoint, Vector3 endPoint)
        {
            GL.Begin(GL.LINES);
            GL.Vertex(startPoint);
            GL.Vertex(endPoint);
            GL.End();
        }

        public static void DrawLines3D(List<Vector3> linePoints)
        {
            if (linePoints.Count < 2) return;

            GL.Begin(GL.LINES);
            for (int pointIndex = 0; pointIndex < linePoints.Count - 1; ++pointIndex)
            {
                Vector3 firstPoint = linePoints[pointIndex];
                Vector3 secondPoint = linePoints[pointIndex + 1];

                GL.Vertex(firstPoint);
                GL.Vertex(secondPoint);
            }
            GL.End();
        }

        public static void DrawLineLoop3D(List<Vector3> linePoints)
        {
            if (linePoints.Count < 2) return;

            GL.Begin(GL.LINES);
            for (int pointIndex = 0; pointIndex < linePoints.Count; ++pointIndex)
            {
                Vector3 firstPoint = linePoints[pointIndex];
                Vector3 secondPoint = linePoints[(pointIndex + 1) % linePoints.Count];

                GL.Vertex(firstPoint);
                GL.Vertex(secondPoint);
            }

            GL.End();
        }

        public static void DrawLineStrip3D(List<Vector3> linePoints)
        {
            if (linePoints.Count < 2) return;

            GL.Begin(GL.LINES);
            for (int pointIndex = 0; pointIndex < linePoints.Count - 1; ++pointIndex)
            {
                GL.Vertex(linePoints[pointIndex]);
                GL.Vertex(linePoints[pointIndex + 1]);
            }

            GL.End();
        }

        public static void DrawLineLoop3D(List<Vector3> linePoints, Vector3 pointOffset)
        {
            if (linePoints.Count < 2) return;

            GL.Begin(GL.LINES);
            for (int pointIndex = 0; pointIndex < linePoints.Count; ++pointIndex)
            {
                Vector3 firstPoint = linePoints[pointIndex] + pointOffset;
                Vector3 secondPoint = linePoints[(pointIndex + 1) % linePoints.Count] + pointOffset;

                GL.Vertex(firstPoint);
                GL.Vertex(secondPoint);
            }

            GL.End();
        }

        public static void DrawLinePairs3D(List<Vector3> pairPoints)
        {
            if (pairPoints.Count < 2 || pairPoints.Count % 2 != 0) return;

            GL.Begin(GL.LINES);
            for (int pointIndex = 0; pointIndex < pairPoints.Count; pointIndex += 2)
            {
                Vector3 firstPoint = pairPoints[pointIndex];
                Vector3 secondPoint = pairPoints[(pointIndex + 1)];

                GL.Vertex(firstPoint);
                GL.Vertex(secondPoint);
            }

            GL.End();
        }

        public static void DrawRectBorder2D(Rect rect, Camera camera)
        {
            DrawLineLoop2D(rect.GetCornerPoints(), camera);
        }

        public static void DrawRect2D(Rect rect, Camera camera)
        {
            GL.PushMatrix();
            GL.LoadOrtho();

            GL.Begin(GL.QUADS);

            List<Vector2> rectCorners = rect.GetCornerPoints();
            rectCorners[0] = camera.ScreenToViewportPoint(rectCorners[0]);
            rectCorners[1] = camera.ScreenToViewportPoint(rectCorners[1]);
            rectCorners[2] = camera.ScreenToViewportPoint(rectCorners[2]);
            rectCorners[3] = camera.ScreenToViewportPoint(rectCorners[3]);

            GL.Vertex(rectCorners[0]);
            GL.Vertex(rectCorners[1]);
            GL.Vertex(rectCorners[2]);
            GL.Vertex(rectCorners[3]);

            GL.End();
            GL.PopMatrix();
        }

        public static void DrawCircleBorder2D(Vector2 circleCenter, float circleRadius, int numPoints, Camera camera)
        {
            List<Vector2> circlePoints = PrimitiveFactory.Generate2DCircleBorderPointsCW(circleCenter, circleRadius, numPoints);
            DrawLineLoop2D(circlePoints, camera);
        }

        public static void DrawCircle2D(Vector2 circleCenter, float circleRadius, int numPoints, Camera camera)
        {
            List<Vector2> circlePoints = PrimitiveFactory.Generate2DCircleBorderPointsCW(circleCenter, circleRadius, numPoints);
            DrawTriangleFan2D(circleCenter, circlePoints, camera);
        }

        public static void DrawCircleBorder3D(Vector3 circleCenter, float circleRadius, Vector3 circleRight, Vector3 circleUp, int numPoints)
        {
            List<Vector3> circlePoints = PrimitiveFactory.Generate3DCircleBorderPoints(circleCenter, circleRadius, circleRight, circleUp, numPoints);
            DrawLineLoop3D(circlePoints);
        }

        public static void DrawCircle3D(Vector2 circleCenter, float circleRadius, Vector3 circleRight, Vector3 circleUp, int numPoints)
        {
            List<Vector3> circlePoints = PrimitiveFactory.Generate3DCircleBorderPoints(circleCenter, circleRadius, circleRight, circleUp, numPoints);
            DrawTriangleFan3D(circleCenter, circlePoints);
        }

        public static void DrawSphereBorder(Camera camera, Vector3 sphereCenter, float sphereRadius, int numPoints)
        {
            List<Vector3> boundaryPoints = PrimitiveFactory.GenerateSphereBorderPoints(camera, sphereCenter, sphereRadius, numPoints);
            DrawLineLoop3D(boundaryPoints);
        }

        public static void DrawTriangleFan2D(Vector2 origin, List<Vector2> points, Vector2 translation, Vector2 scale, Camera camera)
        {
            int numTriangles = points.Count - 1;
            if (numTriangles < 1) return;

            GL.PushMatrix();
            GL.LoadOrtho();

            GL.Begin(GL.TRIANGLES);

            origin = camera.ScreenToViewportPoint(Vector2.Scale(origin, scale) + translation);
            for(int triangleIndex = 0; triangleIndex < numTriangles; ++triangleIndex)
            {
                GL.Vertex(origin);
                GL.Vertex(camera.ScreenToViewportPoint(Vector2.Scale(points[triangleIndex], scale) + translation));
                GL.Vertex(camera.ScreenToViewportPoint(Vector2.Scale(points[triangleIndex + 1], scale) + translation));
            }

            GL.End();
            GL.PopMatrix();
        }

        public static void DrawTriangleFan2D(Vector2 origin, List<Vector2> points, Camera camera)
        {
            int numTriangles = points.Count - 1;
            if (numTriangles < 1) return;

            GL.PushMatrix();
            GL.LoadOrtho();

            GL.Begin(GL.TRIANGLES);

            origin = camera.ScreenToViewportPoint(origin);
            for (int triangleIndex = 0; triangleIndex < numTriangles; ++triangleIndex)
            {
                GL.Vertex(origin);
                GL.Vertex(camera.ScreenToViewportPoint(points[triangleIndex]));
                GL.Vertex(camera.ScreenToViewportPoint(points[triangleIndex + 1]));
            }

            GL.End();
            GL.PopMatrix();
        }

        public static void DrawTriangleFan3D(Vector3 origin, List<Vector3> points, Vector3 translation, Vector3 scale)
        {
            int numTriangles = points.Count - 1;
            if (numTriangles < 1) return;

            GL.Begin(GL.TRIANGLES);

            origin = Vector3.Scale(origin, scale) + translation;
            for (int triangleIndex = 0; triangleIndex < numTriangles; ++triangleIndex)
            {
                GL.Vertex(origin);
                GL.Vertex(Vector3.Scale(points[triangleIndex], scale) + translation);
                GL.Vertex(Vector3.Scale(points[triangleIndex + 1], scale) + translation);
            }

            GL.End();
        }

        public static void DrawTriangleFan3D(Vector3 origin, List<Vector3> points)
        {
            int numTriangles = points.Count - 1;
            if (numTriangles < 1) return;

            GL.Begin(GL.TRIANGLES);

            for (int triangleIndex = 0; triangleIndex < numTriangles; ++triangleIndex)
            {
                GL.Vertex(origin);
                GL.Vertex(points[triangleIndex]);
                GL.Vertex(points[triangleIndex + 1]);
            }

            GL.End();
        }
    }
}
