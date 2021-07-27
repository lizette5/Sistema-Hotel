#ifndef GUI_INDEXHABITACION_H
#define GUI_INDEXHABITACION_H
//incluir libreiras
#include <QDialog>
#include <QTableWidgetItem>
namespace Ui {
//cleacion de clase interfaz de index habitacion
class gui_indexHabitacion;
}
//cleacion de clase interfaz de index habitacion heredando de QDialog
class gui_indexHabitacion : public QDialog
{
    Q_OBJECT

public:
    //metodos
    explicit gui_indexHabitacion(QWidget *parent = nullptr);
    void mostrarDatos();
    void prepararTabla();
    ~gui_indexHabitacion();//destructor
//stots privados para los botones de la interfaz(metodos)
private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_3_clicked();

    void on_tabb_itemClicked(QTableWidgetItem *item);

    void on_pushButton_2_clicked();

    void on_lineEdit_5_textChanged(const QString &arg1);

private:
    //atributos privados
    Ui::gui_indexHabitacion *ui;
    int u;
    int fila;

};

#endif // GUI_INDEXHABITACION_H
