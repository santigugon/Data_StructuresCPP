#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

#include <string>
#include "Persona.h"
using namespace std;

class Empleado : virtual public Persona {
protected:
    string puesto;
    double salario;
    string fechaContratacion;

public:
     Empleado();


    Empleado(string valNombre, string valDireccion, string valFechaNacimiento, const string& puesto, double salario, const string& fechaContratacion);
    string getPuesto() const;
    void setPuesto(const string& puesto);

    double getSalario() const;
    void setSalario(double salario);

    string getFechaContratacion() const;
    void setFechaContratacion(const string& fechaContratacion);

    void imprimirInformacion() override;
};

#endif // EMPLEADO_H_INCLUDED

