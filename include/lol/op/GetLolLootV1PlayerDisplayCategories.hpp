#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  inline Result<std::vector<std::string>> GetLolLootV1PlayerDisplayCategories(LeagueClient& _client)
  {
    try {
      return ToResult<std::vector<std::string>>(_client.https.request("get", "/lol-loot/v1/player-display-categories?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<std::string>>(e.code());
    }
  }
  inline void GetLolLootV1PlayerDisplayCategories(LeagueClient& _client, std::function<void(LeagueClient&, const Result<std::vector<std::string>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loot/v1/player-display-categories?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<std::string>>(e));
            else
              cb(_client, ToResult<std::vector<std::string>>(response));
        });
  }
}