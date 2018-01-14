//
// Created by Artur on 09.01.2018.
//

#include "../include/Worker.h"

Worker::Worker(ElementID id, TimeOffset processingDuration, IPackageQueue *queue) :
        id(id), processingDuration(processingDuration), queue(queue) {}

std::deque<Package> Worker::viewQueue() const{
    return queue -> view();
}

void Worker::doWork() {
     sendingBuffer.push_back(queue -> pop());
}

void Worker::receivePackage(const Package _package) {
    queue -> push(_package);
}

TimeOffset Worker::getProcessingDuration() const {
    return processingDuration;
}

Time Worker::getPackageProcessingStartTime() const {
    return packageProcessingStartTime;
}

ReceiverType Worker::getReceiverType() const{
    return ReceiverType::WORKER;
}

ElementID Worker::getId() const {
    return id;
}


