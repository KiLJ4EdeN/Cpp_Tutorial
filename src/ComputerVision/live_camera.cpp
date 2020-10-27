#include "opencv2/opencv.hpp"
using namespace cv;

int main(int argc, char** argv)
{
    // Create a VideoCapture Object
    VideoCapture cap;
    // open the default camera, use something different from 0 otherwise;
    // Check VideoCapture documentation.
    if(!cap.open(0))
        return 0;
    for(;;)
    {
	  // allocate a Mat type for the frame.
          Mat frame;
	  // get the frame from the cap stream.
          cap >> frame;
          if( frame.empty() ) break; // end of video stream
          imshow("camera", frame);
          if( waitKey(10) == 27 ) break; // stop capturing by pressing ESC 
    }
    // the camera will be closed automatically upon exit
    return 0;
}
