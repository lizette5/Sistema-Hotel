#ifndef CLIENTE_H
#define CLIENTE_H
//incluir librerias
#pragma once
#include <string>
#include <persona.h>
using namespace std;

//Definicion de clase cliente hereda de la clase persona
class Cliente: public Persona{
    //atributo privado
private:
    string ciudadania;

public:
    //constructores
    Cliente();
    Cliente(int id_persona, int dni, string nombre,string apellido,string direccion,string email,string _ciudadania);
   //Getters y setters

   void setCiudadania(string _ciud);
   string getCiudadania();

    //Metodos para enlazar con la base de datos
    bool registrarCliente();
    bool modificarCliente();
    bool borrarCliente();
    bool buscarCliente();

    //destructor
   ~Cliente();
};

#endif // CLIENTE_H
