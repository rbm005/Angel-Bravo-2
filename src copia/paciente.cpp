#include "paciente.h"

Paciente::Paciente(const std::string& nombre, const std::string& id, const std::string& fechaIngreso)
    : nombre(nombre), id(id), fechaIngreso(fechaIngreso) {}

std::string Paciente::getNombre() const {
    return nombre;
}

void Paciente::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

std::string Paciente::getId() const {
    return id;
}

void Paciente::setId(const std::string& id) {
    this->id = id;
}

std::string Paciente::getFechaIngreso() const {
    return fechaIngreso;
}

void Paciente::setFechaIngreso(const std::string& fechaIngreso) {
    this->fechaIngreso = fechaIngreso;
}

void Paciente::agregarHistorialClinico(const std::string& historial) {
    historialClinico.push_back(historial);
}

std::vector<std::string> Paciente::getHistorialClinico() const {
    return historialClinico;
}