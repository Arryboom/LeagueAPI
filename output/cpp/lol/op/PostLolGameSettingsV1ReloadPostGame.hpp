#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolGameSettingsV1ReloadPostGame(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-game-settings/v1/reload-post-game?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}