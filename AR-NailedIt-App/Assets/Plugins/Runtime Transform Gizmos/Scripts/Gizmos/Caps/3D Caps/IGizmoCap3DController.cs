using UnityEngine;

namespace RTG
{
    public interface IGizmoCap3DController
    {
        void UpdateHandles();
        void UpdateTransforms(float zoomFactor);
        void CapSlider3D(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor);
        void CapSlider3DInvert(Vector3 sliderDirection, Vector3 sliderEndPt, float zoomFactor);
        float GetSliderAlignedRealLength(float zoomFactor);
    }
}
