#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolInventoryInventoryItem.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolInventoryInventoryItem>> GetLolInventoryV1InventoryEmotes(T& _client)
  {
    try {
      return ToResult<std::vector<LolInventoryInventoryItem>>(_client.https.request("get", "/lol-inventory/v1/inventory/emotes?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolInventoryInventoryItem>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolInventoryV1InventoryEmotes(T& _client, std::function<void(T&, const Result<std::vector<LolInventoryInventoryItem>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-inventory/v1/inventory/emotes?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolInventoryInventoryItem>>(e));
            else
              cb(_client, ToResult<std::vector<LolInventoryInventoryItem>>(response));
        });
  }
}