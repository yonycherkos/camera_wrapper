# CameraWrapper class

This is a simple camera wrapper class using opencv c++. Since a camera can only be opened once at at time, i used singleton
design pattern. These are the methods in this wrapper class:
* Camera - constructor
* openCamera - which use to open camera.
* readCamera - which use to read frame from the camera.
* closeCamera - which use to close the camera when every thing is done.

## Prerequisites

For this project you need to install
* c++ compiler
* opencv
* cmake

## Authors

* **yonathan cherkos**

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details
