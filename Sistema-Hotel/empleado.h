#ifndef EMPLEADO_H
#define EMPLEADO_H
//inclusion de librerias
#pragma once
#include <string>
#include <persona.h>
using namespace std;
//Definicion de clase empleado heredado de Persona
class Empleado: public Persona{
private:
    //atributos privados
    string contra;
    double sueldo;
    string ocupacion;
    string fechaContratacion;

public:
     //constructores
    Empleado();
    Empleado(int id_persona, int dni, string contra,string nombre,string apellido,string direccion,string email,double sueldo, string ocupacion, string fechaContratacion);

    //metodos setters y getters
   void setContrasena(string _contra);
   void setSueldo(double _sueldo);
   void setOcupacion(string _ocupacion);
   void setFechaContratacion(string _fechaContratacion);

   string getContrasena();
   double getSueldo();
   string getOcupacion();
   string getFechaContratacion();

   //destructor
   ~Empleado();
};

#endif // EMPLEADO_H
