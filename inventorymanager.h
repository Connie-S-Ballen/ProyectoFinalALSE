#ifndef INVENTORYMANAGER_H
#define INVENTORYMANAGER_H

#include "component.h"

class InventoryManager {
public:
    bool init();
    //Aquí se declara la función que se utiliza después para agregar componentes a la base de datos
    void addComponent(const Component& c);
};

#endif
