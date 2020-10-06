using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    /// <summary>
    /// A bounding volume hierarchy in which every node is a sphere. Can be used
    /// to speed up queries such as raycasts, overlaps, etc on different types of
    /// entity collections (e.g. scene objects, mesh triangles etc).
    /// </summary>
    public class SphereTree<T>
    {
        /// <summary>
        /// The root node.
        /// </summary>
        private SphereTreeNode<T> _root;
        /// <summary>
        /// The number of children per node.
        /// </summary>
        private int _numChildrenPerNode = 2;

        /// <summary>
        /// Constructor.
        /// </summary>
        public SphereTree(int numChildrenPerNode)
        {
            // Store the number of children per node and clamp
            _numChildrenPerNode = numChildrenPerNode;
            if (_numChildrenPerNode < 2) _numChildrenPerNode = 2;

            // Create the root node
            _root = new SphereTreeNode<T>(default(T), new Sphere(Vector3.zero, 1.0f));
            _root.SetFlagsBits(BVHNodeFlags.Root);
        }

        /// <summary>
        /// Can be used to draw the tree in the scene for debugging purposes.
        /// </summary>
        public void DebugDraw()
        {
            // Setup the rendering material
            Material material = MaterialPool.Get.GizmoSolidHandle;
            material.SetInt("_IsLit", 0);
            material.SetColor(ColorEx.KeepAllButAlpha(Color.green, 0.3f));
            material.SetPass(0);

            // Draw the entire tree
            _root.DebugDraw();
        }

        /// <summary>
        /// Adds a new node to the tree and returns it to the caller.
        /// </summary>
        /// <param name="nodeData">
        /// The data associated with the node.
        /// </param>
        /// <param name="sphere">
        /// The node's bounding sphere.
        /// </param>
        public SphereTreeNode<T> AddNode(T nodeData, Sphere sphere)
        {
            // Create the node instance and feed it to the 'AddNodeRecurse' method
            // to integrate it inside the tree properly.
            var newNode = new SphereTreeNode<T>(nodeData, sphere);
            IntegrateNodeRecurse(newNode, _root);

            return newNode;
        }

        /// <summary>
        /// Removes the specified node from the tree. The client code should only
        /// ever call this method on nodes returned from 'AddNode'.
        /// </summary>
        public void RemoveNode(SphereTreeNode<T> node)
        {
            // The root node can never be removed
            if (node.IsFlagBitSet(BVHNodeFlags.Root)) return;
     
            // Keep moving up the hierarchy and remove all nodes which don't
            // have any child nodes any more. There's no point in keeping these
            // around as they're nothing but noise inside the tree.
            SphereTreeNode<T> parent = node.Parent;
            node.SetParent(null);
            while (parent != null && parent.NumChildren == 0 && !parent.IsFlagBitSet(BVHNodeFlags.Root))
            {
                SphereTreeNode<T> newParent = parent.Parent;
                parent.SetParent(null);
                parent = newParent;
            }

            // We have been removing nodes, so we need to make sure that the parent
            // at which we stopped the removal process has its volume recalculated.
            parent.EncapsulateChildrenBottomUp();
        }

        /// <summary>
        /// Must be called whenever a node's bounding sphere has changed.
        /// </summary>
        public void OnNodeSphereUpdated(SphereTreeNode<T> node)
        {
            // Just make sure this is a terminal node. Otherwise, ignore.
            if (!node.IsFlagBitSet(BVHNodeFlags.Terminal)) return;

            // Check if the node is now outside of its parent
            if(node.IsOutsideParent())
            {
                // The node is outside of its parent. In this case, the first step
                // is to detach it from its parent.
                SphereTreeNode<T> parent = node.Parent;
                node.SetParent(null);

                // Now if the parent no longer has any children, we remove it from the
                // tree. Otherwise, we make sure it properly encapsulates its children.
                if (parent.NumChildren == 0) RemoveNode(parent);
                else parent.EncapsulateChildrenBottomUp();

                // The node needs to be reintegrated inside the tree
                IntegrateNodeRecurse(node, _root);
            }
        }

        /// <summary>
        /// Performs a raycast against all terminal nodes in the tree and returns
        /// a list with all hit instances. The returned list is empty if no node
        /// was hit.
        /// </summary>
        public List<SphereTreeNodeRayHit<T>> RaycastAll(Ray ray)
        {
            var hitList = new List<SphereTreeNodeRayHit<T>>(10);
            RaycastAllRecurse(ray, _root, hitList);
            return hitList;
        }

        /// <summary>
        /// Returns a list that contains all terminal nodes that intersect the 
        /// specified OBB.
        /// </summary>
        public List<SphereTreeNode<T>> OverlapBox(OBB box)
        {
            var overlappedNodes = new List<SphereTreeNode<T>>(20);
            OverlapBoxRecurse(box, _root, overlappedNodes);
            return overlappedNodes;
        }

        /// <summary>
        /// Integrates 'node' inside the tree. This is a recursive method which will 
        /// search for the best place where to place this node inside the tree.
        /// </summary>
        /// <param name="parent">
        /// Keeps track of the current parent node we are processing., Allow us to keep 
        /// going down the tree hierarchy. 
        /// </param>
        private void IntegrateNodeRecurse(SphereTreeNode<T> node, SphereTreeNode<T> parent)
        {
            // Are we dealing with a terminal node?
            if(!parent.IsFlagBitSet(BVHNodeFlags.Terminal))
            {
                // This is not a terminal node. First thing to do is check if this node has 
                // room for one more child. If it does, we add the node here. Otherwise, we 
                // keep searching.
                if (parent.NumChildren < _numChildrenPerNode)
                {
                    node.SetFlagsBits(BVHNodeFlags.Terminal);
                    node.SetParent(parent);
                    parent.EncapsulateChildrenBottomUp();
                }
                else
                {
                    // Find the child closest to 'node' and recurse down that path
                    SphereTreeNode<T> closestChild = parent.ClosestChild(node);
                    if (closestChild != null) IntegrateNodeRecurse(node, closestChild);
                }
            }
            else
            {
                // We have reached a terminal node. We have no choice but to create a new non-terminal
                // node to take the place of the terminal one and then attach the integration node and
                // the old terminal node as children of this new node.
                SphereTreeNode<T> newParentNode = new SphereTreeNode<T>(default(T), parent.Sphere);
                newParentNode.SetParent(parent.Parent);
                parent.SetParent(newParentNode);

                node.SetParent(newParentNode);
                node.SetFlagsBits(BVHNodeFlags.Terminal);              
                newParentNode.EncapsulateChildrenBottomUp();
            }
        }

        /// <summary>
        /// Recursive method which casts a ray against 'node' and moves down the
        /// hierarchy towards the terminal nodes and stores any hits between the
        /// ray and these nodes inside 'hitList'.
        /// </summary>
        private void RaycastAllRecurse(Ray ray, SphereTreeNode<T> node, List<SphereTreeNodeRayHit<T>> hitList)
        {
            // Is this a terminal node?
            if(!node.IsFlagBitSet(BVHNodeFlags.Terminal))
            {
                // This is not a terminal node. We will check if the ray intersects the node's 
                // sphere and if it does, we will go further down the hierarchy. If it doesn't
                // then there is no need to go on because if the ray does not intersect the node,
                // it can't possibly intersect any of its children.
                if (SphereMath.Raycast(ray, node.Center, node.Radius))
                {
                    List<SphereTreeNode<T>> children = node.Children;
                    foreach (var child in children) RaycastAllRecurse(ray, child, hitList);
                }
            }
            else
            {
                // This is a terminal node and if the ray intersects this node, we will add the
                // node hit information inside the hit list.
                float t;
                if (SphereMath.Raycast(ray, out t, node.Center, node.Radius))
                {
                    var nodeHit = new SphereTreeNodeRayHit<T>(ray, node, t);
                    hitList.Add(nodeHit);
                }
            }
        }

        /// <summary>
        /// Recursive method which moves down the hierarchy performing overlap tests 
        /// against 'box'. At the end of the recursive chain, all terminal nodes which 
        /// are overlapped by 'box' will be stored in 'overlappedNodes'.
        /// </summary>
        private void OverlapBoxRecurse(OBB box, SphereTreeNode<T> node, List<SphereTreeNode<T>> overlappedNodes)
        {
            // If the parent node is not overlapped, its children can not possibly
            // be overlapped so thre is no need to go any further.
            if (!box.IntersectsSphere(node.Sphere)) return;
            else
            {
                // If this is a terminal node, add it to the output list and return
                if (node.IsFlagBitSet(BVHNodeFlags.Terminal))
                {
                    overlappedNodes.Add(node);
                    return;
                }
                else
                {
                    // Recurse for each child node
                    List<SphereTreeNode<T>> childNodes = node.Children;
                    foreach (SphereTreeNode<T> childNode in childNodes) OverlapBoxRecurse(box, childNode, overlappedNodes);
                }
            }
        }
    }
}
