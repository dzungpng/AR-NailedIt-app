using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class SceneRaycastFilter
    {
        private List<GameObjectType> _allowedObjectTypes = new List<GameObjectType>();
        private List<GameObject> _ignoreObjects = new List<GameObject>();
        private int _layerMask = ~0;

        public List<GameObjectType> AllowedObjectTypes { get { return _allowedObjectTypes; } }
        public List<GameObject> IgnoreObjects { get { return _ignoreObjects; } }
        public int LayerMask { get { return _layerMask; } set { _layerMask = value; } }

        public void FilterHits(List<GameObjectRayHit> hits)
        {
            hits.RemoveAll(item => !AllowedObjectTypes.Contains(item.HitObject.GetGameObjectType()) ||
                           IgnoreObjects.Contains(item.HitObject) || !LayerEx.IsLayerBitSet(_layerMask, item.HitObject.layer));
        }
    }
}
