//
// Created by Artur on 09.01.2018.
//

#include "../include/Storehouse.h"

Storehouse::Storehouse(const ElementID _id) : id(_id) {}

void Storehouse::receivePackage(const Package _package) {
    packageQueue.push_back(_package);
}

std::deque<Package> Storehouse::viewDepot() const{
    return packageQueue;
}

ReceiverType Storehouse::getReceiverType() const{
    return ReceiverType::STOREHOUSE;
}

ElementID Storehouse::getId() const {
    return id;
}




