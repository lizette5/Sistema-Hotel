#ifndef GUI_EMPLEADO_H
#define GUI_EMPLEADO_H
//incluir librerias
#include <QDialog>

namespace Ui {
//creacion de clase interfaz de empleado
class Gui_Empleado;
}

//creacion de clase interfaz de empleado heredadnod de QDialog que es parte de QT
class Gui_Empleado : public QDialog
{
    Q_OBJECT

public:
    explicit Gui_Empleado(QWidget *parent = nullptr);
    ~Gui_Empleado();//destructor
    bool validarDatos();
//stots privados para los botones de la interfaz(metodos)
private slots:
    void on_Aceptar_button_clicked();
    void on_Cancel_button_clicked();

private:
    //atributo privado
    Ui::Gui_Empleado *ui;
};

#endif // GUI_EMPLEADO_H

