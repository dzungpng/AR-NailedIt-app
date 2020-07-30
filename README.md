# NailedIt

NailedIt is an augmented reality surgical navigation application for orthopedic surgery. There are 3 main applications within this one project. The first part is a planning app that runs on the desktop. This app allows the user to load relevant 3D models (patient bone, surgical equipments, etc.) and annotate them prior to the procedure. It also allows the host device to be a server for the HoloLens, communicating data between the two devices. The second part is the HoloLens app. This app displays the annotation data from the planning app on the HoloLens, allowing user to reference those annotations as needed. Sensors attached to relevant surgical tools that the surgeon uses will deliver data back to the server. The third part is a mobile app that let users not wearing a HoloLens to monitor the procedure via their phones.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

What you will need to get the project running:

```
1. Unity 2018.x or later versions
2. Visual Studio 2017 (installed with Desktop development with C++, Universial Windows Platform development, Game development with Unity, and Windows 10 SDK (10.0.18+)
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

## Deployment

Add additional notes about how to deploy this on a live system

## Built With

* [Dropwizard](http://www.dropwizard.io/1.0.2/docs/) - The web framework used
* [Maven](https://maven.apache.org/) - Dependency Management
* [ROME](https://rometools.github.io/rome/) - Used to generate RSS Feeds

## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/your/project/tags). 

## Authors

* **Billie Thompson** - *Initial work* - [PurpleBooth](https://github.com/PurpleBooth)

See also the list of [contributors](https://github.com/your/project/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

* Hat tip to anyone whose code was used
* Inspiration
* etc
