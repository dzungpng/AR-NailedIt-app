using UnityEngine;

namespace RTG
{

    public abstract class Shape3D
    {
        public bool Raycast(Ray ray)
        {
            float t;
            return Raycast(ray, out t);
        }

        public bool RaycastWire(Ray ray)
        {
            float t;
            return RaycastWire(ray, out t);
        }

        public virtual bool RaycastWire(Ray ray, out float t)
        {
            return Raycast(ray, out t);
        }

        public abstract void RenderSolid();
        public abstract void RenderWire();
        public abstract bool Raycast(Ray ray, out float t);
        public abstract AABB GetAABB();
    }
}
