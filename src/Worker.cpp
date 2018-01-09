//
// Created by Artur on 09.01.2018.
//

#include "../include/Worker.h"

Worker::Worker(ElementID id, TimeOffset processingDuration, IPackageQueue *queue) :
        id(id),
        processingDuration(processingDuration),
        queue(queue) {}