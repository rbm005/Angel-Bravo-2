#include "Médico.h"

Medico::Medico(const std::string& nombre, const std::string& id)
    : nombre(nombre), id(id) {}

std::string Medico::getNombre() const {
    return nombre;
}

void Medico::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

std::string Medico::getId() const {
    return id;
}

void Medico::setId(const std::string& id) {
    this->id = id;
}

std::vector<std::string> Medico::getEspecialidades() const {
    return especialidades;
}

void Medico::agregarEspecialidad(const std::string& especialidad) {
    especialidades.push_back(especialidad);
}