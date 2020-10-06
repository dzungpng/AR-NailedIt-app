using UnityEngine;

namespace RTG
{
    public class MeshRayHit
    {
        private int _hitTriangleIndex;
        private Vector3 _hitPoint;
        private float _hitEnter;
        private Vector3 _hitNormal;

        public int HitTriangleIndex { get { return _hitTriangleIndex; } }
        public Vector3 HitPoint { get { return _hitPoint; } }
        public float HitEnter { get { return _hitEnter; } }
        public Vector3 HitNormal { get { return _hitNormal; } }

        public MeshRayHit(Ray ray, int hitTriangleIndex, float hitEnter, Vector3 hitNormal)
        {
            _hitTriangleIndex = hitTriangleIndex;
            _hitPoint = ray.GetPoint(hitEnter);
            _hitEnter = hitEnter;
            _hitNormal = Vector3.Normalize(hitNormal);
        }
    }
}
