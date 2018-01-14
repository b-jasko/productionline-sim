//
// Created by bartek on 1/8/18.
//

#include "../include/Factory.h"

const std::list<Ramp> &Factory::getRamps() const {
    return ramps;
}

const std::list<Worker> &Factory::getWorkers() const {
    return workers;
}

const std::list<Storehouse> &Factory::getStorehouses() const {
    return storehouses;
}

void Factory::addRamp(Ramp _ramp) {
    ramps.push_back(_ramp);
}

void Factory::addWorker(Worker _worker) {
    workers.push_back(_worker);
}

void Factory::addStorehouse(Storehouse _storehouse) {
    storehouses.push_back(_storehouse);
}

void Factory::removeRamp(ElementID) {

}

void Factory::removeWorker(ElementID) {

}

void Factory::removeStorehouse(ElementID) {

}

bool Factory::isConsistent() {

}
