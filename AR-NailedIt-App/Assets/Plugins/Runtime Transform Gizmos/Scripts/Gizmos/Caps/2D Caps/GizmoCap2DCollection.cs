using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class GizmoCap2DCollection
    {
        private List<GizmoCap2D> _caps = new List<GizmoCap2D>();
        private Dictionary<int, GizmoCap2D> _handleIdToCap = new Dictionary<int, GizmoCap2D>();

        public int Count { get { return _caps.Count; } }
        public GizmoCap2D this[int id] { get { return _handleIdToCap[id]; } }

        public bool Contains(GizmoCap2D cap)
        {
            return _handleIdToCap.ContainsKey(cap.HandleId);
        }

        public bool Contains(int capHandleId)
        {
            return _handleIdToCap.ContainsKey(capHandleId);
        }

        public void Add(GizmoCap2D cap)
        {
            if (!Contains(cap))
            {
                _caps.Add(cap);
                _handleIdToCap.Add(cap.HandleId, cap);
            }
        }

        public void Remove(GizmoCap2D cap)
        {
            if (Contains(cap))
            {
                _caps.Remove(cap);
                _handleIdToCap.Remove(cap.HandleId);
            }
        }

        public void Make2DHoverPriorityLowerThan(Priority priority)
        {
            foreach (var cap in _caps)
                cap.HoverPriority2D.MakeLowerThan(priority);
        }

        public void Make2DHoverPriorityHigherThan(Priority priority)
        {
            foreach (var cap in _caps)
                cap.HoverPriority2D.MakeHigherThan(priority);
        }

        public void SetVisible(bool visible)
        {
            foreach (var cap in _caps)
                cap.SetVisible(visible);
        }

        public void SetHoverable(bool hoverable)
        {
            foreach (var cap in _caps)
                cap.SetHoverable(hoverable);
        }

        public void SetDragSession(IGizmoDragSession dragSession)
        {
            foreach (var cap in _caps)
                cap.DragSession = dragSession;
        }

        public void Render(Camera camera)
        {
            foreach (var cap in _caps)
                cap.Render(camera);
        }
    }
}
