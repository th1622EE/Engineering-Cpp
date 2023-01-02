/*
* Author:   Tim Holden
* Project:  Engineering-Cpp
* Date:     January 1, 2023
*/

#include "cylindrical.hpp"
#include <cmath>

Cylindrical::Cylindrical() {
    this->r = 0;
    this->theta = 0;
    setZ(0);
}

Cylindrical::Cylindrical(double r, double theta, double z) {
    this->r = r;
    this->theta = theta;
    setZ(z);
}

double Cylindrical::getR() const {
    return this->r;
}

double Cylindrical::getTheta() const {
    return this->theta;
}

void Cylindrical::setR(double r) {
    this->r = r;
}

void Cylindrical::setTheta(double theta) {
    this->theta = theta;
}

double Cylindrical::calcTheta(double x, double y) {
    setTheta(atan2(y,x));
    return getTheta();
}
