#include <iostream>
#include <cmath>
#include "RECT.h"



Rect::Rect(double valX, double valY){

x=valX;
y=valY;
}

Rect::Rect(){
x=0;
y=0;
}

double Rect::getX(){
return x;
}

double Rect::getY(){
return y;
}


