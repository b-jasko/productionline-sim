//
// Created by Artur on 08.01.2018.
//

#ifndef PRODUCTIONLINE_SIM_IPACKAGEDEPOT_H
#define PRODUCTIONLINE_SIM_IPACKAGEDEPOT_H


#include <deque>
#include "Types/Package.h"

class IPackageDepot {
public:
    virtual void push(Package) = 0;
    virtual bool empty() = 0;
    virtual int size() = 0;
    virtual std::deque<Package> view() = 0;
};


#endif //PRODUCTIONLINE_SIM_IPACKAGEDEPOT_H
