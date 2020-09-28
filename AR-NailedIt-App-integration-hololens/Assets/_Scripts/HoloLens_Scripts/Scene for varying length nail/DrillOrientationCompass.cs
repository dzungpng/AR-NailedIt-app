using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DrillOrientationCompass : MonoBehaviour
{

    public float radius;
    public float multiplier = 2;

    public float thresh = 0.01f; //min dist for green 

    public GameObject incissionPoint;
    public GameObject sleeveTop;
    public GameObject drillAlignmentCylinder;



    bool isRed = true;
    // Start is called before the first frame update
    void Start()
    {
       
    }

    // Update is called once per frame
    void Update()
    {

        //transform.position = new Vector3(transform.localPosition.x, sleeveTop.transform.position.y, transform.localPosition.z);
        // transform.rotation = Quaternion.LookRotation(sleeveTop.transform.position - gameObject.transform.position, gameObject.transform.up);

        //Using Triple product formula for creating rotation only about y axis
        Vector3 zVec = sleeveTop.transform.position - gameObject.transform.position;
        Vector3 yVec = gameObject.transform.up;
        transform.rotation = Quaternion.LookRotation(zVec - Vector3.Dot(yVec, zVec)*yVec, yVec);

        Vector3 gameObjectPos = gameObject.transform.position;
        gameObjectPos.y = 0;
        Vector3 sleeveTopPos = sleeveTop.transform.position;
        sleeveTopPos.y = 0;
        radius = Vector3.Distance(gameObjectPos, sleeveTopPos) ;
        gameObject.transform.localScale = new Vector3(radius* multiplier, 1, radius * multiplier);

        if(radius < thresh)
        {
            if(isRed)
            {
                //Change color to green
                drillAlignmentCylinder.GetComponent<Renderer>().material.color = new Color(0, 1, 0, 0.5f);
                isRed = false;
            }
        }else
        {
            if (!isRed)
            {
                //change to red
                drillAlignmentCylinder.GetComponent<Renderer>().material.color = new Color(1, 0, 0, 0.5f);
                isRed = true;
            }
        }

    }
}
