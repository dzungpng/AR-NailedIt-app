using UnityEngine;

namespace RTG
{
    public static class RTMeshCompiler 
    {
        public static void CompileEntireScene()
        {
            var sceneObjects = RTScene.Get.GetSceneObjects();
            foreach(var sceneObject in sceneObjects)
                CompileForObject(sceneObject);
        }

        public static bool CompileForObject(GameObject gameObject)
        {
            if (gameObject.isStatic) return false;

            Mesh mesh = gameObject.GetMesh();
            if (mesh == null) return false;

            var rtMesh = RTMeshDb.Get.GetRTMesh(mesh);
            if (rtMesh == null) return false;

            if (!rtMesh.IsTreeBuilt) rtMesh.BuildTree();
            return true;
        }
    }
}
