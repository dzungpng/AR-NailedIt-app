using UnityEngine;

namespace RTG
{
    public abstract class SceneGizmoCap
    {
        protected SceneGizmo _sceneGizmo;
        protected GizmoCap3D _cap;

        public int HandleId { get { return _cap.HandleId; } }
        public Vector3 Position { get { return _cap.Position; } }

        public SceneGizmoCap(SceneGizmo sceneGizmo, int capHandleId)
        {
            _sceneGizmo = sceneGizmo;
            _cap = new GizmoCap3D(sceneGizmo.Gizmo, capHandleId);
        }

        public void SetHoverable(bool isHoverable)
        {
            _cap.SetHoverable(isHoverable);
        }
        public abstract void Render(Camera camera);
    }
}
