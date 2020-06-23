using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class GizmoLineSlider3DCollection
    {
        private List<GizmoLineSlider3D> _sliders = new List<GizmoLineSlider3D>();
        private Dictionary<int, GizmoLineSlider3D> _handleIdToSlider = new Dictionary<int, GizmoLineSlider3D>();

        public int Count { get { return _sliders.Count; } }
        public GizmoLineSlider3D this[int id] { get { return _handleIdToSlider[id]; } }

        public bool Contains(GizmoLineSlider3D slider)
        {
            return _handleIdToSlider.ContainsKey(slider.HandleId);
        }

        public bool Contains(int sliderHandleId)
        {
            return _handleIdToSlider.ContainsKey(sliderHandleId);
        }

        public bool ContainsCapId(int capHandleId)
        {
            return _sliders.FindAll(item => item.Cap3DHandleId == capHandleId).Count != 0;
        }

        public void Add(GizmoLineSlider3D slider)
        {
            if(!Contains(slider))
            {
                _sliders.Add(slider);
                _handleIdToSlider.Add(slider.HandleId, slider);
            }
        }

        public void Remove(GizmoLineSlider3D slider)
        {
            if(Contains(slider))
            {
                _sliders.Remove(slider);
                _handleIdToSlider.Remove(slider.HandleId);
            }
        }

        public void ApplyZoomFactor(Camera camera)
        {
            foreach (var slider in _sliders)
                slider.ApplyZoomFactor(camera);
        }

        public void SetZoomFactorTransform(GizmoTransform zoomFactorTransform)
        {
            foreach (var slider in _sliders)
                slider.SetZoomFactorTransform(zoomFactorTransform);
        }

        public void Make3DHoverPriorityLowerThan(Priority priority)
        {
            foreach (var slider in _sliders)
                slider.HoverPriority3D.MakeLowerThan(priority);
        }

        public void Make3DHoverPriorityHigherThan(Priority priority)
        {
            foreach (var slider in _sliders)
                slider.HoverPriority3D.MakeHigherThan(priority);
        }

        public void SetSnapEnabled(bool isEnabled)
        {
            foreach (var slider in _sliders)
                slider.SetSnapEnabled(isEnabled);
        }

        public void SetVisible(bool visible)
        {
            foreach (var slider in _sliders)
                slider.SetVisible(visible);
        }

        public void Set3DCapsVisible(bool visible)
        {
            foreach (var slider in _sliders)
                slider.Set3DCapVisible(visible);
        }

        public void SetDragChannel(GizmoDragChannel dragChannel)
        {
            foreach (var slider in _sliders)
                slider.SetDragChannel(dragChannel);
        }

        public void RegisterScalerHandle(int handleId, IEnumerable<int> scaleDragAxisIndices)
        {
            foreach (var slider in _sliders)
                slider.RegisterScalerHandle(handleId, scaleDragAxisIndices);
        }

        public List<GizmoLineSlider3D> GetRenderSortedSliders(Camera renderCamera)
        {
            var sortedSliders = new List<GizmoLineSlider3D>(_sliders);
            Vector3 cameraPos = renderCamera.transform.position;

            sortedSliders.Sort(delegate(GizmoLineSlider3D s0, GizmoLineSlider3D s1)
            {
                float d0 = (s0.GetRealEndPosition(s0.GetZoomFactor(renderCamera)) - cameraPos).sqrMagnitude;
                float d1 = (s1.GetRealEndPosition(s1.GetZoomFactor(renderCamera)) - cameraPos).sqrMagnitude;

                return d1.CompareTo(d0);
            });

            return sortedSliders;
        }
    }
}
