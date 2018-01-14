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
    QueueType queueType;
    std::deque<Package> deque;
    std::function<Package()> _popFunction;
public:
    explicit PackageQueue(QueueType _queueType);
    bool isEmpty();
    int size() override;
    void push(Package _package);
    QueueType getQueueType();
    Package pop();
    std::deque<Package> view();
};


#endif //PRODUCTIONLINE_SIM_PACKAGEQUEUE_H
