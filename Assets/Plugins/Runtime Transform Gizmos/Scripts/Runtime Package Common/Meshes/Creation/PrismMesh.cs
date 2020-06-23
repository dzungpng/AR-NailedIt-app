using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class PrismMesh
    {
        public static Mesh CreateTriangularPrism(Vector3 baseCenter, float baseWidth, float baseDepth, float topWidth, float topDepth, float height, Color color)
        {
            baseWidth = Mathf.Max(Mathf.Abs(baseWidth), 1e-4f);
            baseDepth = Mathf.Max(Mathf.Abs(baseDepth), 1e-4f);
            topWidth = Mathf.Max(Mathf.Abs(topWidth), 1e-4f);
            topDepth = Mathf.Max(Mathf.Abs(topDepth), 1e-4f);
            height = Mathf.Max(Mathf.Abs(height), 1e-4f);

            List<Vector3> cornerPoints = PrismMath.CalcTriangPrismCornerPoints(baseCenter, baseWidth, baseDepth, topWidth, topDepth, height, Quaternion.identity);
            Vector3 baseLeftPt = cornerPoints[(int)TriangularPrismCorner.BaseLeft];
            Vector3 baseRightPt = cornerPoints[(int)TriangularPrismCorner.BaseRight];
            Vector3 baseForwardPt = cornerPoints[(int)TriangularPrismCorner.BaseForward];

            Vector3 topLeftPt = cornerPoints[(int)TriangularPrismCorner.TopLeft];
            Vector3 topRightPt = cornerPoints[(int)TriangularPrismCorner.TopRight];
            Vector3 topForwardPt = cornerPoints[(int)TriangularPrismCorner.TopForward];

            Vector3[] positions = new Vector3[]
            {
                // Top face
                topLeftPt, topForwardPt, topRightPt,

                // Bottom face
                baseLeftPt, baseRightPt, baseForwardPt,

                // Back face
                baseLeftPt, topLeftPt, topRightPt, baseRightPt,

                // Left face
                baseLeftPt, baseForwardPt, topForwardPt, topLeftPt,

                // Right face
                baseRightPt, topRightPt, topForwardPt, baseForwardPt
            };

            int[] indices = new int[]
            {
                // Top face
                0, 1, 2,

                // Bottom face
                3, 4, 5,

                // Back face
                6, 7, 8,
                8, 9, 6,

                // Left face
                10, 11, 12,
                12, 13, 10,

                // Right face
                14, 15, 16,
                16, 17, 14
            };

            Vector3 leftFaceNormal = Vector3.Cross((positions[11] - positions[10]), (positions[13] - positions[10])).normalized;
            Vector3 rightFaceNormal = Vector3.Cross((positions[15] - positions[14]), (positions[17] - positions[14])).normalized;
            Vector3[] normals = new Vector3[]
            {
                // Top face
                Vector3.up, Vector3.up, Vector3.up,

                // Bottom face
                -Vector3.up, -Vector3.up, -Vector3.up,

                // Back face
                -Vector3.forward, -Vector3.forward, -Vector3.forward, -Vector3.forward,

                // Left face
                leftFaceNormal, leftFaceNormal, leftFaceNormal, leftFaceNormal,

                // Right face
                rightFaceNormal, rightFaceNormal, rightFaceNormal, rightFaceNormal
            };

            Mesh mesh = new Mesh();
            mesh.vertices = positions;
            mesh.colors = ColorEx.GetFilledColorArray(positions.Length, color);
            mesh.normals = normals;
            mesh.SetIndices(indices, MeshTopology.Triangles, 0);
            mesh.UploadMeshData(false);

            return mesh;
        }

        public static Mesh CreateWireTriangularPrism(Vector3 baseCenter, float baseWidth, float baseDepth, float topWidth, float topDepth, float height, Color color)
        {
            baseWidth = Mathf.Max(Mathf.Abs(baseWidth), 1e-4f);
            baseDepth = Mathf.Max(Mathf.Abs(baseDepth), 1e-4f);
            topWidth = Mathf.Max(Mathf.Abs(topWidth), 1e-4f);
            topDepth = Mathf.Max(Mathf.Abs(topDepth), 1e-4f);
            height = Mathf.Max(Mathf.Abs(height), 1e-4f);

            List<Vector3> cornerPoints = PrismMath.CalcTriangPrismCornerPoints(baseCenter, baseWidth, baseDepth, topWidth, topDepth, height, Quaternion.identity);
            Vector3 baseLeftPt = cornerPoints[(int)TriangularPrismCorner.BaseLeft];
            Vector3 baseRightPt = cornerPoints[(int)TriangularPrismCorner.BaseRight];
            Vector3 baseForwardPt = cornerPoints[(int)TriangularPrismCorner.BaseForward];

            Vector3 topLeftPt = cornerPoints[(int)TriangularPrismCorner.TopLeft];
            Vector3 topRightPt = cornerPoints[(int)TriangularPrismCorner.TopRight];
            Vector3 topForwardPt = cornerPoints[(int)TriangularPrismCorner.TopForward];

            Vector3[] positions = new Vector3[]
            {
                baseLeftPt, baseForwardPt, baseRightPt,
                topLeftPt, topForwardPt, topRightPt
            };

            int[] indices = new int[] { 0, 1, 1, 2, 2, 0, 3, 4, 4, 5, 5, 3, 0, 3, 1, 4, 2, 5 };

            Mesh mesh = new Mesh();
            mesh.vertices = positions;
            mesh.colors = ColorEx.GetFilledColorArray(positions.Length, color);
            mesh.SetIndices(indices, MeshTopology.Lines, 0);
            mesh.UploadMeshData(false);

            return mesh;
        }
    }
}
