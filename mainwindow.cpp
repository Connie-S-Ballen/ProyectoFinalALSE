#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTableWidgetItem>
#include <QSqlQuery>
#include <QMessageBox>
#include "reportgenerator.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    inventory.init();
    //Esta sección se encarga de crear la UI de la tabla que muestra los componentes en la base de datos
    ui->tablaArticulos->setColumnCount(5);
    ui->tablaArticulos->setHorizontalHeaderLabels(
        {"Nombre", "Tipo", "Cantidad", "Ubicación", "Adquisición"}
        );
    cargarDatos();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_agregar_clicked() { //Aquí se le da uso al botón de 'Agregar artículo' al ser clickeado
    Component c;
    c.name = ui->nombreA->text(); //Estas lineas se encargan de asignar lo escrito en los lineText al objeto para incluir el elemento en la base de datos
    c.type = ui->tipoA->text();
    c.quantity = ui->cantidadA->text().toInt();
    c.location = ui->ubicacionA->text();
    c.purchaseDate = ui->fechaA->text();

    inventory.addComponent(c);

    int row = ui->tablaArticulos->rowCount();
    ui->tablaArticulos->insertRow(row);
    //Aquí se le asignan los respectivos espacios dentro de la tabla a cada característica del objeto
    ui->tablaArticulos->setItem(row, 0, new QTableWidgetItem(c.name));
    ui->tablaArticulos->setItem(row, 1, new QTableWidgetItem(c.type));
    ui->tablaArticulos->setItem(row, 2, new QTableWidgetItem(QString::number(c.quantity)));
    ui->tablaArticulos->setItem(row, 3, new QTableWidgetItem(c.location));
    ui->tablaArticulos->setItem(row, 4, new QTableWidgetItem(c.purchaseDate));
}

void MainWindow::on_lupa_clicked() //Esta función se encarga de darle el uso al botón de busqueda (la lupa)
    {
        QString texto = ui->barraBuscar->text().trimmed(); //Aquí se toma en cuenta el texto del lineText de la barra de busqueda

        for (int i = 0; i < ui->tablaArticulos->rowCount(); i++)//Aquí se comienza a recorrer la base de datos
            ui->tablaArticulos->setRowHidden(i, false);

        if (texto.isEmpty())
            return;

        for (int fila = 0; fila < ui->tablaArticulos->rowCount(); fila++) {
            bool mostrar = false;

            for (int col = 0; col <= 1; col++) {
                QTableWidgetItem *item = ui->tablaArticulos->item(fila, col); //Aquí se seleccionan las casillas de la base de datos que coinciden con el texto de la barra de busqueda

                if (item && item->text().contains(texto, Qt::CaseInsensitive)) { //Este if se encarga de mostrar las seleccionadas anteriormente
                    mostrar = true;
                    break;
                }
            }

            ui->tablaArticulos->setRowHidden(fila, !mostrar); //Esta linea oculta todas las casillas que no hacen parte de las seleccionadas
        }
}

void MainWindow::cargarDatos() //Esta función carga los datos de la base de datos al abrir el programa
{
    QSqlQuery query("SELECT name, type, quantity, location, purchase_date FROM components");

    int stockBajo = 0; //Aquí se aprovecha la carga de datos para ver cuales elementos tienen un stock bajo
    ui->tablaArticulos->setRowCount(0); //Esto se encarga de hacer reset a las filas para cargar de 0 los datos

    while (query.next()) { //Este while es el encargado de ir cargando los datos por filas
        int fila = ui->tablaArticulos->rowCount();
        ui->tablaArticulos->insertRow(fila);

        ui->tablaArticulos->setItem(fila, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tablaArticulos->setItem(fila, 1, new QTableWidgetItem(query.value(1).toString()));
        ui->tablaArticulos->setItem(fila, 2, new QTableWidgetItem(query.value(2).toString()));
        ui->tablaArticulos->setItem(fila, 3, new QTableWidgetItem(query.value(3).toString()));
        ui->tablaArticulos->setItem(fila, 4, new QTableWidgetItem(query.value(4).toString()));

        if (query.value(2).toInt() <= 8){ //Esta parte define un minimo para considerar que existe un stock bajo
            stockBajo++; //Si el stock es menor al mínimo, esta variable aumenta
        }
    }

    if(stockBajo > 0){ //Y aquí se utiliza el valor de la variable para notificar al usuario que existen elementos con stock bajo
        QMessageBox::warning(
            this,
            "Alerta de Stock",
            "Hay articulos con stock bajo"
        );
    }
}

void MainWindow::on_CSV_clicked() //Esta función se encarga de hacer funcional el botón de 'Exportar CSV'
{
    ReportGenerator::exportCSV(); //Aquí se llama la función declarada en el header

    QMessageBox::information(//Esta función se encarga de notificar al usuario que el archivo se creó con exito
        this,
        "Reporte",
        "Reporte CSV generado correctamente"
        );
}

