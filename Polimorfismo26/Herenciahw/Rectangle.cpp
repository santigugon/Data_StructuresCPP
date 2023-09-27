#include "Rectangle.h"
Rectangle::Rectangle()
{
    alto=0;
    ancho=0;

}

int Rectangle::getLargo()
{
    return alto;
}

int Rectangle::getAncho()
{
    return ancho;
}

string Rectangle::draw(){
    return "Soy un rectangulo";
}

Rectangle::Rectangle(int valX, int valY, int valAlt, int valAnch):Shape(valX, valY)
{
    alto=valAlt;
    ancho=valAnch;

}
