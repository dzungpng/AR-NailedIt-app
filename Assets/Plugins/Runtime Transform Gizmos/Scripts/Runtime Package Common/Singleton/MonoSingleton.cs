using UnityEngine;

namespace RTG
{
    public class MonoSingleton<T> : MonoBehaviour where T : MonoBehaviour
    {
        private static object _singletonLock = new object();
        private static T _instance;

        /// <summary>
        /// Returns the singleton instance.
        /// </summary>
        /// <remarks>
        /// If no instance of the required MonoBehaviour type exists in the scene, the property 
        /// will return null. Null is also returned if more than one instance is found.
        /// </remarks>
        public static T Get
        {
            get
            {
                // Is the instance available?
                if (_instance == null)
                {
                    // Apply lock on our sync object
                    lock (_singletonLock)
                    {
                        // Retrieve the instance from the scene.
                        T[] singletonInstances = FindObjectsOfType(typeof(T)) as T[];

                        // No instance? Return null.
                        if (singletonInstances.Length == 0) return null;

                        // More than one singleton?
                        if (singletonInstances.Length > 1)
                        {
                            // Log warning message if running in editor mode and then return null
                            if (Application.isEditor) Debug.LogWarning("MonoSingleton<T>.Instance: Only 1 singleton instance can exist in the scene. Null will be returned.");
                            return null;
                        }

                        // Only one instance was found, so we can store it
                        _instance = singletonInstances[0];     
                    }
                }

                return _instance;
            }
        }
    }
}
