#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolLobbyTeamBuilderChampSelectV1SessionTradesByIdCancel(const LeagueClient& _client, const int32_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby-team-builder/champ-select/v1/session/trades/"+to_string(id)+"/cancel?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}