# NailedIt

![Alt text](figure1.png?raw=true "Planning View")

NailedIt is an augmented reality surgical navigation application for orthopedic surgery. There are 3 main applications within this one project. The first part is a planning app that runs on the desktop. This app allows the user to load relevant 3D models (patient bone, surgical equipments, etc.) and annotate them prior to the procedure. It also allows the host device to be a server for the HoloLens, communicating data between the two devices. The second part is the HoloLens app. This app displays the annotation data from the planning app on the HoloLens, allowing user to reference those annotations as needed. Sensors attached to relevant surgical tools that the surgeon uses will deliver data back to the server. The third part is a mobile app that let users not wearing a HoloLens to monitor the procedure via their phones.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

What you will need to get the project running:

```
1. Unity 2018.x or later versions
2. Visual Studio 2017 or later (installed with Desktop development with C++, Universial Windows Platform development, Game development with Unity, and Windows 10 SDK (10.0.18+)
3. Windows 10 Operating System (or a VM on other OS but not recommended)
```

### Installations and Setup

Make sure you have installed all of the prerequisites above before moving on to the next few steps.

1. First download this repository to your local computer via git bash. 

```
$ git clone https://github.com/dzungpng/AR-NailedIt-App.git
```

2. Open the project in Unity. 

3. Open the project .sln in Visual Studio to see the scripts included.

### Project Structure

The project comprises of 3 main scenes: Mobile_Client, HoloLens_Client, and NailedIt_update1. Their functionalities corresponds to each of the 3 apps described in the introduction of this README.

Prefabs, Scripts, and Plugins are stored under the Assets folder. The project solution (.sln) file is under the project's root directory. 

## Building and Running the App

### Building NailedIt_update1 (Desktop App)

**Build Settings** 
Platform: PC, Mac & Linux Standalone

**Graphics Settings**
In order for this to work in runtime, you must go to the "Edit > Project Settings > Graphics" tab, and add "Standard (Specular Setup)" to the always included shaders. This will make your next build take a while. (From the README of UnityRuntimeOBJImporter)

### Building HoloLens_Client

**Build Settings for Unity** 
Platform: Universal Windows Platform <br />
Target Device: HoloLens <br />
Architecture: x86 <br />
Target SDK Version: Latest installed <br />
Minimum Platform Version: 10.0.10240.0 (or later) <br />
Visual Studio Version: Visual studio 2017 or later <br />

**Player Settings for Unity** 
Publishing Settings --> Capabilities: Check SpatialPerception, Internet Client, WebCam, Microphone.

**XR Settings for Unity** 
Install and add Microsoft Mixed Reality Plugin to the project.

**Build Settings for Visual Studio** 
Build Type: Debug <br />
Architecture: x86 <br />
Machine Type: Remote Machine <br />
Machine Name: Right click on the file under Solution Explorer that has Universal Windows at the end. Click on Properties --> Configuration Properties --> Debugging --> Machine Name --> Enter in the HoloLen's IP address which can be found in Network Settings --> Hardware Properties on the HoloLens.

For more resources on building the HoloLens app, follow these links: <br />
[Step by Step HoloLens 1 with Unity and Visual Studio Tutorial](https://medium.com/@mkryaz/step-by-step-hololens-1-with-unity-and-visual-studio-tutorial-4601d5dfcc8f) <br />
[Working with the HoloLens Sample in Unity](https://library.vuforia.com/content/vuforia-library/en/articles/Solution/Working-with-the-HoloLens-sample-in-Unity.html)

### Building Mobile_Client


## External packages

* [Mirror Networking](https://mirror-networking.com/) - Used for server/client communication between desktop app, the HoloLens, and mobile devices. <br />
* [Runtime OBJ Importer](https://assetstore.unity.com/packages/tools/modeling/runtime-obj-importer-49547) - Used in conjunction with SimpleFileBrowser to allow user to add custom models to the app. <br />
* [Runtime Transform Gizmos](https://assetstore.unity.com/packages/tools/modeling/runtime-transform-gizmos-125537) - Used to allow user to move 3D models around. <br />
* [SimpleFileBrowser](https://rometools.github.io/rome/) - Used in conjunction with SimpleFileBrowser to allow user to add custom models to the app.
