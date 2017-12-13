#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostProcessControlV1ProcessRestart(const LeagueClient& _client, const uint32_t& delaySeconds, const std::optional<uint32_t>& restartVersion = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/process-control/v1/process/restart?" + SimpleWeb::QueryString::create(Args2Headers({ { "delaySeconds", to_string(delaySeconds) },
    { "restartVersion", to_string(restartVersion) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}