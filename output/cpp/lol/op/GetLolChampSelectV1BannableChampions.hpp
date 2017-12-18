#pragma once
#include "../base_op.hpp" 
#include "../def/LolChampSelectChampSelectBannableChampions.hpp"
namespace lol {
  inline Result<LolChampSelectChampSelectBannableChampions> GetLolChampSelectV1BannableChampions(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<LolChampSelectChampSelectBannableChampions> {
        _client_.request("get", "/lol-champ-select/v1/bannable-champions?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<LolChampSelectChampSelectBannableChampions> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}