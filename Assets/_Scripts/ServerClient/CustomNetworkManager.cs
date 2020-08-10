using UnityEngine;
using UnityEngine.UI;
using Mirror;

[AddComponentMenu("")]
public class CustomNetworkManager : NetworkManager
{
    public string PlayerName { get; set; }
    [SerializeField] private Text hostname = null;

    public void SetHostname()
    {
        networkAddress = hostname.text;
    }

    public void SetHostName(string hostname)
    {
        networkAddress = hostname;
    }

    public class CreatePlayerMessage : MessageBase
    {
        public string name;
    }

    public override void OnStartServer()
    {
        base.OnStartServer();
        NetworkServer.RegisterHandler<CreatePlayerMessage>(OnCreatePlayer);
    }

    public override void OnClientConnect(NetworkConnection conn)
    {
        base.OnClientConnect(conn);
        
        // tell the server to create a player with this name
        conn.Send(new CreatePlayerMessage { name = PlayerName });
    }

    public override void OnClientDisconnect(NetworkConnection conn)
    {
        base.OnClientDisconnect(conn);
    }

    void OnCreatePlayer(NetworkConnection connection, CreatePlayerMessage createPlayerMessage)
    {
        // create a gameobject using the name supplied by client
        GameObject playergo = Instantiate(playerPrefab);
        playergo.GetComponent<Player>().playerName = createPlayerMessage.name;

        // set it as the player
        NetworkServer.AddPlayerForConnection(connection, playergo);          
    }
}

