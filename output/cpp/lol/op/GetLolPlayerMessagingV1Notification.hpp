#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PlayerMessagingNotificationResource.hpp>
namespace lol {
  inline Result<PlayerMessagingNotificationResource> GetLolPlayerMessagingV1Notification(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<PlayerMessagingNotificationResource> {
        _client_.request("get", "/lol-player-messaging/v1/notification?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<PlayerMessagingNotificationResource> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}