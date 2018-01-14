//
// Created by bartek on 1/8/18.
//

#ifndef PRODUCTIONLINE_SIM_PACKAGESENDER_H
#define PRODUCTIONLINE_SIM_PACKAGESENDER_H


#include <vector>
#include "ReceiverPreferences.h"

class PackageSender {
    ReceiverPreferences receiverPreferences;
    std::vector<Package> sendingBuffer;
public:
    PackageSender();
    explicit PackageSender(ElementID);

    void sendPackage();
    Package viewSendingBuffer(); // Package[]
};


#endif //PRODUCTIONLINE_SIM_PACKAGESENDER_H
