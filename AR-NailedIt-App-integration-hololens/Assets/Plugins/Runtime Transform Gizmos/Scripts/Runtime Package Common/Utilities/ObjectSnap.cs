using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class ObjectSnap
    {
        public static void Snap(GameObject root, Vector3 pivot, Vector3 dest)
        {
            Transform rootTransform = root.transform;
            Vector3 direction = rootTransform.position - pivot;
            rootTransform.position = dest + direction;
        }

        public static void Snap(List<GameObject> roots, Vector3 pivot, Vector3 dest)
        {
            foreach (var root in roots) Snap(root, pivot, dest);
        }
    }
}
