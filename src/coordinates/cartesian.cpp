/*
* Author:   Tim Holden
* Project:  Engineering-Cpp
* Date:     January 1, 2023
*/

#include "cartesian.hpp"
#include <iostream>
#include <cmath>

Cartesian::Cartesian() {
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Cartesian::Cartesian(double x, double y) {
    this->x = x;
    this->y = y;
    this->z = 0;
}

Cartesian::Cartesian(double x, double y, double z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

//Accessor and Mutator Methods
void Cartesian::setX(double x) {
    this->x = x;
}

void Cartesian::setY(double y) {
    this->y = y;
}

void Cartesian::setZ(double z) {
    this->z = z;
}

double Cartesian::getX() const {
    return this->x;
}

double Cartesian::getY() const {
    return this->y;
}

double Cartesian::getZ() const {
    return this->z;
}

double Cartesian::calcMag() {
    return sqrt(pow(getX(),2) + pow(getY(),2) + pow(getZ(),2));
}

double Cartesian::calcMag(double x, double y) {
    return sqrt(pow(x,2) + pow(y,2));
}

double Cartesian::calcMag(double x, double y, double z) {
    return sqrt(pow(x,2) + pow(y,2) + pow(z,2));
}
