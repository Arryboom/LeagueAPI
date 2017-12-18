#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolMatchHistoryRecentlyPlayedSummoner.hpp>
namespace lol {
  inline Result<std::vector<LolMatchHistoryRecentlyPlayedSummoner>> GetLolMatchHistoryV1RecentlyPlayedSummoners(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolMatchHistoryRecentlyPlayedSummoner>> {
        _client_.request("get", "/lol-match-history/v1/recently-played-summoners?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolMatchHistoryRecentlyPlayedSummoner>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}