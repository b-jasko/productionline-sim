//
// Created by bartek on 1/8/18.
//

#include "../include/PackageQueue.h"

PackageQueue::PackageQueue(QueueType _queueType) : queueType(_queueType) {
    if(_queueType == QueueType::FIFO) {
        _popFunction = [this]() {
            Package toReturn = deque.front();
            deque.pop_front();
            return toReturn;
        };
    } else {
        _popFunction = [this]() {
            Package toReturn = deque.back();
            deque.pop_back();
            return toReturn;
        };
    }
}

bool PackageQueue::isEmpty() {
    return deque.empty();
}

int PackageQueue::size() {
    return int(deque.size());
}

void PackageQueue::push(Package _package) {
    deque.push_back(_package);
}

QueueType PackageQueue::getQueueType() {
    return queueType;
}

Package PackageQueue::pop() {
    return _popFunction();
}

std::deque<Package> PackageQueue::view() {
    return deque;
}
