#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerClub.hpp>
namespace lol {
  Result<std::vector<PlayerClub>> GetLolClubsV1Clubs(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clubs/v1/clubs?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}