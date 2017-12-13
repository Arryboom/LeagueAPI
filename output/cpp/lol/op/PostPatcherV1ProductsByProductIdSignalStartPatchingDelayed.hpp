#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostPatcherV1ProductsByProductIdSignalStartPatchingDelayed(const LeagueClient& _client, const std::string& product_id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/patcher/v1/products/"+to_string(product_id)+"/signal-start-patching-delayed?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}