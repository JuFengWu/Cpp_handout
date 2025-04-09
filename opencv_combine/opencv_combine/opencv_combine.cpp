#include <opencv2/highgui.hpp>
#include <iostream>
using namespace cv;

int main()
{
    Mat image = imread("cat.png");
    imshow("Display", image);
    while (true) {
        waitKey(10);
    }
    return 0;
}

