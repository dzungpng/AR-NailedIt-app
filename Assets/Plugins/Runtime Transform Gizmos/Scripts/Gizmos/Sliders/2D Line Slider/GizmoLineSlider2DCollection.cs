using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class GizmoLineSlider2DCollection
    {
        private List<GizmoLineSlider2D> _sliders = new List<GizmoLineSlider2D>();
        private Dictionary<int, GizmoLineSlider2D> _handleIdToSlider = new Dictionary<int, GizmoLineSlider2D>();

        public int Count { get { return _sliders.Count; } }
        public GizmoLineSlider2D this[int id] { get { return _handleIdToSlider[id]; } }

        public bool Contains(GizmoLineSlider2D slider)
        {
            return _handleIdToSlider.ContainsKey(slider.HandleId);
        }

        public bool Contains(int sliderHandleId)
        {
            return _handleIdToSlider.ContainsKey(sliderHandleId);
        }

        public bool ContainsCapId(int capHandleId)
        {
            return _sliders.FindAll(item => item.Cap2DHandleId == capHandleId).Count != 0;
        }

        public void Add(GizmoLineSlider2D slider)
        {
            if (!Contains(slider))
            {
                _sliders.Add(slider);
                _handleIdToSlider.Add(slider.HandleId, slider);
            }
        }

        public void Remove(GizmoLineSlider2D slider)
        {
            if (Contains(slider))
            {
                _sliders.Remove(slider);
                _handleIdToSlider.Remove(slider.HandleId);
            }
        }

        public void Make2DHoverPriorityLowerThan(Priority priority)
        {
            foreach (var slider in _sliders)
                slider.HoverPriority2D.MakeLowerThan(priority);
        }

        public void Make2DHoverPriorityHigherThan(Priority priority)
        {
            foreach (var slider in _sliders)
                slider.HoverPriority2D.MakeHigherThan(priority);
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

        public void Set2DCapsVisible(bool visible)
        {
            foreach (var slider in _sliders)
                slider.Set2DCapVisible(visible);
        }

        public void SetOffsetDragOrigin(Vector3 dragOrigin)
        {
            foreach (var slider in _sliders)
                slider.OffsetDragOrigin = dragOrigin;
        }

        public void Render(Camera camera)
        {
            foreach (var slider in _sliders)
                slider.Render(camera);
        }
    }
}
