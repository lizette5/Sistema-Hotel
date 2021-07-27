#ifndef GUI_FACTURA_H
#define GUI_FACTURA_H
//incluir librerias
#include "cliente.h"
#include <QDialog>
#include <QDate>

namespace Ui {
//creacion de clase interfaz de factura
class gui_factura;
}
//creacion de clase interfaz de factura heredando de QDialog
class gui_factura : public QDialog
{
    Q_OBJECT

public:
    //metodos
    void setDatosPago();//metodo set
    explicit gui_factura(QWidget *parent = nullptr);
    ~gui_factura();//destructor
    void imprimirFactura();
    void imprimir(int a [], int d);
    void setCliente(Cliente _cliente);
    void setFechas(int _d1, int _m1, int _y1,int _d2, int _m2, int _y2);
    void incializar (int a [], int d);
    int calcularDias(int _d1, int _m1, int _y1,int _d2, int _m2, int _y2);
    QString getFactura();
        QString getNroFactura();
//stots privados para los botones de la interfaz(metodos)
private slots:
    void on_factura_cliente_nombre_linkActivated(const QString &link);

    void on_pushButton_clicked();

private:
    //atributos privados
    Cliente cliente;
    int d1,m1,y1,d2,m2,y2;
    QDate salida;
    Ui::gui_factura *ui;
    QString NroFactura;
    QString Tfactura;

};

#endif // GUI_FACTURA_H
