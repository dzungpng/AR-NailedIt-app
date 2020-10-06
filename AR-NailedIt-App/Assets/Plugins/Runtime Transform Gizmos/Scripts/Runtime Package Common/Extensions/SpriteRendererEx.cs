using UnityEngine;
using System.Collections.Generic;

namespace RTG
{
    public static class SpriteRendererEx
    {
        /// <summary>
        /// Returns the sprite's world center point. This function assumes that the
        /// sprite renderer has a valid sprite associated with it.
        /// </summary>
        public static Vector3 GetWorldCenterPoint(this SpriteRenderer spriteRenderer)
        {
            return spriteRenderer.transform.TransformPoint(spriteRenderer.GetModelSpaceAABB().Center);
        }

        /// <summary>
        /// Returns the sprite's model space size. This function assumes that the
        /// sprite renderer has a valid sprite associated with it.
        /// </summary>
        public static Vector3 GetModelSpaceSize(this SpriteRenderer spriteRenderer)
        {
            return spriteRenderer.GetModelSpaceAABB().Size;
        }

        /// <summary>
        /// Returns the sprite's model space AABB. The function will return an invalid
        /// AABB if the sprite renderer doesn't have a sprite associated with it.
        /// </summary>
        public static AABB GetModelSpaceAABB(this SpriteRenderer spriteRenderer)
        {
            // Store sprite for easy access and bail if no sprite exists
            Sprite sprite = spriteRenderer.sprite;
            if (sprite == null) return AABB.GetInvalid();

            // Retrieve the sprite's verts and use them to build the AABB
            List<Vector2> spriteVerts = new List<Vector2>(sprite.vertices);
            return new AABB(spriteVerts);
        }

        /// <summary>
        /// Checks if the sprite pixel which resides at 'worldPos' is fully transparent.
        /// </summary>
        /// <remarks>
        /// Works only when the Read/Write enabled flag is set inside the sprite texture 
        /// properties. Otherwise, it will always return false.
        /// </remarks>
        public static bool IsPixelFullyTransparent(this SpriteRenderer spriteRenderer, Vector3 worldPos)
        {
            // No sprite?
            Sprite sprite = spriteRenderer.sprite;
            if (sprite == null) return true;

            // No texture?
            Texture2D spriteTexture = sprite.texture;
            if (spriteTexture == null) return true;

            // We need to work in the sprite's model space so the first step is to transform
            // the passed world position into a sprite local position.
            Transform spriteTransform = spriteRenderer.transform;
            Vector3 modelSpacePos = spriteTransform.InverseTransformPoint(worldPos);

            // Project the model space position onto the sprite's plane. The sprite's plane is
            // always the XY plane in its model space.
            Plane xyPlane = new Plane(Vector3.forward, 0.0f);
            Vector3 projectedPos = xyPlane.ProjectPoint(modelSpacePos);

            // Calculate the sprite's model space AABB and check if this AABB contains the model
            // space position. If it doesn't it means the suplied world position is outside the
            // sprite's bounds/area.
            AABB modelSpaceAABB = spriteRenderer.GetModelSpaceAABB();
            modelSpaceAABB.Size = new Vector3(modelSpaceAABB.Size.x, modelSpaceAABB.Size.y, 1.0f);
            if (!modelSpaceAABB.ContainsPoint(projectedPos)) return true;

            // Build a vector which goes from the bottom left of the sprite to the projected world 
            // position. This will help us calculate the coordinates of the pixel where the passed
            // world point resides.
            Vector3 bottomLeft = xyPlane.ProjectPoint(modelSpaceAABB.Min);
            Vector3 fromTopLeftToPos = projectedPos - bottomLeft;

            // Calculate the pixel coordinates of the passed world points
            Vector2 pixelCoords = new Vector2(fromTopLeftToPos.x * sprite.pixelsPerUnit, fromTopLeftToPos.y * sprite.pixelsPerUnit);
            pixelCoords += sprite.textureRectOffset;

            // Try reading the sprite pixels and check the alpha value
            try
            {
                float alpha = spriteTexture.GetPixel((int)(pixelCoords.x + 0.5f), (int)(pixelCoords.y + 0.5f)).a;
                return alpha <= 1e-3f;
            }
            catch (UnityException e)
            {
                // Ternary operator needed to avoid 'variable not used' warning
                return e != null ? false : false;
            }
        }
    }
}
