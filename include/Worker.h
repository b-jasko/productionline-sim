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
    Package* viewQueue();
    void doWork();
    TimeOffset getProcessingDuration();
    Time getPackageProcessingStartTime();
    ReceiverType getReceiverType();
    ElementID getID();
};




#endif //PRODUCTIONLINE_SIM_WORKER_H
