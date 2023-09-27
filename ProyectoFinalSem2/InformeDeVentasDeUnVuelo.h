#include "Imprimible.h"
#ifndef INFORMEDEVENTASDEUNVUELO_H
#define INFORMEDEVENTASDEUNVUELO_H

#include <string>

class InformeDeVentasDeUnVuelo: public Imprimible {
private:
    int vuelosVendidos;
    double totalIngresos;
    double promedioIngresos;

public:
    InformeDeVentasDeUnVuelo();
    InformeDeVentasDeUnVuelo(int vuelos, double ingresos, double promedioIngresos);

    // Getters
    int getVuelosVendidos() const;
    double getTotalIngresos() const;
    double getPromedioIngresos() const;

    // Setters
    void setVuelosVendidos(int vuelos);
    void setTotalIngresos(double ingresos);
    void setPromedioIngresos(double promedio);

    // Métodos adicionales
    double generarProyecciones();
    void imprimirInformacion() override;
};

#endif

