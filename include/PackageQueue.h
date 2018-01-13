//
// Created by bartek on 1/8/18.
//

#ifndef PRODUCTIONLINE_SIM_PACKAGEQUEUE_H
#define PRODUCTIONLINE_SIM_PACKAGEQUEUE_H

#include <deque>
#include <functional>
#include "Types/QueueType.h"
#include "IPackageQueue.h"

class PackageQueue: public IPackageQueue {
    QueueType QueueType;
    std::deque<Package> deque;
    std::function<Package()> _popfunction;
public:
    PackageQueue(QueueType);
    bool isEmpty();
};


#endif //PRODUCTIONLINE_SIM_PACKAGEQUEUE_H
