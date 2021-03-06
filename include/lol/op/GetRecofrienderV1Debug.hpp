#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RecofrienderDebugConfig.hpp"
namespace lol {
  template<typename T>
  inline Result<RecofrienderDebugConfig> GetRecofrienderV1Debug(T& _client)
  {
    try {
      return ToResult<RecofrienderDebugConfig>(_client.https.request("get", "/recofriender/v1/debug?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RecofrienderDebugConfig>(e.code());
    }
  }
  template<typename T>
  inline void GetRecofrienderV1Debug(T& _client, std::function<void(T&, const Result<RecofrienderDebugConfig>&)> cb)
  {
    _client.httpsa.request("get", "/recofriender/v1/debug?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RecofrienderDebugConfig>(e));
            else
              cb(_client, ToResult<RecofrienderDebugConfig>(response));
        });
  }
}