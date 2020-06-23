using UnityEngine;

namespace RTG
{
    public class XZGridRayHit
    {
        private XZGridCell _hitCell;
        private Vector3 _hitPoint;
        private float _hitEnter;
        private Vector3 _hitNormal;
        private Plane _hitPlane;

        public XZGridCell HitCell { get { return _hitCell; } }
        public Vector3 HitPoint { get { return _hitPoint; } }
        public float HitEnter { get { return _hitEnter; } }
        public Vector3 HitNormal { get { return _hitNormal; } }
        public Plane HitPlane { get { return _hitPlane; } }

        public XZGridRayHit(Ray ray, XZGridCell hitCell, float hitEnter)
        {
            _hitCell = hitCell;
            _hitEnter = hitEnter;
            _hitPoint = ray.GetPoint(hitEnter);
            _hitPlane = hitCell.ParentGrid.WorldPlane;
            _hitNormal = _hitPlane.normal;
        }
    }
}
