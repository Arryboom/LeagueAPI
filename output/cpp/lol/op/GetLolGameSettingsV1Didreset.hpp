#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<bool> GetLolGameSettingsV1Didreset(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<bool> {
        _client_.request("get", "/lol-game-settings/v1/didreset?" +
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