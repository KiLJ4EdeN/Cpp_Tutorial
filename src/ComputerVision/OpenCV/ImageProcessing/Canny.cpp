#include "opencv2/videoio.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"

#include <iostream>		// standard C++ I/O
#include <string>		// standard C++ dtypes
#include <algorithm>    	// includes max()


// Image Containers.
cv::Mat img, edges;

// Set Thresholds for the Edge Detector.
const int lowThreshold = 100/3;
const int maxThreshold = 100;

// Set Other Canny Hyperparameters.
const int ratio = 3;
const int kernel_size = 3;

// Create Window names to display images on them later.
const std::string edge_window = "Edge Map";
const std::string camera_window = "Camera";

int main()
{
  	// grab an image from camera (here assume only 1 camera, device 0)
  	cv::VideoCapture cap(0);  // video capture object
	
	// stop if the capture was not sucessfully opened.
  	if( !cap.isOpened() ){
    	std::cout << "error: could not grab a frame" << std::endl;
    	exit(0);
 	}

 	// start the stream if everything is set.
  	while ( true ){
  		cap >> img; // retrieve the captured frame as an image
		
		// convert image to grayscale.
		cv::cvtColor( img, edges, cv::COLOR_BGR2GRAY );

		// preprocess with a melow blurr.
		cv::blur( edges, edges, cv::Size(3,3) );

		// detect the edges with the canny algorithm.
		cv::Canny( edges, edges, lowThreshold, maxThreshold, kernel_size );
		
  		// display image in window.
  		cv::imshow( camera_window, img );
		cv::imshow( edge_window, edges );

  		// start event processing loop (very important,in fact essential for GUI)
  		int key = ( cv::waitKey(1) & 0xFF );
  		if ( key == 'q' ){
			break;
		}

  		// the camera will be deinitialized automatically in VideoCapture destructor
  		// all OK : main returns 0
  	}
  	return 0;

}
