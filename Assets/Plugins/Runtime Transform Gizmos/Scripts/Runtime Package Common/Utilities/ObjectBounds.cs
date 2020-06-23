using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class ObjectBounds
    {
        public struct QueryConfig
        {
            public GameObjectType ObjectTypes;
            public Vector3 NoVolumeSize;
        }

        private static QueryConfig _defaultQConfig;
        static ObjectBounds()
        {
            _defaultQConfig = new QueryConfig();
            _defaultQConfig.ObjectTypes = GameObjectTypeHelper.AllCombined;
            _defaultQConfig.NoVolumeSize = Vector3.zero;
        }

        public static QueryConfig DefaultQConfig { get { return _defaultQConfig; } }

        public static Rect CalcScreenRect(GameObject gameObject, Camera camera, QueryConfig queryConfig)
        {
            AABB worldAABB = CalcWorldAABB(gameObject, queryConfig);
            if (!worldAABB.IsValid) return new Rect(0.0f, 0.0f, 0.0f, 0.0f);

            return worldAABB.GetScreenRectangle(camera);
        }

        public static OBB CalcSpriteWorldOBB(GameObject gameObject)
        {
            AABB modelAABB = CalcSpriteModelAABB(gameObject);
            if (!modelAABB.IsValid) return OBB.GetInvalid();

            return new OBB(modelAABB, gameObject.transform);
        }

        public static AABB CalcSpriteWorldAABB(GameObject gameObject)
        {
            AABB modelAABB = CalcSpriteModelAABB(gameObject);
            if (!modelAABB.IsValid) return modelAABB;

            modelAABB.Transform(gameObject.transform.localToWorldMatrix);
            return modelAABB;
        }

        public static AABB CalcSpriteModelAABB(GameObject spriteObject)
        {
            SpriteRenderer spriteRenderer = spriteObject.GetComponent<SpriteRenderer>();
            if (spriteRenderer == null) return AABB.GetInvalid();

            return spriteRenderer.GetModelSpaceAABB();
        }

        public static OBB GetMeshWorldOBB(GameObject gameObject)
        {
            AABB modelAABB = CalcMeshModelAABB(gameObject);
            if (!modelAABB.IsValid) return OBB.GetInvalid();

            return new OBB(modelAABB, gameObject.transform);
        }

        public static AABB GetMeshWorldAABB(GameObject gameObject)
        {
            AABB modelAABB = CalcMeshModelAABB(gameObject);
            if (!modelAABB.IsValid) return modelAABB;

            modelAABB.Transform(gameObject.transform.localToWorldMatrix);
            return modelAABB;
        }

        public static AABB CalcObjectCollectionWorldAABB(IEnumerable<GameObject> gameObjectCollection, QueryConfig queryConfig)
        {
            AABB aabb = AABB.GetInvalid();
            foreach (var gameObject in gameObjectCollection)
            {
                AABB worldAABB = CalcWorldAABB(gameObject, queryConfig);
                if (worldAABB.IsValid)
                {
                    if (aabb.IsValid) aabb.Encapsulate(worldAABB);
                    else aabb = worldAABB;
                }
            }

            return aabb;
        }

        public static AABB CalcHierarchyCollectionWorldAABB(IEnumerable<GameObject> roots, QueryConfig queryConfig)
        {
            AABB aabb = AABB.GetInvalid();
            foreach (var root in roots)
            {
                AABB hierarchyAABB = CalcHierarchyWorldAABB(root, queryConfig);
                if (hierarchyAABB.IsValid)
                {
                    if (aabb.IsValid) aabb.Encapsulate(hierarchyAABB);
                    else aabb = hierarchyAABB;
                }
            }

            return aabb;
        }

        public static OBB CalcHierarchyWorldOBB(GameObject root, QueryConfig queryConfig)
        {
            AABB modelAABB = CalcHierarchyModelAABB(root, queryConfig);
            if (!modelAABB.IsValid) return OBB.GetInvalid();

            return new OBB(modelAABB, root.transform);
        }

        public static AABB CalcHierarchyWorldAABB(GameObject root, QueryConfig queryConfig)
        {
            AABB modelAABB = CalcHierarchyModelAABB(root, queryConfig);
            if (!modelAABB.IsValid) return AABB.GetInvalid();

            modelAABB.Transform(root.transform.localToWorldMatrix);
            return modelAABB;
        }

        public static OBB CalcWorldOBB(GameObject gameObject, QueryConfig queryConfig)
        {
            AABB modelAABB = CalcModelAABB(gameObject, queryConfig, gameObject.GetGameObjectType());
            if (!modelAABB.IsValid) return OBB.GetInvalid();

            return new OBB(modelAABB, gameObject.transform);
        }

        public static AABB CalcWorldAABB(GameObject gameObject, QueryConfig queryConfig)
        {
            AABB modelAABB = CalcModelAABB(gameObject, queryConfig, gameObject.GetGameObjectType());
            if (!modelAABB.IsValid) return modelAABB;

            modelAABB.Transform(gameObject.transform.localToWorldMatrix);
            return modelAABB;
        }

        public static AABB CalcMeshWorldAABB(GameObject gameObject)
        {
            AABB modelAABB = CalcMeshModelAABB(gameObject);
            if (!modelAABB.IsValid) return modelAABB;

            modelAABB.Transform(gameObject.transform.localToWorldMatrix);
            return modelAABB;
        }

        public static AABB CalcHierarchyModelAABB(GameObject root, QueryConfig queryConfig)
        {
            Matrix4x4 rootTransform = root.transform.localToWorldMatrix;
            AABB finalAABB = CalcModelAABB(root, queryConfig, root.GetGameObjectType());

            List<GameObject> allChildren = root.GetAllChildren();
            foreach (var child in allChildren)
            {
                AABB modelAABB = CalcModelAABB(child, queryConfig, child.GetGameObjectType());
                if (modelAABB.IsValid)
                {
                    // All children must have their AABBs calculated in the root local space, so we must
                    // first calculate a matrix that transforms the child object in the local space of the
                    // root. We will use this matrix to transform the child's AABB in root space.
                    Matrix4x4 rootRelativeTransform = child.transform.localToWorldMatrix.GetRelativeTransform(rootTransform);
                    modelAABB.Transform(rootRelativeTransform);

                    if (finalAABB.IsValid) finalAABB.Encapsulate(modelAABB);
                    else finalAABB = modelAABB;
                }
            }

            return finalAABB;
        }

        public static AABB CalcMeshModelAABB(GameObject gameObject)
        {
            Mesh mesh = gameObject.GetMesh();
            if (mesh == null) return AABB.GetInvalid();

            return new AABB(mesh.bounds);
        }

        public static AABB CalcModelAABB(GameObject gameObject, QueryConfig queryConfig, GameObjectType objectType)
        {
            if ((objectType & queryConfig.ObjectTypes) == 0) return AABB.GetInvalid();

            if (objectType == GameObjectType.Mesh)
            {
                Mesh mesh = gameObject.GetMesh();
                if (mesh == null) return AABB.GetInvalid();

                return new AABB(mesh.bounds);
            }
            else
            if (objectType == GameObjectType.Sprite) return CalcSpriteModelAABB(gameObject);
            else if(objectType == GameObjectType.Terrain)
            {
                Terrain terrain = gameObject.GetComponent<Terrain>();
                TerrainData terrainData = terrain.terrainData;
                if (terrainData == null) return AABB.GetInvalid();

                Vector3 terrainSize = terrainData.bounds.size;        
                return new AABB(terrainData.bounds.center, terrainSize);
            }
            else return new AABB(Vector3.zero, queryConfig.NoVolumeSize);
        }
    }
}
