using UnityEngine;

namespace RTG
{
    public class MaterialPool : Singleton<MaterialPool>
    {
        private Material _linearGradientCameraBk;
        private Material _xzGrid_Plane;
        private Material _gizmoSolidHandle;
        private Material _tintedTexture;
        private Material _simpleColor;
        private Material _circleCull;
        private Material _torusCull;
        private Material _cylindricalTorusCull;

        public Material LinearGradientCameraBk
        {
            get
            {
                if (_linearGradientCameraBk == null) _linearGradientCameraBk = new Material(ShaderPool.Get.LinearGradientCameraBk);
                return _linearGradientCameraBk;
            }
        }
        public Material XZGrid_Plane
        {
            get
            {
                if (_xzGrid_Plane == null) _xzGrid_Plane = new Material(ShaderPool.Get.XZGrid_Plane);
                return _xzGrid_Plane;
            }
        }
        public Material GizmoSolidHandle
        {
            get
            {
                if (_gizmoSolidHandle == null) _gizmoSolidHandle = new Material(ShaderPool.Get.GizmoSolidHandle);
                return _gizmoSolidHandle;
            }
        }
        public Material TintedTexture
        {
            get
            {
                if (_tintedTexture == null) _tintedTexture = new Material(ShaderPool.Get.TintedTexture);
                return _tintedTexture;
            }
        }
        public Material SimpleColor
        {
            get
            {
                if (_simpleColor == null) _simpleColor = new Material(ShaderPool.Get.SimpleColor);
                return _simpleColor;
            }
        }
        public Material CircleCull
        {
            get
            {
                if (_circleCull == null) _circleCull = new Material(ShaderPool.Get.CircleCull);
                return _circleCull;
            }
        }
        public Material TorusCull
        {
            get
            {
                if (_torusCull == null) _torusCull = new Material(ShaderPool.Get.TorusCull);
                return _torusCull;
            }
        }
        public Material CylindricalTorusCull
        {
            get
            {
                if (_cylindricalTorusCull == null) _cylindricalTorusCull = new Material(ShaderPool.Get.CylindricalTorusCull);
                return _cylindricalTorusCull;
            }
        }
    }
}
