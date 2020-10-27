#include "opencv2/videoio.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

#include <iostream>		// standard C++ I/O
#include <string>		// standard C++ dtypes
#include <algorithm>    	// includes max()

using namespace cv; // OpenCV API is in the C++ "cv" namespace
using namespace std;

int main()
{
	Mat img;  // image object
  	const string windowName = "OpenCV Camera"; // window name

  	// create window object
  	namedWindow(windowName, 1);

  	// grab an image from camera (here assume only 1 camera, device 0)
  	VideoCapture cap(0);  // video capture object

  	if( !cap.isOpened() ){
    	std::cout << "error: could not grab a frame" << std::endl;
    	exit(0);
 	 }
 	 // start the stream if everything is set.

  	while ( true ){
  		cap >> img; // retrieve the captured frame as an image

  		// display image in window
  		imshow(windowName, img);

  		// start event processing loop (very important,in fact essential for GUI)
  		int key = ( waitKey(1) & 0xFF );
  		if ( key == 'q' ){
			break;
		}

  		// the camera will be deinitialized automatically in VideoCapture destructor
  		// all OK : main returns 0
  		}
  	return 0;

}
