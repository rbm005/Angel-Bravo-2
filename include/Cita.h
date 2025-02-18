#ifndef CITA_H
#define CITA_H

#include <string>
#include "paciente.h"
#include "Médico.h"

class Cita {
public:
    std::string fecha;
    std::string urgencia;
    Paciente paciente;
    Medico medico;

    Cita(const std::string& fecha, const std::string& urgencia, const Paciente& paciente, const Medico& medico);
    // otros métodos necesarios
};

#endif // CITA_H
