//
// Created by makson on 11/21/26.
//

#include "headers/connection.h"

#include <iostream>
#include <ostream>


Connection::Connection() = default;
Connection::~Connection() = default;

std::string Connection::set_connection_title(const std::string &title) {
    return title;
}

std::string Connection::set_connection_url(const std::string &url) {
    return url;
}

std::string Connection::set_market(const std::string &symbol) {
    return symbol;
}

std::string Connection::set_timeframes(const std::string (&timeframes)[3]){

    std::string result;

    for (int i = 0; i < 3; ++i) {
        if (i > 0) {
            result += ", ";
        }
        result += timeframes[i];
    }

    return result;
}

int32_t Connection::set_t_zone(const int32_t &zone) {
    return zone;
}

int64_t Connection::set_limit(const int &limit){

    if (limit > 1000) {
        
    }
    return limit;
}
