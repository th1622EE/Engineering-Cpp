/*
* Author:   Tim Holden
* Project:  Engineering-Cpp
* Date:     January 1, 2023
*/

#include <iostream>
#include <cmath>

#include "cartesian.cpp"
#include "polar.cpp"
#include "cylindrical.cpp"
#include "spherical.cpp"

int main() {
    /*
    * Create an object of Cartesian, Polar, Cylindrical, and Spherical classes
    * using the default constructors for each object
    */
    Cartesian cartObj1;
    Polar polObj1;
    Cylindrical cylObj1;
    Spherical sphObj1;

    /*
    * Test the output of each object to verify the default constructors create
    * objects which initialize all member variable attributes to zero.
    */
    std::cout << "The value of x for cartObj1 is: " << cartObj1.getX() << std::endl;
    if (cartObj1.getX()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of y for cartObj1 is: " << cartObj1.getY() << std::endl;
    if (cartObj1.getY()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of z for cartObj1 is: " << cartObj1.getZ() << std::endl;
    if (cartObj1.getZ()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
    std::cout << "\n";

    std::cout << "The value of r for polObj1 is: " << polObj1.getR() << std::endl;
    if (polObj1.getR()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of theta for polObj1 is: " << polObj1.getTheta() << std::endl;
    if (polObj1.getTheta()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
    std::cout << "\n";

    std::cout << "The value of r for cylObj1 is: " << cylObj1.getR() << std::endl;
    if (cylObj1.getR()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of theta for cylObj1 is: " << cylObj1.getTheta() << std::endl;
    if (cylObj1.getTheta()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of z for cylObj1 is: " << cylObj1.getZ() << std::endl;
    if (cylObj1.getZ()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
    std::cout << "\n";

    std::cout << "The value of rho for sphObj1 is: " << sphObj1.getRho() << std::endl;
    if (sphObj1.getRho()==0) { 
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of theta for sphObj1 is: " << sphObj1.getTheta() << std::endl;
    if (sphObj1.getTheta()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of phi for sphObj1 is: " << sphObj1.getPhi() << std::endl;
    if (sphObj1.getPhi()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    /*
    * The following will initialize an object for each class using constructors with parameters
    */
    Cartesian cartObj2(3,4,5);
    Polar polObj2(3,3.14159/2);
    Cylindrical cylObj2(3,3.14159/2,5);
    Spherical sphObj2(3,3.14159/2,3.14159/4);

    std::cout << "The value of x for cartObj2 is: " << cartObj2.getX() << std::endl;
    if (cartObj2.getX()==3) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of y for cartObj2 is: " << cartObj2.getY() << std::endl;
    if (cartObj2.getY()==4) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of z for cartObj2 is: " << cartObj2.getZ() << std::endl;
    if (cartObj2.getZ()==5) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
    std::cout << "\n";


    std::cout << "The value of x for polObj2 is: " << polObj2.getX() << std::endl;
    if (polObj2.getX()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of y for polObj2 is: " << polObj2.getY() << std::endl;
    if (polObj2.getY()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of z for polObj2 is: " << polObj2.getZ() << std::endl;
    if (polObj2.getZ()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of r for polObj2 is: " << polObj2.getR() << std::endl;
    if (polObj2.getR()==3) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of theta for polObj2 is: " << polObj2.getTheta() << std::endl;
    if (polObj2.getTheta()==3.14159/2) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
    std::cout << "\n";

    std::cout << "The value of x for cylObj2 is: " << cylObj2.getX() << std::endl;
    if (cylObj2.getX()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of y for cylObj2 is: " << cylObj2.getY() << std::endl;
    if (cylObj2.getY()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of z for cylObj2 is: " << cylObj2.getZ() << std::endl;
    if (cylObj2.getZ()==5) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of r for cylObj2 is: " << cylObj2.getR() << std::endl;
    if (cylObj2.getR()==3) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of theta for cylObj2 is: " << cylObj2.getTheta() << std::endl;
    if (cylObj2.getTheta()==3.14159/2) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
    std::cout << "\n";

    std::cout << "The value of x for sphObj2 is: " << sphObj2.getX() << std::endl;
    if (sphObj2.getX()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of y for sphObj2 is: " << sphObj2.getY() << std::endl;
    if (sphObj2.getY()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of z for sphObj2 is: " << sphObj2.getZ() << std::endl;
    if (sphObj2.getZ()==0) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of rho for sphObj2 is: " << sphObj2.getRho() << std::endl;
    if (sphObj2.getRho()==3) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of theta for sphObj2 is: " << sphObj2.getTheta() << std::endl;
    if (sphObj2.getTheta()==3.14159/2) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of theta for sphObj2 is: " << sphObj2.getPhi() << std::endl;
    if (sphObj2.getPhi()==3.14159/4) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
    std::cout << "\n";

    /*
    * The following will tests the accessor and mutator methods for all the
    * classes using the accessor and mutator methods to set and return values
    */
    cartObj1.setX(3);
    cartObj1.setY(4);
    cartObj1.setZ(5);

    polObj1.setR(3);
    polObj1.setTheta(3.14159/2);

    cylObj1.setR(3);
    cylObj1.setTheta(3.14159/2);
    cylObj1.setZ(5);

    sphObj1.setRho(3);
    sphObj1.setTheta(3.14159/2);
    sphObj1.setPhi(3.14159/4);

    std::cout << "The value of x for cartObj1 is now: " << cartObj1.getX() << std::endl;
    if (cartObj1.getX()==3) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of y for cartObj1 is now: " << cartObj1.getY() << std::endl;
    if (cartObj1.getY()==4) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of z for cartObj1 is now: " << cartObj1.getZ() << std::endl;
    if (cartObj1.getZ()==5) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
    std::cout << "\n";

    std::cout << "The value of r for polObj1 is now: " << polObj1.getR() << std::endl;
    if (polObj1.getR()==3) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of theta for polObj1 is now: " << polObj1.getTheta() << std::endl;
    if (polObj1.getTheta()==3.14159/2) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
    std::cout << "\n";

    std::cout << "The value of r for cylObj1 is now: " << cylObj1.getR() << std::endl;
    if (cylObj1.getR()==3) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of theta for cylObj1 is now: " << cylObj1.getTheta() << std::endl;
    if (cylObj1.getTheta()==3.14159/2) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of z for cylObj1 is now: " << cylObj1.getZ() << std::endl;
    if (cylObj1.getZ()==5) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
    std::cout << "" << std::endl;

    std::cout << "The value of rho for sphObj1 is now: " << sphObj1.getRho() << std::endl;
    if (sphObj1.getRho()==3) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of theta for sphObj1 is now: " << sphObj1.getTheta() << std::endl;
    if (sphObj1.getTheta()==3.14159/2) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    std::cout << "The value of phi for sphObj1 is now: " << sphObj1.getPhi() << std::endl;
    if (sphObj1.getPhi()==3.14159/4) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
    std::cout << "" << std::endl;

    /*
    * The following test the Cartesian class instance methods
    */
    std::cout << "The calculated magnitude of cartObj2 is: " << cartObj2.calcMag() << std::endl;
    if (cartObj2.calcMag()==sqrt(pow(cartObj2.getX(),2) + pow(cartObj2.getY(),2) + pow(cartObj2.getZ(),2))) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
    std::cout << "The calculated magnitude of cartObj2(3,4) is: " << cartObj2.calcMag(3,4) << std::endl;
    if (cartObj2.calcMag(3,4)==sqrt(pow(3,2) + pow(4,2))) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }
    std::cout << "The calculated magnitude of cartObj2(3,4,5) is: " << cartObj2.calcMag(3,4,5) << std::endl;
    if (cartObj2.calcMag(3,4,5)==sqrt(pow(3,2) + pow(4,2) + pow(5,2))) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    /*
    * The following test the Polar class instance methods
    */
    std::cout << "The calculated value of theta for polObj2 is: " << polObj2.calcTheta(3,4) << std::endl;
    if (polObj2.calcTheta(3,4)==atan2(4,3)) {
        std::cout << "Pass\n";
    } else {
        std::cout << "Fail\n";
    }

    /*
    * I still need to finish the instance method tests for the Polar, Cylindrical, and Spherical classes
    */

}