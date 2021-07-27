/********************************************************************************
** Form generated from reading UI file 'gui_registro_habitacion.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_REGISTRO_HABITACION_H
#define UI_GUI_REGISTRO_HABITACION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_Registro_habitacion
{
public:
    QGroupBox *groupBox;
    QTableWidget *HabitacionesTableWidget;
    QTableWidget *TiposHTableWidget;
    QLabel *label;
    QLabel *label_2;
    QPushButton *CancelarRHButton;
    QPushButton *AceptarRHButton;
    QListWidget *SeleaccionadaslistWidget;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QDialog *Registro_habitacion)
    {
        if (Registro_habitacion->objectName().isEmpty())
            Registro_habitacion->setObjectName(QString::fromUtf8("Registro_habitacion"));
        Registro_habitacion->resize(556, 389);
        Registro_habitacion->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        groupBox = new QGroupBox(Registro_habitacion);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 531, 371));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"	background-color: rgb(255, 255, 127);\n"
"	font: 75 16pt \"Times New Roman\";\n"
"}"));
        HabitacionesTableWidget = new QTableWidget(groupBox);
        HabitacionesTableWidget->setObjectName(QString::fromUtf8("HabitacionesTableWidget"));
        HabitacionesTableWidget->setGeometry(QRect(10, 200, 221, 151));
        HabitacionesTableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        HabitacionesTableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        TiposHTableWidget = new QTableWidget(groupBox);
        TiposHTableWidget->setObjectName(QString::fromUtf8("TiposHTableWidget"));
        TiposHTableWidget->setGeometry(QRect(10, 60, 511, 101));
        TiposHTableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        TiposHTableWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 181, 21));
        label->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 127);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 170, 151, 21));
        label_2->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 127);"));
        CancelarRHButton = new QPushButton(groupBox);
        CancelarRHButton->setObjectName(QString::fromUtf8("CancelarRHButton"));
        CancelarRHButton->setGeometry(QRect(240, 300, 101, 31));
        CancelarRHButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 184, 62);"));
        AceptarRHButton = new QPushButton(groupBox);
        AceptarRHButton->setObjectName(QString::fromUtf8("AceptarRHButton"));
        AceptarRHButton->setGeometry(QRect(240, 250, 101, 31));
        AceptarRHButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 184, 62);"));
        SeleaccionadaslistWidget = new QListWidget(groupBox);
        SeleaccionadaslistWidget->setObjectName(QString::fromUtf8("SeleaccionadaslistWidget"));
        SeleaccionadaslistWidget->setGeometry(QRect(370, 200, 151, 151));
        SeleaccionadaslistWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(370, 170, 131, 21));
        label_3->setStyleSheet(QString::fromUtf8("font: 75 12pt \"Times New Roman\";\n"
"background-color: rgb(255, 255, 127);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(260, 200, 91, 21));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(240, 220, 121, 21));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 127);"));

        retranslateUi(Registro_habitacion);

        QMetaObject::connectSlotsByName(Registro_habitacion);
    } // setupUi

    void retranslateUi(QDialog *Registro_habitacion)
    {
        Registro_habitacion->setWindowTitle(QCoreApplication::translate("Registro_habitacion", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Registro_habitacion", "                                    Elija las habitaciones                           ", nullptr));
        label->setText(QCoreApplication::translate("Registro_habitacion", "Tipo de Habitaciones", nullptr));
        label_2->setText(QCoreApplication::translate("Registro_habitacion", "Habitaciones Disponibles", nullptr));
        CancelarRHButton->setText(QCoreApplication::translate("Registro_habitacion", "CANCELAR", nullptr));
        AceptarRHButton->setText(QCoreApplication::translate("Registro_habitacion", "ACEPTAR", nullptr));
        label_3->setText(QCoreApplication::translate("Registro_habitacion", "Hab. Seleccionadas", nullptr));
        label_4->setText(QCoreApplication::translate("Registro_habitacion", "Nota:Usted debe ", nullptr));
        label_5->setText(QCoreApplication::translate("Registro_habitacion", "seleccionar la habitaci\303\263n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registro_habitacion: public Ui_Registro_habitacion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_REGISTRO_HABITACION_H
