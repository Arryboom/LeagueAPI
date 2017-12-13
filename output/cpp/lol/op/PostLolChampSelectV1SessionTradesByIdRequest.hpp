#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectChampSelectTradeContract.hpp>
namespace lol {
  Result<LolChampSelectChampSelectTradeContract> PostLolChampSelectV1SessionTradesByIdRequest(const LeagueClient& _client, const int64_t& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-champ-select/v1/session/trades/"+to_string(id)+"/request?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}