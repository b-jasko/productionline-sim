//
// Created by Artur on 08.01.2018.
//

#ifndef PRODUCTIONLINE_SIM_STOREHOUSE_H
#define PRODUCTIONLINE_SIM_STOREHOUSE_H

#include <vector>
#include "Types/types.h"
#include "IPackageDepot.h"
#include "Types/Package.h"
#include "IPackageReceiver.h"
#include "Types/ReceiverType.h"

class Storehouse : IPackageReceiver{
    ElementID id;
    IPackageDepot* packageDepot;
    std::deque<Package> packageQueue;
public:
    explicit Storehouse(ElementID);
    void receivePackage(Package) override;
    std::deque<Package> viewDepot() const override;
    ReceiverType getReceiverType() const override;
    ElementID getId() const override;
};


#endif //PRODUCTIONLINE_SIM_STOREHOUSE_H
