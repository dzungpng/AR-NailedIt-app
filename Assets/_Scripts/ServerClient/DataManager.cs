using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataManager : MonoBehaviour
{
    public Quaternion Inertia_Rotation;
    public Quaternion TrackIR_Rotation;
    public Vector3 TrackIR_Position;
    public Vector3 TrackIR_Offset;
    public Quaternion RealSense_Rotation;
    public Vector3 RealSense_Position;
    public Quaternion VuMark_Rotation;
    public Vector3 VuMark_Position;
    public string Handle_Data;
    public int cal_x, cal_y, cal_z;
    public bool XZ_Reversed;
    // Start is called before the first frame update
    void Start()
    {
        Handle_Data = "";
        cal_x = cal_z = 1;
        cal_y = -1;
        XZ_Reversed = true;
    }

    // Update is called once per frame
    void Update()
    {

    }
    public void set_TrackIR(Quaternion Rotation, Vector3 Position)
    {

        TrackIR_Rotation = Rotation;
        TrackIR_Position = Position;
    }
    public void set_Iniertial(Quaternion Rotation)
    {
        Inertia_Rotation = Rotation;
    }
    public void set_VuMark(Quaternion Rotation, Vector3 Position)
    {
        VuMark_Position = Position;
        VuMark_Rotation = Rotation;
    }
    public void set_RealSense(Quaternion Rotation, Vector3 Postion)
    {
        RealSense_Position = Postion;
        RealSense_Rotation = Rotation;
    }

    public void Set_HandleData(string data)
    {
        if (GameObject.Find("VuMark_Handle") != null) Destroy(GameObject.Find("VuMark_Handle"));
        Handle_Data = data;
    }

    public void SET_CAL_X()
    {
        cal_x *= -1;
    }

    public void SET_CAL_Y()
    {
        cal_y *= -1;
    }

    public void SET_CAL_Z()
    {
        cal_z *= -1;
    }

    public void XZ_Reverse()
    {
        XZ_Reversed = !XZ_Reversed;
    }

    public void Set_Cal(int calx, int caly, int calz, bool reversed)
    {
        this.cal_x = calx;
        this.cal_y = caly;
        this.cal_z = calz;
        this.XZ_Reversed = reversed;
    }
}
