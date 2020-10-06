using UnityEngine;
using UnityEngine.Rendering;

namespace RTG
{
    public class GizmoCircularMaterial : Singleton<GizmoCircularMaterial>
    {
        public enum Type
        {
            Circle = 0,
            Torus,
            CylindricalTorus
        }

        private Type _circularType = Type.Circle;
        private Material _circleMaterial;
        private Material _torusMaterial;
        private Material _cylindricalTorusMaterial;

        public Material CircleMaterial
        {
            get
            {
                if (_circleMaterial == null) _circleMaterial = MaterialPool.Get.CircleCull;
                return _circleMaterial;
            }
        }
        public Material TorusMaterial
        {
            get
            {
                if (_torusMaterial == null) _torusMaterial = MaterialPool.Get.TorusCull;
                return _torusMaterial;
            }
        }
        public Material CylindricalTorusMaterial
        {
            get
            {
                if (_cylindricalTorusMaterial == null) _cylindricalTorusMaterial = MaterialPool.Get.CylindricalTorusCull;
                return _cylindricalTorusMaterial;
            }
        }
        public Material Material
        {
            get
            {
                if (_circularType == Type.Circle) return CircleMaterial;
                else if (_circularType == Type.Torus) return TorusMaterial;
                return CylindricalTorusMaterial;
            }
        }
        public GizmoCircularMaterial.Type CircularType { get { return _circularType; } set { _circularType = value; } }
        public bool IsLit { get { return Material.GetInt("_IsLit") == 1; } }
        public float LightIntensity { get { return Material.GetFloat("_LightIntensity"); } }

        public GizmoCircularMaterial()
        {
            ResetValuesToSensibleDefaults();
        }

        public void ResetValuesToSensibleDefaults()
        {
            SetZWriteEnabled(false);
            SetZTestAlways();
            SetCullModeBack();
            SetLit(true);
            SetLightIntensity(1.23f);
        }

        public void SetCullAlphaScale(float scale)
        {
            Material.SetFloat("_CullAlphaScale", scale);
        }

        public void SetShapeCenter(Vector3 center)
        {
            if (_circularType == Type.Circle) Material.SetVector("_CircleCenter", center);
            else Material.SetVector("_TorusCenter", center);
        }

        public void SetTorusCoreRadius(float radius)
        {
            if (_circularType == Type.Torus || 
                _circularType == Type.CylindricalTorus) Material.SetFloat("_TorusCoreRadius", radius);
        }

        public void SetTorusTubeRadius(float radius)
        {
            if (_circularType == Type.Torus) Material.SetFloat("_TorusTubeRadius", radius);
        }

        public void SetCylindricalTorusRadii(float hrzRadius, float vertRadius)
        {
            if (_circularType == Type.CylindricalTorus)
            {
                Material.SetFloat("_TorusHrzRadius", hrzRadius);
                Material.SetFloat("_TorusVertRadius", vertRadius);
            }
        }

        public void SetCamera(Camera camera)
        {
            Material.SetVector("_CamLook", camera.transform.forward);
            Material.SetInt("_OrthoCam", camera.orthographic ? 1 : 0);
        }

        public void SetLit(bool isLit)
        {
            Material.SetInt("_IsLit", isLit ? 1 : 0);
        }

        public void SetLightDirection(Vector3 lightDir)
        {
            Material.SetVector("_LightDir", lightDir);
        }

        public void SetLightIntensity(float intensity)
        {
            Material.SetFloat("_LightIntensity", intensity);
        }

        public void SetColor(Color color)
        {
            Material.SetColor("_Color", color);
        }

        public void SetZWriteEnabled(bool isEnabled)
        {
            Material.SetInt("_ZWrite", isEnabled ? 1 : 0);
        }

        public void SetZTestEnabled(bool isEnabled)
        {
            Material.SetInt("_ZTest", isEnabled ? (int)CompareFunction.LessEqual : (int)CompareFunction.Always);
        }

        public void SetZTestAlways()
        {
            Material.SetInt("_ZTest", (int)CompareFunction.Always);
        }

        public void SetZTestLess()
        {
            Material.SetInt("_ZTest", (int)CompareFunction.Less);
        }

        public void SetCullModeBack()
        {
            Material.SetInt("_CullMode", (int)CullMode.Back);
        }

        public void SetCullModeFront()
        {
            Material.SetInt("_CullMode", (int)CullMode.Front);
        }

        public void SetCullModeOff()
        {
            Material.SetInt("_CullMode", (int)CullMode.Off);
        }

        public void SetPass(int passIndex)
        {
            Material.SetPass(0);
        }
    }
}
