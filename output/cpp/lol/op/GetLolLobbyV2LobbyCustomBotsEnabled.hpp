#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<bool> GetLolLobbyV2LobbyCustomBotsEnabled(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<bool> {
        _client_.request("get", "/lol-lobby/v2/lobby/custom/bots-enabled?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<bool> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}