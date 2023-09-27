#include "ClienteEmpleado.h"

ClienteEmpleado::ClienteEmpleado() {
    // Constructor predeterminado
}

ClienteEmpleado::ClienteEmpleado( string valNombre, string valDireccion, string valFechaNacimiento, const string& puesto, double salario,
                                 const string& fechaContratacion, const string& fechaVacacional, const string& periodoLaboral,
                                 int puntosBeneficioLaboral,int nReservas, int nPuntos, string valFechaPrimerCompra)
    :  Empleado(valNombre, valDireccion, valFechaNacimiento, puesto, salario, fechaContratacion),
      Cliente(valNombre, valDireccion, valFechaNacimiento,nReservas, nPuntos, valFechaPrimerCompra), fechaVacacional(fechaVacacional), periodoLaboral(periodoLaboral),
      puntosBeneficioLaboral(puntosBeneficioLaboral) {
    // Constructor con parámetros
}

string ClienteEmpleado::getFechaVacacional() const {
    return fechaVacacional;
}

void ClienteEmpleado::setFechaVacacional(const string& fechaVacacional) {
    this->fechaVacacional = fechaVacacional;
}

string ClienteEmpleado::getPeriodoLaboral() const {
    return periodoLaboral;
}

void ClienteEmpleado::setPeriodoLaboral(const string& periodoLaboral) {
    this->periodoLaboral = periodoLaboral;
}

int ClienteEmpleado::getPuntosBeneficioLaboral() const {
    return puntosBeneficioLaboral;
}

void ClienteEmpleado::setPuntosBeneficioLaboral(int puntosBeneficioLaboral) {
    this->puntosBeneficioLaboral = puntosBeneficioLaboral;
}

void ClienteEmpleado::imprimirInformacion() {
        cout<<"Presentamos a nuestro cliente y empleado:"<<endl;
        cout << "Nombre: " << this->getNombre() << endl;
        cout << "Dirección: " << this->getDireccion() << endl;
        cout << "Fecha de Nacimiento: " << this->getFechaNacimiento() << endl;
        cout << "Puesto: " << puesto << endl;
        cout << "Salario: $" << salario << endl;
        cout << "Fecha de Contratación: " << fechaContratacion << endl;
        cout << "Número de Reservas: " << numReservas << endl;
        cout << "Número de Puntos: " << numPuntos << endl;
        cout << "Fecha de Primera Compra: " << fechaPrimerCompra << endl;
        cout << "Fecha Vacacional: " << fechaVacacional << endl;
        cout << "Periodo Laboral: " << periodoLaboral << endl;
        cout << "Puntos de Beneficio Laboral: " << puntosBeneficioLaboral << endl;
}
