//
// Created by makson on 11/21/26.
//

#ifndef TRADEBOTV2_CONNECTION_H
#define TRADEBOTV2_CONNECTION_H

#include <string>

class Connection {

private:
    std::string market;
    std::string timeframes[3];
    int limit{};
    std::string connection_title;
    std::string connection_url;
    std::string t_zone;
public:
    Connection();
    ~Connection();
    //set market symbol (ex. BTC/USTD)
    static std::string set_market(const std::string &market);
    //set timeframe (ex. 1h)
    std::string set_timeframes(const std::string (&timeframes)[3]);
    //set limit (ex. 100)
    int64_t set_limit(const int &limit);
    //set connection title (ex. Binance_1h)
    static std::string set_connection_title(const std::string &title);
    //set connection api (ex. https://api.binance.com)
    static std::string set_connection_url(const std::string &url);
    //set timezone (ex. 4)
    static int32_t set_t_zone(const int32_t &t_zone);
    //get_param_connection
    void get_connection_info();
    void create_connection();
    void close_connection();
};


#endif //TRADEBOTV2_CONNECTION_H
