using UnityEngine;

namespace RTG
{
    public class Plane2D
    {
        private Vector2 _normal;
        private float _distance;

        public Vector2 Normal { get { return _normal; } set { _normal = value.normalized; } }
        public float Distance { get { return _distance; } set { _distance = value; } }

        public Plane2D(Vector2 normal, float distance)
        {
            _normal = normal.normalized;
            _distance = distance;
        }

        public Plane2D(Vector2 normal, Vector2 pointOnPlane)
        {
            _normal = normal.normalized;
            _distance = Vector2.Dot(pointOnPlane, _normal);
        }

        public float GetDistanceToPoint(Vector2 point)
        {
            return Vector2.Dot(point, _normal) - _distance;
        }

        public bool Raycast(Vector2 rayOrigin, Vector2 rayDir, out float t)
        {
            t = 0.0f;

            float projectedRayDir = Vector2.Dot(rayDir, _normal);
            if (Mathf.Abs(projectedRayDir) < 1e-5f) return false;

            float distToRayOrigin = GetDistanceToPoint(rayOrigin);
            t = -distToRayOrigin / projectedRayDir;

            return t >= 0.0f;
        }
    }
}
