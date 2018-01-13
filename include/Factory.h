    //
// Created by bartek on 1/8/18.
//

#ifndef PRODUCTIONLINE_SIM_FACTORY_H
#define PRODUCTIONLINE_SIM_FACTORY_H

    
#include "Ramp.h"
#include "Storehouse.h"
#include "Worker.h"
#include <list>

class Factory {
private:
    std::list<Ramp> ramps;
    std::list<Worker> workers;
    std::list<Storehouse> storehouses;
public:
    const std::list<Ramp> &getRamps() const;
    void addRamp(Ramp);
    void removeRamp(ElementID);

    const std::list<Worker> &getWorkers() const;
    void addWorker(Worker);
    void removeWorker(ElementID);

    const std::list<Storehouse> &getStorehouses() const;
    void addStorehouse(Storehouse);
    void removeStorehouse(ElementID);

    bool isConsistent();
};


#endif //PRODUCTIONLINE_SIM_FACTORY_H
