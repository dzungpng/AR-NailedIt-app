using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RTG
{
    public class MeshVertexChunkCollectionDb : Singleton<MeshVertexChunkCollectionDb>, IEnumerable<MeshVertexChunkCollection>
    {
        private List<MeshVertexChunkCollection> _vertexChunkCollections = new List<MeshVertexChunkCollection>();
        private Dictionary<Mesh, MeshVertexChunkCollection> _meshToVChunkCollection = new Dictionary<Mesh, MeshVertexChunkCollection>();

        public int Count { get { return _vertexChunkCollections.Count; } }
        public MeshVertexChunkCollection this[int collectionIndex] { get { return _vertexChunkCollections[collectionIndex]; } }
        public MeshVertexChunkCollection this[Mesh mesh] 
        { 
            get 
            {
                if (!HasChunkCollectionForMesh(mesh) && !CreateMeshVertChunkCollection(mesh)) return null;
                return _meshToVChunkCollection[mesh]; 
            } 
        }

        public IEnumerator<MeshVertexChunkCollection> GetEnumerator()
        {
            return _vertexChunkCollections.GetEnumerator();
        }

        IEnumerator IEnumerable.GetEnumerator()
        {
            return GetEnumerator();
        }

        public bool HasChunkCollectionForMesh(Mesh mesh)
        {
            return _meshToVChunkCollection.ContainsKey(mesh);
        }

        private bool CreateMeshVertChunkCollection(Mesh mesh)
        {
            var meshVertexChunkCollection = new MeshVertexChunkCollection();
            if(!meshVertexChunkCollection.FromMesh(mesh)) return false;

            _vertexChunkCollections.Add(meshVertexChunkCollection);
            _meshToVChunkCollection.Add(mesh, meshVertexChunkCollection);
            return true;
        }
    }
}
