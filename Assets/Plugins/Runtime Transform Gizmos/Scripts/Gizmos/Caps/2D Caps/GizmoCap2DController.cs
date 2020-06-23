using UnityEngine;

namespace RTG
{
    public abstract class GizmoCap2DController : IGizmoCap2DController
    {
        protected GizmoCap2DControllerData _data;

        public GizmoCap2DController(GizmoCap2DControllerData controllerData)
        {
            _data = controllerData;
        }

        public abstract void UpdateHandles();
        public abstract void UpdateTransforms();
        public abstract void CapSlider2D(Vector2 sliderDirection, Vector2 sliderEndPt);
        public abstract void CapSlider2DInvert(Vector2 sliderDirection, Vector2 sliderEndPt);
        public abstract float GetSliderAlignedRealLength();
    }
}
