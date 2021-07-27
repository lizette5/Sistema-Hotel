//incluir librerias
#include "cliente.h"
#include <iostream>
#include <string>
//contructor
Cliente::Cliente(){

}
//desarrollo de constructor cliente
Cliente::Cliente(int id_persona, int dni, string nombre,string apellido,string direccion,string email,string _ciudadania) : Persona(id_persona, dni,nombre,apellido,direccion,email){
  ciudadania = _ciudadania;
}
//desarrollo de metodos
void Cliente::setCiudadania(string _ciud){
    ciudadania = _ciud;
}

string Cliente::getCiudadania(){
    return ciudadania;
}
//Metodos para enlazar con la base de datos
bool Cliente::registrarCliente(){return true;}
bool Cliente::modificarCliente(){return true;}
bool Cliente::borrarCliente(){return true;}
bool Cliente::buscarCliente(){return true;}
//destrcutor
Cliente::~Cliente(){}
