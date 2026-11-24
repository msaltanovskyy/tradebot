//
// Created by makson on 11/21/26.
//

#ifndef TRADEBOTV2_CONNECTION_H
#define TRADEBOTV2_CONNECTION_H

#include <string>
#include <vector>

class Connection {

private:
    std::string market;
    std::string timeframes;
    int64_t limit;
    std::string hostname;
    std::string route;
    int32_t t_zone;
public:
    Connection(std::string market,
           std::string timeframes,
           int64_t limit,
           std::string hostname,
           std::string route,
           int32_t time_zone)
    : market(std::move(market)),
      timeframes(std::move(timeframes)),
      limit(limit),
      hostname(std::move(hostname)),
      route(std::move(route)),
      t_zone(time_zone) {}

    ~Connection();

    void get_candles_data();
    void close_connection();
};


#endif //TRADEBOTV2_CONNECTION_H
