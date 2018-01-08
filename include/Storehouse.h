//
// Created by Artur on 08.01.2018.
//

#ifndef PRODUCTIONLINE_SIM_STOREHOUSE_H
#define PRODUCTIONLINE_SIM_STOREHOUSE_H

#include "./Types/types.h"
#include "IPackageDepot.h"

class Storehouse {
    ElementID id;
    IPackageDepot* depot;
public:
    Storehouse(ElementID id) : id(id) {}
};


#endif //PRODUCTIONLINE_SIM_STOREHOUSE_H
