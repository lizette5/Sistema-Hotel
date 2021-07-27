#ifndef GUI_REGISTRO_H
#define GUI_REGISTRO_H
//incluir librerias
#include <string>
#include <QDialog>
#include <QStringList>

namespace Ui {
//creacion de clase interfaz de registro
class Gui_Registro;
}
//cleacion de clase interfaz de registro heredando de QDialog
class Gui_Registro : public QDialog
{
    Q_OBJECT

public:
    //metodos
    explicit Gui_Registro(QWidget *parent = nullptr);
    void setHabitacionesSelected(QStringList _habSelec);
    QStringList getHabitacionesSelected() const;
    ~Gui_Registro();//destrucctor
//stots privados para los botones de la interfaz(metodos)
private slots:
    void on_Registrar_button_clicked();

    void on_Cancelar_button_clicked();

    void on_Hab_Reg_Button_clicked();

    void on_Registrar_button_2_clicked();

    void on_Cliente_cmbox_currentIndexChanged(int index);

private:
    //atributos y metodos privados
    Ui::Gui_Registro *ui;
    QStringList clientes_nomape;
    QStringList clientes_id;
    QStringList habitacionesSelected;
    int canthabitaciones;
    void fillComboBox();
    QString nroFactura;
        std::string NameFactura;
        std::string factura;
        bool flag=false;
};

#endif // GUI_REGISTRO_H
