#if UNITY_EDITOR
using UnityEngine;
using UnityEditor;
using System.IO;
using System.Collections.Generic;

namespace RTG
{
    public static class FileSystem
    {
        public static string GetPluginFolderName(string pluginName)
        {
            string[] guids = AssetDatabase.FindAssets(pluginName);
            foreach (string guid in guids)
            {
                string assetPath = AssetDatabase.GUIDToAssetPath(guid);
                if (Directory.Exists(assetPath)) return assetPath;
            }

            return string.Empty;
        }

        public static List<string> GetFolderNamesInPath(string path)
        {
            string[] dirNames = path.Split(new string[] { @"/", @"\" }, System.StringSplitOptions.RemoveEmptyEntries);
            return new List<string>(dirNames);
        }

        public static bool FolderExists(string folderPath)
        {
            return Directory.Exists(folderPath);
        }

        public static string GetLastFolderNameInPath(string path)
        {
            if (string.IsNullOrEmpty(path)) return string.Empty;
            return new DirectoryInfo(path).Name;
        }

        public static List<string> GetSubfolderPathsInFolder(string folderPath, bool includeSelf)
        {
            if (FolderExists(folderPath))
            {
                var subfolderPaths = new List<string>();
                GetSubfolderPathsInFolderRecurse(folderPath, subfolderPaths);

                if (includeSelf) subfolderPaths.Add(folderPath);

                return subfolderPaths;
            }
            else return new List<string>();
        }

        public static List<string> GetAllFilesInFolder(string folderPath)
        {
            return new List<string>(Directory.GetFiles(folderPath));
        }

        public static List<string> GetFoldersAndChildFolderPaths(IEnumerable<string> folderPaths)
        {
            var folderAndChildFolderPaths = new HashSet<string>();
            foreach (string folderPath in folderPaths)
            {
                List<string> paths = new List<string>(FileSystem.GetSubfolderPathsInFolder(folderPath, true));
                foreach (string path in paths)
                {
                    folderAndChildFolderPaths.Add(path);
                }
            }

            return new List<string>(folderAndChildFolderPaths);
        }

        #region Private Static Functions
        private static void GetSubfolderPathsInFolderRecurse(string folderPath, List<string> outputSubfolders)
        {
            DirectoryInfo folderInfo = new DirectoryInfo(folderPath);
            DirectoryInfo[] subfolderInfo = folderInfo.GetDirectories();

            folderPath = folderPath.RemoveTrailingSlashes();

            foreach (DirectoryInfo info in subfolderInfo)
            {
                string subfolderPath = folderPath + "/" + info.Name;

                outputSubfolders.Add(subfolderPath);
                GetSubfolderPathsInFolderRecurse(subfolderPath, outputSubfolders);
            }
        }
        #endregion
    }
}
#endif