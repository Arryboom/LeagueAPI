#pragma once
#include "../base_op.hpp" 
#include "../def/TickerMessage.hpp"
namespace lol {
  inline Result<std::vector<TickerMessage>> GetLolServiceStatusV1TickerMessages(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<TickerMessage>> {
        _client_.request("get", "/lol-service-status/v1/ticker-messages?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<TickerMessage>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}