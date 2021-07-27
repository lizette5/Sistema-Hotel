//incluir librerias
#include <QDialog>
#include <QTableWidget>

namespace Ui {
//creacion de clase interfaz de estado de habitacion
class gui_estado_habitacion;
}

//creacion de clase interfaz de estado de habitacion heredando de QDialog
class gui_estado_habitacion : public QDialog
{
    Q_OBJECT

public:
    explicit gui_estado_habitacion(QWidget *parent = nullptr);
    ~gui_estado_habitacion();//destructor
//stots privados para los botones de la interfaz(metodos)
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::gui_estado_habitacion *ui;
    void fillComboBox(); //metodo
    QStringList estados;
    QString idestado;
};


