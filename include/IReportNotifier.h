//
// Created by Artur on 09.01.2018.
//

#ifndef PRODUCTIONLINE_SIM_IREPORTNOTIFIER_H
#define PRODUCTIONLINE_SIM_IREPORTNOTIFIER_H


#include "Types/types.h"

class IReportNotifier {
    bool shouldGenerateReport(Time);    
};


#endif //PRODUCTIONLINE_SIM_IREPORTNOTIFIER_H
