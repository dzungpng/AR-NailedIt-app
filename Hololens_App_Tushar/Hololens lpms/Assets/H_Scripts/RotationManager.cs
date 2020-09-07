using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotationManager : MonoBehaviour
{
    //Bool to check if this script is attached to drill gameobject
    public bool isDrill;

    //To calibrate drilling cones
    public bool isTestingMode = false;

    public SensorManager sensorManager;
    public GameObject drill_ImageTarget;
    public GameObject handle_ImageTarget;


    // Update is called once per frame
    void Update()
    {
        if (isDrill)
        {
            if (!isTestingMode && sensorManager.isDrillActive)
            {
                gameObject.transform.rotation = Quaternion.Lerp(gameObject.transform.rotation, sensorManager.DrillSensor.transform.rotation, 0.5f);
            }

             
        }else
        {
            if(!isTestingMode && sensorManager.isHandleActive)
            {
                gameObject.transform.rotation = Quaternion.Lerp(gameObject.transform.rotation, sensorManager.HandleSensor.transform.rotation, 0.5f);

            }
        }
            
    }
}
