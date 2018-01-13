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
