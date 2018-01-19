//
// Created by Artur on 09.01.2018.
//

#include <time.h>
#include "../include/ReceiverPreferences.h"

const std::map<IPackageReceiver*, double> &ReceiverPreferences::getProbabilities() const {
    return probabilities;
}

void ReceiverPreferences::setProbabilities(const std::map<IPackageReceiver*, double> &probabilities) {
    ReceiverPreferences::probabilities = probabilities;
}

void ReceiverPreferences::addReceiver(IPackageReceiver* newReceiver) {
    double new_probability = 1 / (probabilities.size() + 1);
    for(auto it : probabilities){
        it.second = new_probability;
    }
}

void ReceiverPreferences::addReceiverWithProbability(IPackageReceiver* newReceiver, double probability) {
    for (auto it : probabilities) {
        it.second = (1 - probability) * (it.second);
    }
    probabilities.insert(std::make_pair(newReceiver, probability));
}


void ReceiverPreferences::removeReceiver(IPackageReceiver * toRemove) {
    double removedProbability =  probabilities[toRemove];
    if (probabilities.erase(toRemove) > 0) {
        std::map<IPackageReceiver*, double>::iterator it;
        for (auto it : probabilities) {
            it.second = (it.second)/(1 - removedProbability);
        }
    }
}

IPackageReceiver* ReceiverPreferences::drawReceiver() {
    std::vector<double> probabilityLimit;
    std::vector<IPackageReceiver*> keys;
    double sum = 0;

    for(auto it : probabilities) {
        sum += it.second;
        probabilityLimit.push_back(sum);
        keys.push_back(it.first);
    }

    srand(time(NULL));
    double r = static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    int drawn = -1;

    for (int i = 0; i < probabilityLimit.size() && drawn >= 0 ; ++i) {
        if(probabilityLimit[i] >= r) {
            drawn = i;
        }
    }
    return keys[drawn];
}

std::vector<std::pair<IPackageReceiver *, double>> ReceiverPreferences::view() {
    std::vector<std::pair<IPackageReceiver *, double>> toReturn;
    for(auto it : probabilities) {
        toReturn.push_back(std::make_pair(it.first, it.second));
    }
    return toReturn;
}

