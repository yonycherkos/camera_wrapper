#include "opencv2/opencv.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "camera.h"
#include <iostream>

using namespace std;
using namespace cv;

int main(){

  Camera camera;
  VideoCapture cap = camera.open_camera();
  camera.read_frame(cap);
  close_camera(cap);

  return 0;
}
