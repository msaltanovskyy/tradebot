#include "headers/get_candles_data.h"

#include <iostream>
#include  <cpr/cpr.h>


GetCandlesData::~GetCandlesData() {
    this -> close_connection();
}

void GetCandlesData::get_candles_data() {
    std::map<std::string, std::string> params = {
        {"symbol", market},
        {"interval", timeframe},
        {"timeZone", std::to_string(t_zone)},
        {"limit", std::to_string(limit)},};
    cpr::Parameters parameters = cpr::Parameters(params);
    cpr::Response response = cpr::Get(cpr::Url{hostname + route}, parameters);
    std::cout << response.text << std::endl;

}


void GetCandlesData::close_connection() {
}




