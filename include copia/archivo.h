#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <string>
#include <vector>
#include "paciente.h"
#include "Médico.h"
#include "Cita.h"

class Archivo {
public:
    static bool guardarPacientesEnArchivo(const std::vector<Paciente>& pacientes, const std::string& nombreArchivo);
    static bool cargarPacientesDesdeArchivo(std::vector<Paciente>& pacientes, const std::string& nombreArchivo);
    static bool guardarMedicosEnArchivo(const std::vector<Medico>& medicos, const std::string& nombreArchivo);
    static bool cargarMedicosDesdeArchivo(std::vector<Medico>& medicos, const std::string& nombreArchivo);
    static bool guardarCitasEnArchivo(const std::vector<Cita>& citas, const std::string& nombreArchivo);
    static bool cargarCitasDesdeArchivo(std::vector<Cita>& citas, const std::string& nombreArchivo);
    static bool respaldarBaseDeDatos(const std::string& nombreArchivoRespaldo);

private:
    Archivo() = default;
};

#endif // ARCHIVO_H