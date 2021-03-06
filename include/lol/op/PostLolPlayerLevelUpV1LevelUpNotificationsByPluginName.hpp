#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PlayerLevelUpEventAck.hpp"
namespace lol {
  template<typename T>
  inline Result<Nothing> PostLolPlayerLevelUpV1LevelUpNotificationsByPluginName(T& _client, const std::string& pluginName, const PlayerLevelUpEventAck& levelUpEventAck)
  {
    try {
      return ToResult<Nothing>(_client.https.request("post", "/lol-player-level-up/v1/level-up-notifications/"+to_string(pluginName)+"?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(levelUpEventAck).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PostLolPlayerLevelUpV1LevelUpNotificationsByPluginName(T& _client, const std::string& pluginName, const PlayerLevelUpEventAck& levelUpEventAck, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("post", "/lol-player-level-up/v1/level-up-notifications/"+to_string(pluginName)+"?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(levelUpEventAck).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}