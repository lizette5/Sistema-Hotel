//incluir librerias
#include "gui_index_registro.h"
#include "ui_gui_index_registro.h"

#include <QMessageBox>
#include <QComboBox>
#include <QStringList>
#include <QSpinBox>
#include <QDebug>
#include <QSqlError>

#include "gui_registro.h"
#include "registro_crud.h"
#include "registro_habitacion_crud.h"
#include "conexion.h"
#include "utils.h"
#include "gui_edit_registro.h"
//desarrollo de metodo de la interfaz de index registro
Gui_Index_Registro::Gui_Index_Registro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gui_Index_Registro)
{
    ui->setupUi(this);
    this->setFixedSize(QSize(627, 408));
    f = -1;
    ui->tableListRegistros->setEditTriggers(QAbstractItemView::NoEditTriggers);
    mostrarDatos();
}
//destructor
Gui_Index_Registro::~Gui_Index_Registro()
{
    delete ui;
}
//desarrollo de metodos de slots los bton
void Gui_Index_Registro::on_Regresar__clicked()
{
    close();//Permite cerra la ventana actual abierta
}
//desarrollo de metodo mostrar dats
void Gui_Index_Registro::mostrarDatos(){
    prepararTabla();
    cargarTabla();
}
//desarrollo de metodos
void Gui_Index_Registro::prepararTabla(){
    //----Preparar Tabla----
    ui->tableListRegistros->setColumnCount(5);
    //lista de la tabla nombres de cabeceras
    QStringList l;
    l<<"ID"<<"Cliente"<<"Cant. Hab."<<"F. Ingreso"<<"F. Salida";
    ui->tableListRegistros->setHorizontalHeaderLabels(l);
    ui->tableListRegistros->setColumnWidth(0,20);
    ui->tableListRegistros->setColumnWidth(1,100);
    ui->tableListRegistros->setColumnWidth(2,100);
    ui->tableListRegistros->setColumnWidth(3,90);
    ui->tableListRegistros->setColumnWidth(4,90);
    //---Fin Tabla---
}

/**
 * @brief Gui_Index_Registro::cargarTabla
 * Carga los datos de las base de datos registro
 */
//cargado datos de la misma bd
void Gui_Index_Registro::cargarTabla(){
    Conexion conn1;
    conn1.Conectar();
    //buscando en nuestra tabla de bd
    QString query1 = "SELECT idregistro FROM registros";
    QSqlQuery sql;
    sql.exec(query1);
    QStringList ids;
    while(sql.next()){
        ids.append(sql.value(0).toByteArray());
    }
    conn1.Cerrar();
    Utils u;
    QStringList cantH;
    for(QString str:ids){
        cantH.append(QString::number(u._contar("registro_habitacion", "WHERE idregistro = "+str)));
    }
    Conexion conn;
    conn.Conectar();
    //realizando consulta en  nuestra bd
    QSqlQuery query_consulta;
    QString query = "SELECT idregistro, nombre, registros.fechae, registros.fechas "
                    "FROM ((personas INNER JOIN clientes ON idpersona = id_persona) "
                    "INNER JOIN registros ON clientes.id_persona = registros.idpersona_c) ORDER BY idregistro ASC;";
    query_consulta.exec(query);
    int fila = 0;
    ui->tableListRegistros->setRowCount(0);
    while(query_consulta.next()){
        //QString cantH = QString::number(u._contar("registro_habitacion", "WHERE idregistro = "+query_consulta.value(0).toByteArray()));
        ui->tableListRegistros->insertRow(fila);
        ui->tableListRegistros->setItem(fila, 0, new QTableWidgetItem(query_consulta.value(0).toByteArray().constData()));
        ui->tableListRegistros->setItem(fila, 1, new QTableWidgetItem(query_consulta.value(1).toByteArray().constData()));
        ui->tableListRegistros->setItem(fila, 2, new QTableWidgetItem(cantH.at(fila)));
        ui->tableListRegistros->setItem(fila, 3, new QTableWidgetItem(query_consulta.value(2).toByteArray().constData()));
        ui->tableListRegistros->setItem(fila, 4, new QTableWidgetItem(query_consulta.value(3).toByteArray().constData()));
        fila++;
    }
    conn.Cerrar();
}

void Gui_Index_Registro::on_tableListRegistros_itemClicked(QTableWidgetItem *item)
{
    f=item->row();
}
//desarrollo de metodos de slots los bton
void Gui_Index_Registro::on_New_Registro_Button_clicked()
{
    Gui_Registro guiR;
    guiR.setModal(true);
    guiR.exec();
    mostrarDatos();
}
//desarrollo de metodos de slots los bton
void Gui_Index_Registro::on_edit_registros_button_clicked()
{
    if(f != -1){
        GUI_Edit_Registro geR;
        geR.setEditRegistro(f);
        geR.setModal(true);
        geR.exec();
        mostrarDatos();
    }else{
        QMessageBox::warning(this, "Advertencia", "Debe seleccionar un dato.");
    }
}
//desarrollo de metodos de slots los bton
void Gui_Index_Registro::on_delete_registros_button_clicked()
{
    QMessageBox::StandardButton action;
    action = QMessageBox::question(this, "Cuidado", "¿Está seguro que desa borrar el dato?");
    if(action == QMessageBox::Yes){
        Utils u;
        QStringList ids = u.getIds("idhabitacion", "registro_habitacion","idregistro = "+ui->tableListRegistros->item(f, 0)->text());
        for(QString id:ids){
            u.updateEstado("habitaciones", "idestado = 1", "idhabitacion = "+id);
        }
        Registro_CRUD rc;

        rc.deleteRegistro(ui->tableListRegistros->item(f, 0)->text().toInt());
        Registro_Habitacion_CRUD rhc;
        rhc.DeleteRegistro_Habitacion(ui->tableListRegistros->item(f, 0)->text());
        f=-1;
        mostrarDatos();
    }
}
