#ifndef RECT_H_INCLUDED
#define RECT_H_INCLUDED
#include <cmath>

#include "Polar.h"

class Rect{

private:
    double x;
    double y;

public:
    Rect();
    Rect(double, double);

    Rect operator+(const Rect& val){

    Rect temp;
    temp.x=this->x+val.x;
    temp.y=this->y+val.y;
    return temp;
    }

        Rect operator-(const Rect& val){

    Rect temp;
    temp.x=this->x-val.x;
    temp.y=this->y-val.y;
    return temp;
    }

    //Rect convertirPolarRect(Polar);


    Rect operator+(const Polar& valPola){

    Rect coords;
    coords.x=this->x+valPola.getR()* cos(valPola.getTheta()* M_PI / 180.0);
    coords.y=this->y+valPola.getR()* sin(valPola.getTheta()* M_PI / 180.0);
    return coords;


    }


    double getX();
    double getY();

};


#endif // RECT_H_INCLUDED
