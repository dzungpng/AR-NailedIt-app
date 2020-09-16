using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class LayerEx
    {
        public static int GetMinLayer()
        {
            return 0;
        }

        public static int GetMaxLayer()
        {
            return 31;
        }

        public static bool IsLayerBitSet(int layerBits, int layerNumber)
        {
            return (layerBits & (1 << layerNumber)) != 0;
        }

        public static int SetLayerBit(int layerBits, int layerNumber)
        {
            return layerBits | (1 << layerNumber);
        }

        public static int ClearLayerBit(int layerBits, int layerNumber)
        {
            return layerBits & (~(1 << layerNumber));
        }

        public static bool IsLayerValid(int layerNumber)
        {
            return layerNumber >= GetMinLayer() && layerNumber <= GetMaxLayer();
        }

        public static List<string> GetAllLayerNames()
        {
            var layerNames = new List<string>();
            for (int layerIndex = 0; layerIndex <= 31; ++layerIndex)
            {
                string layerName = LayerMask.LayerToName(layerIndex);
                if (!string.IsNullOrEmpty(layerName)) layerNames.Add(layerName);
            }

            return layerNames;
        }
    }
}
