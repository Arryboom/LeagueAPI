#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<void> PostProcessControlV1ProcessRestart(const LeagueClient& _client, const uint32_t& delaySeconds, const std::optional<uint32_t>& restartVersion = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/process-control/v1/process/restart?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "delaySeconds", to_string(delaySeconds) },
           { "restartVersion", to_string(restartVersion) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}