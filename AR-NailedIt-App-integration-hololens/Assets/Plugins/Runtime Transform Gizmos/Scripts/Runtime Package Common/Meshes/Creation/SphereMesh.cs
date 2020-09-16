using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class SphereMesh
    {
        public static Mesh CreateSphere(float radius, int numSlices, int numStacks, Color color)
        {
            if (radius < 1e-4f || numSlices < 3 || numStacks < 2) return null;

            int numVertRows = numStacks + 1;
            int numVertsPerRow = numSlices + 1;
            int numVerts = numVertRows * numVertsPerRow;

            Vector3[] positions = new Vector3[numVerts];
            Vector3[] normals = new Vector3[numVerts];

            int vertexPtr = 0;

            float angleStep = 360.0f / (numVertsPerRow - 1);
            for (int vertRowIndex = 0; vertRowIndex < numVertRows; ++vertRowIndex)
            {
                float theta = Mathf.PI * (float)vertRowIndex / (numVertRows - 1);
                float cosTheta = Mathf.Cos(theta);
                float sinTheta = Mathf.Sin(theta);

                for (int vertIndex = 0; vertIndex < numVertsPerRow; ++vertIndex)
                {
                    float centralAxisRotAngle = angleStep * vertIndex * Mathf.Deg2Rad;
                    Vector3 rotatedAxis = Vector3.right * Mathf.Sin(centralAxisRotAngle) +
                                          Vector3.forward * Mathf.Cos(centralAxisRotAngle); 
                    positions[vertexPtr] = rotatedAxis * sinTheta * radius + Vector3.up * cosTheta * radius;
                    normals[vertexPtr] = Vector3.Normalize(positions[vertexPtr]);
                    ++vertexPtr;
                }
            }

            int indexPtr = 0;
            int numIndices = numSlices * numStacks * 6;
            int[] indices = new int[numIndices];
            for (int vertRowIndex = 0; vertRowIndex < numVertRows - 1; ++vertRowIndex)
            {
                for (int vertIndex = 0; vertIndex < numVertsPerRow - 1; ++vertIndex)
                {
                    // Calculate the index of the first vertex inside the first triangle
                    int baseIndex = vertRowIndex * numVertsPerRow + vertIndex;

                    // First triangle
                    indices[indexPtr++] = baseIndex;
                    indices[indexPtr++] = baseIndex + numVertsPerRow;
                    indices[indexPtr++] = baseIndex + numVertsPerRow + 1;

                    // Second triangle
                    indices[indexPtr++] = baseIndex + numVertsPerRow + 1;
                    indices[indexPtr++] = baseIndex + 1;
                    indices[indexPtr++] = baseIndex;
                }
            }

            Mesh mesh = new Mesh();
            mesh.vertices = positions;
            mesh.normals = normals;
            mesh.colors = ColorEx.GetFilledColorArray(numVerts, color);
            mesh.SetIndices(indices, MeshTopology.Triangles, 0);
            mesh.UploadMeshData(false);

            return mesh;
        }
    }
}
