#ifndef CONEXION_H
#define CONEXION_H
//inclucion de librerias
#include "empleado.h"
#include "habitacion.h"
#include "estadohab.h"
#include "tipohabitacion.h"
#include <QtSql/QSqlQuery>
#include <QString>
#include <QtSql/QSqlDatabase>
//Creacion de la clase conexion
class Conexion
{
    //atributo para la base de datos
    QSqlDatabase db;
public:
    //metodos
    Conexion();
    void Conectar();
    void Cerrar();
    void addEmpleado(Empleado e);
    void addHabitacion(Habitacion a);
   void addEstadoHabitacion(EstadoHab a);
   void addTipoHabitacion(TipoHabitacion a);
};

#endif // CONEXION_H
