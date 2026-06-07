#include <opencv2/opencv.hpp>
#include <iostream>

int main()

{

cv::videocapture cap(0);

if(!cap.isopened)
{
    while true
	{
		cv::Mat frame; //scope resolution operator MAt class inside cv namespace fundamental 
		cap>>frame;
		if(frame.empty())
{
			break;

}

//convert colour image to grayscale

cv::Mat gray;

cv::covot(frame,gray,cv::bgr2gry);

static bool firstframe=true;


if(firstframe)
{
avg=gray.clone();
firstframe=false;
}



 /*used to detect first frame 
static means it lasts for the lifetime of the function no recreation of variable
 but at the same time after one time of the loop running the true becomes false (why is it turned off? we will change it later...)

this is for capturing the baseline image which only has to happen once. 


*/


cv::Mat bgray;


cv::gaussian_blur(gray,bgray,cv::size5,5);

cv::Mat diff;

cv::absdiff(avg,bgray,diff);
//threshold + contours

//applying threshold gives white regions on movement

//bounding boxes? > visualize motion using rectangular area

//threshold funcion setting a strict rule for what counts as motion. only significant changes (motion) are recorded 

//after this fine contours are applied>>>

//bgray >> thresh

cv::thresh;

cv::threshold(diff, thresh, 25, 255, cv::THRESH_BINARY); //source, destination, threshold value, maximum value, thr flag to use binary thresholding tells the compiler, 255 is the standard for 8bit grayscale imagess



//next step t detect outlines of shapes using contour findContours works efficiently simply by connecting boundaries 

std::vector<<std::vector<<cv::Point>>contours;



cv::findContours(thresh, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

//retr external is for detecting only outermost boundary and chain approx simple is for compressing contour points gets rid of redundant points and keeps only the endpoints of the straight lines

//now loop through the contours 


for(int i=0;i++;i<)

/*
cv is a namespace 

what is Matframe - cv.Mat is a variable? 

cv.MAt is a class - Matrix in terms of memory > it contains header, pixel memory, etc!

Mat uses pointers to save memory so pixel data does not have to copied everytime.

pointers were created to 

cv.MAt uses shallow copying meaning multiple cv.Mat can access the same data. cv.Mat > tracks everytime data is accessed 

cv.Mat has an  internal counter 

system RAM 

*/


 	}
}




}
