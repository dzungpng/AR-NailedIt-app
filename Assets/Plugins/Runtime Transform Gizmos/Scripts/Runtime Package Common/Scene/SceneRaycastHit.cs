using UnityEngine;

namespace RTG
{
    public class SceneRaycastHit
    {
        private GameObjectRayHit _objectHit;
        private XZGridRayHit _gridHit;

        public bool WasAnythingHit { get { return _objectHit != null || _gridHit != null; } }
        public bool WasAnObjectHit { get { return _objectHit != null; } }
        public bool WasGridHit { get { return _gridHit != null; } }
        public GameObjectRayHit ObjectHit { get { return _objectHit; } }
        public XZGridRayHit GridHit { get { return _gridHit; } }

        public SceneRaycastHit(GameObjectRayHit objectRayHit, XZGridRayHit gridRayHit)
        {
            _objectHit = objectRayHit;
            _gridHit = gridRayHit;
        }
    }
}