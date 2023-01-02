/*
* Author:   Tim Holden
* Project:  Engineering-Cpp
* Date:     January 1, 2023
*/

#ifndef CARTESIAN_HPP
#define CARTESIAN_HPP

class Cartesian {

private:
    double x;
    double y;
    double z;

public:
    //Class constructors
    Cartesian();
    Cartesian(double x, double y);
    Cartesian(double x, double y, double z);

    //Accessor and Mutator Methods
    double getX() const;
    double getY() const;
    double getZ() const;
    void setX(double x);
    void setY(double y);
    void setZ(double z);

    //Instance Methods
    double calcMag();
    double calcMag(double x, double y);
    double calcMag(double x, double y, double z);

}; //End of class interface

#endif //CARTESIAN_HPP
