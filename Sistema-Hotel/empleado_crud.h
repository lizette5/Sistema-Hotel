#ifndef EMPLEADO_CRUD_H
#define EMPLEADO_CRUD_H
//inclusion de librerias
#include "empleado.h"

//Definicion de clase Empleado cliente CRUD(Creacion-Lectura-Modificacion-Eliminacion)
class Empleado_Crud
{
public:
    //metodos publicos
    Empleado_Crud();
    void createEmpleado(Empleado _empleado);
    Empleado readEmpleado() const;
    void updateEmpleado(Empleado _empleado);
    void deleteEmpleado(int _id);
};

#endif // EMPLEADO_CRUD_H

