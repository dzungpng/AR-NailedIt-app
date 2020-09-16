#if UNITY_EDITOR
using UnityEngine;
using UnityEditor;
using System;
using System.Collections.Generic;

namespace RTG
{
    public class EditorGUILayoutEx
    {
        public static void SectionHeader(string title)
        {
            var style = new GUIStyle("Label");
            style.fontStyle = FontStyle.BoldAndItalic;
            EditorGUILayout.LabelField(title, style);
        }

        public static Enum SelectiveEnumPopup(GUIContent content, Enum selected, List<Enum> allowedValues)
        {
            if (allowedValues.Count == 0) return selected;

            int selectedIndex = allowedValues.IndexOf(selected);
            if (selectedIndex < 0) return selected;

            var allowedLabels = new List<GUIContent>(allowedValues.Count);
            foreach (var enumValue in allowedValues) allowedLabels.Add(new GUIContent(enumValue.ToString()));

            int newSelectedIndex = EditorGUILayout.Popup(content, selectedIndex, allowedLabels.ToArray());
            return allowedValues[newSelectedIndex];
        }

        /// <summary>
        /// Renders a layer mask field which can be used to mask/unmask different
        /// combinations of layers.
        /// </summary>
        public static int LayerMaskField(GUIContent content, int layerMask)
        {
            // Store all layer names for easy access
            List<string> allLayerNames = LayerEx.GetAllLayerNames();

            // We first need to build a mask that is mapped to each element in 'allLayerNames'.
            // A 0 bit indicates that the layer with the same index as the bit position is masked.
            int indexMask = 0;
            for(int layerNameIndex = 0; layerNameIndex < allLayerNames.Count; ++layerNameIndex)
            {
                // If the layer is set inside the layer mask, set the bit in the index mask also
                string layerName = allLayerNames[layerNameIndex];
                if (LayerEx.IsLayerBitSet(layerMask, LayerMask.NameToLayer(layerName))) indexMask |= (1 << layerNameIndex); 
            }

            // Now we need to show the mask field to the user and use the returned index mask
            // to rebuild the actual layer mask.
            int resultMask = layerMask;
            int newIndexMask = EditorGUILayout.MaskField(content, indexMask, allLayerNames.ToArray());
            for (int layerNameIndex = 0; layerNameIndex < allLayerNames.Count; ++layerNameIndex)
            {
                // Sync the index mask with the layer mask
                string layerName = allLayerNames[layerNameIndex];
                if (((newIndexMask >> layerNameIndex) & 0x1) != 0) resultMask = LayerEx.SetLayerBit(resultMask, LayerMask.NameToLayer(layerName));
                else resultMask = LayerEx.ClearLayerBit(resultMask, LayerMask.NameToLayer(layerName));
            }

            return resultMask;
        }
    }
}
#endif