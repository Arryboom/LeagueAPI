#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderLobby.hpp"
namespace lol {
  inline Result<LolLobbyTeamBuilderLobby> PostLolLobbyTeamBuilderV1Lobby(LeagueClient& _client, const LolLobbyTeamBuilderLobby& lobby)
  {
    try {
      return ToResult<LolLobbyTeamBuilderLobby>(_client.https.request("post", "/lol-lobby-team-builder/v1/lobby?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(lobby).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyTeamBuilderLobby>(e.code());
    }
  }
  inline void PostLolLobbyTeamBuilderV1Lobby(LeagueClient& _client, const LolLobbyTeamBuilderLobby& lobby, std::function<void(LeagueClient&, const Result<LolLobbyTeamBuilderLobby>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby-team-builder/v1/lobby?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(lobby).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyTeamBuilderLobby>(e));
            else
              cb(_client, ToResult<LolLobbyTeamBuilderLobby>(response));
        });
  }
}