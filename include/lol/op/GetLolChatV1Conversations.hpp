#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolChatConversationResource.hpp"
namespace lol {
  template<typename T>
  inline Result<std::vector<LolChatConversationResource>> GetLolChatV1Conversations(T& _client)
  {
    try {
      return ToResult<std::vector<LolChatConversationResource>>(_client.https.request("get", "/lol-chat/v1/conversations?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<std::vector<LolChatConversationResource>>(e.code());
    }
  }
  template<typename T>
  inline void GetLolChatV1Conversations(T& _client, std::function<void(T&, const Result<std::vector<LolChatConversationResource>>&)> cb)
  {
    _client.httpsa.request("get", "/lol-chat/v1/conversations?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        "",
        Args2Headers({  
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<std::vector<LolChatConversationResource>>(e));
            else
              cb(_client, ToResult<std::vector<LolChatConversationResource>>(response));
        });
  }
}