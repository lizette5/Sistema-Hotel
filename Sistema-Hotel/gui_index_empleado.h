#ifndef GUI_INDEX_EMPLEADO_H
#define GUI_INDEX_EMPLEADO_H
//incluir librerias

#include <QDialog>
#include <QTableWidgetItem>


namespace Ui {
//cleacion de clase interfaz de index empleado
class Gui_Index_Empleado;
}
//creacion de clase interfaz de index empleado  heredando de QDialog
class Gui_Index_Empleado : public QDialog
{
    Q_OBJECT

public:
    //metodos
    explicit Gui_Index_Empleado(QWidget *parent = nullptr);
    void mostrarDatos();
    void prepararTabla();
    bool validarDatos();
    ~Gui_Index_Empleado();//destructor
//stots privados para los botones de la interfaz(metodos)
private slots:
    void on_Cancelar_button_clicked();

    void on_Nuevo_Button_clicked();

    void on_delete_empleado_button_clicked();

    void on_tableWidget_itemClicked(QTableWidgetItem *item);

    void on_edit_empleado_button_clicked();

    void on_lineEdit_buscarEmpleado_textChanged(const QString &arg1);

private:
    //atributos privados
    Ui::Gui_Index_Empleado *ui;
    int u;
    int f;
};

#endif // GUI_INDEX_EMPLEADO_H






