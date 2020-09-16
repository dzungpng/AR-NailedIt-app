using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class GizmoCap3DCollection
    {
        private List<GizmoCap3D> _caps = new List<GizmoCap3D>();
        private Dictionary<int, GizmoCap3D> _handleIdToCap = new Dictionary<int, GizmoCap3D>();

        public int Count { get { return _caps.Count; } }
        public GizmoCap3D this[int id] { get { return _handleIdToCap[id]; } }

        public bool Contains(GizmoCap3D cap)
        {
            return _handleIdToCap.ContainsKey(cap.HandleId);
        }

        public bool Contains(int capHandleId)
        {
            return _handleIdToCap.ContainsKey(capHandleId);
        }

        public void Add(GizmoCap3D cap)
        {
            if (!Contains(cap))
            {
                _caps.Add(cap);
                _handleIdToCap.Add(cap.HandleId, cap);
            }
        }

        public void Remove(GizmoCap3D cap)
        {
            if (Contains(cap))
            {
                _caps.Remove(cap);
                _handleIdToCap.Remove(cap.HandleId);
            }
        }

        public void ApplyZoomFactor(Camera camera)
        {
            foreach (var cap in _caps)
                cap.ApplyZoomFactor(camera);
        }

        public void SetZoomFactorTransform(GizmoTransform zoomFactorTransform)
        {
            foreach (var cap in _caps)
                cap.SetZoomFactorTransform(zoomFactorTransform);
        }

        public void Make3DHoverPriorityLowerThan(Priority priority)
        {
            foreach (var cap in _caps)
                cap.HoverPriority3D.MakeLowerThan(priority);
        }

        public void Make3DHoverPriorityHigherThan(Priority priority)
        {
            foreach (var cap in _caps)
                cap.HoverPriority3D.MakeHigherThan(priority);
        }

        public void SetVisible(bool visible)
        {
            foreach (var cap in _caps)
                cap.SetVisible(visible);
        }

        public List<GizmoCap3D> GetRenderSortedCaps(Camera renderCamera)
        {
            var sortedCaps = new List<GizmoCap3D>(_caps);
            Vector3 cameraPos = renderCamera.transform.position;

            sortedCaps.Sort(delegate(GizmoCap3D c0, GizmoCap3D c1)
            {
                float d0 = (c0.Position - cameraPos).sqrMagnitude;
                float d1 = (c1.Position - cameraPos).sqrMagnitude;

                return d1.CompareTo(d0);
            });

            return sortedCaps;
        }
    }
}
