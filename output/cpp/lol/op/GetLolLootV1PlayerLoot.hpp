#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLootPlayerLoot.hpp>
namespace lol {
  Result<std::vector<LolLootPlayerLoot>> GetLolLootV1PlayerLoot(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-loot/v1/player-loot?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}