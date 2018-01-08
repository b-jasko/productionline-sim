//
// Created by Artur on 08.01.2018.
//

#ifndef PRODUCTIONLINE_SIM_WORKER_H
#define PRODUCTIONLINE_SIM_WORKER_H

#include "Factory.h"
#include "Types/types.h"
#include "IPackageQueue.h"


class Worker : public Factory{
    ElementID id;
    TimeOffset processingDuration;
    Time packageProcessingStartTime;
    IPackageQueue* queue;
public:
    Worker(ElementID id, TimeOffset processingDuration, IPackageQueue *queue)
            : id(id),
              processingDuration(processingDuration),
              queue(queue) {}

};


#endif //PRODUCTIONLINE_SIM_WORKER_H
