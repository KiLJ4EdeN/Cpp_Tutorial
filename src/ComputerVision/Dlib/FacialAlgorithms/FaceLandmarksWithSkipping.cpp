#include <dlib/opencv.h>
#include <opencv2/highgui/highgui.hpp>
#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_processing/render_face_detections.h>
#include <dlib/image_processing.h>
#include <dlib/gui_widgets.h>

using namespace dlib;
using namespace std;


int process_this_frame = 14;

int main()
{
    try
    {
        cv::VideoCapture cap(0);
        if (!cap.isOpened())
        {
            cerr << "Unable to connect to camera" << endl;
            return 1;
        }

        image_window win;

        // Load face detection and pose estimation models.
        frontal_face_detector detector = get_frontal_face_detector();
        shape_predictor pose_model;
        deserialize("shape_predictor_68_face_landmarks.dat") >> pose_model;
	
	std::vector<rectangle> faces;
	std::vector<full_object_detection> shapes;
        // Grab and process frames until the main window is closed by the user.
        while(!win.is_closed())
        {
            // Grab a frame
            cv::Mat temp;
            if (!cap.read(temp))
            {
                break;
            }
	    process_this_frame++;
            // Turn OpenCV's Mat into something dlib can deal with.  Note that this just
            // wraps the Mat object, it doesn't copy anything.  So cimg is only valid as
            // long as temp is valid.  Also don't do anything to temp that would cause it
            // to reallocate the memory which stores the image as that will make cimg
            // contain dangling pointers.  This basically means you shouldn't modify temp
            // while using cimg.
            // cv_image<bgr_pixel> cimg(temp);
            IplImage ipl_img = cvIplImage(temp);
	    cv_image<bgr_pixel> cimg(&ipl_img);


            // Detect faces
            if (process_this_frame % 15 == 0){
            	faces = detector(cimg);
            	for (unsigned long i = 0; i < faces.size(); ++i)
			{
				if (i == (faces.size() - 1))
				{
                			shapes.push_back(pose_model(cimg, faces[i]));
				}
			}
		win.clear_overlay();
		win.set_image(cimg);
		win.add_overlay(render_face_detections(shapes));
		if (shapes.size() >= 2)
		{
			shapes.erase(shapes.begin());;
		}
	    } else {
            	// Display it all on the screen
            	win.clear_overlay();
            	win.set_image(cimg);
		try 
		{
			win.add_overlay(render_face_detections(shapes));
		} 
		catch(exception& e)
		{
			cout << "No Face Found Yet." << endl;
		}
	    }
        }
    }
    catch(serialization_error& e)
    {
        cout << "You need dlib's default face landmarking model file to run this example." << endl;
        cout << "You can get it from the following URL: " << endl;
        cout << "   http://dlib.net/files/shape_predictor_68_face_landmarks.dat.bz2" << endl;
        cout << endl << e.what() << endl;
    }
    catch(exception& e)
    {
        cout << e.what() << endl;
    }
}
