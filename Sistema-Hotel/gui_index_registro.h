#ifndef GUI_INDEX_REGISTRO_H
#define GUI_INDEX_REGISTRO_H

#include <QDialog>
#include <QTableWidget>

namespace Ui {
//cleacion de clase interfaz de index registro
class Gui_Index_Registro;
}
//cleacion de clase interfaz de index registro heredando de QDialog
class Gui_Index_Registro : public QDialog
{
    Q_OBJECT

public:
    explicit Gui_Index_Registro(QWidget *parent = nullptr);
    ~Gui_Index_Registro();//destructor
//stots privados para los botones de la interfaz(metodos)
private slots:
    void on_New_Registro_Button_clicked();

    void on_edit_registros_button_clicked();

    void on_delete_registros_button_clicked();

    void on_Regresar__clicked();

    void on_tableListRegistros_itemClicked(QTableWidgetItem *item);

private:
    //atributos y metodos privados
    Ui::Gui_Index_Registro *ui;
    int f;
    void prepararTabla();
    void cargarTabla();
    void mostrarDatos();
};

#endif // GUI_INDEX_REGISTRO_H
