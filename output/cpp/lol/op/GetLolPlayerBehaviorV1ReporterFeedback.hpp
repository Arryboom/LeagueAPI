#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolPlayerBehaviorReporterFeedback.hpp>
namespace lol {
  inline Result<std::vector<LolPlayerBehaviorReporterFeedback>> GetLolPlayerBehaviorV1ReporterFeedback(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolPlayerBehaviorReporterFeedback>> {
        _client_.request("get", "/lol-player-behavior/v1/reporter-feedback?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolPlayerBehaviorReporterFeedback>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}