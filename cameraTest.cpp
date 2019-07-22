#include <iostream>
#include "camera.cpp"

using namespace std;

Camera *Camera::instance = 0;

int main(int argc, char const *argv[]) {

  // instantiate the camera object
  Camera *camera = camera->getInstance();
  VideoCapture cap;
  cap = camera->openCamera();
  camera->readCamera(cap);
  camera->closeCamera(cap);
  return 0;
}
