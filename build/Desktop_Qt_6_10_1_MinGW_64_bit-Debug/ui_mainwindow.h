/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *buscar;
    QLineEdit *barraBuscar;
    QPushButton *lupa;
    QLabel *tituloTabla;
    QTableWidget *tablaArticulos;
    QLineEdit *nombreA;
    QLabel *nombre;
    QLabel *tipo;
    QLineEdit *tipoA;
    QLabel *cantidad;
    QLineEdit *cantidadA;
    QLabel *ubicacion;
    QLineEdit *ubicacionA;
    QLabel *fecha;
    QLineEdit *fechaA;
    QPushButton *agregar;
    QPushButton *CSV;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(791, 411);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        buscar = new QLabel(centralwidget);
        buscar->setObjectName("buscar");
        buscar->setGeometry(QRect(10, 10, 49, 16));
        barraBuscar = new QLineEdit(centralwidget);
        barraBuscar->setObjectName("barraBuscar");
        barraBuscar->setGeometry(QRect(50, 10, 281, 22));
        lupa = new QPushButton(centralwidget);
        lupa->setObjectName("lupa");
        lupa->setGeometry(QRect(330, 10, 31, 24));
        tituloTabla = new QLabel(centralwidget);
        tituloTabla->setObjectName("tituloTabla");
        tituloTabla->setGeometry(QRect(10, 40, 121, 21));
        tablaArticulos = new QTableWidget(centralwidget);
        if (tablaArticulos->columnCount() < 5)
            tablaArticulos->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablaArticulos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablaArticulos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablaArticulos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablaArticulos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablaArticulos->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tablaArticulos->setObjectName("tablaArticulos");
        tablaArticulos->setGeometry(QRect(10, 60, 511, 291));
        tablaArticulos->setShowGrid(true);
        tablaArticulos->verticalHeader()->setVisible(false);
        nombreA = new QLineEdit(centralwidget);
        nombreA->setObjectName("nombreA");
        nombreA->setGeometry(QRect(530, 80, 251, 22));
        nombre = new QLabel(centralwidget);
        nombre->setObjectName("nombre");
        nombre->setGeometry(QRect(530, 60, 49, 16));
        tipo = new QLabel(centralwidget);
        tipo->setObjectName("tipo");
        tipo->setGeometry(QRect(530, 110, 49, 16));
        tipoA = new QLineEdit(centralwidget);
        tipoA->setObjectName("tipoA");
        tipoA->setGeometry(QRect(530, 130, 251, 22));
        cantidad = new QLabel(centralwidget);
        cantidad->setObjectName("cantidad");
        cantidad->setGeometry(QRect(530, 160, 49, 16));
        cantidadA = new QLineEdit(centralwidget);
        cantidadA->setObjectName("cantidadA");
        cantidadA->setGeometry(QRect(530, 180, 251, 22));
        ubicacion = new QLabel(centralwidget);
        ubicacion->setObjectName("ubicacion");
        ubicacion->setGeometry(QRect(530, 210, 81, 16));
        ubicacionA = new QLineEdit(centralwidget);
        ubicacionA->setObjectName("ubicacionA");
        ubicacionA->setGeometry(QRect(530, 230, 251, 22));
        fecha = new QLabel(centralwidget);
        fecha->setObjectName("fecha");
        fecha->setGeometry(QRect(530, 260, 141, 16));
        fechaA = new QLineEdit(centralwidget);
        fechaA->setObjectName("fechaA");
        fechaA->setGeometry(QRect(530, 280, 251, 22));
        agregar = new QPushButton(centralwidget);
        agregar->setObjectName("agregar");
        agregar->setGeometry(QRect(680, 320, 101, 24));
        CSV = new QPushButton(centralwidget);
        CSV->setObjectName("CSV");
        CSV->setGeometry(QRect(530, 320, 101, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 791, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Sistema de inventario", nullptr));
        buscar->setText(QCoreApplication::translate("MainWindow", "Buscar", nullptr));
        lupa->setText(QCoreApplication::translate("MainWindow", "\360\237\224\216", nullptr));
        tituloTabla->setText(QCoreApplication::translate("MainWindow", "TABLA DE ART\303\215CULOS", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablaArticulos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablaArticulos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Tipo", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablaArticulos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Cantidad", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablaArticulos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Ubicaci\303\263n", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablaArticulos->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Adquisici\303\263n", nullptr));
        nombre->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        tipo->setText(QCoreApplication::translate("MainWindow", "Tipo", nullptr));
        cantidad->setText(QCoreApplication::translate("MainWindow", "Cantidad", nullptr));
        ubicacion->setText(QCoreApplication::translate("MainWindow", "Ubicaci\303\263n", nullptr));
        fecha->setText(QCoreApplication::translate("MainWindow", "Fecha de adquisici\303\263n", nullptr));
        agregar->setText(QCoreApplication::translate("MainWindow", "Agregar art\303\255culo", nullptr));
        CSV->setText(QCoreApplication::translate("MainWindow", "Exportar CSV", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
