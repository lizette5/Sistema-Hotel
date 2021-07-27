//incluir librerias
#include "registro_crud.h"

#include "conexion.h"
#include "string"
using namespace std;
//constructor
Registro_CRUD::Registro_CRUD()
{

}
//desarrollo de añadir un registro
void Registro_CRUD::createRegistro(Registro _registro){
    Conexion conn;
    conn.Conectar();

    QSqlQuery query;
    QString id = QString::number(_registro.getIdRegistro());
    QString idC = QString::number(_registro.getIdCliente());
    QString idE = QString::number(_registro.getIdEmpleado());
    QString cantH = QString::number(_registro.getCantHab());
    QString fE = QString::fromLocal8Bit(_registro.getFechaEntrada().c_str());
    QString fS = QString::fromLocal8Bit(_registro.getFechaSalida().c_str());
    //insert en  bd
    QString insert; insert.append("INSERT INTO registros (idpersona_c, idpersona_e, fechaE, fechaS) "
                     "VALUES ("+idC+", "+idE+", '"+fE+"', '"+fS+"');");
    QSqlQuery insertar;
    insertar.prepare(insert);
    insertar.exec();

    conn.Cerrar();
}

//desarrollo de leer un registro
Registro Registro_CRUD::readRegistro(){
    Registro r;
    return r;
}

//desarrollo de modificar un registro
void Registro_CRUD::updateRegistro(QString _fechaS, QString _idR){
    Conexion conn;
    conn.Conectar();
    //actualizar bd
    QString query = "UPDATE registros SET fechaS = '"+_fechaS+"' WHERE idregistro = "+_idR;
    QSqlQuery sql;
    sql.exec(query);
    conn.Cerrar();
}

//desarrollo de elimar un registro
void Registro_CRUD::deleteRegistro(int _id){
    Conexion conn;
    conn.Conectar();
    //elimar en la bd
    QString query = "DELETE FROM registros WHERE idregistro = "+QString::number(_id);
    QSqlQuery sql;
    sql.exec(query);
    conn.Cerrar();
}
