    //
// Created by bartek on 1/8/18.
//

#ifndef PRODUCTIONLINE_SIM_FACTORY_H
#define PRODUCTIONLINE_SIM_FACTORY_H


#include <vector>
#include "Ramp.h"
#include "Storehouse.h"
#include "Worker.h"

class Factory {
private:
    std::vector<Ramp> ramps;
    std::vector<Worker> workers;
    std::vector<Storehouse> storehouses;
public:
    const std::vector<Ramp> &getRamps() const;
    void addRamp(Ramp);
    void removeRamp(ElementID);

    const std::vector<Worker> &getWorkers() const;
    void addWorker(Worker);
    void removeWorker(ElementID);

    const std::vector<Storehouse> &getStorehouses() const;
    void addStorehouse(Storehouse);
    void removeStorehouse(ElementID);

    bool isConsistent();
};


#endif //PRODUCTIONLINE_SIM_FACTORY_H
