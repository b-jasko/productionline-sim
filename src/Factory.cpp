//
// Created by bartek on 1/8/18.
//

#include "../include/Factory.h"

const std::vector<Ramp> &Factory::getRamps() const {
    return ramps;
}

const std::vector<Worker> &Factory::getWorkers() const {
    return workers;
}

const std::vector<Storehouse> &Factory::getStorehouses() const {
    return storehouses;
}
