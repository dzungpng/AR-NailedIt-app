using UnityEngine;

namespace RTG
{
    public static class ObjectPositionCalculator
    {
        private static ObjectBounds.QueryConfig _boundsQConfig = new ObjectBounds.QueryConfig();

        static ObjectPositionCalculator()
        {
            _boundsQConfig.NoVolumeSize = Vector3.zero;
            _boundsQConfig.ObjectTypes = GameObjectTypeHelper.AllCombined;
        }

        public static Vector3 CalculateRootPosition(GameObject root, Vector3 desiredOBBCenter, Vector3 desiredWorldScale, Quaternion desiredWorldRotation)
        {
            OBB obb = ObjectBounds.CalcHierarchyWorldOBB(root, _boundsQConfig);
            Transform rootTransform = root.transform;

            Matrix4x4 rootTransformMatrix = Matrix4x4.TRS(Vector3.zero, rootTransform.rotation, rootTransform.lossyScale);
            Matrix4x4 desiredTransformMatrix = Matrix4x4.TRS(Vector3.zero, desiredWorldRotation, desiredWorldScale);
            Matrix4x4 inverseTransformMatrix = desiredTransformMatrix * rootTransformMatrix.inverse;

            Vector3 relationshipVector = rootTransform.position - obb.Center;
            relationshipVector = inverseTransformMatrix.MultiplyVector(relationshipVector);

            return desiredOBBCenter + relationshipVector;
        }
    }
}
