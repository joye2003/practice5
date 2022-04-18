//
// Created by 周儀 on 2022/4/18.
//

#include "main.h"
#include <iostream>
using namespace std;
class TwoDim
{
protected:
    double x, y; // x, y:  coordinates
public:
    //constructor
    TwoDim(double i, double j): x(i), y(j)
    {}
    // member functions
    void setX(double newX){x = newX;}
    void setY(double newY){y = newY;}
    double getX() const {return x;}
    double getY() const {return y;}
};
class ThreeDim:public TwoDim{
protected:
    double x, y, z; // x, y, z: coordinates
public:
    // constructor
    ThreeDim(double i, double j, double k): TwoDim(i,j),z(k) {}// member functions
//    void setX(double newX){x = newX;}
//    void setY(double newY){y = newY;}
    void setZ(double newZ){z = newZ;}
//    double getX() const {return x;}
//    double getY() const {return y;}
    double getZ() const {return z;}
};
int main(){
    TwoDim obj2(1, 1);
    ThreeDim obj3(1, 2, 3);
    cout << "Coordinates for the 3d object are: " <<endl;
    cout << obj3.getX() << ", " << obj3.getY() <<", " << obj3.getZ()<< endl;
    return 0;
}