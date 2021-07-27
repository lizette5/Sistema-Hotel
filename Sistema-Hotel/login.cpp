#include "login.h"
#include "ui_login.h"
#include "registraradmin.h"
#include "persona_crud.h"
#include "empleado.h"
#include "conexion.h"
//incluir libreiras
#include "singleton.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QRegExpValidator>
//desarrollo para mostar la interfaz de login
Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    this->setFixedSize(QSize(440,267));//tamano de ventana
    ui->contraLineEdit->setEchoMode(QLineEdit::Password);
    compruebaAdmin();
    ui->usuarioNormalRadioButton->setChecked(true);
    //Inicio Ayuda para ingreso de datos
    //desarrollado por expresiones regulares
            QRegExp exp_dni("[0-9]{8}");
            ui->usuarioLineEdit->setValidator(new QRegExpValidator(exp_dni, this));
        //Fin Ayuda
}
//destructor de interfaz
Login::~Login()
{
    delete ui;
}
//desarrollo de metodo get
int Login::getUsuarioLog()
{
    return dniUserLog;
}
//desarrollo de metodos de slots los bton aceptar
void Login::on_buttonBox_accepted()
{
    Conexion conn;
    QString DNI_str = ui->usuarioLineEdit->text();
    QString contra_str = ui->contraLineEdit->text();
    int cantidad;
    conn.Conectar();
    if(ui->usuarioNormalRadioButton->isChecked()){
        QSqlQuery query_consulta;
        QString consulta="SELECT count(*) FROM personas INNER JOIN empleados WHERE dni = "+DNI_str+" AND contra = '"+ contra_str+"';";
        query_consulta.exec(consulta);
        query_consulta.next();
        cantidad = query_consulta.value(0).toInt();
       if(cantidad == 0){
          QMessageBox::warning(this, "Aviso","Usuario y/o contraseña incorrectos");
           return;
        }
        mTipo = USUARIO;
    }else{
        QSqlQuery query_consulta;
        QString consulta="SELECT count(*) FROM personas INNER JOIN administrador WHERE dni = "+DNI_str+" AND contrasena = '"+ contra_str+"';";
        query_consulta.exec(consulta);
        query_consulta.next();
        cantidad = query_consulta.value(0).toInt();
        if(cantidad == 0){
            QMessageBox::warning(this, "Aviso","Usuario y/o contraseña incorrectos");
            return;
        }
        mTipo = ADMINISTRADOR;;
    }
    //Almacenar DNI de usuario logueado
    dniUserLog = stoi(DNI_str.toLocal8Bit().data());
    singleton *s1 = singleton::instance();
    s1->setDNI(dniUserLog);
    //Cierro BD
    conn.Cerrar();
    accept();
}
//desarrollo de metodos de slots los bton cancelado o rechazado
void Login::on_buttonBox_rejected()
{
    reject();
}
//desarrollo de metodos de slots los bton registarr admin
void Login::on_registrarAdminPushButton_clicked()
{
    Persona_CRUD pcrud;
    Conexion conn;
    RegistrarAdmin d(this);
    if (d.exec() == QDialog::Rejected){
        return;
    }
    auto admin = d.getAdmin();
    conn.Conectar();
    QSqlQuery q;
    QString contra=QString::fromLocal8Bit(admin.getContra().c_str());
    q.exec(QString("INSERT INTO administrador (id_persona, contrasena) VALUES ("+QString::number(admin.getId())+", '"+contra+"');"));
    compruebaAdmin();
    pcrud.createPersona(admin);
    conn.Cerrar();
}
//desarrollo de metodos comprobacion de admi
void Login::compruebaAdmin()
{
    Conexion conn;
    conn.Conectar();
    QSqlQuery q;
    //seleccion en la bd
    q.exec("SELECT count(*) FROM administrador;");
    q.next();
    const int cantidadAdmins = q.value(0).toInt();
    //condicional verificar cantidad de admin puede ser 1 o 2 ...
    if(cantidadAdmins != 2){
        ui-> registrarAdminPushButton->setEnabled(true);
    }
    else{
         ui-> registrarAdminPushButton->setEnabled(false);
    }
    conn.Cerrar();
}

