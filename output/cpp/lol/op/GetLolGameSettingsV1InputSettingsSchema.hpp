#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<json> GetLolGameSettingsV1InputSettingsSchema(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("get", "/lol-game-settings/v1/input-settings-schema?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}