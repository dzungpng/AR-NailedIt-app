/*
using UnityEngine;
using System;
using System.Collections;
using System.IO.Ports;

public class cube_rotator : MonoBehaviour
{
    // Connect to the serial port the 3-Space Sensor is connected to
    public static SerialPort sp = new SerialPort("\\\\.\\COM7");

    // Command packet for getting the filtered tared orientation as a quaternion
    // {header byte, command byte, [data bytes], checksum byte}
    // checksum = (command byte + data bytes) % 256
    public static byte[] send_bytes = { 0xf7, 0x00, 0x00 };

    public int counter = 0;

    // Use this for initialization
    void Start()
    {
        // Allow the user to set the appropriate properties.
        sp.BaudRate = 115200;
        sp.Parity = Parity.None;
        sp.DataBits = 8;
        sp.StopBits = StopBits.One;

        // Set the read/write timeouts
        sp.WriteTimeout = 500;
        sp.ReadTimeout = 500;

        sp.Open();

        sp.Write(send_bytes, 0, 3);

       

    }

    // Helper function for taking the bytes read from the 3-Space Sensor and converting them into a float
    float bytesToFloat(byte[] raw_bytes, int offset)
    {
        byte[] big_bytes = new byte[4];
        big_bytes[0] = raw_bytes[offset + 3];
        big_bytes[1] = raw_bytes[offset + 2];
        big_bytes[2] = raw_bytes[offset + 1];
        big_bytes[3] = raw_bytes[offset + 0];
        return BitConverter.ToSingle(big_bytes, 0);
    }

    // Update is called once per frame
    void Update()
    {
        counter++;
        // A quaternion consists of 4 floats which is 16 bytes
        byte[] read_bytes = new byte[16];

        // Mono, for some reason, seems to randomly fail on the first read after a write so we must loop
        // through to make sure the bytes are read and Mono also seems not to always read the amount asked
        // so we must also read one byte at a time
        int read_counter = 100;
        int byte_idx = 0;
        while (read_counter > 0)
        {
            try
            {
                byte_idx += sp.Read(read_bytes, byte_idx, 1);
            }
            catch
            {
                // Failed to read from serial port
            }
            if (byte_idx == 16)
            {
                break;
            }
            if (read_counter <= 0)
            {
                throw new System.Exception("Failed to read quaternion from port too many times." +
                    " This could mean the port is not open or the Mono serial read is not responding.");
            }
            --read_counter;
        }

        // Convert bytes to floats
        float x = bytesToFloat(read_bytes, 0);
        float y = bytesToFloat(read_bytes, 4);
        float z = bytesToFloat(read_bytes, 8);
        float w = bytesToFloat(read_bytes, 12);

        // Create a quaternion
        Quaternion quat = new Quaternion(x, y, z, w);

        // Perform rotation
        transform.rotation = quat;
        Debug.Log(quat);

        // Send command
        sp.Write(send_bytes, 0, 3);
    }
}

*/

/*
using UnityEngine;
#if NETFX_CORE
using Windows.Devices.Bluetooth.Advertisement;
using System.Runtime.InteropServices.WindowsRuntime;
#endif

public class cube_rotator : MonoBehaviour
{
#if NETFX_CORE
    BluetoothLEAdvertisementWatcher watcher;
    public static ushort BEACON_ID = 1775;
#endif
    //public EventProcessor eventProcessor;

    void Awake()
    {
#if NETFX_CORE
        watcher = new BluetoothLEAdvertisementWatcher();
        var manufacturerData = new BluetoothLEManufacturerData
        {
        CompanyId = BEACON_ID
        };
        watcher.AdvertisementFilter.Advertisement.ManufacturerData.Add(manufacturerData);
        watcher.Received += Watcher_Received;
        watcher.Start();
#endif
    }
#if NETFX_CORE
    private async void Watcher_Received(BluetoothLEAdvertisementWatcher sender, BluetoothLEAdvertisementReceivedEventArgs args)
    {
        ushort identifier = args.Advertisement.ManufacturerData[0].CompanyId;
        byte[] data = args.Advertisement.ManufacturerData[0].Data.ToArray();
        // Updates to Unity UI don't seem to work nicely from this callback so just store a reference to the data for later processing.
        eventProcessor.QueueData(data);
    }
#endif
}

*/





/*
   /////////////////////////////////////////////////////////////////////
   ////    RFCOMM
   /////////////////////////////////////////////////////////////////////

   var devices = DeviceInformation.FindAll(RfcommDeviceService.GetDeviceSelector(RfcommServiceId.SerialPort));
   var deviceInfo = devices[0]; // this makes some assumptions about your paired devices so really the results should be enumerated and checked for the correct device
   var device = BluetoothDevice.FromDeviceInformation(deviceInfo);
   var serResults = device.GetRfcommServices(BluetoothCacheMode.Cached);
   foreach (RfcommDeviceService serv in serResults.Services)
   {
       if (serv.ServiceId == RfcommServiceId.SerialPort)
       {
           var stream = serv.OpenStream();
           byte[] buff = System.Text.Encoding.ASCII.GetBytes("Testing\r\n");
           stream.Write(buff, 0, buff.Length);
           stream.Flush();
           stream.Close();
           break;
       }
   }


*/
