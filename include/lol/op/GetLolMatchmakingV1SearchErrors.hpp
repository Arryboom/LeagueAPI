#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolMatchmakingMatchmakingSearchErrorResource.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolMatchmakingMatchmakingSearchErrorResource>> GetLolMatchmakingV1SearchErrors(T& _client)
  {
    try {
      return ToResult<std::vector<LolMatchmakingMatchmakingSearchErrorResource>>(_client.https.request("get", "/lol-matchmaking/v1/search/errors?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolMatchmakingMatchmakingSearchErrorResource>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolMatchmakingV1SearchErrors(T& _client, std::function<void(T&, const Result<std::vector<LolMatchmakingMatchmakingSearchErrorResource>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-matchmaking/v1/search/errors?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolMatchmakingMatchmakingSearchErrorResource>>(e));
            else
              cb(_client, ToResult<std::vector<LolMatchmakingMatchmakingSearchErrorResource>>(response));
        });
  }
}