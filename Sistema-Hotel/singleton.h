#ifndef SINGLETON_H
#define SINGLETON_H

//creacion de clase singleton
class singleton
{
public:
    //metodos publicos
    static singleton* instance();
    void setDNI(int _dni);
    int getDNI();

private:
    // atributos
    static singleton* my_instance;
    int dni;
    singleton();//constructor
    ~singleton();//destructor
};

#endif // SINGLETON_H
