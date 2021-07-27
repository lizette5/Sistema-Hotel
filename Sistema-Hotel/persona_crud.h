#ifndef PERSONA_CRUD_H
#define PERSONA_CRUD_H
//incluir librerias
#include "persona.h"
//creacion de clase persona CRUD(Creacion-Lectura-Modificacion-Eliminacion)
class Persona_CRUD
{
public:
    //constructor
    Persona_CRUD();
    //metodos
    void createPersona(Persona _persona);
    Persona readPersona() const;
    void updatePersona(Persona _persona);
    void deletePersona(int _id);
};

#endif // PERSONA_CRUD_H
