using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class StepManager : MonoBehaviour
{

    public GameObject IncissionAnimObject;
    public GameObject IncissionPoint;
    //UI Texts
    public GameObject step1_Obj;
    public GameObject step2_Obj;
    public GameObject step3_Obj;

    public CustomNetworkManager cnm;
    public CustomNetworkDiscoveryHUD cndHUD;
    public MessageHandler mHandler;

    public InputField clientName;

    // Start is called before the first frame update
    void Start()
    {
        IncissionPoint.SetActive(false);
        IncissionAnimObject.SetActive(false);
        step1_Obj.SetActive(false);
        step2_Obj.SetActive(false);
        step3_Obj.SetActive(false);

        Invoke("initiateUI", 5);
    }

    void initiateUI()
    {
        clientName.text = "Hololens";
        cnm.PlayerName = "hololens";
        mHandler.isHoloLensApp = true;
        cndHUD.OnFindServers();
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
            //Enable incission circle animation object
            IncissionAnimObject.SetActive(true);
            IncissionAnimObject.GetComponent<IncissionAnim>().gameObject.transform.position = 
                IncissionAnimObject.GetComponent<IncissionAnim>().startPos.transform.position;
        }
    }

    //Button - Initialize procedure
    //Bring both image targets in focus
    //Present a text message 
    public void start_step1()
    {
        step1_Obj.SetActive(true);
        step2_Obj.SetActive(false);
        step3_Obj.SetActive(false);
        IncissionPoint.SetActive(false);
        IncissionAnimObject.SetActive(false);

    }

    //Button - Mark incission point
    //Enable incission point 
    public void start_step2()
    {
        step1_Obj.SetActive(false);
        step2_Obj.SetActive(true);
        step3_Obj.SetActive(false);
        IncissionPoint.SetActive(true);
        IncissionAnimObject.SetActive(false);

    }

    //Button - Start Alignment process
    //Enable Animation object
    public void start_step3()
    {
        step1_Obj.SetActive(false);
        step2_Obj.SetActive(false);
        step3_Obj.SetActive(true);



        IncissionAnimObject.SetActive(true);
        IncissionAnimObject.GetComponent<IncissionAnim>().gameObject.transform.position =
            IncissionAnimObject.GetComponent<IncissionAnim>().startPos.transform.position;
    }
}
