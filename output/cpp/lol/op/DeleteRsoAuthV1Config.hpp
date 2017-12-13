#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> DeleteRsoAuthV1Config(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/rso-auth/v1/config?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}