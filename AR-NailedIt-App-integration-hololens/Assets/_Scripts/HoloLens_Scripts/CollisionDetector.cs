using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionDetector : MonoBehaviour
{

    bool hasCollidedWithA = false;
    bool hasCollidedWithB = false;

    public Renderer mat;

    bool isGreen = true;
    bool canDrill = false;

    // Start is called before the first frame update

    private void FixedUpdate()
    {
        if(hasCollidedWithA && hasCollidedWithB)
        {
            canDrill = true;
        }else
        {
            canDrill = false;
        }

        if(canDrill && !isGreen)
        {
            mat.material.color = new Color(0, 1, 0, 0.5f); //green
            isGreen = true;
            //gameObject.GetComponent<Renderer>().material.color = Color.green;
        }
        else if(!canDrill && isGreen)
        {
            mat.material.color = new Color(1, 0, 0, 0.5f); //red
            isGreen = false;
            //gameObject.GetComponent<Renderer>().material.color = Color.red;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("ColliderA"))
        {
            hasCollidedWithA = true;
            Debug.Log("has Entered");
        }

        if (other.gameObject.CompareTag("ColliderB"))
        {
            hasCollidedWithB = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("ColliderA"))
        {
            hasCollidedWithA = false;
        }

        if (other.gameObject.CompareTag("ColliderB"))
        {
            hasCollidedWithB = false;
        }
    }
}
