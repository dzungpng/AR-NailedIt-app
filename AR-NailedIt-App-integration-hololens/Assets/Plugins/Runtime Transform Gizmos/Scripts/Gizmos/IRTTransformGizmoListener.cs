namespace RTG
{
    public interface IRTTransformGizmoListener
    {
        bool OnCanBeTransformed(Gizmo transformGizmo);
        void OnTransformed(Gizmo transformGizmo);
    }
}
