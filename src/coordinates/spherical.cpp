/*
* Author:   Tim Holden
* Project:  Engineering-Cpp
* Date:     January 1, 2023
*/

#include "spherical.hpp"
#include <cmath>

Spherical::Spherical() {
    this->rho = 0;
    this->theta = 0;
    this->phi = 0;
}

Spherical::Spherical(double rho, double theta, double phi) {
    this->rho = rho;
    this->theta = theta;
    this->phi = phi;
}

double Spherical::getRho() const {
    return this->rho;
}

double Spherical::getTheta() const {
    return this->theta;
}

double Spherical::getPhi() const {
    return this->phi;
}

void Spherical::setRho(double rho) {
    this->rho = rho;
}

void Spherical::setTheta(double theta) {
    this->theta = theta;
}

void Spherical::setPhi(double phi) {
    this->phi = phi;
}

//Instance Methods
void Spherical::cart2sph() {
    this->rho = calcMag(getX(), getY(), getZ());
    this->theta = atan2(getY(), getX());
    this->phi = acos(getZ()/getRho());
}

void Spherical::cart2sph(double x, double y, double z) {
    this->rho = calcMag(x,y,z);
    this->theta = atan2(y,x);
    this->phi = acos(z/getRho());
}

void Spherical::sph2cart() {
    setX(getRho()*sin(getTheta())*cos(getPhi()));
    setY(getRho()*sin(getTheta())*sin(getPhi()));
    setZ(getRho()*cos(getPhi()));
}

double Spherical::calcTheta() {
    setTheta(atan2(getY(),getX()));
    return getTheta();
}

double Spherical::calcTheta(double x, double y) {
    setTheta(atan2(y,x));
    return getTheta();
}

double Spherical::calcPhi() {
    setPhi(acos(getZ()/calcMag()));
    return getPhi();
}

double Spherical::calcPhi(double x, double y, double z) {
    setX(x);
    setY(y);
    setZ(z);
    setPhi(acos(getZ()/calcMag()));
    return getPhi();
}
