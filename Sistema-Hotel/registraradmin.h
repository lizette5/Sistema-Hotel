#ifndef REGISTRARADMIN_H
#define REGISTRARADMIN_H
//incluir librerias
#include <QDialog>
#include "administrador.h"

namespace Ui {
//cleacion de clase interfaz de registro administrador
class RegistrarAdmin;
}
//creacion de clase interfaz de registro adminstrador heredado de QDialog
class RegistrarAdmin : public QDialog
{
    Q_OBJECT

public:
    //metodos
    explicit RegistrarAdmin(QWidget *parent = nullptr);
    ~RegistrarAdmin();//destructor
    bool validarDatos();
    Administrador getAdmin() const {return mAdmin;}

//stots privados para los botones de la interfaz(metodos)
private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    //atributos privados
    Ui::RegistrarAdmin *ui;
    Administrador mAdmin;
};

#endif // REGISTRARADMIN_H
