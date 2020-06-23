using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class ObjectVertexCollect
    {
        public static List<Vector3> CollectModelSpriteVerts(Sprite sprite, AABB collectAABB)
        {
            var spriteModelVerts = sprite.vertices;
            var collectedVerts = new List<Vector3>(7);

            foreach(var vertPos in spriteModelVerts)
            {
                if(BoxMath.ContainsPoint(vertPos, collectAABB.Center, collectAABB.Size, Quaternion.identity))
                    collectedVerts.Add(vertPos);
            }

            return collectedVerts;
        }

        public static List<Vector3> CollectWorldSpriteVerts(Sprite sprite, Transform spriteTransform, OBB collectOBB)
        {
            var spriteWorldVerts = sprite.GetWorldVerts(spriteTransform);
            var collectedVerts = new List<Vector3>(7);

            foreach (var vertPos in spriteWorldVerts)
            {
                if (BoxMath.ContainsPoint(vertPos, collectOBB.Center, collectOBB.Size, collectOBB.Rotation))
                    collectedVerts.Add(vertPos);
            }

            return collectedVerts;
        }

        public static List<Vector3> CollectHierarchyVerts(GameObject root, BoxFace collectFace, float collectBoxScale, float collectEps)
        {
            var meshObjects = root.GetMeshObjectsInHierarchy();
            var spriteObjects = root.GetSpriteObjectsInHierarchy();
            if (meshObjects.Count == 0 && spriteObjects.Count == 0) return new List<Vector3>();

            var boundsQConfig = new ObjectBounds.QueryConfig();
            boundsQConfig.ObjectTypes = GameObjectType.Mesh | GameObjectType.Sprite;

            OBB hierarchyOBB = ObjectBounds.CalcHierarchyWorldOBB(root, boundsQConfig);
            if (!hierarchyOBB.IsValid) return new List<Vector3>();

            int faceAxisIndex = BoxMath.GetFaceAxisIndex(collectFace);
            Vector3 faceCenter = BoxMath.CalcBoxFaceCenter(hierarchyOBB.Center, hierarchyOBB.Size, hierarchyOBB.Rotation, collectFace);
            Vector3 faceNormal = BoxMath.CalcBoxFaceNormal(hierarchyOBB.Center, hierarchyOBB.Size, hierarchyOBB.Rotation, collectFace);

            float sizeEps = collectEps * 2.0f;
            Vector3 collectAABBSize = hierarchyOBB.Size;
            collectAABBSize[faceAxisIndex] = (hierarchyOBB.Size[faceAxisIndex] * collectBoxScale) + sizeEps;   
            collectAABBSize[(faceAxisIndex + 1) % 3] += sizeEps;
            collectAABBSize[(faceAxisIndex + 2) % 3] += sizeEps;

            OBB collectOBB = new OBB(faceCenter + faceNormal * (-collectAABBSize[faceAxisIndex] * 0.5f + collectEps), collectAABBSize);
            collectOBB.Rotation = hierarchyOBB.Rotation;

            var collectedVerts = new List<Vector3>(80);
            foreach(var meshObject in meshObjects)
            {
                Mesh mesh = meshObject.GetMesh();
                RTMesh rtMesh = RTMeshDb.Get.GetRTMesh(mesh);
                if (rtMesh == null) continue;

                var verts = rtMesh.OverlapVerts(collectOBB, meshObject.transform);
                if (verts.Count != 0) collectedVerts.AddRange(verts);
            }

            foreach (var spriteObject in spriteObjects)
            {
                var verts = CollectWorldSpriteVerts(spriteObject.GetSprite(), spriteObject.transform, collectOBB);
                if (verts.Count != 0) collectedVerts.AddRange(verts);
            }

            return collectedVerts;
        }
    }
}
