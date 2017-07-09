//
// Created by jkasa on 7/8/2017.
//

#ifndef C_PRACTICE_KALMANFILTERUPDATE_H
#define C_PRACTICE_KALMANFILTERUPDATE_H

#include <iostream>
#include "Eigen/Dense"
#include <vector>

// saving myself some trouble
using namespace std;
using namespace Eigen;

void filter(VectorXd &x, MatrixXd &P);
void run();

// using the eigen library because it has no dependencies and because it is highly efficient

#endif //C_PRACTICE_KALMANFILTERUPDATE_H
