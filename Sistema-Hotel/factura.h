#ifndef FACTURA_H
#define FACTURA_H
//inclusion de librerias
#include <QDate>
//creacion de la clase factura para despues de cada registro
class Factura {
public:
    //constructores
    Factura();
    Factura(int _fac_id, int _empl_id, int _cli_id, QDate _fecha, float _subtotal, float _total);
    //destructor
    ~Factura();
private:
    //atributos privados
    int factura_id;
    int empleado_id;
    int cliente_id;
    QDate fecha;
    float subtotal;
    float total;
};

#endif

