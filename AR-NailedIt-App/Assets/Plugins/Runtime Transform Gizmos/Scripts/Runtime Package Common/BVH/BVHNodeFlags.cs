using System;

namespace RTG
{
    /// <summary>
    /// Identifies a series of flags which can be associated with the
    /// nodes inside a bounding volume hierarchy.
    /// </summary>
    [Flags]
    public enum BVHNodeFlags
    {
        /// <summary>
        /// No flags associated with the node.
        /// </summary>
        None = 0,
        /// <summary>
        /// Marks the node as being a root node.
        /// </summary>
        Root = 0x1,
        /// <summary>
        /// Marks the node as being a terminal node.
        /// </summary>
        Terminal = 0x2
    }
}