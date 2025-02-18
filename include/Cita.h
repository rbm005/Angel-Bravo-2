#ifndef CITA_H
#define CITA_H

#include <string>

class Cita {
public:
    Cita(const std::string& idPaciente, const std::string& idMedico, const std::string& fecha, bool esUrgente);

    // Getters and Setters
    std::string getIdPaciente() const;
    void setIdPaciente(const std::string& idPaciente);
    std::string getIdMedico() const;
    void setIdMedico(const std::string& idMedico);
    std::string getFecha() const;
    void setFecha(const std::string& fecha);
    bool getEsUrgente() const;
    void setEsUrgente(bool esUrgente);

private:
    std::string idPaciente;
    std::string idMedico;
    std::string fecha;
    bool esUrgente;
};

#endif // CITA_H
