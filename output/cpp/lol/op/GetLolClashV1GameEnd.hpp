#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolClashTournamentGameEnd.hpp>
namespace lol {
  inline Result<LolClashTournamentGameEnd> GetLolClashV1GameEnd(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolClashTournamentGameEnd> {
        _client_.request("get", "/lol-clash/v1/gameEnd?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashTournamentGameEnd> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}