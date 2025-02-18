#include "paciente.h"

Paciente::Paciente(const std::string& nombre, const std::string& numeroID, const std::string& fechaIngreso)
    : nombre(nombre), numeroID(numeroID), fechaIngreso(fechaIngreso) {}

void Paciente::registrarHistorial(const std::string& historial) {
    historialClinico.push_back(historial);
}
