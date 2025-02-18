#ifndef MEDICO_H
#define MEDICO_H

#include <string>
#include <vector>

class Medico {
public:
    Medico(const std::string& nombre, const std::string& id);

    // Getters and Setters
    std::string getNombre() const;
    void setNombre(const std::string& nombre);
    std::string getId() const;
    void setId(const std::string& id);
    std::vector<std::string> getEspecialidades() const;
    void agregarEspecialidad(const std::string& especialidad);

private:
    std::string nombre;
    std::string id;
    std::vector<std::string> especialidades;
};

#endif // MEDICO_H
