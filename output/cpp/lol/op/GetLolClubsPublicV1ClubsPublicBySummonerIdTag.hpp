#pragma once
#include "../base_op.hpp" 
#include "../def/LolClubsPublicClubTag.hpp"
namespace lol {
  inline Result<LolClubsPublicClubTag> GetLolClubsPublicV1ClubsPublicBySummonerIdTag(const LeagueClient& _client, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolClubsPublicClubTag> {
        _client_.request("get", "/lol-clubs-public/v1/clubs/public/"+to_string(summonerId)+"/tag?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClubsPublicClubTag> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}