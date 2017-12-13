#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPlayerBehaviorRestrictionNotification.hpp>
namespace lol {
  Result<LolPlayerBehaviorRestrictionNotification> GetLolPlayerBehaviorV1ChatRestriction(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-player-behavior/v1/chat-restriction?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}