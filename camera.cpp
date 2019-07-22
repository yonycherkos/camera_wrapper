#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

class Camera

{

  static Camera *instance;
  int cameraId;
  double width;
  double height;

  VideoCapture cap;

  // Private constructor so that no objects can be created.
  Camera(int cameraId = 0, double width = 700, double height = 600){
      this->cameraId = cameraId;
      this->width = width;
      this->height = height;

      // set width and heigh of the camera
      this->cap.set(CV_CAP_PROP_FRAME_WIDTH, width);
      this->cap.set(CV_CAP_PROP_FRAME_HEIGHT, height);
  }

public:
   static Camera *getInstance() {
      if (!instance)
      instance = new Camera;
      return instance;
   }

  VideoCapture openCamera(){
          cap = this->cap;
          cap.open(cameraId);
          if (cap.isOpened() == false) {
            cout << "Cannot open the Camera" << endl;
            return -1;
          }else{
            return cap;
          }
  }

  void  readCamera(VideoCapture cap) {
    // read frame from the camera
    while (true) {
        Mat frame;
        cap.read(frame);
        imshow("camera", frame);
        if (waitKey(27) >= 0)
              break;
        }
        // imwrite("camera.jpg", frame);
  }

  void closeCamera(VideoCapture cap) {
    if(cap.isOpened())
      {
          cap.release();
      }
    }

};
