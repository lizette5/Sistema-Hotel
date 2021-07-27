#ifndef GUI_EDIT_REGISTRO_H
#define GUI_EDIT_REGISTRO_H

//incluir librerias
#include <QDialog>
#include <QStringList>
namespace Ui {
//creacion de la clase interfaz de editar registro
class GUI_Edit_Registro;
}
//creacion de la clase interfaz de editar registro heredando de QDialoag que es parte de QT
class GUI_Edit_Registro : public QDialog
{
    Q_OBJECT

public:
    explicit GUI_Edit_Registro(QWidget *parent = nullptr);
    void setEditRegistro(int _id);
    ~GUI_Edit_Registro();//destructor
//stots privados para los botones de la interfaz(metodos)
private slots:
    void on_Editar_Button_clicked();

    void on_Cancelar_button_clicked();

    void on_habit_Edit_Button_clicked();

private:
    //atributos privados
    Ui::GUI_Edit_Registro *ui;
    QStringList habitacionesOri;
    //metodos
    int idRegistroEdit;
    void cargarDatos();
};

#endif // GUI_EDIT_REGISTRO_H
