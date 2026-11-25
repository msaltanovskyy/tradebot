#include "headers/get_candles_data.h"

#include <cpr/cpr.h>
#include <nlohmann/json.hpp>

GetCandlesData::~GetCandlesData() = default;


std::vector<CandlesData> GetCandlesData::response_get_candles_data() {

    std::map<std::string, std::string> params = {
        {"symbol", market},
        {"interval", timeframe},
        {"timeZone", std::to_string(t_zone)},
        {"limit", std::to_string(limit)}};

    cpr::Parameters parameters = cpr::Parameters(params);
    cpr::Response response = cpr::Get(cpr::Url{hostname + route}, parameters);

    if (response.status_code != 200) {
        throw std::runtime_error(
    "HTTP request failed: " + std::to_string(response.status_code) +
    ", response: " + response.text);
    }

    nlohmann::json data = nlohmann::json::parse(response.text).at("data");

    std::vector<CandlesData> candles;
    for (const auto& item : data) {
        CandlesData candle;
        item.at("open").get_to(candle.open);
        item.at("close").get_to(candle.close);
        item.at("volume").get_to(candle.volume);
        item.at("low").get_to(candle.low);
        item.at("high").get_to(candle.high);
        item.at("time").get_to(candle.time);
        candles.push_back(std::move(candle));
    }

    return candles;
}






