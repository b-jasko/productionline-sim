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
    virtual bool empty() const = 0;
    virtual int size() const = 0;
    virtual std::deque<Package> view() const = 0;
};


#endif //PRODUCTIONLINE_SIM_IPACKAGEDEPOT_H
