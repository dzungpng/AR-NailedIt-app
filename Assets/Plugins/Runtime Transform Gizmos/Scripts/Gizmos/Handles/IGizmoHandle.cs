using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public interface IGizmoHandle
    {
        int Id { get; }
        Gizmo Gizmo { get; }
        IGizmoDragSession DragSession { get; set; }
        Priority GenericHoverPriority { get; }
        Priority HoverPriority2D { get; }
        Priority HoverPriority3D { get; }
        int Num3DShapes { get; }
        int Num2DShapes { get; }
        bool Has3DShapes { get; }
        bool Has2DShapes { get; }
        bool Is2DHoverable { get; set; }
        bool Is3DHoverable { get; set; }
        bool Is2DVisible { get; set; }
        bool Is3DVisible { get; set; }

        float GetZoomFactor(Camera camera);
        void SetZoomFactorTransform(GizmoTransform transform);
        void SetHoverable(bool isHoverable);
        void SetVisible(bool isVisible);
        Shape3D Get3DShape(int shapeIndex);
        Shape2D Get2DShape(int shapeIndex);
        void SetAll3DShapesVisible(bool visible);
        void Set3DShapeVisible(int shapeIndex, bool isVisible);
        void Set3DShapeHoverable(int shapeIndex, bool isHoverable);
        void SetAll2DShapesVisible(bool visible);
        void Set2DShapeVisible(int shapeIndex, bool isVisible);
        void Set2DShapeHoverable(int shapeIndex, bool isHoverable);
        bool Is3DShapeVisible(int shapeIndex);
        bool Is2DShapeVisible(int shapeIndex);
        bool Contains3DShape(Shape3D shape);
        bool Contains2DShape(Shape2D shape);
        int Add3DShape(Shape3D shape);
        int Add2DShape(Shape2D shape);
        void Remove3DShape(Shape3D shape);
        void Remove2DShape(Shape2D shape);
        void Render3DSolid();
        void Render3DWire();
        void Render3DSolid(int shapeIndex);
        void Render3DWire(int shapeIndex);
        void Render2DSolid(Camera camera);
        void Render2DWire(Camera camera);
        void Render2DSolid(Camera camera, int shapeIndex);
        void Render2DWire(Camera camera, int shapeIndex);
        Rect GetVisible2DShapesRect(Camera camera);
        AABB GetVisible3DShapesAABB();
        bool IsVisibleToCamera(Camera camera, Plane[] frustumWorldPlanes);
        GizmoHandleHoverData GetHoverData(Ray hoverRay);
    }
}
