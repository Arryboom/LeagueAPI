#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolGameflowQueue.hpp"
namespace lol {
  template<typename T>
  inline Result<Nothing> PostLolGameflowV1SessionGameConfiguration(T& _client, const LolGameflowQueue& queue)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/lol-gameflow/v1/session/game-configuration?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(queue).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostLolGameflowV1SessionGameConfiguration(T& _client, const LolGameflowQueue& queue, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/lol-gameflow/v1/session/game-configuration?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(queue).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}