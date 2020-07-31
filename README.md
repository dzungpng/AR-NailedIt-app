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

### Building HoloLens_Client

**Build Settings for Unity** 
Platform: Universal Windows Platform
Target Device: HoloLens
Architecture: x86
Target SDK Version: Latest installed
Minimum Platform Version: 10.0.10240.0 (or later)
Visual Studio Version: Visual studio 2017 or later

**Player Settings for Unity** 
Publishing Settings --> Capabilities: Check SpatialPerception, Internet Client, WebCam, Microphone.

**Build Settings for Visual Studio** 
Build Type: Debug
Architecture: x86
Machine Type: Remote Machine
Machine Name: Right click on the file under Solution Explorer that has Universal Windows at the end. Click on Properties --> Configuration Properties --> Debugging --> Machine Name --> Enter in the HoloLen's IP address which can be found in Network Settings --> Hardware Properties on the HoloLens.

For more resources on building the HoloLens app, follow these links:
[Step by Step HoloLens 1 with Unity and Visual Studio Tutorial](https://medium.com/@mkryaz/step-by-step-hololens-1-with-unity-and-visual-studio-tutorial-4601d5dfcc8f)
[Working with the HoloLens Sample in Unity](https://library.vuforia.com/content/vuforia-library/en/articles/Solution/Working-with-the-HoloLens-sample-in-Unity.html)

### Building Mobile_Client


## External packages

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - The web framework used
* [Maven](https://maven.apache.org/) - Dependency Management
* [ROME](https://rometools.github.io/rome/) - Used to generate RSS Feeds

## Authors

* **Billie Thompson** - *Initial work* - [PurpleBooth](https://github.com/PurpleBooth)

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Hat tip to anyone whose code was used
* Inspiration
* etc
