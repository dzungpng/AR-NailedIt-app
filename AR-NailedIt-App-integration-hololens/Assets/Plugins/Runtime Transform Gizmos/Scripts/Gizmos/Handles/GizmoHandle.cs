using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    /// <summary>
    /// Delegate which is used to handle CanHover events fired from the GizmoHandle class.
    /// </summary>
    /// <param name="handleId">The handle id.</param>
    /// <param name="ownerGizmo">The gizmo which owns the handle.</param>
    /// <param name="handleHoverData">Contains useful information about the handle hover state.</param>
    /// <param name="answer">
    /// All handlers must answer with either yes or no to tell the handle if it can be hovered.
    /// </param>
    public delegate void GizmoHandleCanHoverHandler(int handleId, Gizmo ownerGizmo, GizmoHandleHoverData handleHoverData, YesNoAnswer answer);

    /// <summary>
    /// Gizmo handles represent the core components that are used to define a gizmo. A handle 
    /// is essentially a shape, or collection of shapes, both 2D and/or 3D, which can be tapped 
    /// and interacted with by the user. A gizmo is, at its core, nothing else but a collection 
    /// of handles.
    /// </summary>
    public class GizmoHandle : IGizmoHandle
    {
        /// <summary>
        /// Event fired from 'GetHoverData' to allow subscribers to decide if a handle is allowed
        /// to be hovered,
        /// </summary>
        /// <param name="handleId">The handle id.</param>
        /// <param name="ownerGizmo">The gizmo which owns the handle.</param>
        /// <param name="handleHoverData">Contains useful information about the handle hover state.</param>
        /// <param name="answer">
        /// All handlers must answer with either yes or no to tell the handle if it can be hovered.
        /// </param>
        public GizmoHandleCanHoverHandler CanHover;

        private int _id;
        private Gizmo _gizmo;
        private GizmoTransform _zoomFactorTransform;

        private Priority _genericHoverPriority = new Priority();
        private Priority _hoverPriority2D = new Priority();
        private Priority _hoverPriority3D = new Priority();

        private List<GizmoHandleShape3D> _3DShapes = new List<GizmoHandleShape3D>();
        private List<GizmoHandleShape2D> _2DShapes = new List<GizmoHandleShape2D>();

        /// <summary>
        /// Returns the handle's id. The id is unique at gizmo scope, but handles that belong
        /// to different gizmos might have the same id.
        /// </summary>
        public int Id { get { return _id; } }
        /// <summary>
        /// Returns the gizmo which owns the handle. Only one gizmo can own a handle and this
        /// gizmo must be specified at handle creation time as a constructor parameter. Thus,
        /// the owner gizmo can not be changed after the handle was created.
        /// </summary>
        public Gizmo Gizmo { get { return _gizmo; } }
        /// <summary>
        /// The drag session which is associated with the handle. When the user taps one of the
        /// gizmo handles, the gizmo will check if the handle has a drag session associated with
        /// it and if it does, it will attempt to start the session. 
        /// </summary>
        public IGizmoDragSession DragSession { get; set; }
        /// <summary>
        /// Returns the handle's generic hover priority. The generic hover priority is used as
        /// a sorting criteria by the hover update algorithm to sort between a mixture of 2D
        /// and 3D handles that are hovered by the cursor. 
        /// </summary>
        public Priority GenericHoverPriority { get { return _genericHoverPriority; } }
        /// <summary>
        /// Returns the handle's 2D hover priority. The 2D hover priority is used as a sorting 
        /// criteria by the hover update algorithm to sort between 2D handles that are hovered
        /// by the cursor.
        /// </summary>
        public Priority HoverPriority2D { get { return _hoverPriority2D; } }
        /// <summary>
        /// Returns the handle's 3D hover priority. The 2D hover priority is used as a sorting 
        /// criteria by the hover update algorithm to sort between 3D handles that are hovered
        /// by the cursor.
        /// </summary>
        public Priority HoverPriority3D { get { return _hoverPriority3D; } }
        /// <summary>
        /// Returns the number of 3D shapes which are associated with the handle.
        /// </summary>
        public int Num3DShapes { get { return _3DShapes.Count; } }
        /// <summary>
        /// Returns the number of 2D shapes which are associated with the handle.
        /// </summary>
        public int Num2DShapes { get { return _2DShapes.Count; } }
        /// <summary>
        /// Can be used to check if the handle has any 3D shapes associated with it. Shorthand
        /// for checking if the number of 3D shapes is different than 0.
        /// </summary>
        public bool Has3DShapes { get { return Num3DShapes != 0; } }
        /// <summary>
        /// Can be used to check if the handle has any 2D shapes associated with it. Shorthand
        /// for checking if the number of 2D shapes is different than 0.
        /// </summary>
        public bool Has2DShapes { get { return Num2DShapes != 0; } }
        /// <summary>
        /// This property can be used to tell the handle if its 2D shapes are hoverable. For
        /// example, if a handle contains both 3D and 2D shapes, setting this to false will
        /// cause the hover algorithm to ignore 2D shapes and consider only the 3D ones.
        /// </summary>
        public bool Is2DHoverable { get; set; }
        /// <summary>
        /// This property can be used to tell the handle if its 3D shapes are hoverable. For
        /// example, if a handle contains both 3D and 2D shapes, setting this to false will
        /// cause the hover algorithm to ignore 3D shapes and consider only the 2D ones.
        /// </summary>
        public bool Is3DHoverable { get; set; }
        /// <summary>
        /// This property can be used to tell the handle that it should not render any of its
        /// 2D shapes. Note: When this property is set to false, any 2D shapes associated with
        /// the handle will no longer be hoverable even if 'Is2DHoverable' returns true.
        /// </summary>
        public bool Is2DVisible { get; set; }
        /// <summary>
        /// This property can be used to tell the handle that it should not render any of its
        /// 3D shapes. Note: When this property is set to false, any 3D shapes associated with
        /// the handle will no longer be hoverable even if 'Is3DHoverable' returns true.
        /// </summary>
        public bool Is3DVisible { get; set; }

        /// <summary>
        /// Constructor.
        /// </summary>
        /// <param name="gizmo">The gizmo which owns the handle.</param>
        /// <param name="id">The handle id. Must be unique at gizmo scope.</param>
        public GizmoHandle(Gizmo gizmo, int id)
        {
            _id = id;
            _gizmo = gizmo;
            _zoomFactorTransform = _gizmo.Transform;

            SetHoverable(true);
            SetVisible(true);
        }

        /// <summary>
        /// Returns the handle's zoom factor for the specified camera. This value can be used to
        /// scale handle shape properties such as sizes for example in order to allow the shapes
        /// to mainain a constant size regardless of the distance from the camera. This function
        /// uses the world position of the specified zoom factor transform to calculate the distance
        /// from the camera position. See also 'SetZoomFactorTransform'.
        /// </summary>
        public float GetZoomFactor(Camera camera)
        {
            return camera.EstimateZoomFactor(_zoomFactorTransform.Position3D);
        }

        /// <summary>
        /// Allows you to set the zoom factor transform. The world position of this transform is used 
        /// by the 'GetZoomFactor' function to calculate the handle zoom factor. If null is specified,
        /// the function will set the zoom factor transform to the transform of the owner gizmo.
        /// </summary>
        public void SetZoomFactorTransform(GizmoTransform transform)
        {
            if (transform == null) _zoomFactorTransform = _gizmo.Transform;
            else _zoomFactorTransform = transform;
        }

        /// <summary>
        /// Sets the hoverable state of the handle. This is equivalent to setting
        /// the 'Is2DHoverable' and 'Is3DHoverable' to the same value so it can be
        /// considered a shorthand function.
        /// </summary>
        public void SetHoverable(bool isHoverable)
        {
            Is2DHoverable = Is3DHoverable = isHoverable;
        }

        /// <summary>
        /// Sets the visibility state of the handle. This is equivalent to setting the 
        /// 'Is2DVisible' and 'Is3DVisible' to the same value so it can be considered a 
        /// shorthand function. Note: If this is set to false, the handle shapes will no
        /// longer be hoverable regardless of the values returned from 'Is2DHoverable' and
        /// 'Is3DHoverable'.
        /// </summary>
        public void SetVisible(bool isVisible)
        {
            Is2DVisible = Is3DVisible = isVisible;
        }

        /// <summary>
        /// Returns the 3D shape with the specified index.
        /// </summary>
        public Shape3D Get3DShape(int shapeIndex)
        {
            return _3DShapes[shapeIndex].Shape;
        }

        /// <summary>
        /// Returns the 2D shape with the specified index.
        /// </summary>
        public Shape2D Get2DShape(int shapeIndex)
        {
            return _2DShapes[shapeIndex].Shape;
        }

        /// <summary>
        /// Sets the visibility state of all the 3D shapes associated with the handle. This
        /// is equivalent to calling the 'Is3DVisible', but the 2 should not be confused.
        /// The reason why this function exists is because you can leave the 'Is3DVisible'
        /// property to true and hide shapes selectively. Later, you can call this function
        /// to restore the visibility state of all shapes as needed. Invisible shapes are also
        /// not hoverable.
        /// </summary>
        public void SetAll3DShapesVisible(bool visible)
        {
            foreach (var shape in _3DShapes)
                shape.IsVisible = visible;
        }

        /// <summary>
        /// Allows you to set the visibility state of the 3D shape with the specified index. Not 
        /// to be confused with 'Is3DVisible'. 'Is3DVisible' can be used to toggle the visibility 
        /// state of the handle whereas this function can be used to toggle the visibility state 
        /// of a certain shape that belongs to the handle. Note: If 'Is3DVisible' is false, the 
        /// visibility state of the 3D shapes is ignored and all 3D shapes will be considered invisible.
        /// Invisible shapes are also not hoverable.
        /// </summary>
        public void Set3DShapeVisible(int shapeIndex, bool isVisible)
        {
            _3DShapes[shapeIndex].IsVisible = isVisible;
        }

        /// <summary>
        /// Returns the visibility state of the 3D shape with the specified index. Not to be confused 
        /// with 'Is3DVisible'. For example, 'Is3DVisible' can return true, but this function will return
        /// false if a previous call to 'Set3DShapeVisible' was made to hide the shape.
        /// </summary>
        public bool Is3DShapeVisible(int shapeIndex)
        {
            return _3DShapes[shapeIndex].IsVisible;
        }

        /// <summary>
        /// Allows you to set the hoverable state of the 3D shape with the specified index. Not to be 
        /// confused with 'Is3DHoverable'. 'Is3DHoverable' can be used to toggle the hoverable state 
        /// of the handle whereas this function can be used to toggle the hoverable state of a certain 
        /// shape that belongs to the handle. Note: If 'Is3DHoverable' is false, the hoverable state of 
        /// the 3D shapes is ignored and all 3D shapes will be considered NOT hoverable. Invisible shapes
        /// are not hoverable. So if the same shape was marked as invisible or if 'Is3DVisible' returns 
        /// false, the shape is not hoverable.
        /// </summary>
        public void Set3DShapeHoverable(int shapeIndex, bool isHoverable)
        {
            _3DShapes[shapeIndex].IsHoverable = isHoverable;
        }

        /// <summary>
        /// Sets the visibility state of all the 2D shapes associated with the handle. This
        /// is equivalent to calling the 'Is2DVisible', but the 2 should not be confused.
        /// The reason why this function exists is because you can leave the 'Is2DVisible'
        /// property to true and hide shapes selectively. Later, you can call this function
        /// to restore the visibility state of all shapes as needed. Invisible shapes are also
        /// not hoverable.
        /// </summary>
        public void SetAll2DShapesVisible(bool visible)
        {
            foreach (var shape in _2DShapes)
                shape.IsVisible = visible;
        }

        /// <summary>
        /// Allows you to set the visibility state of the 2D shape with the specified index. Not 
        /// to be confused with 'Is2DVisible'. 'Is2DVisible' can be used to toggle the visibility 
        /// state of the handle whereas this function can be used to toggle the visibility state 
        /// of a certain shape that belongs to the handle. Note: If 'Is2DVisible' is false, the 
        /// visibility state of the 2D shapes is ignored and all 2D shapes will be considered invisible.
        /// Invisible shapes are also not hoverable.
        /// </summary>
        public void Set2DShapeVisible(int shapeIndex, bool isVisible)
        {
            _2DShapes[shapeIndex].IsVisible = isVisible;
        }

        /// <summary>
        /// Returns the visibility state of the 2D shape with the specified index. Not to be confused 
        /// with 'Is2DVisible'. For example, 'Is2DVisible' can return true, but this function will return
        /// false if a previous call to 'Set2DShapeVisible' was made to hide the shape.
        /// </summary>
        public bool Is2DShapeVisible(int shapeIndex)
        {
            return _2DShapes[shapeIndex].IsVisible;
        }

        /// <summary>
        /// Allows you to set the hoverable state of the 2D shape with the specified index. Not to be 
        /// confused with 'Is2DHoverable'. 'Is2DHoverable' can be used to toggle the hoverable state 
        /// of the handle whereas this function can be used to toggle the hoverable state of a certain 
        /// shape that belongs to the handle. Note: If 'Is2DHoverable' is false, the hoverable state of 
        /// the 2D shapes is ignored and all 2D shapes will be considered NOT hoverable. Invisible shapes
        /// are not hoverable. So if the same shape was marked as invisible or if 'Is2DVisible' returns 
        /// false, the shape is not hoverable.
        /// </summary>
        public void Set2DShapeHoverable(int shapeIndex, bool isHoverable)
        {
            _2DShapes[shapeIndex].IsHoverable = isHoverable;
        }

        /// <summary>
        /// Checks if the handle contains the specified 3D shape.
        /// </summary>
        public bool Contains3DShape(Shape3D shape)
        {
            return _3DShapes.FindAll(item => item.Shape == shape).Count != 0;
        }

        /// <summary>
        /// Checks if the handle contains the specified 2D shape.
        /// </summary>
        public bool Contains2DShape(Shape2D shape)
        {
            return _2DShapes.FindAll(item => item.Shape == shape).Count != 0;
        }

        /// <summary>
        /// Adds the specified 3D shape to the handle.
        /// </summary>
        /// <returns>
        /// The index of the 3D shape inside the handle's 3D shape collection
        /// or -1 if the shape already exists.
        /// </returns>
        public int Add3DShape(Shape3D shape)
        {
            if (!Contains3DShape(shape))
            {
                var gizmoHandleShape = new GizmoHandleShape3D(shape);
                _3DShapes.Add(gizmoHandleShape);

                return _3DShapes.Count - 1;
            }

            return -1;
        }

        /// <summary>
        /// Adds the specified 2D shape to the handle.
        /// </summary>
        /// <returns>
        /// The index of the 2D shape inside the handle's 2D shape collection
        /// or -1 if the shape already exists.
        /// </returns>
        public int Add2DShape(Shape2D shape)
        {
            if (!Contains2DShape(shape))
            {
                var gizmoHandleShape = new GizmoHandleShape2D(shape);
                _2DShapes.Add(gizmoHandleShape);

                return _2DShapes.Count - 1;
            }

            return -1;
        }

        /// <summary>
        /// Removes the specifed 3D shape. The function has no effect if the handle doesn't contain 
        /// the specified shape.
        /// </summary>
        public void Remove3DShape(Shape3D shape)
        {
            _3DShapes.RemoveAll(item => item.Shape == shape);
        }

        /// <summary>
        /// Removes the specifed 2D shape. The function has no effect if the handle doesn't contain 
        /// the specified shape.
        /// </summary>
        public void Remove2DShape(Shape2D shape)
        {
            _2DShapes.RemoveAll(item => item.Shape == shape);
        }

        /// <summary>
        /// Renders all 3D shapes as solids. This function will have no effect if 'Is3DVisible' 
        /// returns false. Also, the function will ignore shapes which have been marked as invisible.
        /// </summary>
        public void Render3DSolid()
        {
            if (Is3DVisible)
            {
                foreach (var shape in _3DShapes)
                {
                    if (shape.IsVisible)
                        shape.Shape.RenderSolid();
                }
            }
        }

        /// <summary>
        /// Renders all 3D shapes using a wire representation. This function will have no effect if 
        /// 'Is3DVisible' returns false. Also, the function will ignore shapes which have been marked 
        /// as invisible.
        /// </summary>
        public void Render3DWire()
        {
            if (Is3DVisible)
            {
                foreach (var shape in _3DShapes)
                {
                    if(shape.IsVisible)
                        shape.Shape.RenderWire();
                }
            }
        }

        /// <summary>
        /// Renders the 3D shape with the specified index as a solid. The function has no effect if 
        /// 'Is3DVisible' returns false or if the shape is invisible.
        /// </summary>
        public void Render3DSolid(int shapeIndex)
        {
            GizmoHandleShape3D shape = _3DShapes[shapeIndex];
            if (Is3DVisible && shape.IsVisible) shape.Shape.RenderSolid();
        }

        /// <summary>
        /// Renders the 3D shape with the specified index using a wire representation. The function has
        /// no effect if 'Is3DVisible' returns false or if the shape is invisible.
        /// </summary>
        public void Render3DWire(int shapeIndex)
        {
            GizmoHandleShape3D shape = _3DShapes[shapeIndex];
            if (Is3DVisible && shape.IsVisible) shape.Shape.RenderWire();
        }

        /// <summary>
        /// Renders all 2D shapes as solids. This function will have no effect if 'Is2DVisible' 
        /// returns false. Also, the function will ignore shapes which have been marked as invisible.
        /// </summary>
        public void Render2DSolid(Camera camera)
        {
            if (Is2DVisible && camera.IsPointInFrontNearPlane(Gizmo.Transform.Position3D))
            {
                foreach (var shape in _2DShapes)
                {
                    if (shape.IsVisible)
                        shape.Shape.RenderArea(camera);
                }
            }
        }

        /// <summary>
        /// Renders all 2D shapes using a wire representation. This function will have no effect if 
        /// 'Is2DVisible' returns false. Also, the function will ignore shapes which have been marked 
        /// as invisible.
        /// </summary>
        public void Render2DWire(Camera camera)
        {
            if (Is2DVisible && camera.IsPointInFrontNearPlane(Gizmo.Transform.Position3D))
            {
                foreach (var shape in _2DShapes)
                {
                    if(shape.IsVisible)
                        shape.Shape.RenderBorder(camera);
                }
            }
        }

        /// <summary>
        /// Renders the 2D shape with the specified index as a solid. The function has no effect if 
        /// 'Is2DVisible' returns false or if the shape is invisible.
        /// </summary>
        /// <param name="camera">The camera which renders the shape.</param>
        public void Render2DSolid(Camera camera, int shapeIndex)
        {
            GizmoHandleShape2D shape = _2DShapes[shapeIndex];
            if (Is2DVisible && shape.IsVisible && camera.IsPointInFrontNearPlane(Gizmo.Transform.Position3D)) shape.Shape.RenderArea(camera);
        }

        /// <summary>
        /// Renders the 2D shape with the specified index using a wire representation. The function has
        /// no effect if 'Is2DVisible' returns false or if the shape is invisible.
        /// </summary>
        /// <param name="camera">The camera which renders the shape.</param>
        public void Render2DWire(Camera camera, int shapeIndex)
        {
            GizmoHandleShape2D shape = _2DShapes[shapeIndex];
            if (Is2DVisible && shape.IsVisible && camera.IsPointInFrontNearPlane(Gizmo.Transform.Position3D)) shape.Shape.RenderBorder(camera);
        }

        /// <summary>
        /// Calculates and returns the rectangle that encloses all the 2D shapes which belong to 
        /// the handle. If the handle doesn't contain any 2D shapes or if none of them are marked 
        /// as visible, a rectangle with the size of 0 will be returned. The 'Is2DVisible' property 
        /// is ignored. The function will also return an empty rect if the 3D position of the owner
        /// gizmo falls behind the camera near plane (i.e. behind the camera).
        /// </summary>
        public Rect GetVisible2DShapesRect(Camera camera)
        {
            if (Num2DShapes == 0 || 
               !camera.IsPointInFrontNearPlane(Gizmo.Transform.Position3D)) return new Rect();

            var allRectPts = new List<Vector2>(Num2DShapes * 4);
            foreach (var shape in _2DShapes)
            {
                if (!shape.IsVisible) continue;
         
                Rect shapeRect = shape.Shape.GetEncapsulatingRect();
                allRectPts.AddRange(shapeRect.GetCornerPoints());
            }

            if (allRectPts.Count == 0) return new Rect();
            return RectEx.FromPoints(allRectPts);
        }

        /// <summary>
        /// Calculates and returns the AABB that encloses all the 3D shapes which belong to the handle.
        /// If the handle doesn't contain any 3D shapes or if none of them are marked as visible, an 
        /// invalid AABB will be returned. The 'Is3DVisible' property is ignored.
        /// </summary>
        public AABB GetVisible3DShapesAABB()
        {
            AABB aabb = AABB.GetInvalid();
            if (Num3DShapes == 0) return aabb;

            foreach(var shape in  _3DShapes)
            {
                if (!shape.IsVisible) continue;

                AABB shapeAABB = shape.Shape.GetAABB();
                if (shapeAABB.IsValid)
                {
                    if (aabb.IsValid) aabb.Encapsulate(shapeAABB);
                    else aabb = shapeAABB;
                }
            }

            return aabb;
        }

        /// <summary>
        /// Checks if the handle is visible on the screen (i.e. it is visible to the
        /// specified camera.
        /// </summary>
        /// <param name="camera">The camera which is involved in the visibility test.</param>
        /// <param name="frustumWorldPlanes">The camera frustum world planes.</param>
        /// <returns>
        /// True if at least one shape (either 2D or 3D) that belongs to the handle is 
        /// visible and false otehrwise. Note: When the gizmo position lies behind the 
        /// camera near plane, all 2D shapes are considered NOT visible.
        /// </returns>
        public bool IsVisibleToCamera(Camera camera, Plane[] frustumWorldPlanes)
        {
            bool found2DVisible = false;
            bool found3DVisible = false;
            if (Num2DShapes != 0)
            {
                if (camera.IsPointInFrontNearPlane(Gizmo.Transform.Position3D))
                {
                    foreach(var shape in _2DShapes)
                    {
                        Rect enclosingRect = shape.Shape.GetEncapsulatingRect();
                        if(camera.pixelRect.Overlaps(enclosingRect, true))
                        {
                            found2DVisible = true;
                            break;
                        }
                    }
                }
            }

            if (found2DVisible) return true;

            if (Num3DShapes != 0)
            {
                foreach (var shape in _3DShapes)
                {
                    AABB aabb = shape.Shape.GetAABB();
                    if (CameraViewVolume.CheckAABB(camera, aabb, frustumWorldPlanes))
                    {
                        found3DVisible = true;
                        break;
                    }
                }
            }

            return found3DVisible;
        }

        /// <summary>
        /// This function traverses the handle's 2D and 3D shapes and decides which one is hovered
        /// by the specified ray. It then returns the hover information inside an instance of the
        /// 'GizmoHandleHoverData' class. The ray should be created using the 'Camera.ScreenPointToRay'
        /// function and it represents the ray which is cast out from the screen into the 3D scene.
        /// The function will always give priority to 2D shapes. So for example, if the handle has
        /// a 2D and a 3D shape, and the ray hovers both of them, only the 2D shape will be taken into
        /// account.
        /// </summary>
        /// <param name="hoverRay">
        /// The hover ray. This should be created using the 'Camera.ScreenPointToRay' function. The
        /// function will convert the origin of the ray in screen space to detect the 2D shapes which
        /// are hovered by the ray.
        /// </param>
        /// <returns>
        /// If a shape is hovered by the input ray, the function returns an instance of the 
        /// 'GizmoHandleHoverData' class. Otherwise, it returns null. The function also returns
        /// null if there are any subscribers to the 'CanHover' event that don't allow the handle
        /// to be hovered.
        /// </returns>
        public GizmoHandleHoverData GetHoverData(Ray hoverRay)
        {
            float minDist = float.MaxValue;
            GizmoHandleHoverData handleHoverData = null;

            if (Is2DHoverable && Is2DVisible)
            {
                Vector2 screenRayOrigin = Gizmo.GetWorkCamera().WorldToScreenPoint(hoverRay.origin);
                GizmoHandleShape2D hovered2DShape = null;
                foreach (var shape in _2DShapes)
                {
                    if (shape.IsVisible && shape.IsHoverable)
                    {
                        if (shape.Shape.ContainsPoint(screenRayOrigin))
                        {
                            float dist = (shape.Shape.GetEncapsulatingRect().center - screenRayOrigin).magnitude;
                            if (hovered2DShape == null || dist < minDist)
                            {
                                hovered2DShape = shape;
                                minDist = dist;
                            }
                        }
                    }
                }

                if (hovered2DShape != null)
                {
                    handleHoverData = new GizmoHandleHoverData(hoverRay, this, screenRayOrigin);
                    if (CanHover != null)
                    {
                        var answer = new YesNoAnswer();
                        CanHover(Id, Gizmo, handleHoverData, answer);
                        if (answer.HasNo) return null;
                    }
                    return handleHoverData;
                }
            }

            if (Is3DHoverable && Is3DVisible)
            {
                minDist = float.MaxValue;
                GizmoHandleShape3D hovered3DShape = null;
                foreach (var shape in _3DShapes)
                {
                    if(shape.IsVisible && shape.IsHoverable)
                    {
                        float t;
                        if (shape.Shape.Raycast(hoverRay, out t))
                        {
                            if (hovered3DShape == null || t < minDist)
                            {
                                hovered3DShape = shape;
                                minDist = t;
                            }
                        }
                    }
                }

                if (hovered3DShape != null)
                {
                    handleHoverData = new GizmoHandleHoverData(hoverRay, this, minDist);
                    if (CanHover != null)
                    {
                        var answer = new YesNoAnswer();
                        CanHover(Id, Gizmo, handleHoverData, answer);
                        if (answer.HasNo) return null;
                    }

                    return handleHoverData;
                }
            }

            return null;
        }
    }
}
