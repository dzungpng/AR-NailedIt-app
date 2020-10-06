using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RTG
{
    public class GizmoHandleCollection
    {
        private Gizmo _gizmo;
        private List<IGizmoHandle> _handles = new List<IGizmoHandle>();
        private Dictionary<int, IGizmoHandle> _idToHandle = new Dictionary<int, IGizmoHandle>();

        public Gizmo Gizmo { get { return _gizmo; } }
        public int Count { get { return _handles.Count; } }
        public IGizmoHandle this[int index] { get { return _handles[index]; } }

        public GizmoHandleCollection(Gizmo gizmo)
        {
            _gizmo = gizmo;
        }

        public void Clear()
        {
            _handles.Clear();
            _idToHandle.Clear();
        }

        public IGizmoHandle GetHandleById(int handleId)
        {
            return _idToHandle[handleId];
        }

        public bool Contains(IGizmoHandle handle)
        {
            return _idToHandle.ContainsKey(handle.Id);
        }

        public bool Contains(int handleId)
        {
            return _idToHandle.ContainsKey(handleId);
        }

        public void Add(IGizmoHandle handle)
        {
            if (Contains(handle) || handle.Gizmo != Gizmo) return;

            _handles.Add(handle);
            _idToHandle.Add(handle.Id, handle);
        }

        public void Remove(IGizmoHandle handle)
        {
            _handles.Remove(handle);
            _idToHandle.Remove(handle.Id);
        }

        public List<IGizmoHandle> GetAll()
        {
            return new List<IGizmoHandle>(_handles);
        }

        public List<GizmoHandleHoverData> GetAllHandlesHoverData(Ray hoverRay)
        {
            var hoverDataCollection = new List<GizmoHandleHoverData>(10);
            foreach (var handle in _handles)
            {
                var hoverData = handle.GetHoverData(hoverRay);
                if (hoverData != null) hoverDataCollection.Add(hoverData);
            }

            return hoverDataCollection;
        }
    }
}
