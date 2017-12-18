#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PatcherProductState.hpp>
namespace lol {
  inline Result<PatcherProductState> GetPatcherV1ProductsByProductIdState(const LeagueClient& _client, const std::string& product_id)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PatcherProductState> {
        _client_.request("get", "/patcher/v1/products/"+to_string(product_id)+"/state?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PatcherProductState> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}