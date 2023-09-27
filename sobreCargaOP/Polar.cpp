#include <iostream>
#include "Polar.h"



Polar::Polar(double valR, double valTheta){

r=valR;
theta=valTheta;
}

Polar::Polar(){
r=0;
theta=0;
}

double Polar::getR(){
return r;
}

double Polar::getTheta(){
return theta;
}
