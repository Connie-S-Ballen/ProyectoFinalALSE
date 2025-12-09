#include "reportgenerator.h"
#include <QSqlQuery>
#include <QFile>
#include <QTextStream>

void ReportGenerator::exportCSV()
{
    QFile file("inventario.csv"); //Aqui se crea el archivo CSV

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        return; //Esto verifica que el archivo se creó exitosamente
    }

    QTextStream out(&file);

    out << "Nombre,Tipo,Cantidad,Ubicacion,Fecha\n"; //aquí se enlistan las caracteristicas que se agregan en el archivo CSV

    QSqlQuery query("SELECT name, type, quantity, location, purchase_date FROM components"); //Y aquí se sacan de la base de datos

    while (query.next()) { //Aquí se utiliza el while para agregar todos los elementos (o los componentes) que se encuentren en la base de datos
        out << query.value(0).toString() << ","
            << query.value(1).toString() << ","
            << query.value(2).toInt() << ","
            << query.value(3).toString() << ","
            << query.value(4).toString() << "\n";
    }

    file.close();
}
