#ifndef CALIFICACION_H_INCLUDED
#define CALIFICACION_H_INCLUDED

class Calificacion{
private:
double calificacionImdb;
double calificacionRotten;
double calificacionMetaCritic;

public:
    Calificacion();
    Calificacion(double valCalificacionImdb, double valCalificacionRotten, double valCalificacionMetaCritic);

    double getCalificacionImdb() const;
    void setCalificacionImdb(double valCalificacionImdb);

    double getCalificacionRotten() const;
    void setCalificacionRotten(double valCalificacionRotten);

    double getCalificacionMetaCritic() const;
    void setCalificacionMetaCritic(double valCalificacionMetaCritic);

    double calcularPromedio() const;
    void bajarPunto();
    void eliminarCalificacion();

     Calificacion operator+(const Calificacion& val){

    Calificacion temp;
    temp.calificacionImdb=(this->calificacionImdb+val.calificacionImdb)/2;
    temp.calificacionRotten=(this->calificacionRotten+val.calificacionRotten)/2;
    temp.calificacionMetaCritic=(this->calificacionMetaCritic+val.calificacionMetaCritic)/2;
    return temp;
    }

};

#endif // CALIFICACION_H_INCLUDED
