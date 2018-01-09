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
    Package pop();
    QueueType getQueueType();
};


#endif //PRODUCTIONLINE_SIM_IPACKAGEQUEUE_H
