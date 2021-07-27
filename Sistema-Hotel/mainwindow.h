#ifndef MAINWINDOW_H
#define MAINWINDOW_H
//incluir libreria
#include <QMainWindow>

QT_BEGIN_NAMESPACE

namespace Ui {
class MainWindow;
}

QT_END_NAMESPACE
//cleacion de clase interfaz de main heredado de QMainWindow que es de QT
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(int tipo, QWidget *parent = nullptr);//constructor
    ~MainWindow();//destructor
//stots privados para los botones de la interfaz(metodos)
private slots:
    void on_Usuarios_button_clicked();
    void on_Registros_button_clicked();
    void on_Habitacions_button_clicked();
    void on_Empleados_button_clicked();
    void on_LogOutPushButton_clicked();

private:
    //atributo y metodo privado
    Ui::MainWindow *ui;
    void nuevoLogin();
};
#endif // MAINWINDOW_H
