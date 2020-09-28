using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HoleAxisManager : MonoBehaviour
{

    public GameObject incissionCircle;
    public GameObject topGuideMarker;
    public GameObject sleeveTop;
    public GameObject drillAlignmentCylinder; 

    Color incissionInitColor;
    // Start is called before the first frame update
    void Start()
    {
        incissionCircle.SetActive(false);
        topGuideMarker.SetActive(false);
        drillAlignmentCylinder.SetActive(false);
        incissionInitColor = incissionCircle.GetComponent<Renderer>().material.color;
    }

    private void OnTriggerEnter(Collider col)
    {
        if (col.gameObject.CompareTag("DrillPlane"))
        {
            //Enable Incission Marker
            incissionCircle.SetActive(true);
            //incissionCircle.transform.position = new Vector3(incissionCircle.transform.position.x, col.transform.position.y, gameObject.transform.position.z);

            incissionCircle.transform.rotation = col.transform.rotation;

            //topGuideMarker.transform.position = incissionCircle.transform.position + gameObject.transform.up.normalized * (sleeveTop.transform.localPosition.y + 4.76f);
        }

        if(col.gameObject.CompareTag("DrillBase"))
        {
            //Enable drillCylinder and top direction compass
            incissionCircle.GetComponent<Renderer>().material.color = Color.green;
            topGuideMarker.SetActive(true);
            drillAlignmentCylinder.SetActive(true);
        }
    }

    private void OnTriggerExit(Collider col)
    {
        if(col.gameObject.CompareTag("DrillBase"))
        {
            incissionCircle.GetComponent<Renderer>().material.color = Color.red;
            topGuideMarker.SetActive(false);
            drillAlignmentCylinder.SetActive(false);
        }
    }
}
