using UnityEngine;
using UnityEngine.Rendering;

namespace RTG
{
    public static class MaterialEx
    {
        public static void SetZWriteEnabled(this Material material, bool enabled)
        {
            material.SetInt("_ZWrite", enabled ? 1 : 0);
        }

        public static void SetZTestEnabled(this Material material, bool enabled)
        {
            material.SetInt("_ZTest", enabled ? (int)CompareFunction.LessEqual : (int)CompareFunction.Always);
        }

        public static void SetZTestAlways(this Material material)
        {
            material.SetInt("_ZTest", (int)CompareFunction.Always);
        }

        public static void SetZTestLess(this Material material)
        {
            material.SetInt("_ZTest", (int)CompareFunction.Less);
        }

        public static void SetCullModeBack(this Material material)
        {
            material.SetInt("_CullMode", (int)CullMode.Back);
        }

        public static void SetCullModeFront(this Material material)
        {
            material.SetInt("_CullMode", (int)CullMode.Front);
        }

        public static void SetCullModeOff(this Material material)
        {
            material.SetInt("_CullMode", (int)CullMode.Off);
        }

        public static void SetColor(this Material material, Color color)
        {
            material.SetColor("_Color", color);
        }

        public static void SetStencilCmpAlways(this Material material)
        {
            material.SetInt("_StencilComp", (int)CompareFunction.Always);
        }

        public static void SetStencilCmpNotEqual(this Material material)
        {
            material.SetInt("_StencilComp", (int)CompareFunction.NotEqual);
        }
    }
}
