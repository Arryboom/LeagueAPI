#pragma once
#include "../base_op.hpp" 
#include "../def/LolClashSetPositionRequest.hpp"
namespace lol {
  inline Result<json> PostLolClashV1TournamentByTournamentIdRosterSetPosition(const LeagueClient& _client, const int64_t& tournamentId, const LolClashSetPositionRequest& setPositionRequest)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("post", "/lol-clash/v1/tournament/"+to_string(tournamentId)+"/roster/set-position?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(setPositionRequest).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}