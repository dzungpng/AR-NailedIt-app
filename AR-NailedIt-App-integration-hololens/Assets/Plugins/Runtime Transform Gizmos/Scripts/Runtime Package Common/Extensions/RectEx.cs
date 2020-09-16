using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public enum RectCornerPoint
    {
        TopLeft = 0,
        TopRight,
        BottomRight,
        BottomLeft
    }

    public static class RectEx
    {
        /// <summary>
        /// Returns a list with the rectangle's corner points. The elements inside this 
        /// list have a one-to-one maping with members of the 'RectCornerPoint' enum.
        /// </summary>
        public static List<Vector2> GetCornerPoints(this Rect rect)
        {
            // Store the rectangle corner points and return them.
            // Note: The elements in the list must be generated such that they have a one-to-one
            //       maping with members of the 'RectCornerPoint' enum.
            return new List<Vector2>()
            {
                new Vector2(rect.xMin, rect.yMax),  // TopLeft
                new Vector2(rect.xMax, rect.yMax),  // TopRight
                new Vector2(rect.xMax, rect.yMin),  // BottomRight
                new Vector2(rect.xMin, rect.yMin)   // BottomLeft
            };
        }

        /// <summary>
        /// Places 'rect' below 'other' and sets its center to the same center
        /// as 'other' horizontally.
        /// </summary>
        public static Rect PlaceBelowCenterHrz(this Rect rect, Rect other)
        {
            float centerX = other.center.x;
            float centerY = other.center.y - other.size.y * 0.5f - rect.size.y * 0.5f;

            return RectEx.FromCenterAndSize(new Vector2(centerX, centerY), rect.size);
        }

        /// <summary>
        /// Inverts the rectangle's Y coordinates in screen space. Useful when 
        /// the rectangle needs to be expressed in coordinate systems with the 
        /// Y axis going either up or down.
        /// </summary>
        public static Rect InvertScreenY(this Rect rect)
        {
            Vector2 center = rect.center;
            center.y = Screen.height - 1 - center.y;
            return RectEx.FromCenterAndSize(center, rect.size);
        }

        public static Rect FromCenterAndSize(Vector2 center, Vector2 size)
        {
            return new Rect(center.x - size.x * 0.5f, center.y - size.y * 0.5f, size.x, size.y);
        }

        public static Rect FromPoints(IEnumerable<Vector2> points)
        {
            Rect rect = new Rect();

            Vector2 minPt = Vector2Ex.FromValue(float.MaxValue), maxPt = Vector2Ex.FromValue(float.MinValue);
            foreach(var pt in points)
            {
                minPt = Vector2.Min(pt, minPt);
                maxPt = Vector2.Max(pt, maxPt);
            }

            rect.xMin = minPt.x;
            rect.yMin = minPt.y;
            rect.xMax = maxPt.x;
            rect.yMax = maxPt.y;

            return rect;
        }

        public static Rect FromTexture2D(Texture2D texture2D)
        {
            return new Rect(0.0f, 0.0f, texture2D.width, texture2D.height);
        }

        public static Rect Inflate(this Rect rect, float inflateAmount)
        {
            float sizeAdd = inflateAmount;
            float newSizeX = rect.size.x >= 0.0f ? rect.size.x + sizeAdd : rect.size.x - sizeAdd;
            float newSizeY = rect.size.y >= 0.0f ? rect.size.y + sizeAdd : rect.size.y - sizeAdd;

            return FromCenterAndSize(rect.center, new Vector2(newSizeX, newSizeY));
        }

        public static bool ContainsAllPoints(this Rect rect, IEnumerable<Vector2> points)
        {
            foreach(var pt in points)
            {
                if (!rect.Contains(pt, true)) return false;
            }

            return true;
        }
    }
}
