#ifndef GUI_TIPO_HABITACION_H
#define GUI_TIPO_HABITACION_H
//incluir librerias
#include <QDialog>

namespace Ui {
//cleacion de clase interfaz de tipo de habitacion
class gui_tipo_habitacion;
}
//cleacion de clase interfaz de registro tipo de habitacion de QDialog
class gui_tipo_habitacion : public QDialog
{
    Q_OBJECT

public:
    explicit gui_tipo_habitacion(QWidget *parent = nullptr);
    ~gui_tipo_habitacion();//destructor
//stots privados para los botones de la interfaz(metodos)
private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    //atributos privados
    Ui::gui_tipo_habitacion *ui;
};

#endif // GUI_TIPO_HABITACION_H
