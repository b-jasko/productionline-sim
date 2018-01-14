//
// Created by bartek on 1/8/18.
//

#ifndef PRODUCTIONLINE_SIM_PACKAGEQUEUE_H
#define PRODUCTIONLINE_SIM_PACKAGEQUEUE_H

#include <deque>
#include <functional>
#include "Types/QueueType.h"
#include "IPackageQueue.h"
#include "Types/Package.h"

class PackageQueue: public IPackageQueue {
    QueueType queueType;
    std::deque<Package> deque;
    std::function<Package()> _popFunction;
public:
    explicit PackageQueue(QueueType _queueType);
    bool isEmpty();
    int size() const override;
    void push(Package _package) override;
    QueueType getQueueType();
    Package pop() override;
    std::deque<Package> view() const override;
};


#endif //PRODUCTIONLINE_SIM_PACKAGEQUEUE_H
