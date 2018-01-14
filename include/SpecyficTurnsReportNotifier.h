//
// Created by Artur on 09.01.2018.
//

#ifndef PRODUCTIONLINE_SIM_SPECYFICTURNSREPORTNOTIFIER_H
#define PRODUCTIONLINE_SIM_SPECYFICTURNSREPORTNOTIFIER_H


#include <set>
#include "Types/types.h"
#include "IReportNotifier.h"

class SpecyficTurnsReportNotifier : IReportNotifier {
    std::set<Time> turns;
public:
    SpecyficTurnsReportNotifier(const std::set<Time> &turns) : turns(turns) {}
    bool shouldGenerateReport(Time);
};


#endif //PRODUCTIONLINE_SIM_SPECYFICTURNSREPORTNOTIFIER_H
