//
// Created by Artur on 08.01.2018.
//

#ifndef PRODUCTIONLINE_SIM_RECEIVERPREFERENCES_H
#define PRODUCTIONLINE_SIM_RECEIVERPREFERENCES_H

#include <map>
#include "IPackageReceiver.h"

class ReceiverPreferences {
    std::map<IPackageReceiver*, double> probabilities;
public:
    const std::map<IPackageReceiver *, double> &getProbabilities() const;
    void setProbabilities(const std::map<IPackageReceiver *, double> &probabilities);
    void addReceiver(IPackageReceiver*);
    void addReceiverWithProbability(IPackageReceiver*, double);
    void removeReceiver(IPackageReceiver*);
    IPackageReceiver* drawReceiver();
    std::pair<IPackageReceiver*, double>* view();
};


#endif //PRODUCTIONLINE_SIM_RECEIVERPREFERENCES_H
