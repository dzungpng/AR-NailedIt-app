/*
using UnityEngine;
using System;
using System.Collections;
using System.IO.Ports;
using System.Threading.Tasks;
using System.Threading;
using System.IO;

public class lpmsTest : MonoBehaviour
{
    bool hasInitialized = false;
    public Vector4 xAxis, yAxis, zAxis;

    // Connect to the serial port the 3-Space Sensor is connected to
    public static SerialPort sp = new SerialPort("\\\\.\\COM4");

    byte[] setTransmitData ={ 0x3A, 0x01, 0x00, 0x0A, 0x00, 0x04, 0x00, 0x00, 0x00, 0x06, 0x00, 0x15, 0x00, 0x0D, 0x0A };
    byte[] readSensorData = { 0x3A, 0x01, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x0D, 0x0A };

    public int counter = 0;
    private bool IsConnected;
    public bool isQuat = true;

    float x, y, z, w;
    float xE, yE, zE;
    Thread reader;
    Thread initializer;

    string Path = "C:/Users/tpura/Desktop/Data.txt";
    StreamWriter writer;
    public bool loggingEnabled = false;

    // Use this for initialization
    void Start()
    {
        // Allow the user to set the appropriate properties.
        sp.BaudRate = 9600;
        sp.Parity = Parity.None;
        sp.DataBits = 8;
        sp.StopBits = StopBits.One;
        sp.RtsEnable = true;
        sp.DtrEnable = true;

        // Set the read/write timeouts
        sp.WriteTimeout = 500;
        sp.ReadTimeout = 500;

        sp.Open();

        IsConnected = true;
        
        initializer = new Thread(Init);
        initializer.Start();

        reader = new Thread(ReaderTask);
        reader.Start();

    }

    // Helper function for taking the bytes read from the yost Sensor and converting them into a float
    float bytesToFloat(byte[] raw_bytes, int offset)
    {
        byte[] big_bytes = new byte[4];
        big_bytes[0] = raw_bytes[offset + 0];
        big_bytes[1] = raw_bytes[offset + 1];
        big_bytes[2] = raw_bytes[offset + 2];
        big_bytes[3] = raw_bytes[offset + 3];
        return BitConverter.ToSingle(big_bytes, 0);
    }
  
    private void Update()
    {
        if (IsConnected)
        {
            
            if (isQuat)
            {
               Quaternion quat = new Quaternion(x, z, y, w);
               transform.rotation = quat;
            }
            else
            {

            }
        }
    }

    void OnDestroy()
    {
        IsConnected = false;
        reader.Abort();
    }

    void Init()
    {
        Debug.Log("Setting Transmit Data...");
       // sp.Write(setTransmitData, 0, 15);
        //Thread.Sleep(1000);

        Debug.Log("Reading Sensor Data...");
        sp.Write(readSensorData, 0, 11);
        Thread.Sleep(1000);

    }

    public delegate void MessageReceivedHandler(byte[] message);
    public event MessageReceivedHandler MessageReceived;
    void ReaderTask()
    {
        if (loggingEnabled)
        {
            writer = new StreamWriter(Path, true);
            writer.WriteLine("\n\n__________________________________________________________________");
        }

        // Will ask for data while connected to the serial port
        while (IsConnected)
        {
            int messageLength = sp.BytesToRead;

            if (messageLength > 0)
            {
                byte[] message = new byte[messageLength];
                int offset = 0;
                int count = messageLength - offset;
                // Ask data for ever if there is no data yet in the serial port
                while (sp.Read(message, offset, count) <= 0)
                    ; // noop


                // Check if there are subscribed listeners
                if (MessageReceived != null)
                {
                    MessageReceived(message);
                }

                for (int i = 0; i < messageLength; i++)
                {
                    if (message[i] == 58 && i + 6 < messageLength)
                        if (message[i + 1] == 1 && message[i + 2] == 0 && message[i + 3] == 9 && message[i + 4] == 0)// && message[i + 5] == 80 && message[i + 6] == 0)
                        {
                            if (i + 90 < message.Length) 
                            Debug.Log(message[i+89] + " , " +  message[i+90]);

                            //float timestamp = 0;
                           // if (i + 11 < message.Length) 
                           // timestamp = bytesToFloat(message, i + 7);
                            //Debug.Log(timestamp);
                            
                            if (!isQuat && i + 22 < message.Length)
                            {
                                x = bytesToFloat(message, i + 11);
                                y = bytesToFloat(message, i + 15);
                                z = bytesToFloat(message, i + 19);

                                if (loggingEnabled)
                                {
                                    writer.WriteLine("Gyroscope Data: " + x + ", " + y + ", " + z);

                                }
                            }
                            else if (isQuat && i + 62 < message.Length)
                            {
                                Debug.Log("..");
                                x = bytesToFloat(message, i + 47);
                                y = bytesToFloat(message, i + 51);
                                z = bytesToFloat(message, i + 55);
                                w = bytesToFloat(message, i + 59);

                                //Debug.Log("Quaternion Data: " + x + ", " + y + ", " + z + ", " + w);


                                if (loggingEnabled)
                                {
                                    //writer.WriteLine("Quaternion Data: " + x + ", " + y + ", " + z + ", " + w);
                                }
                            }
                            
                        }
                }
            }
            else
            {
                //Thread.Sleep(1);
            }
        }
        if (loggingEnabled)
        {
            writer.Close();
        }
    }

}

*/