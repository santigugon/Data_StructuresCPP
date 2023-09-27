#ifndef AUTO_H
#define AUTO_H

#include <string>

class Auto {
public:
    Auto(const std::string& marca, const std::string& modelo, int anio);
    
    std::string getMarca() const;
    std::string getModelo() const;
    int getAnio() const;

private:
    std::string marca;
    std::string modelo;
    int anio;
};

#endif // AUTO_H
