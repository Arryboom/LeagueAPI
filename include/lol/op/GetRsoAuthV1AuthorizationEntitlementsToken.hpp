#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/RsoAuthEntitlementsToken.hpp"
namespace lol {
  template<typename T>
  inline Result<RsoAuthEntitlementsToken> GetRsoAuthV1AuthorizationEntitlementsToken(T& _client)
  {
    try {
      return ToResult<RsoAuthEntitlementsToken>(_client.https.request("get", "/rso-auth/v1/authorization/entitlements-token?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<RsoAuthEntitlementsToken>(e.code());
    }
  }
  template<typename T>
  inline void GetRsoAuthV1AuthorizationEntitlementsToken(T& _client, std::function<void(T&, const Result<RsoAuthEntitlementsToken>&)> cb)
  {
    _client.httpsa.request("get", "/rso-auth/v1/authorization/entitlements-token?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<RsoAuthEntitlementsToken>(e));
            else
              cb(_client, ToResult<RsoAuthEntitlementsToken>(response));
        });
  }
}