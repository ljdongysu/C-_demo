// #include<iostream>

// void test(int a=1,int b=2);
// #include <opencv2/opencv.hpp>
// #include<opencv2/highgui.hpp>
// #include<opencv2/imgproc.hpp>
// #include<opencv2/core/utility.hpp>
// int main()
// {   
//     cv::VideoCapture capture;
//     capture.open(0);
//     CV_Assert(capture.isOpened());

//     cv::Mat cpuImg;

//     while(true){
//         capture >> cpuImg;
//         if (cpuImg.empty())
//             break;
//         else {
//         std::cout<<cpuImg.rows<<"\t"<<cpuImg.cols<<std::endl;
//         }
//     // Stock aStock();;
//     // test();
//     // {
//     // using std::cout;
//     // cout<<"Using constructors to create new objects\n";
//     // Stock stock1("NanoSmart",12,20.0);
//     // stock1.show();
//     // Stock stock2=Stock("Boffo Object",2,2.0);
//     // stock2.show();

//     // cout<<"Assigning stock1 to stock2:\n";
//     // stock2=stock1;
//     // cout<<"Listing stock1 and stock2:\n";
//     // stock1.show();
//     // stock2.show();

//     // cout<<"Using a constructor to reset an object\n";
//     // stock1 = Stock("Nifty Foods",10,50.0);
//     // cout<<"Revised stock1:\n";
//     // stock1.show();
//     // cout<<"Done\n";
//     // Stock fluffy_the_cat;
//     // // fluffy_the_cat.acquire("NanoSmart",20,12.50);
//     // fluffy_the_cat.show();
//     // fluffy_the_cat.buy(15,18.125);
//     // fluffy_the_cat.show();
//     // fluffy_the_cat.sell(400,20.00);
//     // fluffy_the_cat.show();
//     // fluffy_the_cat.buy(300000,40.125);
//     // fluffy_the_cat.show();
//     // fluffy_the_cat.sell(300000,0.125);
//     // fluffy_the_cat.show();
//     }
//     return 0;
// }

// // void test(int a,int b)
// // {
// //     std::cout<<a+b<<std::endl;
// // }