#include "databasemanager.h"
#include <QSqlQuery>

bool DatabaseManager::open() { //Aquí se delcara la base de datos
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("inventory.db");

    if (!db.open()) //Esto solamente verifica si el programa abrió correctamente o no
        return false;

    QSqlQuery query; //Aquí se da la query necesaria para crear la tabla de la base de datos en caso de que no exista
    query.exec(
        "CREATE TABLE IF NOT EXISTS components ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "name TEXT,"
        "type TEXT,"
        "quantity INTEGER,"
        "location TEXT,"
        "purchase_date TEXT)"
        );

    return true;
}
