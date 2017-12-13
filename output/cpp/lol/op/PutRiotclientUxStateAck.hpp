#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PutRiotclientUxStateAck(const LeagueClient& _client, const uint32_t& requestId)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/riotclient/ux-state/ack?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(requestId).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}