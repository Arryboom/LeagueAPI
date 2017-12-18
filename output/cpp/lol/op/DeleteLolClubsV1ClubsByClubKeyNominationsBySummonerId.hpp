#pragma once
#include "../base_op.hpp" 
#include "../def/ClubMemberLists.hpp"
namespace lol {
  inline Result<ClubMemberLists> DeleteLolClubsV1ClubsByClubKeyNominationsBySummonerId(const LeagueClient& _client, const std::string& clubKey, const uint64_t& summonerId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<ClubMemberLists> {
        _client_.request("delete", "/lol-clubs/v1/clubs/"+to_string(clubKey)+"/nominations/"+to_string(summonerId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<ClubMemberLists> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}