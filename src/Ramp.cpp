//
// Created by bartek on 1/8/18.
//

#include "../include/Ramp.h"

Ramp::Ramp(ElementID, TimeOffset) {

}

ElementID Ramp::getId() const {
    return id;
}

TimeOffset Ramp::getDeliveryInterval() const {
    return deliveryInterval;
}

