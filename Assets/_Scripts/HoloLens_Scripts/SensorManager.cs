using UnityEngine;
using UnityEngine.UI;
using VetAR_BluetoothManager;
public class SensorManager : MonoBehaviour
{

    public vetarManager btManager;
    public GameObject DrillSensor;
    public GameObject HandleSensor;

    public float[] drillBuffer;
    public float[] handleBuffer;

    public bool isDrillActive;
    public bool isHandleActive;

    public float errorMargin = 0.2f;

    public Text drillGuideSensorXRot;
    public Text drillGuideSensorYRot;
    public Text drillGuideSensorZRot;

    public Text handleSensorXRot;
    public Text handleSensorYRot;
    public Text handleSensorZRot;


    // Start is called before the first frame update
    void Start()
    {
        btManager = new vetarManager();
        btManager.StartBleDeviceWatcher();
        //btManager.StartBleDeviceWatcher();
        Invoke("PrepareInitialization", 5);
        Invoke("SelectDrillSensor", 10);
    }

   
    void PrepareInitialization()
    {
        this.isDrillActive = btManager.isDrillActive;
        if (isDrillActive)
        {
            Debug.Log("Drill-Sensor is Active");
            for (int i = 0; i < 4; i++)
            {
                this.drillBuffer[i] = btManager.drillBuffer[i];
            }
        }


        if (isHandleActive)
        {
            for (int i = 0; i < 4; i++)
            {
                Debug.Log("Handle-Sensor is Active");
                this.handleBuffer[i] = btManager.handleBuffer[i];
            }
        }
    }

    void SelectDrillSensor()
    {
        for (int i = 0; i < 4; i++)
        {            
            if(Mathf.Abs(drillBuffer[i] - btManager.drillBuffer[i]) > errorMargin)
            {
                SwitchSensors();
                break;
            }
        }
        btManager.writeDataAsync();
    }

    private void Update()
    {

        btManager.readDataAsync();
        if (isDrillActive)
        {
            for (int i = 0; i < 4; i++)
            {
                this.drillBuffer[i] = btManager.drillBuffer[i];
                DrillSensor.transform.rotation = new Quaternion(drillBuffer[0], drillBuffer[1], drillBuffer[2], drillBuffer[3]);
                Vector3 rot = DrillSensor.transform.rotation.eulerAngles;
                drillGuideSensorXRot.text = "X : " + rot.x.ToString();
                drillGuideSensorYRot.text = "Y : " + rot.y.ToString();
                drillGuideSensorZRot.text = "Z : " + rot.z.ToString();
            }
        }

        if (isHandleActive)
        {
            for (int i = 0; i < 4; i++)
            {
                this.handleBuffer[i] = btManager.handleBuffer[i];
                HandleSensor.transform.rotation = new Quaternion(handleBuffer[0], handleBuffer[1], handleBuffer[2], handleBuffer[3]);
                Vector3 rot = HandleSensor.transform.rotation.eulerAngles;
                handleSensorXRot.text = "X : " + rot.x.ToString();
                handleSensorYRot.text = "Y : " + rot.y.ToString();
                handleSensorZRot.text = "Z : " + rot.z.ToString();

            }
        }
        
    }

    void SwitchSensors()
    {
        GameObject temp;
        temp = DrillSensor;
        DrillSensor = HandleSensor;
        HandleSensor = temp;

    }
    
}
