#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> DeleteRecofrienderV2Dismissed(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("delete", "/recofriender/v2/dismissed?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}