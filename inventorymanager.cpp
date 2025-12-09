#include "inventorymanager.h"
#include "databasemanager.h"
#include <QSqlQuery>

bool InventoryManager::init() {
    DatabaseManager db;
    return db.open();
}

void InventoryManager::addComponent(const Component& c) {
    QSqlQuery query;
    query.prepare( //Esta parte es la que se utiliza para agregar los componentes, almacenando los valores que se den en los lineText
        "INSERT INTO components "
        "(name, type, quantity, location, purchase_date) "
        "VALUES (?, ?, ?, ?, ?)"
        );
    //Aqui simplemente se le está asignando cada uno de los valores necesarios a los lineText
    query.addBindValue(c.name);
    query.addBindValue(c.type);
    query.addBindValue(c.quantity);
    query.addBindValue(c.location);
    query.addBindValue(c.purchaseDate);

    query.exec();
}
