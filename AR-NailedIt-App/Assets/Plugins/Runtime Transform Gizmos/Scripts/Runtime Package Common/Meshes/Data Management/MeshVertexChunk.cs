using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RTG
{
    public class MeshVertexChunk : IEnumerable<Vector3>
    {
        private List<Vector3> _modelSpaceVerts = new List<Vector3>(100);
        private AABB _modelSpaceAABB;
        private Mesh _mesh;

        public Vector3 this[int vertexIndex] { get { return _modelSpaceVerts[vertexIndex]; } }
        public Mesh Mesh { get { return _mesh; } }
        public int VertexCount { get { return _modelSpaceVerts.Count; } }
        public AABB ModelSpaceAABB { get { return _modelSpaceAABB; } }

        public MeshVertexChunk(List<Vector3> modelSpaceVerts, Mesh mesh)
        {
            _modelSpaceVerts = new List<Vector3>(modelSpaceVerts);
            _mesh = mesh;
            _modelSpaceAABB = new AABB(_modelSpaceVerts);
        }

        public IEnumerator<Vector3> GetEnumerator()
        {
            return _modelSpaceVerts.GetEnumerator();
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return GetEnumerator();
        }

        public Vector3 GetWorldVertClosestToScreenPt(Vector2 screenPoint, Matrix4x4 worldMtx, Camera camera)
        {
            float minDistSqr = float.MaxValue;
            Vector3 closestWorldVert = Vector3.zero;

            foreach(var vert in _modelSpaceVerts)
            {
                Vector3 worldVert = worldMtx.MultiplyPoint(vert);
                Vector2 screenVert = camera.WorldToScreenPoint(worldVert);

                float distSqr = (screenVert - screenPoint).sqrMagnitude;
                if(distSqr < minDistSqr)
                {
                    minDistSqr = distSqr;
                    closestWorldVert = worldVert;
                }
            }

            return closestWorldVert;
        }
    }
}
