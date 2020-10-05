using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class frameManager : MonoBehaviour
{
    // Start is called before the first frame update
    public bool isDrillBeingTracked = false;
    public bool isArmBeingTracked = false;

    public GameObject[] frameSections;
    bool isGreen = false;

   
    // Update is called once per frame
    void Update()
    {

        if(isDrillBeingTracked && isArmBeingTracked && !isGreen)
        {
            isGreen = true;
            foreach(GameObject section in frameSections)
            {
                section.GetComponent<Image>().color = Color.green;
            }

        }else if((!isDrillBeingTracked || !isArmBeingTracked)) 
        {
            isGreen = false;
            foreach (GameObject section in frameSections)
            {
                section.GetComponent<Image>().color = Color.red;
            }
        }
    }

    public void ActivateArm(bool status)
    {
        isArmBeingTracked = status;
    }

    public void ActivateDrill(bool status)
    {
        isDrillBeingTracked = status;
    }


}
