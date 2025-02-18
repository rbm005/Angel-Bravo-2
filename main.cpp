#include <iostream>
#include <vector>
#include <string>
#include "paciente.h"
#include "Médico.h"
#include "Cita.h"
#include "reporte.h"
#include "archivo.h"

void mostrarMenu() {
    std::cout << "Gestión de Pacientes, Médicos y Citas Médicas\n";
    std::cout << "1. Alta de paciente\n";
    std::cout << "2. Baja de paciente\n";
    std::cout << "3. Modificación de datos personales de paciente\n";
    std::cout << "4. Búsqueda de pacientes\n";
    std::cout << "5. Registro de historial clínico\n";
    std::cout << "6. Alta de médico\n";
    std::cout << "7. Baja de médico\n";
    std::cout << "8. Asignación de especialidades a médico\n";
    std::cout << "9. Listado de médicos\n";
    std::cout << "10. Asignación de citas\n";
    std::cout << "11. Ordenación de citas\n";
    std::cout << "12. Registro de citas pasadas y futuras\n";
    std::cout << "13. Cancelación y modificación de citas\n";
    std::cout << "14. Generación de reportes\n";
    std::cout << "15. Guardar datos\n";
    std::cout << "16. Cargar datos\n";
    std::cout << "17. Respaldo de base de datos\n";
    std::cout << "0. Salir\n";
}

int main() {
    std::vector<Paciente> pacientes;
    std::vector<Medico> medicos;
    std::vector<Cita> citas;
    int opcion;

    do {
        mostrarMenu();
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                std::string nombre, id, fechaIngreso;
                std::cout << "Ingrese nombre del paciente: ";
                std::cin >> nombre;
                std::cout << "Ingrese ID del paciente: ";
                std::cin >> id;
                std::cout << "Ingrese fecha de ingreso: ";
                std::cin >> fechaIngreso;
                Paciente paciente(nombre, id, fechaIngreso);
                pacientes.push_back(paciente);
                break;
            }
            case 2: {
                std::string id;
                std::cout << "Ingrese ID del paciente a eliminar: ";
                std::cin >> id;
                pacientes.erase(std::remove_if(pacientes.begin(), pacientes.end(),
                                               [&id](Paciente& p) { return p.getId() == id; }), pacientes.end());
                break;
            }
            case 3: {
                std::string id, nuevoNombre, nuevaFechaIngreso;
                std::cout << "Ingrese ID del paciente a modificar: ";
                std::cin >> id;
                for (auto& paciente : pacientes) {
                    if (paciente.getId() == id) {
                        std::cout << "Ingrese nuevo nombre: ";
                        std::cin >> nuevoNombre;
                        paciente.setNombre(nuevoNombre);
                        std::cout << "Ingrese nueva fecha de ingreso: ";
                        std::cin >> nuevaFechaIngreso;
                        paciente.setFechaIngreso(nuevaFechaIngreso);
                    }
                }
                break;
            }
            case 4: {
                std::string criterio;
                std::cout << "Ingrese nombre, ID o fecha de ingreso para buscar: ";
                std::cin >> criterio;
                for (const auto& paciente : pacientes) {
                    if (paciente.getNombre() == criterio || paciente.getId() == criterio || paciente.getFechaIngreso() == criterio) {
                        std::cout << "Paciente encontrado: " << paciente.getNombre() << ", " << paciente.getId() << ", " << paciente.getFechaIngreso() << "\n";
                    }
                }
                break;
            }
            case 5: {
                std::string id, historial;
                std::cout << "Ingrese ID del paciente para agregar historial clínico: ";
                std::cin >> id;
                std::cout << "Ingrese historial clínico: ";
                std::cin >> historial;
                for (auto& paciente : pacientes) {
                    if (paciente.getId() == id) {
                        paciente.agregarHistorialClinico(historial);
                    }
                }
                break;
            }
            case 6: {
                std::string nombre, id;
                std::cout << "Ingrese nombre del médico: ";
                std::cin >> nombre;
                std::cout << "Ingrese ID del médico: ";
                std::cin >> id;
                Medico medico(nombre, id);
                medicos.push_back(medico);
                break;
            }
            case 7: {
                std::string id;
                std::cout << "Ingrese ID del médico a eliminar: ";
                std::cin >> id;
                medicos.erase(std::remove_if(medicos.begin(), medicos.end(),
                                             [&id](Medico& m) { return m.getId() == id; }), medicos.end());
                break;
            }
            case 8: {
                std::string id, especialidad;
                std::cout << "Ingrese ID del médico para agregar especialidad: ";
                std::cin >> id;
                std::cout << "Ingrese especialidad: ";
                std::cin >> especialidad;
                for (auto& medico : medicos) {
                    if (medico.getId() == id) {
                        medico.agregarEspecialidad(especialidad);
                    }
                }
                break;
            }
            case 9: {
                std::string criterio;
                std::cout << "Ingrese especialidad o disponibilidad para listar médicos: ";
                std::cin >> criterio;
                for (const auto& medico : medicos) {
                    if (std::find(medico.getEspecialidades().begin(), medico.getEspecialidades().end(), criterio) != medico.getEspecialidades().end()) {
                        std::cout << "Médico encontrado: " << medico.getNombre() << ", " << medico.getId() << "\n";
                    }
                }
                break;
            }
            case 10: {
                std::string idPaciente, idMedico, fecha;
                bool esUrgente;
                std::cout << "Ingrese ID del paciente: ";
                std::cin >> idPaciente;
                std::cout << "Ingrese ID del médico: ";
                std::cin >> idMedico;
                std::cout << "Ingrese fecha de la cita: ";
                std::cin >> fecha;
                std::cout << "Es urgente (1 para sí, 0 para no): ";
                std::cin >> esUrgente;
                Cita cita(idPaciente, idMedico, fecha, esUrgente);
                citas.push_back(cita);
                break;
            }
            case 11: {
                // Ordenación de citas por fecha o urgencia
                break;
            }
            case 12: {
                // Registro de citas pasadas y futuras
                break;
            }
            case 13: {
                // Cancelación y modificación de citas
                break;
            }
            case 14: {
                // Generación de reportes
                break;
            }
            case 15: {
                Archivo::guardarPacientesEnArchivo(pacientes, "pacientes.txt");
                Archivo::guardarMedicosEnArchivo(medicos, "medicos.txt");
                Archivo::guardarCitasEnArchivo(citas, "citas.txt");
                break;
            }
            case 16: {
                Archivo::cargarPacientesDesdeArchivo(pacientes, "pacientes.txt");
                Archivo::cargarMedicosDesdeArchivo(medicos, "medicos.txt");
                Archivo::cargarCitasDesdeArchivo(citas, "citas.txt");
                break;
            }
            case 17: {
                Archivo::respaldarBaseDeDatos("backup.txt");
                break;
            }
            case 0: {
                std::cout << "Saliendo del programa...\n";
                break;
            }
            default: {
                std::cout << "Opción no válida. Intente de nuevo.\n";
                break;
            }
        }
    } while (opcion != 0);

    return 0;
}
