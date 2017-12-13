#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/LolSettingsSettingCategory.hpp>
namespace lol {
  Result<json> PutLolSettingsV1AccountByCategory(const LeagueClient& _client, const std::string& category, const LolSettingsSettingCategory& settingsResource)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("put", "/lol-settings/v1/account/"+to_string(category)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), json(settingsResource).dump(),
      Args2Headers({ {"Authorization", _client.host}, {"content-type", "application/json"},  }) );
  }
}