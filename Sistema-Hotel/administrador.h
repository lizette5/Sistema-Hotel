#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
//incluir librerias

#include <persona.h>

//Definicion de clase administrador hereda de la clase persona
class Administrador: public Persona
{
    //atributo privado
private:
    string contra;//contraseña


public:
    //constructor y metodos
    Administrador(int id,int dni,string contra, string nombre, string apellido, string dir, string email);
    string getContra();
    void setContrasena(string contra);

};

#endif // ADMINISTRADOR_H
