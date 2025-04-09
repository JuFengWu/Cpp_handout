cmake_minimum_required(VERSION 3.10)
project(OpenCV_Test)

set(OpenCV_DIR "C:/opencv/opencv/build")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(opencv_test opencv_test.cpp)
target_link_libraries(opencv_test ${OpenCV_LIBS})
