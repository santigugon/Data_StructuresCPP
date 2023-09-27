#include "Rectangle.h"
#include "Shape.h"


Rectangle::Rectangle(){

}

Rectangle::Rectangle(int valX, int valY):Shape(valX, valY){}

Rectangle::Rectangle(int valX, int valY, int valLargo, int valAncho):Shape(valX, valY){

ancho=valAncho;
largo=valLargo;

}

int Rectangle::getAncho(){
    return ancho;
}

int Rectangle::getLargo(){
return largo;
}
