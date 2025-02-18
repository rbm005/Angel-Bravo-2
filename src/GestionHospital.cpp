#include "GestionHospital.h"
#include <algorithm>
#include <fstream>

void GestionHospital::agregarPaciente(const Paciente& paciente) {
    pacientes.push_back(std::make_unique<Paciente>(paciente));
}

void GestionHospital::agregarMedico(const Medico& medico) {
    medicos.push_back(std::make_unique<Medico>(medico));
}

void GestionHospital::agendarCita(const Cita& cita) {
    citas.push_back(std::make_unique<Cita>(cita));
}

void GestionHospital::guardarDatos() {
    std::ofstream archivo("datos.txt");
    for (const auto& paciente : pacientes) {
        archivo << paciente->nombre << "," << paciente->numeroID << "," << paciente->fechaIngreso << "\n";
        // Añadir otros campos y datos necesarios
    }
    archivo.close();
}

void GestionHospital::cargarDatos() {
    std::ifstream archivo("datos.txt");
    std::string linea;
    while (std::getline(archivo, linea)) {
        // Parsear y cargar datos en las estructuras correspondientes
    }
    archivo.close();
}
