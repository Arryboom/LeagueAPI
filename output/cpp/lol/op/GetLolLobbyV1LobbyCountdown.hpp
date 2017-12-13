#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<int64_t> GetLolLobbyV1LobbyCountdown(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby/v1/lobby/countdown?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}