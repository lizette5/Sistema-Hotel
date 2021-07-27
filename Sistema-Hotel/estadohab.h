#ifndef ESTADOHAB_H
#define ESTADOHAB_H
//inclusion de librerias
#include <iostream>
#include <string>
using namespace std;
//creacion  de estado de habitacion
class EstadoHab
{
private:
    //atributos privados
    int idEstadoH;
    string descripcion;

public:
    //constructores
    EstadoHab();
    EstadoHab(int _idEstadoH, string _descripcion);

    //metodos setters y getters
    void setDescripcion(string _descripcion);
    void setIdEstado(int _idEstadoH);

    int getIdEstado() const;
    string getDescripcion() const;

};

#endif // ESTADOHAB_H
