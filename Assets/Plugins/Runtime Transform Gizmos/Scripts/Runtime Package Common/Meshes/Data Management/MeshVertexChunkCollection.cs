using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RTG
{
    public class MeshVertexChunkCollection : IEnumerable<MeshVertexChunk>
    {
        private struct VertexChunkIndices
        {
            private int _XIndex;
            private int _YIndex;
            private int _ZIndex;

            public int XIndex { get { return _XIndex; } }
            public int YIndex { get { return _YIndex; } }
            public int ZIndex { get { return _ZIndex; } }

            public VertexChunkIndices(int xIndex, int yIndex, int zIndex)
            {
                _XIndex = xIndex;
                _YIndex = yIndex;
                _ZIndex = zIndex;
            }
        }

        private Mesh _mesh;
        private List<MeshVertexChunk> _vertexChunks = new List<MeshVertexChunk>(50);

        public MeshVertexChunk this[int chunkIndex] { get { return _vertexChunks[chunkIndex]; } }
        public int Count { get { return _vertexChunks.Count; } }

        public IEnumerator<MeshVertexChunk> GetEnumerator()
        {
            return _vertexChunks.GetEnumerator();
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return GetEnumerator();
        }

        public List<MeshVertexChunk> GetWorldChunksHoveredByPoint(Vector3 hoverPoint, Matrix4x4 worldMtx, Camera camera)
        {
            var hoveredChunks = new List<MeshVertexChunk>();
            foreach (var chunk in _vertexChunks)
            {
                AABB chunkAABB = chunk.ModelSpaceAABB;
                chunkAABB.Transform(worldMtx);

                Rect screenrect = chunkAABB.GetScreenRectangle(camera);
                if (screenrect.Contains(hoverPoint, true)) hoveredChunks.Add(chunk);
            }

            return hoveredChunks;
        }

        public MeshVertexChunk GetWorldVertChunkClosestToScreenPt(Vector2 screenPoint, Matrix4x4 worldMtx, Camera camera)
        {
            float minDistSqr = float.MaxValue;
            MeshVertexChunk closestChunk = null;

            foreach(var chunk in _vertexChunks)
            {
                AABB chunkAABB = chunk.ModelSpaceAABB;
                chunkAABB.Transform(worldMtx);

                List<Vector2> screenPts = chunkAABB.GetScreenCenterAndCornerPoints(camera);
                foreach(var pt in screenPts)
                {
                    float distSqr = (pt - screenPoint).sqrMagnitude;
                    if(distSqr < minDistSqr)
                    {
                        minDistSqr = distSqr;
                        closestChunk = chunk;
                    }
                }
            }

            return closestChunk;
        }

        public bool FromMesh(Mesh mesh)
        {
            if (mesh == null || !mesh.isReadable) return false;
          
            Bounds meshBounds = mesh.bounds;
            Vector3[] meshVertices = mesh.vertices;

            const int numChunksPerWorldUnit = 2;
            float chunkSizeX = meshBounds.size.x / numChunksPerWorldUnit;
            float chunkSizeY = meshBounds.size.y / numChunksPerWorldUnit;
            float chunkSizeZ = meshBounds.size.z / numChunksPerWorldUnit;

            var chunkIndicesToModelVerts = new Dictionary<VertexChunkIndices, List<Vector3>>();
            foreach(var vertex in meshVertices)
            {
                int chunkIndexX = Mathf.FloorToInt(vertex.x / chunkSizeX);
                int chunkIndexY = Mathf.FloorToInt(vertex.y / chunkSizeY);
                int chunkIndexZ = Mathf.FloorToInt(vertex.z / chunkSizeZ);
                var chunkIndices = new VertexChunkIndices(chunkIndexX, chunkIndexY, chunkIndexZ);

                if (chunkIndicesToModelVerts.ContainsKey(chunkIndices)) chunkIndicesToModelVerts[chunkIndices].Add(vertex);
                else
                {
                    chunkIndicesToModelVerts.Add(chunkIndices, new List<Vector3>(50));
                    chunkIndicesToModelVerts[chunkIndices].Add(vertex);
                }
            }
            if (chunkIndicesToModelVerts.Count == 0) return false;

            _mesh = mesh;
            _vertexChunks.Clear();
            foreach(var pair in chunkIndicesToModelVerts)
            {
                if (pair.Value.Count != 0)
                    _vertexChunks.Add(new MeshVertexChunk(pair.Value, _mesh));
            }

            return true;
        }
    }
}
