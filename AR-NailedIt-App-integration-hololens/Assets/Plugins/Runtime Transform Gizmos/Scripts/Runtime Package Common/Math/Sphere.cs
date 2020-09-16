using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public struct Sphere
    {
        private Vector3 _center;
        private float _radius;

        public Vector3 Center { get { return _center; } set { _center = value; } }
        public float Radius { get { return _radius; } set { _radius = Mathf.Max(0.0f, value); } }

        public Sphere(Vector3 center, float radius)
        {
            _center = center;
            _radius = Mathf.Max(0.0f, radius);
        }

        public Sphere(AABB aabb)
        {
            _center = aabb.Center;
            _radius = aabb.Extents.magnitude;
        }

        public Sphere(IEnumerable<Vector3> pointCloud)
        {
            // Find the minimum and maximum extents of the point cloud
            Vector3 min = new Vector3(float.MaxValue, float.MaxValue, float.MaxValue);
            Vector3 max = new Vector3(float.MinValue, float.MinValue, float.MinValue);
            foreach (Vector3 pt in pointCloud)
            {
                min = Vector3.Min(pt, min);
                max = Vector3.Max(pt, max);
            }

            // Calculate the center and radius
            _center = (min + max) * 0.5f;
            _radius = (max - min).magnitude * 0.5f;
        }

        public bool ContainsPoint(Vector3 point)
        {
            return (_center - point).sqrMagnitude <= _radius * _radius;
        }

        public List<Vector3> GetRightUpExtents(Vector3 right, Vector3 up)
        {
            return SphereMath.CalcRightUpExtents(_center, _radius, right, up);
        }

        /// <summary>
        /// Encapsulates the specified sphere. This method will adjust the sphere's
        /// center and radius to include 'sphere'. The method has no effect if the
        /// passed sphere is aready encapsulated by 'this' sphere.
        /// </summary>
        public void Encapsulate(Sphere sphere)
        {
            // Calculate a normalized vector which goes from this center to the other center.
            // Then use this vector to calculate the point on 'sphere' which is furthest away
            // along this vector.
            Vector3 encapsDir = Vector3.Normalize(sphere.Center - _center);
            Vector3 otherExtremePt = sphere.Center + encapsDir * sphere.Radius;

            // If this point is not inside this sphere, it means the sphere is not encapsulated
            // and we need to encapsulate it.
            if(!ContainsPoint(otherExtremePt))
            {
                // Calculate the extreme point on this sphere (along the reverse of the direction
                // vector calculated earlier). Then use this point to calculate the new radius and
                // finally the new center of the sphere.
                Vector3 thisExtremePt = _center - encapsDir * _radius;
                Radius = (otherExtremePt - thisExtremePt).magnitude * 0.5f;
                Center = otherExtremePt - encapsDir * _radius;
            }
        }
    }
}
