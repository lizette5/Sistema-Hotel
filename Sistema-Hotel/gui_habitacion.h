#ifndef GUI_HABITACION_H
#define GUI_HABITACION_H
//incluir librerias
#include <QDialog>

namespace Ui {
class gui_habitacion;
}
//creacion de clase interfaz de habitacion heredando de QDialog
class gui_habitacion : public QDialog
{
    Q_OBJECT

public:
    explicit gui_habitacion(QWidget *parent = nullptr);
    ~gui_habitacion();//destructor
//stots privados para los botones de la interfaz(metodos)
private slots:
    void on_groupBox_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

private:
    //atributos y metodos privados
    Ui::gui_habitacion *ui;
    void fillComboBox();
    void fillComboBox1();
    QStringList tipohabitaciones;
    QStringList estados;
    QString idtipohabitacion;
    QString idestado;
};

#endif // GUI_HABITACION_H
