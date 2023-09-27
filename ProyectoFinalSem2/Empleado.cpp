#include "Empleado.h"

Empleado::Empleado() {
    // Constructor predeterminado
     puesto="N/E";
    salario=0;
    fechaContratacion="00/00/0000";}


Empleado::Empleado(string valNombre, string valDireccion, string valFechaNacimiento, const string& puesto, double salario, const string& fechaContratacion)
    : Persona(valNombre, valDireccion, valFechaNacimiento), puesto(puesto), salario(salario), fechaContratacion(fechaContratacion) {

}

string Empleado::getPuesto() const {
    return puesto;
}

void Empleado::setPuesto(const string& puesto) {
    this->puesto = puesto;
}

double Empleado::getSalario() const {
    return salario;
}

void Empleado::setSalario(double salario) {
    this->salario = salario;
}

string Empleado::getFechaContratacion() const {
    return fechaContratacion;
}

void Empleado::setFechaContratacion(const string& fechaContratacion) {
    this->fechaContratacion = fechaContratacion;
}
 void Empleado::imprimirInformacion() {

        cout << "Puesto: " << puesto << endl;
        cout << "Salario: $" << salario << endl;
        cout << "Fecha de Contratación: " << fechaContratacion << endl;
    }
