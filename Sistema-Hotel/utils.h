#ifndef UTILS_H
#define UTILS_H
//incluir librerias

#include "string"
#include <QString>
#include <QStringList>
using namespace std;
//creacion de clase utils
class Utils
{
public:
    //constructor
    Utils();
    //metdos
    int getLastId(string tablename, string idcolumname);
    int contar(string tablename, string where, string value); //Esta linea esta observacion
    int _contar (QString tablename, QString clause);
    void updateEstado(QString tablename, QString estado, QString id);
    QStringList getIds(QString idcolumname, QString tablename, QString clause);
};

#endif // UTILS_H
