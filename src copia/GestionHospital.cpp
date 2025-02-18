#include <iostream>
#include <fstream>
#include "paciente.h"

// Suponiendo que tienes un vector de punteros a Paciente
void guardarPacientesEnArchivo(const std::vector<Paciente*>& pacientes, const std::string& nombreArchivo) {
    std::ofstream archivo(nombreArchivo);
    if (!archivo) {
        std::cerr << "Error al abrir el archivo para escribir: " << nombreArchivo << std::endl;
        return;
    }

    for (const auto& paciente : pacientes) {
        archivo << paciente->getNombre() << "," << paciente->getId() << "," << paciente->getFechaIngreso() << "\n";
    }
    archivo.close();
}

// Otras funciones de GestionHospital.cpp