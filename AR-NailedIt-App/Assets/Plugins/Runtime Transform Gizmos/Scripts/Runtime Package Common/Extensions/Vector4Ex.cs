using UnityEngine;

namespace RTG
{
    public static class Vector4Ex
    {
        public static Vector4 FromVector3(Vector3 vec, float w)
        {
            return new Vector4(vec.x, vec.y, vec.z, w);
        }
    }
}
