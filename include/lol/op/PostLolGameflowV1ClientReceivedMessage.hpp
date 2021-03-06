#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> PostLolGameflowV1ClientReceivedMessage(T& _client, const std::string& messsage)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/lol-gameflow/v1/client-received-message?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(messsage).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostLolGameflowV1ClientReceivedMessage(T& _client, const std::string& messsage, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/lol-gameflow/v1/client-received-message?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(messsage).dump(),
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