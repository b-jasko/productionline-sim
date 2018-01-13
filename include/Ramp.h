//
// Created by bartek on 1/8/18.
//

#ifndef PRODUCTIONLINE_SIM_RAMP_H
#define PRODUCTIONLINE_SIM_RAMP_H


#include "Types/types.h"
#include "PackageSender.h"

class Ramp: public PackageSender {
    ElementID id;
    TimeOffset deliveryInterval;
public:
    Ramp(ElementID, TimeOffset);
    void deliverGoods(Time);
    ElementID getId() const;
    TimeOffset getDeliveryInterval() const;
};


#endif //PRODUCTIONLINE_SIM_RAMP_H
