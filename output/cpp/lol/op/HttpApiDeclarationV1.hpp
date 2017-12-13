#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> HttpApiDeclarationV1(const LeagueClient& _client, const std::string& api)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/v1/api-docs/"+to_string(api)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}