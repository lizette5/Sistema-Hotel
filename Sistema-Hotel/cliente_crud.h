#ifndef CLIENTE_CRUD_H
#define CLIENTE_CRUD_H

//incluyendo  librerias
#include "cliente.h"

//Definicion de clase cliente CRUD(Creacion-Lectura-Modificacion-Eliminacion)
class Cliente_CRUD
{
public:
    //constructor
    Cliente_CRUD();

    //metodos
    void createCliente(Cliente _cliente);
    Cliente readCliente() const;
    void updateCliente(Cliente _cliente);
    void deleteCliente(int _id);
};

#endif // CLIENTE_CRUD_H
