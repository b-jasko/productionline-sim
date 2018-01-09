//
// Created by Artur on 08.01.2018.
//

#ifndef PRODUCTIONLINE_SIM_PACKAGE_H
#define PRODUCTIONLINE_SIM_PACKAGE_H

#include "types.h"

class Package {
    ElementID id;
    ElementID  packageCounter;      //W UML-u podkreślone
public:
    Package();
    Package(ElementID);
    ElementID getID;

};


#endif //PRODUCTIONLINE_SIM_PACKAGE_H
