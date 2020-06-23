using UnityEngine;

namespace RTG
{
    public interface ISceneGizmo
    {
        Gizmo OwnerGizmo { get; }
        Camera SceneCamera { get; }
    }
}
