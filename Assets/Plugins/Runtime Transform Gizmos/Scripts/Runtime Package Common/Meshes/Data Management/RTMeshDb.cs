using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class RTMeshDb : Singleton<RTMeshDb>
    {
        private Dictionary<Mesh, RTMesh> _meshes = new Dictionary<Mesh, RTMesh>();

        public bool Contains(RTMesh rtMesh)
        {
            if (rtMesh == null) return false;
            return _meshes.ContainsKey(rtMesh.UnityMesh);
        }

        public bool Contains(Mesh unityMesh)
        {
            if (unityMesh == null) return false;
            return _meshes.ContainsKey(unityMesh);
        }

        /// <summary>
        /// Given a Unity mesh, the method will return the associated RTMesh. The
        /// method will attempt to create an RTMesh instance if one doesn't exist
        /// for the passed Unity mesh. If no RTMesh is associated with the Unity
        /// mesh and if one can not be created, null will be returned.
        /// </summary>
        /// <remarks>
        /// The client code is responsible for calling 'BuildTree' for the returned
        /// mesh. This would only be necessary if the method had to create a new 
        /// RTMesh instance in case one didn't already exist.
        /// </remarks>
        public RTMesh GetRTMesh(Mesh unityMesh)
        {
            if (unityMesh == null) return null;
            
            if (!_meshes.ContainsKey(unityMesh)) return CreateRTMesh(unityMesh);
            else return _meshes[unityMesh];
        }

        public void RemoveNullMeshEntries()
        {
            var newMeshDictionary = new Dictionary<Mesh, RTMesh>();
            foreach (var pair in _meshes)
            {
                if (pair.Key != null) newMeshDictionary.Add(pair.Key, pair.Value);
            }

            _meshes.Clear();
            _meshes = newMeshDictionary;
        }

        /// <summary>
        /// Creates an RTMesh from the passed Unity mesh. The method returns the
        /// RTMesh instance or null if the mesh can not be created. 
        /// </summary>
        /// <remarks>
        /// The client code is responsible for calling 'BuildTree' for the returned
        /// mesh.
        /// </remarks>
        private RTMesh CreateRTMesh(Mesh unityMesh)
        {
            RTMesh rtMesh = RTMesh.Create(unityMesh);
            if (rtMesh != null)
            {
                _meshes.Add(unityMesh, rtMesh);
                return rtMesh;
            }
            else return null;
        }
    }
}