//
// Created by bartek on 1/8/18.
//

#ifndef PRODUCTIONLINE_SIM_IPACKAGERECEIVER_H
#define PRODUCTIONLINE_SIM_IPACKAGERECEIVER_H


#include "Types/Package.h"
#include "Types/ReceiverType.h"

class IPackageReceiver {
public:
    virtual void receivePackage(Package) = 0;
    virtual std::deque<Package> viewDepot() const = 0;
    virtual ReceiverType getReceiverType() const = 0;
    virtual ElementID getId() const = 0;
};


#endif //PRODUCTIONLINE_SIM_IPACKAGERECEIVER_H
