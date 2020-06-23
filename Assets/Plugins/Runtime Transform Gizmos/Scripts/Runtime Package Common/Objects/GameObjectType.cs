using UnityEngine;
using System;
using System.Collections.Generic;

namespace RTG
{
    [Flags]
    public enum GameObjectType
    {
        Mesh = 1,
        Terrain = 2,
        Sprite = 4,
        Camera = 8,
        Light = 16,
        ParticleSystem = 32,
        /// <summary>
        /// Identifies an empty object. An empty object is an object which doesn't
        /// belong to any of the types above.
        /// </summary>
        Empty = 64
    }

    public static class GameObjectTypeHelper
    {
        private static int _numTypes;
        private static List<GameObjectType> _allObjectTypes;
        private static GameObjectType _allCombined = GameObjectType.Camera | GameObjectType.Empty | GameObjectType.Mesh |
                                                     GameObjectType.Sprite | GameObjectType.Terrain | GameObjectType.Light |
                                                     GameObjectType.ParticleSystem;

        static GameObjectTypeHelper()
        {
            var allTypes = Enum.GetValues(typeof(GameObjectType));
            _numTypes = allTypes.Length;

            _allObjectTypes = new List<GameObjectType>(_numTypes);
            foreach (var type in allTypes) _allObjectTypes.Add((GameObjectType)type);
        }

        public static int NumTypes { get { return _numTypes; } }
        public static GameObjectType[] AllObjectTypes { get { return _allObjectTypes.ToArray(); } }
        public static GameObjectType AllCombined { get { return _allCombined; } }

        public static bool Is3DObjectType(GameObjectType objectType)
        {
            return objectType != GameObjectType.Sprite;
        }

        public static bool Is2DObjectType(GameObjectType objectType)
        {
            return objectType == GameObjectType.Sprite;
        }

        public static bool HasVolume(GameObjectType objectType)
        {
            return objectType == GameObjectType.Terrain || objectType == GameObjectType.Mesh || objectType == GameObjectType.Sprite;
        }

        public static bool IsTypeBitSet(int objectTypeMask, GameObjectType typeBit)
        {
            return (objectTypeMask & (int)typeBit) != 0;
        }

        public static int SetTypeBit(int objectTypeMask, GameObjectType typeBit)
        {
            return (objectTypeMask | (int)typeBit);
        }

        public static int ClearTypeBit(int objectTypeMask, GameObjectType typeBit)
        {
            return (objectTypeMask & (~(int)typeBit));
        }
    }
}

