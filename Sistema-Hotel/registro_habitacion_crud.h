#ifndef REGISTRO_HABITACION_CRUD_H
#define REGISTRO_HABITACION_CRUD_H
//incluir librerias
#include <QString>
//creacion de clase registro habitacionCRUD(Creacion-Lectura-Modificacion-Eliminacion)
class Registro_Habitacion_CRUD
{
public:
    //constructor
    Registro_Habitacion_CRUD();    
    //metodos
    void CreateRegistro_Habitacion(QString table, QString clause);
    void ReadRegistro_Habitacion();
    void UpdateRegistro_Habitacion();
    void DeleteRegistro_Habitacion(QString idR);
};

#endif // REGISTRO_HABITACION_CRUD_H
