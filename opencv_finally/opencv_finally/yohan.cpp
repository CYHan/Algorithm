////
////  main.cpp
////  OpenCVTest
////
////  Created by 김현준 on 29/06/2016.
////  Copyright ? 2016 김현준. All rights reserved.
////
//
/*
#include <iostream>
#include <opencv2/opencv.hpp>
//
int main(int argc, const char * argv[]) {
    // insertcode here...
//
    //Open the file.
    IplImage *img = cvCreateImage(cvSize(100,200), IPL_DEPTH_8U, 3);
//    
//     
    //Display the image.
    cvNamedWindow("Image:", CV_WINDOW_AUTOSIZE);
    cvShowImage("Image:", img);
    
    //Wait for the user to press a key in the GUI window.
    cvWaitKey(0);

    //Free the resources.
    cvDestroyWindow("Image:");
    cvReleaseImage(&img);
    return 0;
}

*/
/*
//이미지 리드 후 스토어 하는 예제
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <opencv\cv.h>
#include <opencv\highgui.h>

using namespace cv;
using namespace std;

int main( int argc, const char** argv )
{
    Mat img = imread("test.", CV_LOAD_IMAGE_UNCHANGED); //read the image data in the file "MyPic.JPG" and store it in 'img'
    //C:/Users/Yohan/Documents/Visual Studio 2015/Projects/opencv_finally/opencv_finally/test.jpg"
    if (img.empty()) //check whether the image is loaded or not
    {
        cout << "Error : Image cannot be loaded..!!" << endl;
        //system("pause"); //wait for a key press
        return -1;
    }
    
    namedWindow("MyWindow", CV_WINDOW_AUTOSIZE); //create a window with the name "MyWindow"
    imshow("MyWindow", img); //display the image which is stored in the 'img' in the "MyWindow" window
    
    waitKey(0); //wait infinite time for a keypress
    
    destroyWindow("MyWindow"); //destroy the window with the name, "MyWindow"
    
    return 0;
}

/*
*/
//동영상 read후 캡쳐하는 예제
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
	VideoCapture cap("testing.avi"); // open the video file for reading

	if (!cap.isOpened())  // if not success, exit program
	{
		cout << "Cannot open the video file" << endl;
		return -1;
	}

	//cap.set(CV_CAP_PROP_POS_MSEC, 300); //start the video at 300ms

	double fps = cap.get(CV_CAP_PROP_FPS); //get the frames per seconds of the video

	cout << "Frame per seconds : " << fps << endl;

	namedWindow("MyVideo", CV_WINDOW_AUTOSIZE); //create a window called "MyVideo"

	while (1)
	{
		Mat frame;

		bool bSuccess = cap.read(frame); // read a new frame from video

		if (!bSuccess) //if not success, break loop
		{
			cout << "Cannot read the frame from video file" << endl;
			break;
		}

		imshow("MyVideo", frame); //show the frame in "MyVideo" window

		if (waitKey(30) == 27) //wait for 'esc' key press for 30 ms. If 'esc' key is pressed, break loop
		{
			cout << "esc key is pressed by user" << endl;
			break;
		}
	}

	return 0;

}
///////////////////////////////////////////////////////
