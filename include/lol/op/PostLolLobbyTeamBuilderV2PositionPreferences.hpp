#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyTeamBuilderLobbyPositionPreferencesV2.hpp"
namespace lol {
  template<typename T>
  inline Result<json> PostLolLobbyTeamBuilderV2PositionPreferences(T& _client, const LolLobbyTeamBuilderLobbyPositionPreferencesV2& positionPreferences)
  {
    try {
      return ToResult<json>(_client.https.request("post", "/lol-lobby-team-builder/v2/position-preferences?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(positionPreferences).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLobbyTeamBuilderV2PositionPreferences(T& _client, const LolLobbyTeamBuilderLobbyPositionPreferencesV2& positionPreferences, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby-team-builder/v2/position-preferences?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(positionPreferences).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<json>(e));
            else
              cb(_client, ToResult<json>(response));
        });
  }
}