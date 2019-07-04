#include "opencv2/opencv.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>

using namespace std;
using namespace cv;

class Camera{
private:
   void Camera(){
   }

   void open_camera(){

	  // Create a VideoCapture object and open the input file
	  VideoCapture cap(0);

	  // Check if camera opened successfully
	  if(!cap.isOpened()){
	    cout << "Error opening video stream or file" << endl;
	    return -1;
	  }else{
            return cap;
           }
   }

   void read_frame(VideoCapture cap){
	  while(1){

	    Mat frame;
	    // Capture frame-by-frame
	    cap >> frame;

	    // If the frame is empty, break immediately
	    if (frame.empty())
	      break;

	    // Display the resulting frame
	    imshow( "Frame", frame );

	    // Press  ESC on keyboard to exit
	    char c=(char)waitKey(25);
	    if(c==27)
	      break;
	  }

   }
   void close_camera(VideoCapture cap){

	  // When everything done, release the video capture object
	  cap.release();

	  // Closes all the frames
	  destroyAllWindows();
   }

};
