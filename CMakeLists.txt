cmake_minimum_required(VERSION 3.7)
project(C__Practice)

set(CMAKE_CXX_STANDARD 14)

# Change this to the directory holding the Eigen Library
SET( EIGEN3_INCLUDE_DIR "C:/Tools/C++ Libraries/Eigen3.3.4" )

# Defensive Coding
IF( NOT EIGEN3_INCLUDE_DIR )
    MESSAGE( FATAL_ERROR "Please point the environment variable EIGEN3_INCLUDE_DIR to the include directory of your Eigen3 installation.")
ENDIF()

# Including Eigen in my code
INCLUDE_DIRECTORIES ( "${EIGEN3_INCLUDE_DIR}" )

# find_package(OpenCV REQUIRED)

# set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)

set(SOURCE_FILES main/src/main.cpp main/src/main.hpp main/src/objs/Student.cpp main/src/objs/Student.hpp main/src/KalmanFilterEquations/KalmanFilterUpdate.cpp main/src/KalmanFilterEquations/KalmanFilterUpdate.h)
add_executable(C__Practice ${SOURCE_FILES})

# include_directories(/usr/include /usr/include/opencv2 /usr/include/opencv)
# link_directories(/usr/lib ${CMAKE_BINARY_DIR}/bin)
# target_link_libraries(C__Practice opencv_core opencv_highgui opencv_imgproc)