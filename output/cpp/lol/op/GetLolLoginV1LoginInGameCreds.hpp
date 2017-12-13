#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> GetLolLoginV1LoginInGameCreds(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-login/v1/login-in-game-creds?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}