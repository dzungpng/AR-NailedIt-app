using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class PyramidMesh
    {
        public static Mesh CreatePyramid(Vector3 baseCenter, float baseWidth, float baseDepth, float height, Color color)
        {
            baseWidth = Mathf.Max(Mathf.Abs(baseWidth), 1e-4f);
            baseDepth = Mathf.Max(Mathf.Abs(baseDepth), 1e-4f);
            height = Mathf.Max(Mathf.Abs(height), 1e-4f);

            float halfBaseWidth = baseWidth * 0.5f;
            float halfBaseDepth = baseDepth * 0.5f;

            Vector3 tipPosition = baseCenter + Vector3.up * height;
            Vector3[] positions = new Vector3[]
            {
                // Front face
                tipPosition,
                baseCenter + Vector3.right * halfBaseWidth - Vector3.forward * halfBaseDepth,
                baseCenter - Vector3.right * halfBaseWidth - Vector3.forward * halfBaseDepth,

                // Right face
                tipPosition,
                baseCenter + Vector3.right * halfBaseWidth + Vector3.forward * halfBaseDepth,
                baseCenter + Vector3.right * halfBaseWidth - Vector3.forward * halfBaseDepth,

                // Back face
                tipPosition,
                baseCenter - Vector3.right * halfBaseWidth + Vector3.forward * halfBaseDepth,
                baseCenter + Vector3.right * halfBaseWidth + Vector3.forward * halfBaseDepth,

                // Left face
                tipPosition,
                baseCenter - Vector3.right * halfBaseWidth - Vector3.forward * halfBaseDepth,
                baseCenter - Vector3.right * halfBaseWidth + Vector3.forward * halfBaseDepth,

                // Bottom face
                baseCenter - Vector3.right * halfBaseWidth - Vector3.forward * halfBaseDepth,
                baseCenter + Vector3.right * halfBaseWidth - Vector3.forward * halfBaseDepth,
                baseCenter + Vector3.right * halfBaseWidth + Vector3.forward * halfBaseDepth,
                baseCenter - Vector3.right * halfBaseWidth + Vector3.forward * halfBaseDepth
            };

            int[] indices = new int[]
            {
                0, 1, 2,
                3, 4, 5,
                6, 7, 8,
                9, 10, 11,

                12, 13, 14,
                12, 14, 15
            };

            Vector3[] normals = new Vector3[positions.Length];
            for (int triangleIndex = 0; triangleIndex < 4; ++triangleIndex)
            {
                int index0 = indices[triangleIndex * 3];
                int index1 = indices[triangleIndex * 3 + 1];
                int index2 = indices[triangleIndex * 3 + 2];

                Vector3 edge0 = positions[index1] - positions[index0];
                Vector3 edge1 = positions[index2] - positions[index0];
                Vector3 normal = Vector3.Cross(edge0, edge1).normalized;

                normals[index0] = normal;
                normals[index1] = normal;
                normals[index2] = normal;
            }

            normals[normals.Length - 4] = -Vector3.up;
            normals[normals.Length - 3] = -Vector3.up;
            normals[normals.Length - 2] = -Vector3.up;
            normals[normals.Length - 1] = -Vector3.up;

            Mesh mesh = new Mesh();
            mesh.vertices = positions;
            mesh.colors = ColorEx.GetFilledColorArray(positions.Length, color);
            mesh.normals = normals;
            mesh.SetIndices(indices, MeshTopology.Triangles, 0);
            mesh.UploadMeshData(false);

            return mesh;
        }

        public static Mesh CreateWirePyramid(Vector3 baseCenter, float baseWidth, float baseDepth, float height, Color color)
        {
            baseWidth = Mathf.Max(Mathf.Abs(baseWidth), 1e-4f);
            baseDepth = Mathf.Max(Mathf.Abs(baseDepth), 1e-4f);
            height = Mathf.Max(Mathf.Abs(height), 1e-4f);

            float halfBaseWidth = baseWidth * 0.5f;
            float halfBaseDepth = baseDepth * 0.5f;

            Vector3[] positions = new Vector3[]
            {
                baseCenter - Vector3.right * halfBaseWidth - Vector3.forward * halfBaseDepth,
                baseCenter + Vector3.right * halfBaseWidth - Vector3.forward * halfBaseDepth,
                baseCenter + Vector3.right * halfBaseWidth + Vector3.forward * halfBaseDepth,
                baseCenter - Vector3.right * halfBaseWidth + Vector3.forward * halfBaseDepth,
                baseCenter + Vector3.up * height
            };

            int[] indices = new int[] { 0, 1, 1, 2, 2, 3, 3, 0, 0, 4, 1, 4, 2, 4, 3, 4 };

            Mesh mesh = new Mesh();
            mesh.vertices = positions;
            mesh.colors = ColorEx.GetFilledColorArray(positions.Length, color);
            mesh.SetIndices(indices, MeshTopology.Lines, 0);
            mesh.UploadMeshData(false);

            return mesh;
        }
    }
}
