using UnityEngine;

namespace RTG
{
    public abstract class Shape2D
    {
        public abstract void RenderArea(Camera camera);
        public abstract void RenderBorder(Camera camera);
        public abstract bool ContainsPoint(Vector2 point);
        public abstract Rect GetEncapsulatingRect();
    }
}
