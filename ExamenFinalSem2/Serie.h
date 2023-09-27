#include "Contenido.h"
#include "Calificacion.h"

#ifndef SERIE_H_INCLUDED
#define SERIE_H_INCLUDED

using namespace std;
class Serie: public Contenido{
private:
    int nTemporadas;
    string plataforma;
    bool finalizada;
public:
    ~Serie();
  Serie();
    Serie( string valTitulo,  string valGenero, int valDuracion, bool valVisto, double valPresupuesto,
           string valClasificacion,  string valFechaLanzamiento, Calificacion* valCalificacion,
          int valNTemporadas,  string valPlataforma, bool valFinalizada);

    int getNTemporadas() const;
    void setNTemporadas(int valNTemporadas);

    string getPlataforma() const;
    void setPlataforma(const string& valPlataforma);

    bool getFinalizada() const;
    void setFinalizada(bool valFinalizada);

    void reproducir() override;
    void finalizarPelicula();
    void adquisicionNetflix();


};

#endif // SERIE_H_INCLUDED
