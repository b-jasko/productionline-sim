//
// Created by Artur on 09.01.2018.
//

#include "../include/ReceiverPreferences.h"

const std::map<IPackageReceiver *, double> &ReceiverPreferences::getProbabilities() const {
    return probabilities;
}

void ReceiverPreferences::setProbabilities(const std::map<IPackageReceiver *, double> &probabilities) {
    ReceiverPreferences::probabilities = probabilities;
}
