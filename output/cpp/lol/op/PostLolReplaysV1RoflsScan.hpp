#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostLolReplaysV1RoflsScan(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-replays/v1/rofls/scan?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}