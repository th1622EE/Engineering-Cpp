/*
* Author:   Tim Holden
* Project:  Engineering-Cpp
* Date:     January 1, 2023
*/

#ifndef POLAR_HPP
#define POLAR_HPP

#include "cartesian.hpp"

class Polar : public Cartesian {

private:
    double r;
    double theta;

public:
    //Constructors
    Polar();
    Polar(double r, double theta);

    //Accessor and Mutator Methods
    double getR() const;
    double getTheta() const;
    void setR(double r);
    void setTheta(double theta);

    //Instance Methods
    double calcTheta();
    double calcTheta(double x, double y);
    void cart2polar();
    void cart2polar(double x, double y);
    void polar2cart();
};

#endif //POLAR_HPP
