#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
#include <vector>

class Paciente {
public:
    Paciente(const std::string& nombre, const std::string& id, const std::string& fechaIngreso);

    // Getters and Setters
    std::string getNombre() const;
    void setNombre(const std::string& nombre);
    std::string getId() const;
    void setId(const std::string& id);
    std::string getFechaIngreso() const;
    void setFechaIngreso(const std::string& fechaIngreso);

    // Other functions
    void agregarHistorialClinico(const std::string& historial);
    std::vector<std::string> getHistorialClinico() const;

private:
    std::string nombre;
    std::string id;
    std::string fechaIngreso;
    std::vector<std::string> historialClinico;
};

#endif // PACIENTE_H