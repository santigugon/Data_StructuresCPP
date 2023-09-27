
#include "iostream"
#include "Circle.h"

Circle::Circle(){
    r = 0;
}

Circle::Circle(int valX, int valY, int valR):Shape(valX, valY){
    r = valR;
}


int Circle::getValueR(){
    return r;
}



