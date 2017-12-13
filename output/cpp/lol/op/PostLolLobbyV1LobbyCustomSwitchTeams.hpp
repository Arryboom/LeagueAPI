#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolLobbyV1LobbyCustomSwitchTeams(const LeagueClient& _client, const std::optional<std::string>& team = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-lobby/v1/lobby/custom/switch-teams?" + SimpleWeb::QueryString::create(Args2Headers({ { "team", to_string(team) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}