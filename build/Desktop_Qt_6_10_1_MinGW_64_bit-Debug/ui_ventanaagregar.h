/********************************************************************************
** Form generated from reading UI file 'ventanaagregar.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANAAGREGAR_H
#define UI_VENTANAAGREGAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_VentanaAgregar
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;

    void setupUi(QDialog *VentanaAgregar)
    {
        if (VentanaAgregar->objectName().isEmpty())
            VentanaAgregar->setObjectName("VentanaAgregar");
        VentanaAgregar->resize(344, 208);
        label = new QLabel(VentanaAgregar);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 61, 21));
        lineEdit = new QLineEdit(VentanaAgregar);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 20, 191, 22));
        label_2 = new QLabel(VentanaAgregar);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 50, 61, 21));
        lineEdit_2 = new QLineEdit(VentanaAgregar);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(140, 50, 191, 22));
        lineEdit_3 = new QLineEdit(VentanaAgregar);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(140, 80, 191, 22));
        lineEdit_4 = new QLineEdit(VentanaAgregar);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(140, 110, 191, 22));
        label_3 = new QLabel(VentanaAgregar);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 80, 49, 16));
        label_4 = new QLabel(VentanaAgregar);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 110, 111, 16));
        label_5 = new QLabel(VentanaAgregar);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 140, 121, 16));
        lineEdit_5 = new QLineEdit(VentanaAgregar);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(140, 140, 191, 22));
        pushButton = new QPushButton(VentanaAgregar);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(220, 170, 111, 24));

        retranslateUi(VentanaAgregar);

        QMetaObject::connectSlotsByName(VentanaAgregar);
    } // setupUi

    void retranslateUi(QDialog *VentanaAgregar)
    {
        VentanaAgregar->setWindowTitle(QCoreApplication::translate("VentanaAgregar", "Agregar Art\303\255culo", nullptr));
        label->setText(QCoreApplication::translate("VentanaAgregar", "Nombre", nullptr));
        label_2->setText(QCoreApplication::translate("VentanaAgregar", "Tipo", nullptr));
        label_3->setText(QCoreApplication::translate("VentanaAgregar", "Cantidad", nullptr));
        label_4->setText(QCoreApplication::translate("VentanaAgregar", "Ubicaci\303\263n", nullptr));
        label_5->setText(QCoreApplication::translate("VentanaAgregar", "Fecha de adquisici\303\263n", nullptr));
        pushButton->setText(QCoreApplication::translate("VentanaAgregar", "Agregar art\303\255culo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VentanaAgregar: public Ui_VentanaAgregar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANAAGREGAR_H
