//
// Created by Artur on 09.01.2018.
//

#ifndef PRODUCTIONLINE_SIM_IREPORTNOTIFIER_H
#define PRODUCTIONLINE_SIM_IREPORTNOTIFIER_H


#include "Types/types.h"

class IReportNotifier {
    virtual bool shouldGenerateReport(Time) = 0;
};


#endif //PRODUCTIONLINE_SIM_IREPORTNOTIFIER_H
