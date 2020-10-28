#include <iostream>
#include "opencv2/opencv.hpp"


int main(){
	// Resizing Metrics.
	float fx = 0.5;
	float fy = 0.5;
	int t = 0;

	// Save the image path in a variable.
	std::string image_path = "OpenCV.png";

	// Window name required by opencv.
	std::string window_name = "Image";

	// Mat container for the image.
	cv::Mat image;

	// Load the image in color mode.
	image = cv::imread( image_path, cv::IMREAD_COLOR );
	
	// If the image is not properly loaded stop.
	if ( image.empty() ) {
		std::cout << "Image Was Not Loaded..." << std::endl;
		return 0;
	}

	// Resize The image if needed.
	cv::resize( image, image, cv::Size(t, t), fx=fx, fy=fy );

	// Show the image and wait for a key to be pressed.
	cv::imshow( window_name, image );
	cv::waitKey(0);

	// Destroy the active window afterwards.
	cv::destroyAllWindows();

	// Return 0 if everything went right.
	return 0;
}
