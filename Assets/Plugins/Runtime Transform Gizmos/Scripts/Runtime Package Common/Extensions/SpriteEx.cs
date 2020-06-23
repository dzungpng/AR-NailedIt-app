using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class SpriteEx
    {
        public static List<Vector3> GetWorldVerts(this Sprite sprite, Transform spriteTransform)
        {
            var verts = new List<Vector3>(sprite.GetModelVerts());
            spriteTransform.TransformPoints(verts);
            return verts;
        }

        public static List<Vector3> GetModelVerts(this Sprite sprite)
        {
            var verts = new List<Vector3>(7);
            var modelVerts = sprite.vertices;

            foreach (var pt in modelVerts)
                verts.Add(pt);

            return verts;
        }
    }
}
