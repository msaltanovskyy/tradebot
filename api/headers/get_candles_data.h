//
// Created by makson on 11/21/26.
//

#ifndef TRADEBOTV2_CONNECTION_H
#define TRADEBOTV2_CONNECTION_H

#include <string>
#include <vector>


struct CandlesData {
    std::string open;
    std::string close;
    std::string high;
    std::string low;
    std::string volume;
    int time;
};

class GetCandlesData {

private:
    std::string market;
    std::string timeframe;
    int64_t limit;
    std::string hostname;
    std::string route;
    int32_t t_zone;
public:
    GetCandlesData(std::string market,
           std::string timeframe,
           int64_t limit,
           std::string hostname,
           std::string route,
           int32_t time_zone)
    : market(std::move(market)),
      timeframe(std::move(timeframe)),
      limit(limit),
      hostname(std::move(hostname)),
      route(std::move(route)),
      t_zone(time_zone) {}

    ~GetCandlesData();

    std::vector<CandlesData> response_get_candles_data();

};


#endif //TRADEBOTV2_CONNECTION_H
