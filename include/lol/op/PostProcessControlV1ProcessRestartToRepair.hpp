#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<Nothing> PostProcessControlV1ProcessRestartToRepair(T& _client, const std::string& productId)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/process-control/v1/process/restart-to-repair?" +
        SimpleWeb::QueryString::create(Args2Headers({ 
          { "productId", to_string(productId) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostProcessControlV1ProcessRestartToRepair(T& _client, const std::string& productId, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/process-control/v1/process/restart-to-repair?" +
      SimpleWeb::QueryString::create(Args2Headers({ 
          { "productId", to_string(productId) }, })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}