/*
* Author:   Tim Holden
* Project:  Engineering-Cpp
* Date:     January 1, 2023
*/

#ifndef CYLINDRICAL_HPP
#define CYLINDRICAL_HPP

#include "cartesian.hpp"

class Cylindrical : public Cartesian {

private:
    double r;
    double theta;

public:
    //Constructors
    Cylindrical();
    Cylindrical(double r, double theta, double z);

    //Accessor and Mutator Methods
    double getR() const;
    double getTheta() const;
    void setR(double r);
    void setTheta(double theta);

    //Instance Methods
    double calcTheta(double x, double y);

};

#endif //CYLINDRICAL_HPP
