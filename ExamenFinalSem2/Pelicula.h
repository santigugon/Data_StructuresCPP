#include "Contenido.h"
#include "Calificacion.h"
#include <string>

#ifndef PELICULA_H_INCLUDED
#define PELICULA_H_INCLUDED

using namespace std;
class Pelicula: public Contenido{
private:
  int anio;
  double recaudacion;
  string director;


public:
    ~Pelicula();
    Pelicula();
    Pelicula( string valTitulo, string valGenero, int valDuracion, bool valVisto, double valPresupuesto, string valClasificacion, string valFechaLanzamiento,Calificacion* valCalificacion, int valAnio, double valRecaudacion,
              string valDirector);

    int getAnio() const;
    void setAnio(int valAnio);

    double getRecaudacion() const;
    void setRecaudacion(double valRecaudacion);


    string getDirector() const;
    void setDirector(const string& valDirector);

    void reproducir() override;
    void aumentarRecaudacion();
    void cambiarDirector(string dir);
    void actualizarAnioActual();

};


#endif // PELICULA_H_INCLUDED
