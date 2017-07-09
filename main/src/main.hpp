#include <iostream>
#include <cmath>
// #include <opencv2/opencv.hpp>
#include "objs/Student.hpp"
// #include "Eigen/Dense"
#include "KalmanFilterEquations/KalmanFilterUpdate.h"

using namespace std;

//Our generic function
template <typename T>  //tell the compiler we are using a template
T findSmaller(T input1,T  input2);
