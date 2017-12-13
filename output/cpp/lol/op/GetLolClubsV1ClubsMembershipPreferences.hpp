#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/ClubPreferences.hpp>
namespace lol {
  Result<ClubPreferences> GetLolClubsV1ClubsMembershipPreferences(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/lol-clubs/v1/clubs/membership/preferences?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}