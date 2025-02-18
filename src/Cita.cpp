#include "Cita.h"

Cita::Cita(const std::string& idPaciente, const std::string& idMedico, const std::string& fecha, bool esUrgente)
    : idPaciente(idPaciente), idMedico(idMedico), fecha(fecha), esUrgente(esUrgente) {}

std::string Cita::getIdPaciente() const {
    return idPaciente;
}

void Cita::setIdPaciente(const std::string& idPaciente) {
    this->idPaciente = idPaciente;
}

std::string Cita::getIdMedico() const {
    return idMedico;
}

void Cita::setIdMedico(const std::string& idMedico) {
    this->idMedico = idMedico;
}

std::string Cita::getFecha() const {
    return fecha;
}

void Cita::setFecha(const std::string& fecha) {
    this->fecha = fecha;
}

bool Cita::getEsUrgente() const {
    return esUrgente;
}

void Cita::setEsUrgente(bool esUrgente) {
    this->esUrgente = esUrgente;
}
