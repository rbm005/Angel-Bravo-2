#include "archivo.h"
#include <fstream>
#include <iostream>

bool Archivo::guardarPacientesEnArchivo(const std::vector<Paciente>& pacientes, const std::string& nombreArchivo) {
    std::ofstream outFile(nombreArchivo);
    if (!outFile) {
        std::cerr << "Error al abrir el archivo para escribir: " << nombreArchivo << std::endl;
        return false;
    }
    for (const auto& paciente : pacientes) {
        outFile << paciente.getNombre() << "," << paciente.getId() << "," << paciente.getFechaIngreso() << "\n";
    }
    outFile.close();
    return true;
}

bool Archivo::cargarPacientesDesdeArchivo(std::vector<Paciente>& pacientes, const std::string& nombreArchivo) {
    std::ifstream inFile(nombreArchivo);
    if (!inFile) {
        std::cerr << "Error al abrir el archivo para leer: " << nombreArchivo << std::endl;
        return false;
    }
    std::string nombre, id, fechaIngreso;
    while (inFile >> nombre >> id >> fechaIngreso) {
        pacientes.emplace_back(nombre, id, fechaIngreso);
    }
    inFile.close();
    return true;
}

bool Archivo::guardarMedicosEnArchivo(const std::vector<Medico>& medicos, const std::string& nombreArchivo) {
    std::ofstream outFile(nombreArchivo);
    if (!outFile) {
        std::cerr << "Error al abrir el archivo para escribir: " << nombreArchivo << std::endl;
        return false;
    }
    for (const auto& medico : medicos) {
        outFile << medico.getNombre() << "," << medico.getId() << "\n";
    }
    outFile.close();
    return true;
}

bool Archivo::cargarMedicosDesdeArchivo(std::vector<Medico>& medicos, const std::string& nombreArchivo) {
    std::ifstream inFile(nombreArchivo);
    if (!inFile) {
        std::cerr << "Error al abrir el archivo para leer: " << nombreArchivo << std::endl;
        return false;
    }
    std::string nombre, id;
    while (inFile >> nombre >> id) {
        medicos.emplace_back(nombre, id);
    }
    inFile.close();
    return true;
}

bool Archivo::guardarCitasEnArchivo(const std::vector<Cita>& citas, const std::string& nombreArchivo) {
    std::ofstream outFile(nombreArchivo);
    if (!outFile) {
        std::cerr << "Error al abrir el archivo para escribir: " << nombreArchivo << std::endl;
        return false;
    }
    for (const auto& cita : citas) {
        outFile << cita.getIdPaciente() << "," << cita.getIdMedico() << "," << cita.getFecha() << "," << cita.getEsUrgente() << "\n";
    }
    outFile.close();
    return true;
}

bool Archivo::cargarCitasDesdeArchivo(std::vector<Cita>& citas, const std::string& nombreArchivo) {
    std::ifstream inFile(nombreArchivo);
    if (!inFile) {
        std::cerr << "Error al abrir el archivo para leer: " << nombreArchivo << std::endl;
        return false;
    }
    std::string idPaciente, idMedico, fecha;
    bool esUrgente;
    while (inFile >> idPaciente >> idMedico >> fecha >> esUrgente) {
        citas.emplace_back(idPaciente, idMedico, fecha, esUrgente);
    }
    inFile.close();
    return true;
}

bool Archivo::respaldarBaseDeDatos(const std::string& nombreArchivoRespaldo) {
    std::ofstream outFile(nombreArchivoRespaldo);
    if (!outFile) {
        std::cerr << "Error al abrir el archivo para escribir: " << nombreArchivoRespaldo << std::endl;
        return false;
    }
    outFile << "Respaldo de la base de datos\n";
    outFile.close();
    return true;
}