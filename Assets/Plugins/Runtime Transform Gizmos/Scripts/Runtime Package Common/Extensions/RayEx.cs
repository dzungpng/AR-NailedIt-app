using UnityEngine;

namespace RTG
{
    public static class RayEx
    {
        public static Ray InverseTransform(this Ray ray, Matrix4x4 transformMatrix)
        {
            Matrix4x4 inverseTransform = transformMatrix.inverse; 
            Vector3 origin = inverseTransform.MultiplyPoint(ray.origin);
            Vector3 direction = inverseTransform.MultiplyVector(ray.direction).normalized;

            return new Ray(origin, direction);
        }

        public static Ray Mirror(this Ray ray, Vector3 mirrorPoint)
        {
            Ray mirroredRay = ray;
            mirroredRay.origin = mirrorPoint + ray.direction * (ray.origin - mirrorPoint).magnitude;
            mirroredRay.direction = -ray.direction;

            return mirroredRay;
        }
    }
}
