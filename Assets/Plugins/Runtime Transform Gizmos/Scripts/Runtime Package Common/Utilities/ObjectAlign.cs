using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class ObjectAlign
    {
        public enum Result
        {
            Err_NoObjects = 0,
            Success
        }

        public static ObjectAlign.Result AlignToWorldAxis(IEnumerable<GameObject> gameObjects, Axis axis, Vector3 alignmentPlaneOrigin)
        {
            Vector3 alignmentPlaneNormal = Vector3.forward;
            if (axis == Axis.Y) alignmentPlaneNormal = Vector3.up;
            else if (axis == Axis.Z) alignmentPlaneNormal = Vector3.right;
            Plane alignmentPlane = new Plane(alignmentPlaneNormal, alignmentPlaneOrigin);

            return AlignToWorldPlane(gameObjects, alignmentPlane);
        }

        public static ObjectAlign.Result AlignToWorldPlane(IEnumerable<GameObject> gameObjects, Plane alignmentPlane)
        {
            var parents = GameObjectEx.FilterParentsOnly(gameObjects);
            if (parents.Count == 0) return Result.Err_NoObjects;

            AlignRootsToPlane(parents, alignmentPlane);

            return Result.Success;
        }

        private static void AlignRootsToPlane(List<GameObject> roots, Plane alignmentPlane)
        {
            var boundsQConfig = new ObjectBounds.QueryConfig();
            boundsQConfig.NoVolumeSize = Vector3.zero;
            boundsQConfig.ObjectTypes = GameObjectTypeHelper.AllCombined;

            foreach (var root in roots)
            {
                OBB worldOBB = ObjectBounds.CalcHierarchyWorldOBB(root, boundsQConfig);
                if (worldOBB.IsValid)
                {
                    Vector3 projectedCenter = alignmentPlane.ProjectPoint(worldOBB.Center);
                    root.transform.position += (projectedCenter - worldOBB.Center);
                }
            }
        }
    }
}
