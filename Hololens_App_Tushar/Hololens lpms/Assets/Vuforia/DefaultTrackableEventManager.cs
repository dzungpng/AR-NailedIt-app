using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DefaultTrackableEventManager : MonoBehaviour
{
    public bool EventTrackable;
    public SensorManager Tracker;
    // Update is called once per frame
    void Update()
    {
#if !UNITY_EDITOR
        if (EventTrackable)
        {
           
            Tracker.DrillSensor.transform.rotation = this.transform.rotation;
            
        }
        else
        {
           
            Tracker.HandleSensor.transform.rotation = this.transform.rotation;
            
        }
#endif
    }
}
