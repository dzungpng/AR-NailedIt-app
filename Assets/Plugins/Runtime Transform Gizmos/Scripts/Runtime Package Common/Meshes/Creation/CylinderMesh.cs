using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class CylinderMesh
    {
        public static Mesh CreateCylinder(float bottomRadius, float topRadius, float height, int numSlices,
                                          int numStacks, int numBottomCapRings, int numTopCapRings, Color color)
        {
            const float minSize = 1e-4f;
            if (bottomRadius < minSize) bottomRadius = minSize;
            if (topRadius < minSize) topRadius = minSize;
            if (height < minSize) height = minSize;

            const int minNumSlices = 3;
            if (numSlices < minNumSlices) numSlices = minNumSlices;

            const int minNumStacks = 1;
            if (numStacks < minNumStacks) numStacks = minNumStacks;

            int minNumCapRings = 1;
            bool generateBottomCap = numBottomCapRings >= minNumCapRings;
            bool generateTopCap = numTopCapRings >= minNumCapRings;

            int numAxialRows = numStacks + 1;
            int numVertsPerRow = numSlices + 1;
            int numAxialVertices = numAxialRows * numVertsPerRow;
            int totalNumVerts = numAxialVertices;
            Vector3[] axialPositions = new Vector3[numAxialVertices];
            Vector3[] axialNormals = new Vector3[numAxialVertices];
            List<Vector3> allPositions = new List<Vector3>(numAxialVertices);
            List<Vector3> allNormals = new List<Vector3>(numAxialVertices);

            // Generate the axial vertices
            int vertexPtr = 0;
            Vector3 basePosition = Vector3.zero;
            Vector3 topPosition = Vector3.up * height;
            Vector3 cylinderUp = Vector3.up;
            float yPosStep = height / numStacks;
            float angleStep = 360.0f / numSlices;
            for(int axialRowIndex = 0; axialRowIndex < numAxialRows; ++axialRowIndex)
            {
                float rowYPos = basePosition.y + axialRowIndex * yPosStep;
                float radius = Mathf.Lerp(bottomRadius, topRadius, rowYPos / topPosition.y);
                for(int vIndex = 0; vIndex < numVertsPerRow; ++vIndex)
                {
                    float angle = vIndex * angleStep;
                    Vector3 normal = (new Vector3(Mathf.Cos(angle * Mathf.Deg2Rad), 0.0f, Mathf.Sin(angle * Mathf.Deg2Rad))).normalized;

                    axialNormals[vertexPtr] = normal;
                    axialPositions[vertexPtr] = basePosition + rowYPos * cylinderUp + normal * radius;
                    ++vertexPtr;
                }
            }
            allPositions.AddRange(axialPositions);
            allNormals.AddRange(axialNormals);

            // Generate the axial vertex indices
            int indexPtr = 0;
            List<int> allIndices = new List<int>(100);
            int numAxialIndices = numSlices * numStacks * 6;
            int[] axialIndices = new int[numAxialIndices];
            for (int axialRowIndex = 0; axialRowIndex < numAxialRows - 1; ++axialRowIndex)
            {
                for (int vIndex = 0; vIndex < numVertsPerRow - 1; ++vIndex)
                {
                    int indexOffset = axialRowIndex * numVertsPerRow + vIndex;

                    // First triangle
                    axialIndices[indexPtr++] = indexOffset;
                    axialIndices[indexPtr++] = indexOffset + numVertsPerRow;
                    axialIndices[indexPtr++] = indexOffset + 1;

                    // Second triangle
                    axialIndices[indexPtr++] = indexOffset + numVertsPerRow;
                    axialIndices[indexPtr++] = indexOffset + numVertsPerRow + 1;
                    axialIndices[indexPtr++] = indexOffset + 1;
                }
            }
            allIndices.AddRange(axialIndices);

            // Generate bottom cap if necessary
            if (generateBottomCap)
            {
                int numVertRings = numBottomCapRings + 1;
                int numVertsPerRing = numSlices + 1;
                int numCapVerts = numVertRings * numVertsPerRing;
                totalNumVerts += numCapVerts;

                vertexPtr = 0;
                Vector3[] capPositions = new Vector3[numCapVerts];
                Vector3[] capNormals = new Vector3[numCapVerts];

                for (int ringIndex = 0; ringIndex < numVertRings; ++ringIndex)
                {
                    float radius = Mathf.Lerp(bottomRadius, 0.0f, ringIndex / (float)(numVertRings - 1));
                    for(int vIndex = 0; vIndex < numVertsPerRing; ++vIndex)
                    {
                        float angle = vIndex * angleStep;
                        Vector3 positionDir = (new Vector3(Mathf.Cos(angle * Mathf.Deg2Rad), 0.0f, Mathf.Sin(angle * Mathf.Deg2Rad))).normalized;
                        capPositions[vertexPtr] = basePosition + positionDir * radius;
                        capNormals[vertexPtr] = -cylinderUp;
                        ++vertexPtr;
                    }
                }

                int baseVertexIndex = allPositions.Count;
                allPositions.AddRange(capPositions);
                allNormals.AddRange(capNormals);

                indexPtr = 0;
                int numCapIndices = numSlices * numBottomCapRings * 6;
                int[] capIndices = new int[numCapIndices];
                for (int vertexRingIndex = 0; vertexRingIndex < numVertRings - 1; ++vertexRingIndex)
                {
                    for (int vIndex = 0; vIndex < numVertsPerRing - 1; ++vIndex)
                    {
                        int indexOffset = baseVertexIndex + vertexRingIndex * numVertsPerRing + vIndex;

                        // First triangle
                        capIndices[indexPtr++] = indexOffset;
                        capIndices[indexPtr++] = indexOffset + 1;
                        capIndices[indexPtr++] = indexOffset + numVertsPerRing;

                        // Second triangle
                        capIndices[indexPtr++] = indexOffset + numVertsPerRing;
                        capIndices[indexPtr++] = indexOffset + 1;
                        capIndices[indexPtr++] = indexOffset + numVertsPerRing + 1;
                    }
                }
                allIndices.AddRange(capIndices);
            }

            // Generate top cap if necessary
            if (generateTopCap)
            {
                int numVertRings = numTopCapRings + 1;
                int numVertsPerRing = numSlices + 1;
                int numCapVerts = numVertRings * numVertsPerRing;
                totalNumVerts += numCapVerts;

                vertexPtr = 0;
                Vector3[] capPositions = new Vector3[numCapVerts];
                Vector3[] capNormals = new Vector3[numCapVerts];

                for (int ringIndex = 0; ringIndex < numVertRings; ++ringIndex)
                {
                    float radius = Mathf.Lerp(topRadius, 0.0f, ringIndex / (float)(numVertRings - 1));
                    for (int vIndex = 0; vIndex < numVertsPerRing; ++vIndex)
                    {
                        float angle = vIndex * angleStep;
                        Vector3 positionDir = (new Vector3(Mathf.Cos(angle * Mathf.Deg2Rad), 0.0f, Mathf.Sin(angle * Mathf.Deg2Rad))).normalized;
                        capPositions[vertexPtr] = topPosition + positionDir * radius;
                        capNormals[vertexPtr] = cylinderUp;
                        ++vertexPtr;
                    }
                }

                int baseVertexIndex = allPositions.Count;
                allPositions.AddRange(capPositions);
                allNormals.AddRange(capNormals);

                indexPtr = 0;
                int numCapIndices = numSlices * numTopCapRings * 6;
                int[] capIndices = new int[numCapIndices];
                for (int vertexRingIndex = 0; vertexRingIndex < numVertRings - 1; ++vertexRingIndex)
                {
                    for (int vIndex = 0; vIndex < numVertsPerRing - 1; ++vIndex)
                    {
                        int indexOffset = baseVertexIndex + vertexRingIndex * numVertsPerRing + vIndex;

                        // First triangle
                        capIndices[indexPtr++] = indexOffset;
                        capIndices[indexPtr++] = indexOffset + numVertsPerRing;
                        capIndices[indexPtr++] = indexOffset + 1;

                        // Second triangle
                        capIndices[indexPtr++] = indexOffset + numVertsPerRing;
                        capIndices[indexPtr++] = indexOffset + numVertsPerRing + 1;
                        capIndices[indexPtr++] = indexOffset + 1;
                    }
                }
                allIndices.AddRange(capIndices);
            }

            Mesh mesh = new Mesh();
            mesh.vertices = allPositions.ToArray();
            mesh.normals = allNormals.ToArray();
            mesh.colors = ColorEx.GetFilledColorArray(totalNumVerts, color);
            mesh.SetIndices(allIndices.ToArray(), MeshTopology.Triangles, 0);
            mesh.UploadMeshData(false);

            return mesh;
        }
    }
}
