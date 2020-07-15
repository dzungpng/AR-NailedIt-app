using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using Mirror;

public class MessageHandler : MonoBehaviour
{
    static readonly ILogger logger = LogFactory.GetLogger(typeof(MessageHandler));

    [SerializeField] private InputField chatMessage = null;
    [SerializeField] private Text chatHistory = null;

    public void Awake()
    {
        Player.OnMessage += OnPlayerMessage;
    }

    public void InitializeChatUIComponents()
    {
        chatMessage = GameObject.Find("ChatInputField").GetComponent<InputField>();
        chatHistory = GameObject.Find("ChatText").GetComponent<Text>();
    }

    void OnPlayerMessage(Player player, string message)
    {
        if (chatMessage == null)
        {
            InitializeChatUIComponents();
        }
        if (player.isServer)
        {
            // Player is server and is sending the message
            if (player.isLocalPlayer)
            {
                switch (message)
                {
                    case "PLANNINGDATA":
                        Debug.Log("Server sending planning data");
                        break;
                    default:
                        break;
                }
            }
            // player is server and is receiving the message
            else
            {
                switch (message)
                {
                    case "HANDLEDATA":
                        Debug.Log("Server receiving handle data");
                        break;
                    default:
                        break;
                }
            }

        }
        if (player.isClientOnly)
        {
            // player is client and is sending the message
            if (player.isLocalPlayer)
            {
                switch (message)
                {
                    case "HANDLEDATA":
                        Debug.Log("Client sending handle data");
                        break;
                    default:
                        break;
                }
            }
            //player is client and is receiving the message
            else
            {
                switch (message)
                {
                    case "PLANNINGDATA":
                        Debug.Log("Client receiving planning data");
                        break;
                    default:
                        break;
                }
            }
        }
        string prettyMessage = player.isLocalPlayer ?
                            $"<color=red>{player.playerName}: </color> {message}" :
                            $"<color=blue>{player.playerName}: </color> {message}";
        AppendMessage(prettyMessage);
        logger.Log(message);
    }

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

        // slam the scrollbar down
        //scrollbar.value = 0;
    }
}

