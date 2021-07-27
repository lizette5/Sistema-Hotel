//incluir librerias
#include "singleton.h"
//constructor
singleton::singleton() { }
//destructor
singleton::~singleton() { }
//singleton datos unicos
singleton* singleton::my_instance = 0;
singleton* singleton::instance(){
    if(!my_instance){
        my_instance = new singleton();
    }
    return my_instance;
}
//desarrollo de set y get de datos unicos
void singleton::setDNI(int _dni){
    dni = _dni;
}

int singleton::getDNI(){
    return dni;
}
