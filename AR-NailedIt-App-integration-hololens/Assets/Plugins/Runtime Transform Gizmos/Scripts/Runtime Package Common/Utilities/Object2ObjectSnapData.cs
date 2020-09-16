using UnityEngine;
using System;
using System.Collections.Generic;

namespace RTG
{
    public class Object2ObjectSnapData
    {
        private GameObject _gameObject;
        private AABB[] _snapAreaBounds = new AABB[Enum.GetValues(typeof(BoxFace)).Length];
        private BoxFaceAreaDesc[] _snapAreaDesc = new BoxFaceAreaDesc[Enum.GetValues(typeof(BoxFace)).Length];

        public bool Initialize(GameObject gameObject)
        {
            if (gameObject == null || _gameObject != null) return false;

            Mesh mesh = gameObject.GetMesh();
            Sprite sprite = gameObject.GetSprite();
            if (mesh == null && sprite == null) return false;

            bool useMesh = true;
            if (mesh == null) useMesh = false;

            RTMesh rtMesh = null;
            if (useMesh)
            {
                Renderer meshRenderer = gameObject.GetMeshRenderer();
                if (meshRenderer == null || !meshRenderer.enabled) useMesh = false;

                rtMesh = RTMeshDb.Get.GetRTMesh(mesh);
                if (rtMesh == null) useMesh = false;
            }
            if (rtMesh == null && sprite == null) return false;

            List<AABB> vertOverlapAABBs = BuildVertOverlapAABBs(gameObject, useMesh ? null : sprite, useMesh ? rtMesh : null);
            if (vertOverlapAABBs.Count == 0) return false;

            AABB modelAABB = useMesh ? rtMesh.AABB : ObjectBounds.CalcSpriteModelAABB(gameObject);
            var aabbFaces = BoxMath.AllBoxFaces;

            _gameObject = gameObject;
            if (useMesh)
            {
                foreach (var aabbFace in aabbFaces)
                {
                    AABB overlapAABB = vertOverlapAABBs[(int)aabbFace];
                    List<Vector3> overlappedVerts = rtMesh.OverlapModelVerts(overlapAABB);
                    Plane facePlane = BoxMath.CalcBoxFacePlane(modelAABB.Center, modelAABB.Size, Quaternion.identity, aabbFace);
                    overlappedVerts = facePlane.ProjectAllPoints(overlappedVerts);
                    _snapAreaBounds[(int)aabbFace] = new AABB(overlappedVerts);
                    _snapAreaDesc[(int)aabbFace] = BoxMath.GetBoxFaceAreaDesc(_snapAreaBounds[(int)aabbFace].Size, aabbFace);
                }
            }
            else
            {
                foreach (var aabbFace in aabbFaces)
                {
                    if (aabbFace != BoxFace.Front && aabbFace != BoxFace.Back)
                    {
                        AABB overlapAABB = vertOverlapAABBs[(int)aabbFace];
                        List<Vector3> overlappedVerts = ObjectVertexCollect.CollectModelSpriteVerts(sprite, overlapAABB);
                        Plane facePlane = BoxMath.CalcBoxFacePlane(modelAABB.Center, modelAABB.Size, Quaternion.identity, aabbFace);
                        overlappedVerts = facePlane.ProjectAllPoints(overlappedVerts);
                        _snapAreaBounds[(int)aabbFace] = new AABB(overlappedVerts);
                        _snapAreaDesc[(int)aabbFace] = BoxMath.GetBoxFaceAreaDesc(_snapAreaBounds[(int)aabbFace].Size, aabbFace);
                    }
                    else
                    {
                        _snapAreaBounds[(int)aabbFace] = AABB.GetInvalid();
                        _snapAreaDesc[(int)aabbFace] = BoxFaceAreaDesc.GetInvalid();
                    }
                }
            }

            return true;
        }

        public BoxFaceAreaDesc GetWorldSnapAreaDesc(BoxFace boxFace)
        {
            Vector3 boxSize = _snapAreaBounds[(int)boxFace].Size;
            boxSize = Vector3.Scale(boxSize, _gameObject.transform.lossyScale.Abs());

            return BoxMath.GetBoxFaceAreaDesc(boxSize, boxFace);
        }

        public List<OBB> GetAllWorldSnapAreaBounds()
        {
            if (_gameObject == null) return new List<OBB>();

            Transform objectTransform = _gameObject.transform;
            var worldSnapOBBs = new List<OBB>(_snapAreaBounds.Length);
            foreach (var aabb in _snapAreaBounds)
            {
                worldSnapOBBs.Add(new OBB(aabb, objectTransform));
            }

            return worldSnapOBBs;
        }

        public OBB GetWorldSnapAreaBounds(BoxFace boxFace)
        {
            if (_gameObject == null) return OBB.GetInvalid();

            Transform objectTransform = _gameObject.transform;
            return new OBB(_snapAreaBounds[(int)boxFace], objectTransform);
        }

        private List<AABB> BuildVertOverlapAABBs(GameObject gameObject, Sprite sprite, RTMesh rtMesh)
        {
            if (sprite == null && rtMesh == null) return new List<AABB>();

            const float overlapAmount = 0.2f;
            float halfOverlapAmount = overlapAmount * 0.5f;
            AABB modelAABB = sprite != null ? ObjectBounds.CalcSpriteModelAABB(gameObject) : rtMesh.AABB;
            Vector3 modelAABBSize = modelAABB.Size;
            List<BoxFace> modelAABBFaces = BoxMath.AllBoxFaces;

            const float sizeEps = 0.001f;
            Vector3[] overlapAABBSizes = new Vector3[modelAABBFaces.Count];
            overlapAABBSizes[(int)BoxFace.Left] = new Vector3(overlapAmount, modelAABBSize.y + sizeEps, modelAABBSize.z + sizeEps);
            overlapAABBSizes[(int)BoxFace.Right] = new Vector3(overlapAmount, modelAABBSize.y + sizeEps, modelAABBSize.z + sizeEps);
            overlapAABBSizes[(int)BoxFace.Bottom] = new Vector3(modelAABBSize.x + sizeEps, overlapAmount, modelAABBSize.z + sizeEps);
            overlapAABBSizes[(int)BoxFace.Top] = new Vector3(modelAABBSize.x + sizeEps, overlapAmount, modelAABBSize.z + sizeEps);
            overlapAABBSizes[(int)BoxFace.Back] = new Vector3(modelAABBSize.x + sizeEps, modelAABBSize.y + sizeEps, overlapAmount);
            overlapAABBSizes[(int)BoxFace.Front] = new Vector3(modelAABBSize.x + sizeEps, modelAABBSize.y + sizeEps, overlapAmount);

            var overlapAABBs = new List<AABB>();
            for (int boxFaceIndex = 0; boxFaceIndex < modelAABBFaces.Count; ++boxFaceIndex)
            {
                BoxFace modelAABBFace = modelAABBFaces[boxFaceIndex];
                Vector3 faceCenter = BoxMath.CalcBoxFaceCenter(modelAABB.Center, modelAABB.Size, Quaternion.identity, modelAABBFace);
                Vector3 faceNormal = BoxMath.CalcBoxFaceNormal(modelAABB.Center, modelAABB.Size, Quaternion.identity, modelAABBFace);
                Vector3 overlapCenter = faceCenter - faceNormal * halfOverlapAmount;
                overlapAABBs.Add(new AABB(overlapCenter, overlapAABBSizes[boxFaceIndex]));
            }

            return overlapAABBs;
        }
    }
}
