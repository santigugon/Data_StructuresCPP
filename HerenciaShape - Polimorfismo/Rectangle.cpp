
#include <iostream>
#include "Rectangle.h"


Rectangle :: Rectangle(){
    alto = 0;
    ancho = 0;

}


Rectangle :: Rectangle(int valX, int valY, int valAlt, int valAnch):Shape( valX, valY){

    alto = valAlt;
    ancho = valAnch;

}

string Rectangle::draw(){
return "soy un rectangulo";

}
int Rectangle::getAlto(){
    return alto;
}

int Rectangle::getAncho(){
    return ancho;
}

double Rectangle::area(){
return getAlto()*getAncho();
}
