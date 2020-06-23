using UnityEngine;

namespace RTG
{
    public static class TerrainEx
    {
        public static Vector2 ToNormCoords(this Terrain terrain, Vector3 worldPos)
        {
            Vector3 relativePos = worldPos - terrain.transform.position;
            Vector3 coords = Vector3.Scale(relativePos, new Vector3(1.0f / terrain.terrainData.size.x, 1.0f, 1.0f / terrain.terrainData.size.z));
            return new Vector2(coords.x, coords.z);
        }

        public static Vector3 GetInterpolatedNormal(this Terrain terrain, Vector3 worldPos)
        {
            Vector2 normCoords = terrain.ToNormCoords(worldPos);
            return terrain.terrainData.GetInterpolatedNormal(normCoords.x, normCoords.y);
        }
    }
}
