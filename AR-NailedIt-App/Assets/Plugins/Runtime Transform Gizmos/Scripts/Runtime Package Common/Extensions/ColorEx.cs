using UnityEngine;

namespace RTG
{
    public static class ColorEx
    {
        public static Color FromByteValues(byte r, byte g, byte b, byte a)
        {
            float inv255 = 1.0f / 255.0f;
            return new Color(r * inv255, g * inv255, b * inv255, a * inv255);
        }

        public static Color[] GetFilledColorArray(int arrayLength, Color fillValue)
        {
            Color[] colorArray = new Color[arrayLength];
            for(int colorIndex = 0; colorIndex < arrayLength; ++colorIndex)
            {
                colorArray[colorIndex] = fillValue;
            }

            return colorArray;
        }

        public static Color KeepAllButAlpha(this Color color, float newAlpha)
        {
            return new Color(color.r, color.g, color.b, newAlpha);
        }
    }
}
