using UnityEngine;

namespace RTG
{
    public interface IGizmoCap
    {
        Gizmo Gizmo { get; }
        int HandleId { get; }
        Priority HoverPriority3D { get; }
        Priority HoverPriority2D { get; }
        Priority GenericHoverPriority { get; }

        void SetHoverable(bool isHoverable);
        void SetVisible(bool isVisible);
        void Render(Camera camera);
    }
}
