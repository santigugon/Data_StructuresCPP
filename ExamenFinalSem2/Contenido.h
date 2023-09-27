#include <string>
#include "Calificacion.h"

#ifndef CONTENIDO_H_INCLUDED
#define CONTENIDO_H_INCLUDED
using namespace std;
class Contenido {
    private:
string titulo;
string genero;
int duracion;
bool visto;

double presupuesto;
string clasificacion;
string fechaLanzamiento;
Calificacion* calificacion;

public:
    ~Contenido();
    Contenido();
    Contenido(string valTitulo, string valGenero, int valDuracion, bool valVisto, double valPresupuesto, string valClasificacion, string valFechaLanzamiento,Calificacion* valCali);

    string getTitulo() const;
    void setTitulo(string valTitulo);

    string getGenero() const;
    void setGenero(string valGenero);

    int getDuracion() const;
    void setDuracion(int valDuracion);

    bool getVisto() const;
    void setVisto(bool valVisto);

    double getPresupuesto() const;
    void setPresupuesto(double valPresupuesto);

    string getClasificacion() const;
    void setClasificacion(string valClasificacion);

    string getFechaLanzamiento() const;
    void setFechaLanzamiento(string valFechaLanzamiento);

    Calificacion getCalificacion();
    void setCalificacion(Calificacion* cal);

    virtual void reproducir() = 0;

    void marcarComoVisto();
    void aumentarPresupuesto();
};


#endif // CONTENIDO_H_INCLUDED
