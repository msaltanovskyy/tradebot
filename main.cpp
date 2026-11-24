#include <iostream>

#include "cpr/cookies.h"
#include "api/headers/get_candles_data.h"

int main() {

    GetCandlesData candles_data_tf_1h("BTC-USD","1h",500,"https://open-api.bingx.com",
        "/openApi/cswap/v1/market/klines", 1);
    GetCandlesData candles_data_tf_4h("BTC-USD","4h",500,"https://open-api.bingx.com",
    "/openApi/cswap/v1/market/klines", 1);
    GetCandlesData candles_data_tf_1d("BTC-USD","1d",500,"https://open-api.bingx.com",
    "/openApi/cswap/v1/market/klines", 1);

    candles_data_tf_1h.get_candles_data();
    candles_data_tf_4h.get_candles_data();
    candles_data_tf_1d.get_candles_data();

}
