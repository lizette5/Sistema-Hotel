//incluir librerias
#include "utils.h"

#include "conexion.h"
#include <QtSql>
//constructor
Utils::Utils()
{

}

/**
 * @brief Utils::getLastId
 * @param tablename Nombre de la tabla de la BD
 * @param idcolumname Nombre de la columna ID de la tabla
 * @return El último id del registro de la BD de la tabla seleccionada
 */
//desarrollo de get ultimo ID
int Utils::getLastId(string tablename, string idcolumname){
    int lastId = 0;
    Conexion conn;

    QString getlastId;
    //adjuntando la seleccion de una tabla a travez del id asignado disminuye en 1
    getlastId.append("SELECT * FROM "+QString::fromStdString(tablename)+" ORDER BY "+QString::fromStdString(idcolumname)+" DESC LIMIT 1;");

    conn.Conectar();

    QSqlQuery getId;
    getId.prepare(getlastId);
    getId.exec();
    while(getId.next()){
        lastId = getId.value(0).toInt();
    }
    conn.Cerrar();
    return lastId;
}


/**
 * @brief Utils::_contar
 * @param tablename Nombre de la tabla dentro de la BD
 * @param clause Condicion WHERE de la consulta
 * @return La respuesta de la consulta COUNT
 */
//desarrollo de metodo contar
int Utils::_contar(QString tablename, QString clause){
    int contar = 0;
    Conexion conn;

    QString queryCount;
    //adjuntando la seleccion contar de una tabla a travez de una clausula
    queryCount.append("SELECT COUNT(*) FROM "+tablename+" "+clause);

    conn.Conectar();

    QSqlQuery count;
    count.prepare(queryCount);
    count.exec();

    while(count.next()){
        contar = count.value(0).toInt();
    }

    conn.Cerrar();

    return contar;
}

/**
 * @brief Utils::updateEstado
 * @param tablename Nombre de la tabla del elemento que queremos actualizar
 * @param estado Nombre del campo estado de la tabla
 * @param id Condicion id
 * Actualiza el estado de un elemento
 */
//desarrollo de modificacion de modifcacino de estado
void Utils::updateEstado(QString tablename, QString estado, QString id){
    Conexion conn;

    QString queryUS;
    //adjunta la actualizacion del estado de un elemento
    queryUS.append("UPDATE "+tablename+" SET "+estado+" WHERE "+id);

    conn.Conectar();
    QSqlQuery count;
    count.prepare(queryUS);
    count.exec();

    conn.Cerrar();
}
//desarrollo de getter de ids
QStringList Utils::getIds(QString idcolumname, QString tablename, QString clause){
    QStringList ids;
    Conexion conn;
    QString queryIds;
    //adjunta seleccion de un id de una columna desde una tabla donde tenga la clausula
    queryIds.append("SELECT "+idcolumname+" FROM "+tablename+" WHERE "+clause);
    conn.Conectar();
    QSqlQuery query;
    query.prepare(queryIds);
    query.exec();
    while(query.next()){
        ids.append(query.value(0).toByteArray().constData());
    }
    return ids;
}
