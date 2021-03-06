#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/cookie.hpp"
namespace lol {
  template<typename T>
  inline Result<json> PostCookieJarV1Cookies(T& _client, const std::vector<cookie>& cookie)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/cookie-jar/v1/cookies?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(cookie).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PostCookieJarV1Cookies(T& _client, const std::vector<cookie>& cookie, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/cookie-jar/v1/cookies?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(cookie).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}