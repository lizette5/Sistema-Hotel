#ifndef PERSONA_H
#define PERSONA_H
//incluir librerias
#include <string>
using namespace std;
//creacion de clase persona
class Persona {
public:
    //constructores
    Persona();
    Persona(int,int,string, string, string, string);
    ~Persona();//destructor

    //metodo getters y setters
    int getId();
    int getDni();
    string getNombre();
    string getApellido();
    string getDireccion();
    string getEmail();
    void setId(int _id);
    void setDNI(int _dni);
    void setNombre(string _nombre);
    void setApellido(string _apellido);
    void setDireccion(string _direccion);
    void setEmail(string _email);

private:
    //atributos privados
    int id_persona;
    int dni;
    string nombre;
    string apellido;
    string direccion;
    string email;
};

#endif
