#include<iostream>

void test(int a=1,int b=2);
#include <opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/core/utility.hpp>
void test1(int a=0);
int bbmain()
{   
    cv::VideoCapture capture;
    capture.open(0);
    // CV_Assert(capture.isOpened());

    cv::Mat cpuImg;
    int a=10;
    test1(a);
    while(true){
        capture >> cpuImg;
        if (cpuImg.empty())
            break;
        else {
        std::cout<<cpuImg.rows<<"\t"<<cpuImg.cols<<std::endl;
        }
        }
        return 0;
}
void test1(int a){std::cout<<a<<std::endl;}