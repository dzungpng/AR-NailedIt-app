using UnityEngine;
using System;
using System.Collections.Generic;

namespace RTG
{
    public static class ObjectCloning
    {
        [Flags]
        public enum TransformFlags
        {
            None = 0,
            Position = 1,
            Rotation = 2,
            Scale = 4,
            All = Position | Rotation | Scale
        }

        public struct Config
        {
            public Transform Parent;
            public TransformFlags TransformFlags;
            public int Layer;
        }

        private static Config _defaultConfig;

        static ObjectCloning()
        {
            _defaultConfig = new Config();
            _defaultConfig.TransformFlags = TransformFlags.All;
            _defaultConfig.Layer = 0;
        }

        public static Config DefaultConfig { get { return _defaultConfig; } }

        public static List<GameObject> CloneHierarchies(List<GameObject> roots, Config cloneConfig)
        {
            if(roots.Count == 0) return new List<GameObject>();

            var clones = new List<GameObject>(roots.Count);
            foreach(var root in roots)
            {
                GameObject clone = CloneHierarchy(root, cloneConfig);
                if (clone != null) clones.Add(clone);
            }

            return clones;
        }

        public static GameObject CloneHierarchy(GameObject root, Config cloneConfig)
        {
            if (root == null) return null;
            Transform rootTransform = root.transform;

            Vector3 position = Vector3.zero;
            Quaternion rotation = Quaternion.identity;
            Vector3 scale = Vector3.one;

            if ((cloneConfig.TransformFlags & TransformFlags.Position) != 0) position = rootTransform.position;
            if ((cloneConfig.TransformFlags & TransformFlags.Rotation) != 0) rotation = rootTransform.rotation;
            if ((cloneConfig.TransformFlags & TransformFlags.Scale) != 0) scale = rootTransform.lossyScale;

            GameObject clone = MonoBehaviour.Instantiate(root, position, rotation) as GameObject;
            clone.name = root.name;
            clone.layer = cloneConfig.Layer;

            Transform cloneTransform = clone.transform;
            cloneTransform.localScale = scale;
            cloneTransform.parent = cloneConfig.Parent;

            return clone;
        }
    }
}
