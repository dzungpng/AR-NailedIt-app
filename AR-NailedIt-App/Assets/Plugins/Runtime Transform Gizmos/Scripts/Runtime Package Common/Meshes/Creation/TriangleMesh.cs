using UnityEngine;

namespace RTG
{
    public static class TriangleMesh
    {
        public static Mesh CreateEqXY(Vector3 centroid, float sideLength, Color color)
        {
            Vector3[] positions = TriangleMath.CalcEqTriangle3DPoints(centroid, sideLength, Quaternion.identity).ToArray();
            Vector3[] normals = new Vector3[] { -Vector3.forward, -Vector3.forward, -Vector3.forward};

            Mesh mesh = new Mesh();
            mesh.vertices = positions;
            mesh.colors = new Color[] { color, color, color };
            mesh.normals = normals;
            mesh.SetIndices(new int[] {0, 1, 2}, MeshTopology.Triangles, 0);
            mesh.UploadMeshData(false);

            return mesh;
        }

        public static Mesh CreateWireEqXY(Vector3 centroid, float sideLength, Color color)
        {
            Vector3[] positions = TriangleMath.CalcEqTriangle3DPoints(centroid, sideLength, Quaternion.identity).ToArray();

            Mesh mesh = new Mesh();
            mesh.vertices = positions;
            mesh.colors = new Color[] { color, color, color };
            mesh.SetIndices(new int[] { 0, 1, 2, 0 }, MeshTopology.LineStrip, 0);
            mesh.UploadMeshData(false);

            return mesh;
        }

        public static Mesh CreateRightAngledTriangleXY(Vector3 cornerPosition, float xLength, float yLength, Color color)
        {
            if (xLength < 1e-4f || yLength < 1e-4f) return null;

            Vector3[] positions = new Vector3[]
            {
                cornerPosition,
                cornerPosition + Vector3.up * xLength,
                cornerPosition + Vector3.right * yLength
            };

            Mesh mesh = new Mesh();
            mesh.vertices = positions;
            mesh.colors = new Color[] { color, color, color };
            mesh.SetIndices(new int[] { 0, 1, 2 }, MeshTopology.Triangles, 0);
            mesh.UploadMeshData(false);

            return mesh;
        }

        public static Mesh CreateWireRightAngledTriangleXY(Vector3 cornerPosition, float xLength, float yLength, Color color)
        {
            if (xLength < 1e-4f || yLength < 1e-4f) return null;

            Vector3[] positions = new Vector3[]
            {
                cornerPosition,
                cornerPosition + Vector3.up * xLength,
                cornerPosition + Vector3.right * yLength
            };

            Mesh mesh = new Mesh();
            mesh.vertices = positions;
            mesh.colors = new Color[] { color, color, color };
            mesh.SetIndices(new int[] { 0, 1, 2, 0 }, MeshTopology.LineStrip, 0);
            mesh.UploadMeshData(false);

            return mesh;
        }
    }
}
