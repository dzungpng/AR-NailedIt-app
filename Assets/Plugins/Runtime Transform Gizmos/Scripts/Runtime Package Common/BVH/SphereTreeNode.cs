using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public class SphereTreeNode<T> 
    {
        private Sphere _sphere;
        private T _data;
        private SphereTreeNode<T> _parent;
        private List<SphereTreeNode<T>> _children = new List<SphereTreeNode<T>>();
        private BVHNodeFlags _flags = BVHNodeFlags.None;

        public List<SphereTreeNode<T>> Children { get { return new List<SphereTreeNode<T>>(_children); } }

        public SphereTreeNode()
        {
            _sphere = new Sphere(Vector3.zero, 1.0f);
            _data = default(T);
        }

        public SphereTreeNode(T data, Sphere sphere)
        {
            _sphere = sphere;
            _data = data;
        }

        public Sphere Sphere { get { return _sphere; } set { _sphere = value; } }
        public Vector3 Center { get { return _sphere.Center; } set { _sphere.Center = value; } }
        public float Radius { get { return _sphere.Radius; } set { _sphere.Radius = value; } }
        public SphereTreeNode<T> Parent { get { return _parent; } }
        public int NumChildren { get { return _children.Count; } }
        public T Data { get { return _data; } set { _data = value; } }

        public void SetFlags(BVHNodeFlags flags)
        {
            _flags = flags;
        }

        public bool IsFlagBitSet(BVHNodeFlags bit)
        {
            return (_flags & bit) != 0;
        }

        public void SetFlagsBits(BVHNodeFlags bits)
        {
            _flags |= bits;
        }

        public void ClearFlagsBits(BVHNodeFlags bits)
        {
            _flags &= ~bits;
        }

        /// <summary>
        /// Checks if the node's sphere is outside of its parent's 
        /// sphere. The method returns false if the node doesn't have
        /// a parent.
        /// </summary>
        public bool IsOutsideParent()
        {
            // No parent?
            if (_parent == null) return false;

            // Calculate the exit distance. If this is larger than the parent's
            // radius, it means the node is outside its parent.
            float exitDistance = (Center - _parent.Center).magnitude + Radius;
            if (exitDistance > _parent.Radius) return true;

            return false;
        }

        /// <summary>
        /// Finds the child which is closest to 'node'.
        /// </summary>
        /// <returns>
        /// The child closest to 'node' or nul if the no children
        /// are available.
        /// </returns>
        public SphereTreeNode<T> ClosestChild(SphereTreeNode<T> node)
        {
            // No children? 
            if (NumChildren == 0) return null;

            // Loop through each child
            float minDistSq = float.MaxValue;
            SphereTreeNode<T> closestChild = null;
            foreach(var child in _children)
            {
                // Closer than what we have so far?
                float distSq = (node.Center - child.Center).sqrMagnitude;
                if(distSq < minDistSq)
                {
                    minDistSq = distSq;
                    closestChild = child;
                }
            }

            // Return the closest child
            return closestChild;
        }

        /// <summary>
        /// Sets the node's parent. This call is ignored if the specified parent
        /// is the node itself or if it's the same as the current parent.
        /// </summary>
        public void SetParent(SphereTreeNode<T> newParent)
        {
            // Ignore parent?
            if (newParent == this || newParent == _parent) return;

            // If we already have a parent, detach the node from it
            if (_parent != null)
            {
                _parent._children.Remove(this);
                _parent = null;
            }

            // If the new node is not null, attach the node to this new parent
            if (newParent != null)
            {
                _parent = newParent;
                _parent._children.Add(this);
            }
            else _parent = null;
        }

        /// <summary>
        /// This method will recalculate the node's center and radius
        /// so that it encapsulates all children. This is a recursive
        /// call which propagates up the hierarchy towards the root.
        /// </summary>
        public void EncapsulateChildrenBottomUp()
        {
            // Nothing to do if the node doesn't have any children
            if (NumChildren != 0)
            {
                SphereTreeNode<T> parent = this;
                while (parent != null)
                {
                    // First, we will calculate the new sphere center as the average
                    // of all child node centers.
                    Vector3 centerSum = Vector3.zero;
                    foreach (var child in parent._children) centerSum += child.Center;
                    parent.Center = centerSum * (1.0f / parent.NumChildren);

                    // Now we will calculate the radius which the node must have so that
                    // it can encapsulate all its children.
                    float maxRadius = float.MinValue;
                    foreach (var child in parent._children)
                    {
                        float distToExitPt = (child.Center - parent._sphere.Center).magnitude + child.Radius;
                        if (distToExitPt > maxRadius) maxRadius = distToExitPt;
                    }
                    parent.Radius = maxRadius;

                    parent = parent.Parent;
                }
            }
        }

        /// <summary>
        /// Allows the node to render itself for debugging purposes. The client
        /// code is responsible for setting up the rendering material.
        /// </summary>
        /// <remarks>
        /// This method is recursive and will draw the node's children also. Thus,
        /// it is enough to call this method for the root of a sphere tree in order
        /// to draw the entire tree.
        /// </remarks>
        public void DebugDraw()
        {
            // Draw the node
            Matrix4x4 nodeTransform = Matrix4x4.TRS(_sphere.Center, Quaternion.identity, Vector3Ex.FromValue(_sphere.Radius));
            Graphics.DrawMeshNow(MeshPool.Get.UnitSphere, nodeTransform);

            // Draw the node's children
            foreach (var child in _children) child.DebugDraw();
        }
    }
}
