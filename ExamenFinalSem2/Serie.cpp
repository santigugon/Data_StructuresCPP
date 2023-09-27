#include "Serie.h"
#include <iostream>

using namespace std;

Serie::Serie() : nTemporadas(0), finalizada(false) {
    plataforma = "";
}

Serie::Serie( string valTitulo,  string valGenero, int valDuracion, bool valVisto, double valPresupuesto,
              string valClasificacion,  string valFechaLanzamiento, Calificacion* valCalificacion,
             int valNTemporadas,  string valPlataforma, bool valFinalizada)
    : Contenido(valTitulo, valGenero, valDuracion, valVisto, valPresupuesto, valClasificacion, valFechaLanzamiento,
                valCalificacion) {
    nTemporadas = valNTemporadas;
    plataforma = valPlataforma;
    finalizada = valFinalizada;
}

int Serie::getNTemporadas() const {
    return nTemporadas;
}

void Serie::setNTemporadas(int valNTemporadas) {
    nTemporadas = valNTemporadas;
}

string Serie::getPlataforma() const {
    return plataforma;
}

void Serie::setPlataforma(const string& valPlataforma) {
    plataforma = valPlataforma;
}

bool Serie::getFinalizada() const {
    return finalizada;
}

void Serie::setFinalizada(bool valFinalizada) {
    finalizada = valFinalizada;
}

void Serie::reproducir() {
    cout<<endl;
    cout << "Reproduciendo la serie: " << getTitulo() << endl;
    cout << "Género: " << getGenero() << endl;
    cout << "Duración: " << getDuracion() << " minutos" << endl;
    cout << "Visto: " << (getVisto() ? "Si" : "No") << endl;
    cout << "Presupuesto: " << getPresupuesto() << endl;
    cout << "Clasificación: " << getClasificacion() << endl;
    cout << "Fecha de lanzamiento: " << getFechaLanzamiento() << endl;
    cout << "Número de temporadas: " << nTemporadas << endl;
    cout << "Plataforma: " << plataforma << endl;
    cout << "Finalizada: " << (finalizada ? "Si" : "No") << endl;
    cout<<endl;
}

void Serie::finalizarPelicula() {
    cout<<"Serie finalizada, su produccion ha terminado"<<endl;
    finalizada=true;
    // Lógica adicional específica de la clase Serie
}

void Serie::adquisicionNetflix() {
    plataforma="Netflix";

    // Lógica adicional específica de la clase Serie
}
Serie::~Serie(){
cout<<"Serie destruida"<<endl;
}
