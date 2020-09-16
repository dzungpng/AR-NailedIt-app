using System.Collections;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class Client : MonoBehaviour
{

    public GameObject IncissionAnimObject;


    // Start is called before the first frame update
    int connection_ID;
    private int Client_ID;
    private const int MAX_CONNECTION = 100;

    //"127.0.0.1" is the local Ip, change this to the ip address of the computer running the server scene when hololens is used.
    //private string IP_Address = "127.0.0.1";
    private string IP_Address = "192.168.111.19";
    int Reliable_Channel_ID;
    int Unreliable_Channel_ID;

    private float Connection_Time;
    int Host_ID;
    int Web_Host_ID;
    int Socket_Port = 5701;
    public bool is_started;
    byte error;

    public Text status;
    public Text dataContainer;

    private string playername;
    public static string Data;

    public GameObject handle;
    bool isReadyToSendHandleData;

    // Chatbox UI
    public InputField inputChatText;
    public Button sendInputChatText;
    public Text chatBox;

    void Start()
    {
        IncissionAnimObject.SetActive(false);

        Data = "";
        is_started = false;
        Connection_Time = 0;
        connection_ID = -1;
        playername = "Hololens User";
        Client_ID = -1;
        isReadyToSendHandleData = false;

        Connect();
    }

    // Update is called once per frame
    void Update()
    {
        if (!is_started) return;

        int recHostId;
        int connectionId;
        int channelId;
        byte[] recBuffer = new byte[1024];
        int bufferSize = 1024;
        int dataSize;
        byte error;
        NetworkEventType recData = NetworkTransport.Receive(out recHostId, out connectionId, out channelId, recBuffer, bufferSize, out dataSize, out error);
        switch (recData)
        {
            case NetworkEventType.DataEvent:
                string msg = Encoding.Unicode.GetString(recBuffer, 0, bufferSize);
                //Utils.updateScrollBox(status, "Receiving from " + connectionId + " : " + msg);

                string[] splitData = msg.Split('|');

                switch (splitData[0])
                {
                    case "ASKNAME":
                        On_AskName(splitData[1]);
                        break;

                    case "CNN":
                        //When a player is registered successully at the server end
                        Debug.Log("Player: " + splitData[1] + "has joined!\n"); 
                        break;

                    case "DC":
                        //When a player is disconnected from the server end.
                        //Utils.updateScrollBox(status, "Player " + splitData[1] + " disconnecting from server");
                        break;

                    case "DAT":
                        //When the server sends the information of the handle and cones to the hololens end
                        On_PlanningData(splitData[1]);
                        break;

                    case "CAL":
                        //When the server asks for handle calibration
                        On_Calibration(splitData[1]);
                        break;

                    case "MSG":
                        On_ReceiveServerChatMessage(splitData[1]);
                        Debug.Log("GOT MESSAGE!");
                        break;

                    default:
                        Debug.Log("Invalid Message : " + msg);
                        break;
                }
                break;
        }
        if(is_started)
            SendHandleData();
    }

    public void Connect()
    {
        NetworkTransport.Init();
        ConnectionConfig config = new ConnectionConfig();

        Reliable_Channel_ID = config.AddChannel(QosType.Reliable);
        Unreliable_Channel_ID = config.AddChannel(QosType.Unreliable);

        HostTopology topology = new HostTopology(config, MAX_CONNECTION);


        Host_ID = NetworkTransport.AddHost(topology,0);

        connection_ID = NetworkTransport.Connect(Host_ID, IP_Address, Socket_Port, 0, out error);

        if (connection_ID == 0)
        {
            //Utils.updateScrollBox(status, "Unable to find the host!");
            return;
        }
        Debug.Log(connection_ID);
        Connection_Time = Time.time;
        is_started = true;
        //Utils.updateScrollBox(status, "Connected to server");
    }

    public void Disconnect()
    {
        NetworkTransport.Disconnect(Host_ID, connection_ID, out error);
    }

    public void Send_Message(string msg)
    {
        byte[] buffer = Encoding.Unicode.GetBytes(msg);
        //NetworkTransport.Send(Host_ID, connection_ID, Reliable_Channel_ID, buffer, msg.Length * sizeof(char), out error);
        NetworkTransport.Send(Host_ID, connection_ID, Reliable_Channel_ID, buffer, msg.Length * sizeof(char), out error);

    }

    private void Send(string message, int channelID)
    {
        //Utils.updateScrollBox(status, "Sending to the server:\n" + message);
        byte[] msg = Encoding.Unicode.GetBytes(message);

        NetworkTransport.Send(Host_ID, connection_ID, channelID, msg, message.Length * sizeof(char), out error);
    }

    private void On_AskName(string data)
    {
        Client_ID = int.Parse(data);
        Send("NAMEIS|" + playername + "|", Reliable_Channel_ID);

    }

    private void On_PlanningData(string data)
    {
        //Utils.updateScrollBox(dataContainer, "Received planning data:\n" + data);
        // Save data so that ModelGeneration can access and parse
        Data = data;
    }

    private void On_Calibration(string data)
    {
        Debug.Log("Received Calibration Data: " + data);

        //To do: Read the current orientation of the virtual handle to the server
    }

    public void SetReadyToSendHandleDataTrue()
    {
        isReadyToSendHandleData = true;
        //Utils.updateScrollBox(status, "Handle VuMark found. Ready to send handle data");
    }

    public void SetReadyToSendHandleDataFalse()
    {
        isReadyToSendHandleData = false;
        //Utils.updateScrollBox(status, "Handle VuMark lost. Not ready to send handle data. Please find target!");
    }

    // Send the position and rotation data of the handle's VuMark to the server when the VuMark is found
    private void SendHandleData()
    {
        if (isReadyToSendHandleData)
        {
            //Debug.Log("Sending handle data to server...");
            Vector3 position = handle.transform.position;
            Vector3 rotation = handle.transform.eulerAngles;
            string handleData = "HANDLEDAT|" + position.x + "," + position.y + "," + position.z + ";" + rotation.x + "," + rotation.y + "," + rotation.z;
            Send_Message(handleData);
        }
    }

    public void On_ReceiveServerChatMessage(string msg)
    {
        Debug.Log("Received_______________________");
        //chatBox.text += "Server: " + msg + "\n";
        if (msg.CompareTo("next") == 0)
        {
            //Enable animation
            IncissionAnimObject.SetActive(true);
            IncissionAnimObject.GetComponent<IncissionAnim>().gameObject.transform.position =
                IncissionAnimObject.GetComponent<IncissionAnim>().startPos.transform.position;
        }
    }
}
