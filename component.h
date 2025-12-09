#ifndef COMPONENT_H
#define COMPONENT_H

#include <QString>

class Component {
    //Aquí se definen las características de los componentes para agregarlos a la base de datos
public:
    QString name;
    QString type;
    int quantity;
    QString location;
    QString purchaseDate;
    //esta última linea crea el destructor para el objeto que se crea
    ~Component();
};

#endif
