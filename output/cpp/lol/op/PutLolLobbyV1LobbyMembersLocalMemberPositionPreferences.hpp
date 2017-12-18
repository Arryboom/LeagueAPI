#pragma once
#include "../base_op.hpp" 
#include "../def/LolLobbyLobbyPositionPreferences.hpp"
namespace lol {
  inline Result<json> PutLolLobbyV1LobbyMembersLocalMemberPositionPreferences(const LeagueClient& _client, const LolLobbyLobbyPositionPreferences& positionPreferences)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("put", "/lol-lobby/v1/lobby/members/localMember/position-preferences?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(positionPreferences).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}