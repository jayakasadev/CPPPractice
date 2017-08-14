cmake_minimum_required(VERSION 3.7)
project(C__Practice)

# Windows path to opencv
# Download prebuilt 3.2.0 version for Cygwin from:
# http://hvrl.ics.keio.ac.jp/kimura/opencv/files/opencv-3.2.0-cygwin64-g++-5.4.0-shared-release-20161228.tar.bz2
set(OpenCV_DIR C:/Tools/cpplibs/opencv/share/OpenCV)

find_package(OpenCV REQUIRED)

set(SOURCE_FILES main/src/main.cpp main/src/main.hpp main/src/objs/Student.cpp main/src/objs/Student.hpp main/src/KalmanFilterEquations/KalmanFilterUpdate.cpp main/src/KalmanFilterEquations/KalmanFilterUpdate.h)
add_executable(C__Practice ${SOURCE_FILES})

# change this to the directory containing Eigen
# this is a fix for clion 2017.1.3

# eigen and opencv libraries for windows environment
include_directories("C:/Tools/cpplibs/eigen")

# eigen and opencv libraries for unix environment
# include_directories("/opt/cpplibs/eigen")
target_link_libraries(C__Practice ${OpenCV_LIBS})