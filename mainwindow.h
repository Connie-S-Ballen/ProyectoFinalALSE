#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "inventorymanager.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //Aquí se declara la función que nos ayuda a guardar y mantener la info de la base de datos
    void cargarDatos();

private slots:
    //Aquí se delcaran las funciones para que los botónes hagan su trabajo
    void on_agregar_clicked();
    void on_lupa_clicked();
    void on_CSV_clicked();

private:
    Ui::MainWindow *ui;
    InventoryManager inventory;
};

#endif
