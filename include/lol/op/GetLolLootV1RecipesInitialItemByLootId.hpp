#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLootRecipe.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolLootRecipe>> GetLolLootV1RecipesInitialItemByLootId(T& _client, const std::string& lootId)
  {
    try {
      return ToResult<std::vector<LolLootRecipe>>(_client.https.request("get", "/lol-loot/v1/recipes/initial-item/"+to_string(lootId)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolLootRecipe>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolLootV1RecipesInitialItemByLootId(T& _client, const std::string& lootId, std::function<void(T&, const Result<std::vector<LolLootRecipe>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-loot/v1/recipes/initial-item/"+to_string(lootId)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolLootRecipe>>(e));
            else
              cb(_client, ToResult<std::vector<LolLootRecipe>>(response));
        });
  }
}