//
// Created by Artur on 08.01.2018.
//

#ifndef PRODUCTIONLINE_SIM_WORKER_H
#define PRODUCTIONLINE_SIM_WORKER_H

#include "Factory.h"
#include "Types/types.h"
#include "IPackageQueue.h"
#include "PackageSender.h"
#include "Types/Package.h"
#include "Types/ReceiverType.h"


class Worker : public PackageSender, public IPackageReceiver{
    ElementID id;
    TimeOffset processingDuration;
    Time packageProcessingStartTime;
    IPackageQueue* queue;
    std::vector<Package> currentlyProccessedPackage;
public:
    Worker(ElementID, TimeOffset, IPackageQueue*);
    void receivePackage(Package);
    std::deque<Package> viewQueue() const;
    void doWork();

    TimeOffset getProcessingDuration() const;
    Time getPackageProcessingStartTime() const;
    ReceiverType getReceiverType() const override;
    ElementID getId() const override;
};




#endif //PRODUCTIONLINE_SIM_WORKER_H
