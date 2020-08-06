using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using Mirror;
using System;
using System.IO;


public class MessageHandler : MonoBehaviour
{
    static readonly ILogger logger = LogFactory.GetLogger(typeof(MessageHandler));
    
    private InputField chatMessage = null;
    private Text chatHistory = null;

    // Variables facilitating data transfer between HoloLens and Desktop
    // HoloLens objects
    public ModelGeneration clientModelGenerator;
    public bool handleTargetFound { get; set; } = false;
    public bool boneTargetFound { get; set; } = false;
    public bool isTransferringHandleData { get; set; } = false;
    public GameObject hololensHandle;
    public GameObject hololensBone;

    // Desktop objects
    public Toggle logDataToggle;
    private string logDataPath;
    public bool isLoggingHandleData { get; set; } = false;

    // Mobile objects
    public GameObject mobileHandle;
    public GameObject mobileBone;
    public bool isFrameOfReferenceFound { get; set; } = false;

    // Server handle orientation data's containers
    public InputField xPos;
    public InputField yPos;
    public InputField zPos;
    public InputField xRot;
    public InputField yRot;
    public InputField zRot;

    public void Awake()
    {
        Player.OnMessage += OnPlayerMessage;

        // logDataToggle only exists on the server side
        if(logDataToggle != null)
        {
            logDataToggle.onValueChanged.AddListener(delegate
            {
                ToggleValueChanged(logDataToggle);
            });
        }
        logDataPath = Environment.GetFolderPath(Environment.SpecialFolder.Desktop) + @"\loggedData.txt";
        StreamWriter sw = File.CreateText(logDataPath);
        sw.Close();
    }

    public void Update()
    {
        if (handleTargetFound && isTransferringHandleData)
        {
            OnFoundHandleImageTarget();
        }
        if (boneTargetFound && isTransferringHandleData)
        {
            OnFoundBoneImageTarget();
        }
    }

    public void InitializeChatUIComponents()
    {
        chatMessage = GameObject.Find("ChatInputField").GetComponent<InputField>();
        chatHistory = GameObject.Find("ChatText").GetComponent<Text>();
    }


    public void NotifyServerOnJoin()
    {
        StartCoroutine(NotifyServerOnJoinRoutine());
    }


    IEnumerator NotifyServerOnJoinRoutine()
    {
        yield return new WaitForSeconds(0.55f);
        Player player = NetworkClient.connection.identity.GetComponent<Player>();

        player.CmdSend("JOIN|" + player.playerName);
    }

    void OnPlayerMessage(Player player, string message)
    {
        if (chatMessage == null)
        {
            InitializeChatUIComponents();
        }
        string[] messageParts = message.Split('|');
        if (player.isServer)
        {
            // Player is server and is receiving the message
            if (!player.isLocalPlayer)
            {
                switch (messageParts[0])
                {
                    case "HANDLEDATA": // when desktop server receive handle data from HoloLens client
                        // Don't add messages to chatHistory if client is trying to send handle data
                        // Otherwise the chatbox will be overflowed with messages
                        OnReceiveHandleDataServer(messageParts[1]);
                        return;
                    default:
                        break;
                }
            }

        }
        else if (player.isClientOnly)
        {
            // player is client and is sending message
            if (player.isLocalPlayer)
            {
                switch (messageParts[0])
                {
                    case "HANDLEDATA": // When HoloLens client sends handle data to the server and mobile clients
                        // Don't add messages to chatHistory if client is trying to send handle data
                        // Otherwise the chatbox will be overflowed with messages
                        return;
                    case "BONEDATA": // When HoloLens client sends bone data to the mobile clients
                        // Don't add messages like case "HANDLEDATA" above
                        return;
                    case "JOIN":
                        return;
                    case "EXIT":
                        return;
                    default:
                        break;
                }
            }
            // player is client and is receiving message
            else
            {
                switch (messageParts[0])
                {
                    case "PLANNINGDATA": // when Hololens and mobile clients receive planning data from desktop server
                        clientModelGenerator.ParseData(messageParts[1]);
                        break;
                    case "HANDLEDATA": // When mobile clients receive handle data from Hololens client
                                       // Don't add messages to chatHistory if client is trying to send handle data
                                       // Otherwise the chatbox will be overflowed with messages
                        if (isFrameOfReferenceFound)
                            OnReceiveHandleDataMobile(messageParts[1]);
                        return;
                    case "BONEDATA": // When mobile clients receive bone data from Hololens client
                                     // Don't add messages to chatHistory if client is trying to send bone data
                                     // Otherwise the chatbox will be overflowed with messages
                        if (isFrameOfReferenceFound)
                            Debug.Log("Receiving bone data");
                            OnRecieveBoneDataMobile(messageParts[1]);
                        return;
                    default:
                        break;
                }
            }
        }
        string prettyMessage = "";

        // when client connect and disconnect
        if (messageParts[0] == "JOIN")
        {
            prettyMessage = $"<color=green>{messageParts[1] + " joined the server."}</color>";

            Debug.Log("Client joining");
        }
        else if(messageParts[0] == "EXIT")
        {
            prettyMessage = $"<color=red>{messageParts[1] + " exited the server."}</color>";

            Debug.Log("Client exiting");
        }
        // All other messaage types
        else
        {
            prettyMessage = player.isLocalPlayer ?
                $"<color=red>{player.playerName}: </color> {message}" :
                $"<color=blue>{player.playerName}: </color> {message}";
        }
        AppendMessage(prettyMessage);
        logger.Log(message);
    }

    // Player sending the message by pressing the Enter key
    public void OnSend()
    {
        if (chatMessage == null)
        {
            InitializeChatUIComponents();
        }
        if (Input.GetKeyDown(KeyCode.Return)) {
            if (chatMessage.text.Trim() == "")
                return;

            // get our player
            Player player = NetworkClient.connection.identity.GetComponent<Player>();

            // send a message
            player.CmdSend(chatMessage.text.Trim());

            chatMessage.text = "";
        }
    }

    // Player sending the message by pressing the Send button in chatbox panel
    public void OnSendButton()
    {
        if (chatMessage == null)
        {
            InitializeChatUIComponents();
        }
        if (chatMessage.text.Trim() == "")
            return;

        // get our player
        Player player = NetworkClient.connection.identity.GetComponent<Player>();

        // send a message
        player.CmdSend(chatMessage.text.Trim());

        chatMessage.text = "";
    }

    // Server user hitting the send data button
    public void OnSendDataButton(string message)
    {
        if (message.Trim() == "")
            return;

        // get our player
        Player player = NetworkClient.connection.identity.GetComponent<Player>();

        // send data
        player.CmdSend(message);
    }

    // When the HoloLens' handle image target is found and the Send Handle Data button is clicked, the HoloLens sends position and 
    // orientation data to the server and mobile clients
    private void OnFoundHandleImageTarget()
    {
        Vector3 position = hololensHandle.transform.position;
        Vector3 rotation = hololensHandle.transform.eulerAngles;
        string handleData =
                "HANDLEDATA|" + position.x + "," + position.y + "," + position.z + ";" + rotation.x + "," + rotation.y + "," + rotation.z;

        Player player = NetworkClient.connection.identity.GetComponent<Player>();
        player.CmdSend(handleData);
    }

    // When the HoloLens's bone image target is found and Send Handle Data button is clicked, the HoloLens sends position and 
    // orientation data to the mobile clients
    private void OnFoundBoneImageTarget()
    {
        Vector3 position = hololensHandle.transform.position;
        Vector3 rotation = hololensHandle.transform.eulerAngles;

        string boneData =
            "BONEDATA|" + position.x + "," + position.y + "," + position.z + ";" + rotation.x + "," + rotation.y + "," + rotation.z;

        Player player = NetworkClient.connection.identity.GetComponent<Player>();
        player.CmdSend(boneData); 
    }

    // When the server receives handle data from the HoloLens, it processes the data and orient the handle on 
    // the desktop app to match the orientation of the handle on the holoLens app. If the log data checkbox 
    // is checked, the data will also gets logged to a file on the desktop
    private void OnReceiveHandleDataServer(string handleData)
    {
        string[] splitHandleData = handleData.Split(';');
        Vector3 position = Utils.StringToVector3(splitHandleData[0]);
        Vector3 rotation = Utils.StringToVector3(splitHandleData[1]);

        // Modifies the current orientation and position of the arm on desktop to match the one on HoloLens client
        // Make sure the arm is marked visible with the display arm checkbox

        // ArmModelDropdown.selectedArmModel.transform.position = position; --> uncomment to match position
        ArmModelDropdown.selectedArmModel.transform.rotation = Quaternion.Euler(rotation);
        //NailModelDropdown.selectedNailModel.transform.rotation = Quaternion.Euler(rotation);

        xPos.SetTextWithoutNotify(position.x.ToString());
        yPos.SetTextWithoutNotify(position.y.ToString());
        zPos.SetTextWithoutNotify(position.z.ToString());

        xRot.SetTextWithoutNotify(rotation.x.ToString());
        yRot.SetTextWithoutNotify(rotation.y.ToString());
        zRot.SetTextWithoutNotify(rotation.z.ToString());

        // Log the handle data to log file in the current directory
        if (isLoggingHandleData)
        {
            string logData =
            "Handle Image Target\n" +
            "[Position]" + position.x + " " + position.y + " " + position.z + " " + "\n" +
            "[Rotation]" + rotation.x + " " + rotation.y + " " + rotation.z + " " + "\n";
            Utils.LogData(logData, logDataPath, includesTimeStamp: true);
        }
    }

    // When the mobile client receives handle data from the HoloLens, it processes the data and orient the handle on
    // mobile app to match those of the handle on the HoloLens app.
    // This way we don't need to "see" the image target of the handle
    private void OnReceiveHandleDataMobile(string handleData)
    {
        string[] splitHandleData = handleData.Split(';');
        Vector3 position = Utils.StringToVector3(splitHandleData[0]);
        Vector3 rotation = Utils.StringToVector3(splitHandleData[1]);

        mobileHandle.transform.rotation = Quaternion.Euler(rotation);
        // TODO: Set position with respect to the frame of reference

        xPos.SetTextWithoutNotify(position.x.ToString());
        yPos.SetTextWithoutNotify(position.y.ToString());
        zPos.SetTextWithoutNotify(position.z.ToString());

        xRot.SetTextWithoutNotify(rotation.x.ToString());
        yRot.SetTextWithoutNotify(rotation.y.ToString());
        zRot.SetTextWithoutNotify(rotation.z.ToString());
    }

    // When the movile client receives bone data from the HoloLens, it processes the data and orient the bone on
    // mobile app to match those of the bone on the HoloLens.
    // This way we don't need to "see" the image target of the bone
    private void OnRecieveBoneDataMobile(string boneData)
    {
        string[] splitBoneData = boneData.Split(';');
        Vector3 position = Utils.StringToVector3(splitBoneData[0]);
        Vector3 rotation = Utils.StringToVector3(splitBoneData[0]);

        mobileBone.transform.rotation = Quaternion.Euler(rotation);
        // TODO: Set position with respect to the frame of reference
    }


    void ToggleValueChanged(Toggle toggle)
    {
        isLoggingHandleData = toggle.isOn;
    }

    internal void AppendMessage(string message)
    {
        StartCoroutine(AppendMessageToScrollView(message));
    }

    IEnumerator AppendMessageToScrollView(string message)
    {
        chatHistory.text += message + "\n";

        // it takes 2 frames for the UI to update ?!?!
        yield return null;
        yield return null;
    }
}

