#if UNITY_EDITOR
using UnityEngine;
using UnityEditor;

namespace RTG
{
    public static class EditorUndoEx
    {
        public static void Record(UnityEngine.Object objectToRecord)
        {
            if (!Application.isPlaying) Undo.RecordObject(objectToRecord, "RTTGizmos Undo");
        }
    }
}
#endif