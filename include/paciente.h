#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include <vector>

class Paciente {
public:
    std::string nombre;
    std::string numeroID;
    std::string fechaIngreso;
    std::vector<std::string> historialClinico;

    Paciente(const std::string& nombre, const std::string& numeroID, const std::string& fechaIngreso);

    void registrarHistorial(const std::string& historial);
    // otros métodos necesarios
};

#endif // PACIENTE_H
