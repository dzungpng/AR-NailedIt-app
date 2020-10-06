namespace RTG
{
    public enum SceneRaycastPrecision
    {
        /// <summary>
        /// If the object has a mesh, the raycast will be performed against the object 
        /// mesh surface. If the object doesn't have a mesh, but it has a terrain with 
        /// a terrain collider, it will be performed against the terrain collider. If
        /// none of these are available, the raycast will be performed against the object's 
        /// volume/box.
        /// </summary>
        BestFit = 0,
        /// <summary>
        /// The raycast will always be performed against the object's volume/box.
        /// </summary>
        Box,
    }
}