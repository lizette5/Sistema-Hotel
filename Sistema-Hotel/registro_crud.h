#ifndef REGISTRO_CRUD_H
#define REGISTRO_CRUD_H
// inluir librerias
#include <QString>

#include "registro.h"
//creacion de clase registro CRUD(Creacion-Lectura-Modificacion-Eliminacion)
class Registro_CRUD
{
public:
    //constructor
    Registro_CRUD();
    //metodos
    void createRegistro(Registro _registro);
    Registro readRegistro();
    void updateRegistro(QString _fechaS, QString _idR);
    void deleteRegistro(int _id);
};

#endif // REGISTRO_CRUD_H
