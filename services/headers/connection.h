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
    std::vector<std::string> timeframes;
    int64_t limit;
    std::string connection_title;
    std::string connection_url;
    int32_t t_zone;
public:
    Connection() {
        this -> market = set_market();
        this -> timeframes = set_timeframes();
        this -> limit = set_limit();
        this -> connection_title = set_connection_title();
        this -> connection_url = set_connection_url();
        this -> t_zone = set_t_zone();
    };
    ~Connection();
    //set market symbol (ex. BTC/USTD)
    static std::string set_market();
    //set timeframe (ex. 1h)
    static std::vector<std::string> set_timeframes();
    //set limit (ex. 100)
    static int64_t set_limit();
    //set connection title (ex. Binance_1h)
    static std::string set_connection_title();
    //set connection api (ex. https://api.binance.com)
    static std::string set_connection_url();
    //set timezone (ex. 4)
    static int32_t set_t_zone();
    //get params of connection
    void get_connection_info() const;
    void create_connection();
    void close_connection();
};


#endif //TRADEBOTV2_CONNECTION_H
