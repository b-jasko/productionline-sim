//
// Created by Artur on 08.01.2018.
//

#ifndef PRODUCTIONLINE_SIM_IPACKAGEDEPOT_H
#define PRODUCTIONLINE_SIM_IPACKAGEDEPOT_H


#include "Types/Package.h"

class IPackageDepot {
    void push(Package);
    bool empty();
    bool size();
    Package* view();
};


#endif //PRODUCTIONLINE_SIM_IPACKAGEDEPOT_H
