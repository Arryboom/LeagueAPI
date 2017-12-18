#pragma once
#include "../base_op.hpp" 
namespace lol {
  inline Result<void> PutRiotclientUxStateAck(const LeagueClient& _client, const uint32_t& requestId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("put", "/riotclient/ux-state/ack?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(requestId).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}