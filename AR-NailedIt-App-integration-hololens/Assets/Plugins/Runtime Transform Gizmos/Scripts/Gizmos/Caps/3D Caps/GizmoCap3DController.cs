using UnityEngine;

namespace RTG
{
    public abstract class GizmoCap3DController : IGizmoCap3DController
    {
        protected GizmoCap3DControllerData _data;

        public GizmoCap3DController(GizmoCap3DControllerData controllerData)
        {
            _data = controllerData;
        }

        public abstract void UpdateHandles();
        public abstract void UpdateTransforms(float zoomFactor);
        public abstract void CapSlider3D(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor);
        public abstract void CapSlider3DInvert(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor);
        public abstract float GetSliderAlignedRealLength(float zoomFactor);
    }
}
