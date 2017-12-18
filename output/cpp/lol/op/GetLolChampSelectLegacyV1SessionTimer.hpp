#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectLegacyChampSelectTimer.hpp>
namespace lol {
  inline Result<LolChampSelectLegacyChampSelectTimer> GetLolChampSelectLegacyV1SessionTimer(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChampSelectLegacyChampSelectTimer> {
        _client_.request("get", "/lol-champ-select-legacy/v1/session/timer?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectLegacyChampSelectTimer> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}