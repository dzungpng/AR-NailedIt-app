using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class MeshTree
    {
        private RTMesh _mesh;
        private SphereTree<MeshTriangle> _tree = new SphereTree<MeshTriangle>(2);
        private bool _isBuilt = false;

        public bool IsBuilt { get { return _isBuilt; } }

        public MeshTree(RTMesh mesh)
        {
            _mesh = mesh;
        }

        public void Build()
        {
            if (_isBuilt) return;

            for(int triIndex = 0; triIndex < _mesh.NumTriangles; ++triIndex)
            {
                MeshTriangle meshTriangle = _mesh.GetTriangle(triIndex);
                _tree.AddNode(meshTriangle, new Sphere(meshTriangle.Vertices));
            }

            _isBuilt = true;
        }

        public List<Vector3> OverlapVerts(OBB obb, MeshTransform meshTransform)
        {
            if (!_isBuilt) Build();

            OBB meshSpaceOBB = meshTransform.InverseTransformOBB(obb);
            HashSet<int> usedIndices = new HashSet<int>();
            var overlappedNodes = _tree.OverlapBox(meshSpaceOBB);
            if (overlappedNodes.Count == 0) return new List<Vector3>();

            var overlappedVerts = new List<Vector3>(50);
            foreach (var node in overlappedNodes)
            {
                int triangleIndex = node.Data.TriangleIndex;
                MeshTriangle triangleInfo = _mesh.GetTriangle(triangleIndex);
                var modelVerts = triangleInfo.Vertices;

                for (int ptIndex = 0; ptIndex < modelVerts.Length; ++ptIndex)
                {
                    int vertIndex = triangleInfo.GetVertIndex(ptIndex);
                    if (usedIndices.Contains(vertIndex)) continue;

                    Vector3 modelVert = modelVerts[ptIndex];
                    if (BoxMath.ContainsPoint(modelVert, meshSpaceOBB.Center, meshSpaceOBB.Size, meshSpaceOBB.Rotation))
                    {
                        overlappedVerts.Add(meshTransform.TransformPoint(modelVert));
                        usedIndices.Add(vertIndex);
                    }
                }
            }

            return overlappedVerts;
        }

        public List<Vector3> OverlapModelVerts(OBB modelOBB)
        {
            if (!_isBuilt) Build();

            HashSet<int> usedIndices = new HashSet<int>();
            var overlappedNodes = _tree.OverlapBox(modelOBB);
            if (overlappedNodes.Count == 0) return new List<Vector3>();

            var overlappedVerts = new List<Vector3>(50);
            foreach (var node in overlappedNodes)
            {
                int triangleIndex = node.Data.TriangleIndex;
                MeshTriangle triangleInfo = _mesh.GetTriangle(triangleIndex);
                var modelVerts = triangleInfo.Vertices;

                for (int ptIndex = 0; ptIndex < modelVerts.Length; ++ptIndex)
                {
                    int vertIndex = triangleInfo.GetVertIndex(ptIndex);
                    if (usedIndices.Contains(vertIndex)) continue;

                    Vector3 modelVert = modelVerts[ptIndex];
                    if (BoxMath.ContainsPoint(modelVert, modelOBB.Center, modelOBB.Size, modelOBB.Rotation))
                    {
                        overlappedVerts.Add(modelVert);
                        usedIndices.Add(vertIndex);
                    }
                }
            }

            return overlappedVerts;
        }

        /// <summary>
        /// Performs a raycast against the mesh triangles and returns info
        /// about the closest hit or null if no triangle was hit by the ray.
        /// </summary>
        /// <param name="meshTransform">
        /// The mesh transform which brings the mesh in the same space as the
        /// ray.
        /// </param>
        /// <remarks>
        /// This method will build the tree if it hasn't already been built.
        /// </remarks>
        public MeshRayHit RaycastClosest(Ray ray, Matrix4x4 meshTransform)
        {
            // Build the tree if it hasn't already been built
            if (!_isBuilt) Build();

            // Work in mesh local space by transforming the ray by the inverse of
            // the mesh transform. It is faster to perform this transformation here
            // instead of transforming every possibly hit triangle by 'meshTransform'.
            Ray modelSpaceRay = ray.InverseTransform(meshTransform);

            // Get the list of tree nodes which are hit by the ray
            List<SphereTreeNodeRayHit<MeshTriangle>> nodeHits = _tree.RaycastAll(modelSpaceRay);
            if (nodeHits.Count == 0) return null;

            // Store data in preparation for closest hit identification
            float t;
            float minT = float.MaxValue;
            MeshTriangle closestTriangle = null;
            bool foundTriangle = false;

            // Loop through each node hit
            foreach(var nodeHit in nodeHits)
            {
                // Get the associated mesh triangle and check if the ray intersects it
                MeshTriangle meshTriangle = nodeHit.HitNode.Data;
                if (TriangleMath.Raycast(modelSpaceRay, out t, meshTriangle.Vertex0, meshTriangle.Vertex1, meshTriangle.Vertex2))
                {
                    if (Vector3.Dot(modelSpaceRay.direction, meshTriangle.Normal) < 0.0f)
                    {
                        // If the intersection offset is smaller than what we have so far,
                        // it means we have a new closest hit.
                        if (t < minT)
                        {
                            minT = t;
                            closestTriangle = meshTriangle;
                            foundTriangle = true;
                        }
                    }
                }
            }

            // If we found a triangle, we can return the mesh ray hit information
            if (foundTriangle)
            {
                // Convert the t value in world space. Do the same for the normal.
                Vector3 worldHit = meshTransform.MultiplyPoint(modelSpaceRay.GetPoint(minT));
                minT = (ray.origin - worldHit).magnitude / ray.direction.magnitude;
                Vector3 transformedNormal = meshTransform.inverse.transpose.MultiplyVector(closestTriangle.Normal).normalized;

                // Return the hit instance
                return new MeshRayHit(ray, closestTriangle.TriangleIndex, minT, transformedNormal);
            }

            return null;
        }

        public void DebugDraw()
        {
            _tree.DebugDraw();
        }
    }
}
