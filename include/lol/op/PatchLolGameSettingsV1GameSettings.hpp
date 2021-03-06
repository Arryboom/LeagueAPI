#pragma once
#include "../base_op.hpp"
#include <functional> 
namespace lol {
  template<typename T>
  inline Result<json> PatchLolGameSettingsV1GameSettings(T& _client, const json& settingsResource)
  {
    try {
      return ToResult<json>(_client.https.request("patch", "/lol-game-settings/v1/game-settings?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(settingsResource).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PatchLolGameSettingsV1GameSettings(T& _client, const json& settingsResource, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("patch", "/lol-game-settings/v1/game-settings?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(settingsResource).dump(),
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