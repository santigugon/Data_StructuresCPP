#include "Empleado.h"
#include "Cliente.h"


#ifndef CLIENTEEMPLEADO_H_INCLUDED
#define CLIENTEEMPLEADO_H_INCLUDED

class ClienteEmpleado: public Empleado, public Cliente{
private:
    string fechaVacacional;
    string periodoLaboral;
    int puntosBeneficioLaboral;
public:
 ClienteEmpleado();
    ClienteEmpleado(string valNombre, string valDireccion, string valFechaNacimiento, const string& puesto, double salario, const string& fechaContratacion,
                    const string& fechaVacacional, const string& periodoLaboral, int puntosBeneficioLaboral,int nReservas, int nPuntos, string valFechaPrimerCompra);

    string getFechaVacacional() const;
    void setFechaVacacional(const string& fechaVacacional);

    string getPeriodoLaboral() const;
    void setPeriodoLaboral(const string& periodoLaboral);

    int getPuntosBeneficioLaboral() const;
    void setPuntosBeneficioLaboral(int puntosBeneficioLaboral);

    void imprimirInformacion() override;
};

#endif // CLIENTEEMPLEADO_H_INCLUDED

