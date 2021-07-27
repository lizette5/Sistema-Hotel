#ifndef LOGIN_H
#define LOGIN_H
//incluir libreria
#include <QDialog>

namespace Ui {
//cleacion de clase interfaz de login
class Login;
}
//cleacion de clase interfaz de login heredado de QDialog
class Login : public QDialog
{
    Q_OBJECT

public:
    //definciion tipo usuario (empleado),administrador
    enum Tipo
    {
        USUARIO, ADMINISTRADOR
    };
    explicit Login(QWidget *parent = nullptr);
    ~Login();//destructor
    int getTipo() const{return mTipo; } //metodo get
    int getUsuarioLog();// metodo get

//stots privados para los botones de la interfaz(metodos)
private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_registrarAdminPushButton_clicked();
private:
    //atributos y metodo privados
    void compruebaAdmin();
    Ui::Login *ui;
    int mTipo; //tipo emplead o admi
    int dniUserLog; //dni de usuario
};

#endif // LOGIN_H
