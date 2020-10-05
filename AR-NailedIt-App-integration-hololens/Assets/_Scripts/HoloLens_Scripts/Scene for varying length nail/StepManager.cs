using System.Collections;
using System.Collections.Generic;
using System.Security.Policy;
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

    public Button findServer;

    public GameObject[] nails;
    public GameObject[] target_pos_per_nail;    //targetPos of each nail

    public int currIndex = 0;
    // Start is called before the first frame update

    public Client client;
    void Start()
    {
        IncissionPoint.SetActive(false);
        IncissionAnimObject.SetActive(false);
        step1_Obj.SetActive(false);
        step2_Obj.SetActive(false);
        step3_Obj.SetActive(false);

        //Invoke("initiateUI", 5);

        for(int i = 0; i < nails.Length; i++)
        {
            if(i != currIndex)
            {
                nails[i].SetActive(false);
            }
        }
    }

    void initiateUI()
    {
        clientName.text = "Hololens";
        cnm.PlayerName = "hololens";
        findServer.onClick.Invoke();
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

        if (Input.GetKeyDown(KeyCode.Keypad1))
        {
            start_step1();
        }

        if (Input.GetKeyDown(KeyCode.Keypad2))
        {
            start_step2();
        }

        if (Input.GetKeyDown(KeyCode.Keypad3))
        {
            start_step3();
        }

        if(Input.GetKeyDown(KeyCode.KeypadEnter))
        {
            changeNail();
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


    public void changeNail()
    {
        start_step1();

        nails[currIndex].SetActive(false);
        currIndex = (currIndex + 1) % nails.Length;
        IncissionAnimObject.GetComponent<IncissionAnim>().targetPos = target_pos_per_nail[currIndex];
        nails[currIndex].SetActive(true);
        client.nail = nails[currIndex];
    }
}
