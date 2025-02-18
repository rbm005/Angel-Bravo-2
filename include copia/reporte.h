#ifndef REPORTE_H
#define REPORTE_H

#include <vector>
#include "paciente.h"
#include "Cita.h"

class Reporte {
public:
    static std::vector<Paciente> generarReportePacientesAtendidos(const std::vector<Paciente>& pacientes, const std::string& fechaInicio, const std::string& fechaFin);
    static std::vector<Cita> generarReporteCitasPendientes(const std::vector<Cita>& citas, const std::string& idMedico);
    static std::vector<Paciente> generarReporteEnfermedadesCronicas(const std::vector<Paciente>& pacientes);

private:
    Reporte() = default;
};

#endif // REPORTE_H