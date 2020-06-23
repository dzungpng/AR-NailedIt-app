using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class GizmoPlaneSlider3DCollection
    {
        private List<GizmoPlaneSlider3D> _sliders = new List<GizmoPlaneSlider3D>();
        private Dictionary<int, GizmoPlaneSlider3D> _handleIdToSlider = new Dictionary<int, GizmoPlaneSlider3D>();

        public int Count { get { return _sliders.Count; } }
        public GizmoPlaneSlider3D this[int id] { get { return _handleIdToSlider[id]; } }

        public bool Contains(GizmoPlaneSlider3D slider)
        {
            return _handleIdToSlider.ContainsKey(slider.HandleId);
        }

        public bool Contains(int sliderHandleId)
        {
            return _handleIdToSlider.ContainsKey(sliderHandleId);
        }

        public void Add(GizmoPlaneSlider3D slider)
        {
            if (!Contains(slider))
            {
                _sliders.Add(slider);
                _handleIdToSlider.Add(slider.HandleId, slider);
            }
        }

        public void Remove(GizmoPlaneSlider3D slider)
        {
            if (Contains(slider))
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

        public void SetVisible(bool isVisible, bool includeBorder)
        {
            if (includeBorder)
            {
                foreach (var slider in _sliders)
                {
                    slider.SetVisible(isVisible);
                    slider.SetBorderVisible(isVisible);
                }
            }
            else
            {
                foreach (var slider in _sliders)
                    slider.SetVisible(isVisible);
            }
        }

        public void SetBorderVisible(bool isVisible)
        {
            foreach (var slider in _sliders)
                slider.SetBorderVisible(isVisible);
        }

        public void SetHoverable(bool isHoverable, bool includeBorder)
        {
            if (includeBorder)
            {
                foreach (var slider in _sliders)
                {
                    slider.SetHoverable(isHoverable);
                    slider.SetBorderHoverable(isHoverable);
                }
            }
            else
            {
                foreach (var slider in _sliders)
                    slider.SetHoverable(isHoverable);
            }
        }

        public void SetBorderHoverable(bool isHoverable)
        {
            foreach (var slider in _sliders)
                slider.SetBorderHoverable(isHoverable);
        }

        public List<GizmoPlaneSlider3D> GetRenderSortedSliders(Camera renderCamera)
        {
            var sortedSliders = new List<GizmoPlaneSlider3D>(_sliders);
            Vector3 cameraPos = renderCamera.transform.position;

            sortedSliders.Sort(delegate(GizmoPlaneSlider3D s0, GizmoPlaneSlider3D s1)
            {
                float d0 = (s0.Position - cameraPos).sqrMagnitude;
                float d1 = (s1.Position - cameraPos).sqrMagnitude;

                return d1.CompareTo(d0);
            });

            return sortedSliders;
        }
    }
}
