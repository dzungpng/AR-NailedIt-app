using UnityEngine;

namespace RTG
{
    public static class PlaneMath
    {
        public static bool Raycast2D(Vector2 rayOrigin, Vector2 rayDir, Vector2 planeNormal, Vector2 ptOnPlane, out float t)
        {
            t = 0.0f;

            float dirPrj = Vector2.Dot(rayDir, planeNormal);
            if (Mathf.Abs(dirPrj) < 1e-5f) return false;

            float originDist = Vector2.Dot((rayOrigin - ptOnPlane), planeNormal);
            t = originDist / -dirPrj;

            return t >= 0.0f;
        }
    }
}
