using UnityEngine;

namespace RTG
{
    public class ShaderPool : Singleton<ShaderPool>
    {
        private Shader _linearGradientCameraBk;
        private Shader _xzGrid_Plane;
        private Shader _gizmoSolidHandle;
        private Shader _tintedTexture;
        private Shader _simpleColor;
        private Shader _circleCull;
        private Shader _torusCull;
        private Shader _cylindricalTorusCull;

        public Shader LinearGradientCameraBk
        {
            get
            {
                if (_linearGradientCameraBk == null) _linearGradientCameraBk = Shader.Find("RTUnityApp/LinearGradientCameraBk");
                return _linearGradientCameraBk;
            }          
        }
        public Shader XZGrid_Plane
        {
            get
            {
                if (_xzGrid_Plane == null) _xzGrid_Plane = Shader.Find("RTUnityApp/XZGrid_Plane");
                return _xzGrid_Plane;
            }
        }
        public Shader GizmoSolidHandle
        {
            get
            {
                if (_gizmoSolidHandle == null) _gizmoSolidHandle = Shader.Find("RTUnityApp/GizmoSolidHandle");
                return _gizmoSolidHandle;
            }
        }
        public Shader TintedTexture
        {
            get
            {
                if (_tintedTexture == null) _tintedTexture = Shader.Find("RTUnityApp/TintedTexture");
                return _tintedTexture;
            }
        }
        public Shader SimpleColor
        {
            get
            {
                if (_simpleColor == null) _simpleColor = Shader.Find("RTUnityApp/SimpleColor");
                return _simpleColor;
            }
        }
        public Shader CircleCull
        {
            get
            {
                if (_circleCull == null) _circleCull = Shader.Find("RTUnityApp/CircleCull");
                return _circleCull;
            }
        }
        public Shader TorusCull
        {
            get
            {
                if (_torusCull == null) _torusCull = Shader.Find("RTUnityApp/TorusCull");
                return _torusCull;
            }
        }
        public Shader CylindricalTorusCull
        {
            get
            {
                if (_cylindricalTorusCull == null) _cylindricalTorusCull = Shader.Find("RTUnityApp/CylindricalTorusCull");
                return _cylindricalTorusCull;
            }
        }
    }
}
