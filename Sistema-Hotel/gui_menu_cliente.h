#ifndef GUI_MENU_CLIENTE_H
#define GUI_MENU_CLIENTE_H
//incluir librerias
#include <QDialog>
#include <QTableWidget>

namespace Ui {
//cleacion de clase interfaz de menu cliente
class Gui_Menu_Cliente;
}
//cleacion de clase interfaz de menu cliente heredando de QDialog
class Gui_Menu_Cliente : public QDialog
{
    Q_OBJECT

public:
    //metodos
    explicit Gui_Menu_Cliente(QWidget *parent = nullptr);
    void mostrarDatos();
    void prepararTabla();
    bool validarDatos();
    ~Gui_Menu_Cliente();//destructor
//stots privados para los botones de la interfaz(metodos)
private slots:


    void on_pushButtonELIMINAR_clicked();

    void on_pushButtoMODIFICAR_clicked();

    void on_Agregar_button_clicked();

    void on_lineEdit_buscar_textChanged(const QString &arg1);

    void on_newTableC_itemClicked(QTableWidgetItem *item);

    void on_pushButton_clicked();

private:
    //atributos privados
    Ui::Gui_Menu_Cliente *ui;
    int fila;
};

#endif // GUI_MENU_CLIENTE_H
