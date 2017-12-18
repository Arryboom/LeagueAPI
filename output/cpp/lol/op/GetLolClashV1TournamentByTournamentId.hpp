#pragma once
#include "../base_op.hpp" 
#include "../def/LolClashTournament.hpp"
namespace lol {
  inline Result<LolClashTournament> GetLolClashV1TournamentByTournamentId(const LeagueClient& _client, const int64_t& tournamentId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolClashTournament> {
        _client_.request("get", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolClashTournament> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}