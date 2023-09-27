#ifndef MIEXCEPCION_H_INCLUDED
#define MIEXCEPCION_H_INCLUDED
using namespace std;

class miExcepcion:public exception{
virtual const char* what() const throw(){
    return "excepcion sucedida en el proyecto";
}
}miex;



#endif // MIEXCEPCION_H_INCLUDED
