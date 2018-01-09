//
// Created by bartek on 1/8/18.
//

#ifndef PRODUCTIONLINE_SIM_IPACKAGERECEIVER_H
#define PRODUCTIONLINE_SIM_IPACKAGERECEIVER_H


#include "Types/Package.h"
#include "Types/ReceiverType.h"

class IPackageReceiver {
public:
    void receivePackage(Package);
    Package viewDepot(); // []?
    ReceiverType getReceiverType();
    ElementID getId();
};


#endif //PRODUCTIONLINE_SIM_IPACKAGERECEIVER_H
