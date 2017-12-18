#pragma once
#include "../base_op.hpp" 
#include "../def/LolChatFriendResource.hpp"
namespace lol {
  inline Result<std::vector<LolChatFriendResource>> GetLolChatV1Friends(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<LolChatFriendResource>> {
        _client_.request("get", "/lol-chat/v1/friends?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<LolChatFriendResource>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}