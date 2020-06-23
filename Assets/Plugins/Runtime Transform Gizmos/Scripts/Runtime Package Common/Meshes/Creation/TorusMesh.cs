using UnityEngine;

namespace RTG
{
    public static class TorusMesh
    {
        public static Mesh CreateCylindricalTorus(Vector3 center, float coreRadius, float tubeHrzRadius, float tubeVertRadius, int numTubeSlices, Color color)
        {
            if (coreRadius < 1e-4f || tubeHrzRadius < 1e-4f || numTubeSlices < 3) return null;

            int numVertsPerTubeSlice = 8;
            int numVerts = numVertsPerTubeSlice * (numTubeSlices + 1);
            Vector3[] positions = new Vector3[numVerts];
            Vector3[] normals = new Vector3[numVerts];
            Vector2[] radiusDirs = new Vector2[numVerts];

            int vertexPtr = 0;
            float tubeAngleStep = 360.0f / (numTubeSlices - 1);
            for (int tubeSliceIndex = 0; tubeSliceIndex <= numTubeSlices; ++tubeSliceIndex)
            {
                float tubeAngle = tubeAngleStep * tubeSliceIndex * Mathf.Deg2Rad;
                float cosTube = Mathf.Cos(tubeAngle);
                float sinTube = Mathf.Sin(tubeAngle);

                Vector3 tubeSliceCenterDir = new Vector3(sinTube, 0.0f, cosTube).normalized;
                Vector3 tubeSliceCenter = center + tubeSliceCenterDir * coreRadius;
                Vector2 radiusDir = new Vector2(tubeSliceCenterDir.x, tubeSliceCenterDir.z);

                // Top
                radiusDirs[vertexPtr] = radiusDir;
                positions[vertexPtr] = tubeSliceCenter + Vector3.up * tubeVertRadius - tubeSliceCenterDir * tubeHrzRadius;
                normals[vertexPtr++] = Vector3.up;

                radiusDirs[vertexPtr] = radiusDir;
                positions[vertexPtr] = tubeSliceCenter + Vector3.up * tubeVertRadius + tubeSliceCenterDir * tubeHrzRadius;
                normals[vertexPtr++] = Vector3.up;

                // Back
                radiusDirs[vertexPtr] = radiusDir;
                positions[vertexPtr] = tubeSliceCenter + Vector3.up * tubeVertRadius + tubeSliceCenterDir * tubeHrzRadius;
                normals[vertexPtr++] = tubeSliceCenterDir;

                radiusDirs[vertexPtr] = radiusDir;
                positions[vertexPtr] = tubeSliceCenter - Vector3.up * tubeVertRadius + tubeSliceCenterDir * tubeHrzRadius;
                normals[vertexPtr++] = tubeSliceCenterDir;

                // Bottom
                radiusDirs[vertexPtr] = radiusDir;
                positions[vertexPtr] = tubeSliceCenter - Vector3.up * tubeVertRadius + tubeSliceCenterDir * tubeHrzRadius;
                normals[vertexPtr++] = -Vector3.up;

                radiusDirs[vertexPtr] = radiusDir;
                positions[vertexPtr] = tubeSliceCenter - Vector3.up * tubeVertRadius - tubeSliceCenterDir * tubeHrzRadius;
                normals[vertexPtr++] = -Vector3.up;

                // Front
                radiusDirs[vertexPtr] = radiusDir;
                positions[vertexPtr] = tubeSliceCenter - Vector3.up * tubeVertRadius - tubeSliceCenterDir * tubeHrzRadius;
                normals[vertexPtr++] = -tubeSliceCenterDir;

                radiusDirs[vertexPtr] = radiusDir;
                positions[vertexPtr] = tubeSliceCenter + Vector3.up * tubeVertRadius - tubeSliceCenterDir * tubeHrzRadius;
                normals[vertexPtr++] = -tubeSliceCenterDir;
            }

            int indexPtr = 0;
            int numIndices = numTubeSlices * 24;
            int[] indices = new int[numIndices];
            for (int tubeSliceIndex = 0; tubeSliceIndex < numTubeSlices - 1; ++tubeSliceIndex)
            {
                int baseIndex = tubeSliceIndex * numVertsPerTubeSlice;

                // Top quad
                indices[indexPtr++] = baseIndex;
                indices[indexPtr++] = baseIndex + 1;
                indices[indexPtr++] = baseIndex + 1 + numVertsPerTubeSlice;

                indices[indexPtr++] = baseIndex;
                indices[indexPtr++] = baseIndex + 1 + numVertsPerTubeSlice;
                indices[indexPtr++] = baseIndex + numVertsPerTubeSlice;

                // Back quad
                baseIndex += 2;
                indices[indexPtr++] = baseIndex;
                indices[indexPtr++] = baseIndex + 1;
                indices[indexPtr++] = baseIndex + 1 + numVertsPerTubeSlice;

                indices[indexPtr++] = baseIndex;
                indices[indexPtr++] = baseIndex + 1 + numVertsPerTubeSlice;
                indices[indexPtr++] = baseIndex + numVertsPerTubeSlice;

                // Bottom quad
                baseIndex += 2;
                indices[indexPtr++] = baseIndex;
                indices[indexPtr++] = baseIndex + 1;
                indices[indexPtr++] = baseIndex + 1 + numVertsPerTubeSlice;

                indices[indexPtr++] = baseIndex;
                indices[indexPtr++] = baseIndex + 1 + numVertsPerTubeSlice;
                indices[indexPtr++] = baseIndex + numVertsPerTubeSlice;

                // Front quad
                baseIndex += 2;
                indices[indexPtr++] = baseIndex;
                indices[indexPtr++] = baseIndex + 1;
                indices[indexPtr++] = baseIndex + 1 + numVertsPerTubeSlice;

                indices[indexPtr++] = baseIndex;
                indices[indexPtr++] = baseIndex + 1 + numVertsPerTubeSlice;
                indices[indexPtr++] = baseIndex + numVertsPerTubeSlice;
            }

            Mesh mesh = new Mesh();
            mesh.vertices = positions;
            mesh.normals = normals;
            mesh.uv2 = radiusDirs;
            mesh.colors = ColorEx.GetFilledColorArray(numVerts, color);
            mesh.SetIndices(indices, MeshTopology.Triangles, 0);
            mesh.UploadMeshData(false);

            return mesh;
        }

        public static Mesh CreateTorus(Vector3 center,  float coreRadius, float tubeRadius, int numTubeSlices, int numSlices, Color color)
        {
            if (coreRadius < 1e-4f || tubeRadius < 1e-4f || numTubeSlices < 3 || numSlices < 3) return null;

            int numVertsPerTubeSlice = (numSlices + 1);
            int numVerts = numVertsPerTubeSlice * (numTubeSlices + 1);
            Vector3[] positions = new Vector3[numVerts];
            Vector3[] normals = new Vector3[numVerts];

            int vertexPtr = 0;

            float outerAngleStep = 360.0f / (numSlices - 1);
            float tubeAngleStep = 360.0f / (numTubeSlices - 1);
            for (int tubeSliceIndex = 0; tubeSliceIndex <= numTubeSlices; ++tubeSliceIndex)
            {
                float tubeAngle = tubeAngleStep * tubeSliceIndex * Mathf.Deg2Rad;
                float cosTube = Mathf.Cos(tubeAngle);
                float sinTube = Mathf.Sin(tubeAngle);

                Vector3 tubeSliceCenter = new Vector3(sinTube * coreRadius, 0.0f, cosTube * coreRadius);

                for (int sliceIndex = 0; sliceIndex <= numSlices; ++sliceIndex)
                {
                    float outerAngle = outerAngleStep * sliceIndex * Mathf.Deg2Rad;
                    float cosOuter = Mathf.Cos(outerAngle);
                    float sinOuter = Mathf.Sin(outerAngle);

                    Vector3 vPos = tubeSliceCenter;
                    vPos.x += sinTube * sinOuter * tubeRadius;
                    vPos.y += cosOuter * tubeRadius;
                    vPos.z += cosTube * sinOuter * tubeRadius;

                    vPos += center;
                    positions[vertexPtr] = vPos;
                    normals[vertexPtr] = (vPos - center).normalized;

                    ++vertexPtr;
                }
            }

            int indexPtr = 0;
            int numIndices = numTubeSlices * numSlices * 6;
            int[] indices = new int[numIndices];
            for (int tubeSliceIndex = 0; tubeSliceIndex < numTubeSlices; ++tubeSliceIndex)
            {
                for (int sliceIndex = 0; sliceIndex < numSlices; ++sliceIndex)
                {
                    int baseIndex = tubeSliceIndex * numVertsPerTubeSlice + sliceIndex;

                    indices[indexPtr++] = baseIndex;
                    indices[indexPtr++] = baseIndex + 1;
                    indices[indexPtr++] = baseIndex + numVertsPerTubeSlice;

                    indices[indexPtr++] = baseIndex + 1;
                    indices[indexPtr++] = baseIndex + 1 + numVertsPerTubeSlice;
                    indices[indexPtr++] = baseIndex + numVertsPerTubeSlice;
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
