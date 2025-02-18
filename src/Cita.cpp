#include "Cita.h"

Cita::Cita(const std::string& fecha, const std::string& urgencia, const Paciente& paciente, const Medico& medico)
    : fecha(fecha), urgencia(urgencia), paciente(paciente), medico(medico) {}
