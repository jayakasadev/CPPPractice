cmake_minimum_required(VERSION 3.7)
project(C__Practice)

set(CMAKE_CXX_STANDARD 14)

# find_package(OpenCV REQUIRED)

# set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

set(SOURCE_FILES main/src/main.cpp main/src/main.hpp main/src/objs/Student.cpp main/src/objs/Student.hpp main/src/KalmanFilterEquations/KalmanFilterUpdate.cpp main/src/KalmanFilterEquations/KalmanFilterUpdate.h)
add_executable(C__Practice ${SOURCE_FILES})

# change this to the directory containing Eigen
# this is a fix for clion 2017.1.3
include_directories("C:/Tools/C++Libraries/Eigen3.3.4")
# include_directories(/usr/include /usr/include/opencv2 /usr/include/opencv)
# link_directories(/usr/lib ${CMAKE_BINARY_DIR}/bin)
# target_link_libraries(C__Practice opencv_core opencv_highgui opencv_imgproc)