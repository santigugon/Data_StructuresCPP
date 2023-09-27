#include "contenido.h"
#include <iostream>

using namespace std;

Contenido::Contenido() {
    titulo = "";
    genero = "";
    duracion = 0;
    visto = false;
    presupuesto = 0.0;
    clasificacion = "";
    fechaLanzamiento = "";
}

Contenido::Contenido(string valTitulo, string valGenero, int valDuracion, bool valVisto, double valPresupuesto, string valClasificacion, string valFechaLanzamiento,Calificacion* valCalificacion) {
    titulo = valTitulo;
    genero = valGenero;
    duracion = valDuracion;
    visto = valVisto;
    presupuesto = valPresupuesto;
    clasificacion = valClasificacion;
    fechaLanzamiento = valFechaLanzamiento;
    calificacion=valCalificacion;
}

string Contenido::getTitulo() const {
    return titulo;
}

void Contenido::setTitulo(string valTitulo) {
    titulo = valTitulo;
}

string Contenido::getGenero() const {
    return genero;
}

void Contenido::setGenero(string valGenero) {
    genero = valGenero;
}

int Contenido::getDuracion() const {
    return duracion;
}

void Contenido::setDuracion(int valDuracion) {
    duracion = valDuracion;
}

bool Contenido::getVisto() const {
    return visto;
}

void Contenido::setVisto(bool valVisto) {
    visto = valVisto;
}

double Contenido::getPresupuesto() const {
    return presupuesto;
}

void Contenido::setPresupuesto(double valPresupuesto) {
    presupuesto = valPresupuesto;
}

string Contenido::getClasificacion() const {
    return clasificacion;
}

void Contenido::setClasificacion(string valClasificacion) {
    clasificacion = valClasificacion;
}

string Contenido::getFechaLanzamiento() const {
    return fechaLanzamiento;
}

void Contenido::setFechaLanzamiento(string valFechaLanzamiento) {
    fechaLanzamiento = valFechaLanzamiento;
}

void Contenido::marcarComoVisto() {
    visto = true;
}

void Contenido::aumentarPresupuesto() {
    double cantidad;
    cout<<"Ingresa el nuevo presupuesto"<<endl;
    cin>>cantidad;

    try {
        if (cantidad <= 0) {
            throw "La cantidad del presupuesto debe ser mayor a 0";
        }
        presupuesto += cantidad;
    } catch (const char* msg) {
        cerr << "Error: " << msg << endl;
    }
}

//Vuelo Reserva::getVuelo() const {
    //Vuelo vueloNormal=*vuelo;
  //  return vueloNormal;
//}

Calificacion Contenido::getCalificacion(){
    Calificacion calificacionNormal= *calificacion;
    return calificacionNormal;


}
Contenido::~Contenido(){
cout<<"Contenido destruido"<<endl;
}
