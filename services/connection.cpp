#include "headers/connection.h"

#include <iostream>
#include <ostream>
#include <sstream>


Connection::~Connection() = default;

std::string Connection::set_connection_title() {

    std::string title;
    std::cout << "Enter connection title (def. BingX): ";
    std::getline(std::cin, title);

    return title.empty() ? "BingX" : title;
}

std::string Connection::set_connection_url() {
    std::string url;
    std::cout << "Enter connection url (def.https://open-api.bingx.com): ";
    std::getline(std::cin, url);

    return url.empty() ? "https://open-api.bingx.com" : url;
}

std::string Connection::set_market() {
    std::string market;
    std::cout << "Enter market(def BTC/USDT): ";
    std::getline(std::cin, market);

    return market.empty() ? "BTC/USDT" : market;
}

std::vector<std::string> Connection::set_timeframes() {
    std::vector<std::string> result;
    std::string input;

    std::cout << "Enter timeframes (ex 1h,4h,1d): ";
    std::getline(std::cin >> std::ws, input);

    if (input.empty()) {
        throw std::invalid_argument("Timeframes must not be empty");
    }

    std::stringstream ss(input);
    std::string item;

    while (std::getline(ss, item, ',')) {
        if (item.empty()) {
            throw std::invalid_argument("Empty timeframe between commas");
        }
        result.push_back(item);
    }

    return result;
}

int32_t Connection::set_t_zone() {
    std::string input;
    std::cout << "Enter timezone (def. 1): ";
    std::getline(std::cin, input);

    if (input.empty()) {
        return 1;
    }

    int32_t zone = std::stoi(input);
    if (zone < 0 || zone > 8) {
        throw std::out_of_range("Zone must be between 0 and 8");
    }
    return zone;
}

int64_t Connection::set_limit() {
    std::string input;
    std::cout << "Enter limit (def. 500): ";
    std::getline(std::cin, input);

    if (input.empty()) {
        return 500;
    }

    int64_t limit = std::stoll(input);
    if (limit < 0 || limit > 1000) {
        throw std::out_of_range("Limit must be between 0 and 1000");
    }
    return limit;
}

void Connection::get_connection_info() const {
}

void Connection::create_connection() {
}

void Connection::close_connection() {
}




