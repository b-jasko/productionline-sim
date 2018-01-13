//
// Created by bartek on 1/8/18.
//

#ifndef PRODUCTIONLINE_SIM_INTERVALREPORTNOTIFIER_H
#define PRODUCTIONLINE_SIM_INTERVALREPORTNOTIFIER_H


#include "Types/types.h"
#include "IReportNotifier.h"

class IntervalReportNotifier: public IReportNotifier {
    TimeOffset interval;
public:
    IntervalReportNotifier(TimeOffset);
    bool shouldGenerateReport(Time);
};


#endif //PRODUCTIONLINE_SIM_INTERVALREPORTNOTIFIER_H
