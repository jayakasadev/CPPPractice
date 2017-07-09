//
// Created by jkasa on 7/8/2017.
//

#ifndef C_PRACTICE_KALMANFILTERUPDATE_H
#define C_PRACTICE_KALMANFILTERUPDATE_H

#include <iostream>
#include "Eigen/Dense"
#include <vector>

using namespace std;
using namespace Eigen;

// Kalman Filter Variables
// object state
VectorXd x;
// object covariance matrix
MatrixXd P;
// external motion
VectorXd u;
// state transition matrix
MatrixXd F;
// measurement matrix
MatrixXd H;
// measurement covariance matrix
MatrixXd R;
// Identity matrix
MatrixXd I;
// process covariance matrix
MatrixXd Q;

vector<VectorXd> measurements;
void filter(VectorXd &x, MatrixXd &P);

#endif //C_PRACTICE_KALMANFILTERUPDATE_H
