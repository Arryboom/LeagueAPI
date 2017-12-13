#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolLobbyReceivedInvitationDto.hpp>
namespace lol {
  Result<std::vector<LolLobbyReceivedInvitationDto>> GetLolLobbyV2ReceivedInvitations(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-lobby/v2/received-invitations?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}