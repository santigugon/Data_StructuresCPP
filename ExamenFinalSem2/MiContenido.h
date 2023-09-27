#include "Contenido.h"
#ifndef MICONTENIDO_H_INCLUDED
#define MICONTENIDO_H_INCLUDED
using namespace std;

// Crear una clase derivada concreta de Contenido para instanciarla
class MiContenido : public Contenido {
public:

    MiContenido(string valTitulo, string valGenero, int valDuracion, bool valVisto, double valPresupuesto, string valClasificacion, string valFechaLanzamiento, Calificacion* valCali)
        : Contenido(valTitulo, valGenero, valDuracion, valVisto, valPresupuesto, valClasificacion, valFechaLanzamiento, valCali) {
    }


    void reproducir() override {

        cout << "Reproduciendo MiContenido" << endl;
    }
};


#endif // MICONTENIDO_H_INCLUDED
