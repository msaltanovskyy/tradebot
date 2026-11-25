//
// Created by makson on 11/25/26.
//

#ifndef TRADEBOTV2_CANDLESDATA_H
#define TRADEBOTV2_CANDLESDATA_H
#include <string>

struct CandlesData {
    std::string open;
    std::string close;
    std::string high;
    std::string low;
    std::string volume;
    int time;
};


#endif //TRADEBOTV2_CANDLESDATA_H
