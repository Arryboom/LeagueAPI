#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> HttpApiDocsV1(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/v1/api-docs?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}