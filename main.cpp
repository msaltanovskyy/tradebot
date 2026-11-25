#include "api/headers/get_candles_data_futures.h"
#include <thread>

int main() {

    GetCandlesDataFutures candles_data_tf_1h("BTC-USD","1h",500,"https://open-api.bingx.com",
        "/openApi/cswap/v1/market/klines", 1);
    GetCandlesDataFutures candles_data_tf_4h("BTC-USD","4h",500,"https://open-api.bingx.com",
    "/openApi/cswap/v1/market/klines", 1);
    GetCandlesDataFutures candles_data_tf_1d("BTC-USD","1d",500,"https://open-api.bingx.com",
    "/openApi/cswap/v1/market/klines", 1);

    std::thread t1(&GetCandlesDataFutures::response_get_candles_data, &candles_data_tf_1h);
    std::thread t2(&GetCandlesDataFutures::response_get_candles_data, &candles_data_tf_4h);
    std::thread t3(&GetCandlesDataFutures::response_get_candles_data, &candles_data_tf_1d);

    t1.join();
    t2.join();
    t3.join();

}
