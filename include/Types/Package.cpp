//
// Created by Artur on 13.01.2018.
//

#include "Package.h"

Package::Package() {
    id = packageCounter;
    packageCounter++;
}

ElementID Package::getID(){
    return id;
}