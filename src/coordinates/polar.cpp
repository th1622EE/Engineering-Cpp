/*
* Author:   Tim Holden
* Project:  Engineering-Cpp
* Date:     January 1, 2023
*/

#include "polar.hpp"
#include <cmath>

Polar::Polar() {
    this->r = 0;
    this->theta = 0;
}

Polar::Polar(double r, double theta) {
    this->r = r;
    this->theta = theta;
}

//Accessor and Mutator Methods
double Polar::getR() const {
    return this->r;
}
double Polar::getTheta() const {
    return this->theta;
}

void Polar::setR(double r) {
    this->r = r;
}

void Polar::setTheta(double theta) {
    this->theta = theta;
}

//Instance Methods
double Polar::calcTheta(double x, double y) {
    return atan2(y,x);
}

void Polar::cart2polar(double x, double y) {
    setX(x);
    setY(y);
    this->r = calcMag(x, y);
    this->theta = atan2(y,x);
}

void Polar::polar2cart() {
    setX(getR()*cos(getTheta()));
    setY(getR()*sin(getTheta()));
}
