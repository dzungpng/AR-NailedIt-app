using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class GameObjectRayHit
    {
        private GameObject _hitObject;
        private Vector3 _hitPoint;
        private float _hitEnter;
        private Vector3 _hitNormal;
        private Plane _hitPlane;
        private MeshRayHit _meshRayHit;

        public GameObject HitObject { get { return _hitObject; } }
        public Vector3 HitPoint { get { return _hitPoint; } }
        public float HitEnter { get { return _hitEnter; } }
        public Vector3 HitNormal { get { return _hitNormal; } }
        public Plane HitPlane { get { return _hitPlane; } }
        public MeshRayHit MeshRayHit { get { return _meshRayHit; } }

        public static void SortByHitDistance(List<GameObjectRayHit> hits)
        {
            hits.Sort(delegate(GameObjectRayHit h0, GameObjectRayHit h1)
            {
                return h0.HitEnter.CompareTo(h1.HitEnter);
            });
        }

        public static List<GameObjectRayHit> Create(Ray hitRay, IEnumerable<RaycastHit> hits3D)
        {
            var hits = new List<GameObjectRayHit>(10);
            foreach(var hit3D in hits3D)
            {
                hits.Add(new GameObjectRayHit(hitRay, hit3D));
            }

            return hits;
        }

        public static List<GameObjectRayHit> Create(Ray hitRay, IEnumerable<RaycastHit2D> hits2D)
        {
            var hits = new List<GameObjectRayHit>(10);
            foreach (var hit2D in hits2D)
            {
                hits.Add(new GameObjectRayHit(hitRay, hit2D));
            }

            return hits;
        }

        public GameObjectRayHit(Ray hitRay, RaycastHit hit3D)
        {
            _hitObject = hit3D.collider.gameObject;
            _hitPoint = hit3D.point;
            _hitEnter = hit3D.distance;
            _hitNormal = hit3D.normal;
            _hitPlane = new Plane(_hitNormal, _hitPoint);
        }

        public GameObjectRayHit(Ray hitRay, RaycastHit2D hit2D)
        {
            _hitObject = hit2D.collider.gameObject;
            _hitPoint = hit2D.point;
            _hitEnter = hit2D.distance;
            _hitNormal = hit2D.normal;
            _hitPlane = new Plane(_hitNormal, _hitPoint);
        }

        public GameObjectRayHit(Ray hitRay, GameObject hitObject, Vector3 hitNormal, float hitEnter)
        {
            _hitObject = hitObject;
            _hitPoint = hitRay.GetPoint(hitEnter);
            _hitEnter = hitEnter;
            _hitNormal = hitNormal;
            _hitPlane = new Plane(_hitNormal, _hitPoint);
        }

        public GameObjectRayHit(Ray ray, GameObject hitObject, MeshRayHit meshRayHit)
        {
            _hitObject = hitObject;
            _hitPoint = meshRayHit.HitPoint;
            _hitEnter = meshRayHit.HitEnter;
            _hitNormal = meshRayHit.HitNormal;
            _hitPlane = new Plane(_hitNormal, _hitPoint);
            _meshRayHit = meshRayHit;
        }
    }
}
