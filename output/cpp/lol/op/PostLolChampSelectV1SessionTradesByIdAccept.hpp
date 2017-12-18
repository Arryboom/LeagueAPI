#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<json> PostLolChampSelectV1SessionTradesByIdAccept(const LeagueClient& _client, const int64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-champ-select/v1/session/trades/"+to_string(id)+"/accept?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}