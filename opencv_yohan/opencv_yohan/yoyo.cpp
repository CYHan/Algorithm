////
////  main.cpp
////  OpenCVTest
////
////  Created by ±Ë«ˆ¡ÿ on 29/06/2016.
////  Copyright ? 2016 ±Ë«ˆ¡ÿ. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

int main(int argc, const char * argv[]) {
    // insertcode here...

    //Open the file.
    IplImage *img = cvCreateImage(cvSize(100,200), IPL_DEPTH_8U, 3);
     
    //Display the image.
    cvNamedWindow("Image:", CV_WINDOW_AUTOSIZE);
    cvShowImage("Image:", img);
    
    //Wait for the user to press a key in the GUI window.
    cvWaitKey(0);
//
    //Free the resources.
    cvDestroyWindow("Image:");
    cvReleaseImage(&img);
    return 0;
}

