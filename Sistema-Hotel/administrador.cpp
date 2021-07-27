//incluir libreiras
#include "administrador.h"
//desarrollo de constructor
Administrador::Administrador(int id_persona, int dni, string _contra, string nombre,string apellido,string direccion,string email) : Persona(id_persona, dni, nombre,apellido,direccion,email){
    contra=_contra;
}
//desarrollo de metodos
string Administrador::getContra()
{
    return contra;
}

void Administrador::setContrasena(string _contra)
{
    contra = _contra;
}
