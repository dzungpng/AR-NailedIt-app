using UnityEngine;

namespace RTG
{
    public interface IXZGrid
    {
        Plane WorldPlane { get; }
        Matrix4x4 WorldMatrix { get; }

        XZGridCell CellFromWorldPoint(Vector3 worldPoint);
        bool Raycast(Ray ray, out float t);
    }
}
