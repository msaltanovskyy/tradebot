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
    Connection(std::string market,
           std::vector<std::string> timeframes,
           int64_t limit,
           std::string title,
           std::string url,
           int32_t time_zone)
    : market(std::move(market)),
      timeframes(std::move(timeframes)),
      limit(limit),
      connection_title(std::move(title)),
      connection_url(std::move(url)),
      t_zone(time_zone) {}
    ~Connection();
    void create_connection();
    void close_connection();
};


#endif //TRADEBOTV2_CONNECTION_H
