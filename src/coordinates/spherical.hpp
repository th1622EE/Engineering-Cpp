/*
* Author:   Tim Holden
* Project:  Engineering-Cpp
* Date:     January 1, 2023
*/

#ifndef SPHERICAL_HPP
#define SPHERICAL_HPP

#include "cartesian.hpp"

class Spherical : public Cartesian {

private:
    double rho;
    double theta;
    double phi;

public:
    //Constructors
    Spherical();
    Spherical(double rho, double theta, double phi);

    //Accessor and Mutator Methods
    double getRho() const;
    double getTheta() const;
    double getPhi() const;
    void setRho(double rho);
    void setTheta(double theta);
    void setPhi(double phi);

    //Instance Methods
    void cart2sph();
    void cart2sph(double x, double y, double z);
    void sph2cart();
    double calcTheta();
    double calcTheta(double x, double y);
    double calcPhi();
    double calcPhi(double x, double y, double z);
};

#endif //SPHERICAL_HPP
