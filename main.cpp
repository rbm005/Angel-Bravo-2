#include "GestionHospital.h"
#include <iostream>

int main() {
    GestionHospital hospital;
    std::cout <<"hola";

    // Ejemplos de uso
    Paciente paciente1("Juan Perez", "12345", "2025-02-18");
    paciente1.registrarHistorial("Consulta inicial: Fiebre y tos.");

    Medico medico1("Dra. Martinez", "Cardiología");

    Cita cita1("2025-02-20", "alta", paciente1, medico1);

    hospital.agregarPaciente(paciente1);
    hospital.agregarMedico(medico1);
    hospital.agendarCita(cita1);

    hospital.guardarDatos();
    hospital.cargarDatos();

    return 0;
}
