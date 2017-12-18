#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<json> DeleteLolChatV1SettingsByKey(const LeagueClient& _client, const std::string& key, const std::optional<bool>& doAsync = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("delete", "/lol-chat/v1/settings/"+to_string(key)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({ 
           { "doAsync", to_string(doAsync) }, })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}