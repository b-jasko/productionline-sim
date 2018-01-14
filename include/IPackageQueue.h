//
// Created by bartek on 1/8/18.
//

#ifndef PRODUCTIONLINE_SIM_IPACKAGEQUEUE_H
#define PRODUCTIONLINE_SIM_IPACKAGEQUEUE_H


#include "Types/Package.h"
#include "IPackageDepot.h"
#include "Types/QueueType.h"

class IPackageQueue : public IPackageDepot{
public:
    virtual Package pop() = 0;
    virtual QueueType getQueueType() = 0;
};


#endif //PRODUCTIONLINE_SIM_IPACKAGEQUEUE_H
