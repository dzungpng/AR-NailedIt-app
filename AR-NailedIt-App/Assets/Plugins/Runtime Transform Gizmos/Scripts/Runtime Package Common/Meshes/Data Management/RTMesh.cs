using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class MeshTriangle
    {
        private Vector3[] _vertices;
        private Vector3 _normal;
        private int _triangleIndex;
        private int[] _vertIndices;

        public int TriangleIndex { get { return _triangleIndex; } }
        public Vector3[] Vertices { get { return _vertices.Clone() as Vector3[]; } }
        public Vector3 Vertex0 { get { return _vertices[0]; } }
        public Vector3 Vertex1 { get { return _vertices[1]; } }
        public Vector3 Vertex2 { get { return _vertices[2]; } }
        public Vector3 Normal { get { return _normal; } }
        public int[] VertIndices { get { return _vertIndices.Clone() as int[]; } }
        public int VertIndex0 { get { return _vertIndices[0]; } }
        public int VertIndex1 { get { return _vertIndices[1]; } }
        public int VertIndex2 { get { return _vertIndices[2]; } }

        public MeshTriangle(Vector3[] vertices, int triangleIndex, int vertIndex0, int vertIndex1, int vertIndex2)
        {
            _vertices = vertices.Clone() as Vector3[];
            _triangleIndex = triangleIndex;
            _vertIndices = new int[3];
            _vertIndices[0] = vertIndex0;
            _vertIndices[1] = vertIndex1;
            _vertIndices[2] = vertIndex2;

            _normal = Vector3.Cross((_vertices[1] - _vertices[0]), (_vertices[2] - _vertices[0])).normalized;
        }

        public int GetVertIndex(int arrayIndex)
        {
            return _vertIndices[arrayIndex];
        }
    }

    public class RTMesh
    {
        private Mesh _unityMesh;
        private Vector3[] _vertices;
        private int[] _vertIndices;
        private int _numTriangles;
        private AABB _aabb;

        private MeshTree _meshTree;

        public int NumTriangles { get { return _numTriangles; } }
        public Mesh UnityMesh { get { return _unityMesh; } }
        public AABB AABB { get { return _aabb; } }
        public bool IsTreeBuilt { get { return _meshTree.IsBuilt; } }

        public RTMesh(Mesh unityMesh)
        {
            _unityMesh = unityMesh;
            _vertices = _unityMesh.vertices;
            _vertIndices = unityMesh.triangles;
            _numTriangles = (int)(_vertIndices.Length / 3);
            _meshTree = new MeshTree(this);
            _aabb = new AABB(unityMesh.bounds);
        }

        /// <summary>
        /// Factory function for creating an RTMesh instance from the specified
        /// Unity mesh. The function will return null if the RTMesh can not be
        /// created. Such a scenario occurs when the Unity mesh is not readable.
        /// </summary>
        /// <remarks>
        /// The client code is responsible for calling 'BuildTree' for the returned
        /// mesh.
        /// </remarks>
        public static RTMesh Create(Mesh unityMesh)
        {
            if (unityMesh == null || !unityMesh.isReadable) return null;
            return new RTMesh(unityMesh);
        }

        public void BuildTree()
        {
            _meshTree.Build();
        }

        public MeshTriangle GetTriangle(int triangleIndex)
        {
            int baseIndex = triangleIndex * 3;
            int vertIndex0 = _vertIndices[baseIndex];
            int vertIndex1 = _vertIndices[baseIndex + 1];
            int vertIndex2 = _vertIndices[baseIndex + 2];

            return new MeshTriangle(new Vector3[]{_vertices[vertIndex0], _vertices[vertIndex1], _vertices[vertIndex2]}, triangleIndex, vertIndex0, vertIndex1, vertIndex2);
        }

        public MeshRayHit Raycast(Ray ray, Matrix4x4 meshTransform)
        {
            return _meshTree.RaycastClosest(ray, meshTransform);
        }

        public List<Vector3> OverlapVerts(OBB obb, Transform meshObjectTransform)
        {
            return _meshTree.OverlapVerts(obb, new MeshTransform(meshObjectTransform));
        }

        public List<Vector3> OverlapModelVerts(OBB modelOBB)
        {
            return _meshTree.OverlapModelVerts(modelOBB);
        }

        public List<Vector3> OverlapModelVerts(AABB modelAABB)
        {
            return _meshTree.OverlapModelVerts(new OBB(modelAABB));
        }

        public void DebugDrawTree()
        {
            _meshTree.DebugDraw();
        }
    }
}
