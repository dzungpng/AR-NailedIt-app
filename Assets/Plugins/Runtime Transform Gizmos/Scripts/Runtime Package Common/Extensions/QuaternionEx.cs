using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class QuaternionEx
    {
        public static void RotatePoints(this Quaternion quat, List<Vector3> points, Vector3 pivot)
        {
            for (int ptIndex = 0; ptIndex < points.Count; ++ptIndex)
            {
                Vector3 pt = points[ptIndex];
                Vector3 dir = pt - pivot;

                dir = quat * dir;
                points[ptIndex] = pivot + dir;
            }
        }

        public static Quaternion GetRelativeRotation(Quaternion from, Quaternion to)
        {
            return Quaternion.Inverse(from) * to;
        }

        public static float Length(this Quaternion quat)
        {
            return Mathf.Sqrt(quat.x * quat.x + quat.y * quat.y + quat.z * quat.z + quat.w * quat.w);
        }

        public static Quaternion Normalize(Quaternion quat)
        {
            float invLength = quat.Length();
            if (invLength < 1e-5f) return quat;
            invLength = 1.0f / invLength;

            return new Quaternion(quat.x * invLength, quat.y * invLength, quat.z * invLength, quat.w * invLength);
        }

        public static Quaternion FromToRotation3D(Vector3 from, Vector3 to, Vector3 perp180)
        {
            from = from.normalized;
            to = to.normalized;

            float dot = Vector3.Dot(from, to);
            if (1.0f - dot < 1e-5f) return Quaternion.identity;
            if (1.0f + dot < 1e-5f) return Quaternion.AngleAxis(180.0f, perp180);

            float angle = MathEx.SafeAcos(dot) * Mathf.Rad2Deg;
            Vector3 rotationAxis = Vector3.Cross(from, to).normalized;
            return Quaternion.AngleAxis(angle, rotationAxis);
        }

        public static Quaternion FromToRotation2D(Vector2 from, Vector2 to)
        {
            from = from.normalized;
            to = to.normalized;

            float dot = Vector2.Dot(from, to);
            if (1.0f - dot < 1e-5f) return Quaternion.identity;
            if (1.0f + dot < 1e-5f) return Quaternion.AngleAxis(180.0f, Vector3.forward);

            float angle = MathEx.SafeAcos(dot) * Mathf.Rad2Deg;
            Vector3 rotationAxis = Vector3.Cross(from, to).normalized;
            return Quaternion.AngleAxis(angle, rotationAxis);
        }

        public static float ConvertTo2DRotation(this Quaternion quat)
        {
            Vector3 axis; float angle;
            quat.ToAngleAxis(out angle, out axis);

            if (Vector3.Dot(Vector3.forward, axis) < 0.0f) angle = -angle;
            return angle;
        }
    }
}
