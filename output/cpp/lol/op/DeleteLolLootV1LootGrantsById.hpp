#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> DeleteLolLootV1LootGrantsById(const LeagueClient& _client, const int64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/lol-loot/v1/loot-grants/"+to_string(id)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}