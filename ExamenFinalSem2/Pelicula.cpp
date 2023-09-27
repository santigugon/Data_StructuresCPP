#include "pelicula.h"
#include <iostream>

using namespace std;

Pelicula::Pelicula() : anio(0), recaudacion(0.0) {
    director = "";
}

Pelicula::Pelicula( string valTitulo, string valGenero, int valDuracion, bool valVisto, double valPresupuesto, string valClasificacion, string valFechaLanzamiento,Calificacion* valCalificacion, int valAnio, double valRecaudacion,
                    string valDirector) : Contenido(valTitulo, valGenero, valDuracion, valVisto, valPresupuesto,
                                                         valClasificacion, valFechaLanzamiento,valCalificacion) {
    anio = valAnio;
    recaudacion = valRecaudacion;
    director = valDirector;
}

int Pelicula::getAnio() const {
    return anio;
}

void Pelicula::setAnio(int valAnio) {
    anio = valAnio;
}

double Pelicula::getRecaudacion() const {
    return recaudacion;
}

void Pelicula::setRecaudacion(double valRecaudacion) {
    recaudacion = valRecaudacion;
}

string Pelicula::getDirector() const {
    return director;
}

void Pelicula::setDirector(const string& valDirector) {
    director = valDirector;
}

void Pelicula::reproducir() {
    cout<<endl;
   cout << "Reproduciendo la película: " << getTitulo() << endl;
    cout << "Resumen de la pelicula: " << endl;
    cout << "Género: " << getGenero() << endl;
    cout << "Duración: " << getDuracion() << " minutos" << endl;
    cout << "Visto: " << (getVisto() ? "Si" : "No") << endl;
    cout << "Presupuesto: " << getPresupuesto() << endl;
    cout << "Clasificación: " << getClasificacion() << endl;
    cout << "Fecha de Lanzamiento: " << getFechaLanzamiento() << endl;
    cout << "Año: " << anio << endl;
    cout << "Recaudación: " << recaudacion << endl;
    cout << "Director: " << director << endl;
    cout<<endl;
}

void Pelicula::aumentarRecaudacion() {
    // Lógica adicional específica de la clase Pelicula
    recaudacion=recaudacion+100;
}

void Pelicula::cambiarDirector(string dir) {
  director=dir;
  cout<<"El nuevo director es"<<dir<<endl;
}

void Pelicula::actualizarAnioActual(){
anio=2023;
}
Pelicula::~Pelicula(){
cout<<"Pelicula destruida"<<endl;}
