#ifndef MEDICO_H
#define MEDICO_H

#include <string>

class Medico {
public:
    std::string nombre;
    std::string especialidad;
    bool disponible;

    Medico(const std::string& nombre, const std::string& especialidad, bool disponible = true);
    // otros métodos necesarios
};

#endif // MEDICO_H
