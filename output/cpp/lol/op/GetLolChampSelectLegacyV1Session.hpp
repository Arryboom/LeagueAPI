#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolChampSelectLegacyChampSelectSession.hpp>
namespace lol {
  inline Result<LolChampSelectLegacyChampSelectSession> GetLolChampSelectLegacyV1Session(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChampSelectLegacyChampSelectSession> {
        _client_.request("get", "/lol-champ-select-legacy/v1/session?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectLegacyChampSelectSession> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}