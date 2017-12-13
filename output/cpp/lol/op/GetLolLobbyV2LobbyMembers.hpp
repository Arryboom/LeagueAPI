#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyLobbyParticipantDto.hpp>
namespace lol {
  Result<std::vector<LolLobbyLobbyParticipantDto>> GetLolLobbyV2LobbyMembers(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby/v2/lobby/members?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}