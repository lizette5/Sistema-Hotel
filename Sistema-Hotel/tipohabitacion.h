#ifndef TIPOHABITACION_H
#define TIPOHABITACION_H
//incluir librerias
#include <iostream>
#include <string>
using namespace std;
//creacion de clase tipo habitacion
class TipoHabitacion
{
private:
    //atributos privados
    int idTipoHabitacion;
    string descripcion;
    float precio;
    string nombretipo;

public:
    //constructores
    TipoHabitacion();
    TipoHabitacion(int _idTiHa, string _descrp,string _nombreTipo, float _precio);

    //metodos setters y getters
    void setIdTipoHa(int _idTiHa);
    void setDescricion(string _descripcion);
    void setPrecio(float _precio);
    void setNombreTipo(string _nombreTipo);

    int getIdTipoHa() ;
    string getDescripcion() ;
    float getPrecio() ;
    string getNombreTipo();

};

#endif // TIPOHABITACION_H

