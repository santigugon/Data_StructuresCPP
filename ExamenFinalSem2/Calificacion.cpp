#include "calificacion.h"
#include <iostream>
using namespace std;

Calificacion::Calificacion() {
    calificacionImdb = 0.0;
    calificacionRotten = 0.0;
    calificacionMetaCritic = 0.0;
}

Calificacion::Calificacion(double valCalificacionImdb, double valCalificacionRotten, double valCalificacionMetaCritic) {
    calificacionImdb = valCalificacionImdb;
    calificacionRotten = valCalificacionRotten;
    calificacionMetaCritic = valCalificacionMetaCritic;
}

double Calificacion::getCalificacionImdb() const {
    return calificacionImdb;
}

void Calificacion::setCalificacionImdb(double valCalificacionImdb) {
    calificacionImdb = valCalificacionImdb;
}

double Calificacion::getCalificacionRotten() const {
    return calificacionRotten;
}

void Calificacion::setCalificacionRotten(double valCalificacionRotten) {
    calificacionRotten = valCalificacionRotten;
}

double Calificacion::getCalificacionMetaCritic() const {
    return calificacionMetaCritic;
}

void Calificacion::setCalificacionMetaCritic(double valCalificacionMetaCritic) {
    calificacionMetaCritic = valCalificacionMetaCritic;
}

double Calificacion::calcularPromedio() const {
    return (calificacionImdb + calificacionRotten + calificacionMetaCritic) / 3.0;
}
 void Calificacion::bajarPunto(){
 calificacionImdb--;
 calificacionMetaCritic--;
 calificacionRotten--;

 };
void Calificacion::eliminarCalificacion(){
    int seleccion;
    cout<<"Selecciona la plataforma que quieras eliminar su calificacion 1)Imdb 2)Rotten Tomatoes 3)MetaCritic"<<endl;
    cin>>seleccion;
    switch (seleccion) {
        case 1:
            calificacionImdb=0.0;

            break;
        case 2:
             calificacionRotten=0.0;
            break;
        case 3:
           calificacionMetaCritic=0.0;
            break;

}
};
