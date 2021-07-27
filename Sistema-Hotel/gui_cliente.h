#ifndef GUI_CLIENTE_H
#define GUI_CLIENTE_H
//inclusion de librerias
#include <QDialog>
namespace Ui {
class Gui_Cliente;
}
// Creacion de clase interfaz de cliente heredando de la QDialog que es parte de QT
class Gui_Cliente : public QDialog
{
    Q_OBJECT

public:
    explicit Gui_Cliente(QWidget *parent = nullptr);
    bool validarDatos();//metodo
    ~Gui_Cliente();//destructor
private slots:
    //stots privados para los botones de la interfaz(metodos)
    void on_groupBox_clicked();

    void on_Aceptar_button_clicked();

    void on_Cancel_button_clicked();

private:
    Ui::Gui_Cliente *ui;
};

#endif // GUI_CLIENTE_H
