#ifndef GESTION_HOSPITAL_H
#define GESTION_HOSPITAL_H

#include <vector>
#include <memory>
#include "paciente.h"
#include "Médico.h"
#include "Cita.h"

class GestionHospital {
public:
    std::vector<std::unique_ptr<Paciente>> pacientes;
    std::vector<std::unique_ptr<Medico>> medicos;
    std::vector<std::unique_ptr<Cita>> citas;

    void agregarPaciente(const Paciente& paciente);
    void agregarMedico(const Medico& medico);
    void agendarCita(const Cita& cita);
    void guardarDatos();
    void cargarDatos();
    // otros métodos necesarios
};

#endif // GESTION_HOSPITAL_H
