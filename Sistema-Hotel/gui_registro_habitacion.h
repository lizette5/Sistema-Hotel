#ifndef REGISTRO_HABITACION_H
#define REGISTRO_HABITACION_H
//incluir librerias
#include <QDialog>
#include <QTableWidget>
#include <QListWidget>

namespace Ui {
//cleacion de clase interfaz de registro habitacion
class Registro_habitacion;
}
//cleacion de clase interfaz de registro habitacion heredando de QDialog
class Registro_habitacion : public QDialog
{
    Q_OBJECT

public:
    //metodos
    explicit Registro_habitacion(QWidget *parent = nullptr);
    void mostrarDatos();
    void setHabitacionesSelected(QStringList _habSelec);
    QStringList getHabitacionesSelected() const;
    QStringList gethabitacionAdd();
    QStringList gethabitacionDel();
    void setIdRegistro(int _idR);
    ~Registro_habitacion();//destructor
//stots privados para los botones de la interfaz(metodos)
private slots:
    void on_AceptarRHButton_clicked();

    void on_CancelarRHButton_clicked();

    void on_TiposHTableWidget_itemClicked(QTableWidgetItem *item);

    void on_SeleaccionadaslistWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_HabitacionesTableWidget_itemClicked(QTableWidgetItem *item);

private:
    //atributos y metodos privados
    Ui::Registro_habitacion *ui;
    int fTH;
    int idRegistro;
    QStringList habitacionesSelected;
    void prepararTabla();
    void llenarTabla();
    void llenarTablaHabitaciones(QString id);
    void habitacionesXRegistro();
    QStringList habitacionesXtipo();
};

#endif // REGISTRO_HABITACION_H
