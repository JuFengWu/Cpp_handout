#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::imread("images.png");
    if (image.empty()) {
        std::cerr << "Could not open or find the image!\n";
        return -1;
    }
    cv::imshow("Display Image", image);
    cv::waitKey(0);
    return 0;
}
