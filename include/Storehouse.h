//
// Created by Artur on 08.01.2018.
//

#ifndef PRODUCTIONLINE_SIM_STOREHOUSE_H
#define PRODUCTIONLINE_SIM_STOREHOUSE_H

#include "Types/types.h"
#include "IPackageDepot.h"
#include "Types/Package.h"
#include "IPackageReceiver.h"

class Storehouse : IPackageReceiver{
    ElementID id;
    IPackageDepot* depot;
public:
    Storehouse(ElementID);
    void receivePackage(Package);
    Package* viewDepot();
    ElementID getId();


};


#endif //PRODUCTIONLINE_SIM_STOREHOUSE_H
