using UnityEngine;
using UnityEngine.Rendering;

namespace RTG
{
    public class GizmoSolidMaterial : Singleton<GizmoSolidMaterial>
    {
        private Material _material;

        public Material Material
        {
            get
            {
                if (_material == null) _material = MaterialPool.Get.GizmoSolidHandle;
                return _material;
            }
        }
        public bool IsLit { get { return Material.GetInt("_IsLit") == 1; } }
        public float LightIntensity { get { return Material.GetFloat("_LightIntensity"); } }

        public GizmoSolidMaterial()
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
