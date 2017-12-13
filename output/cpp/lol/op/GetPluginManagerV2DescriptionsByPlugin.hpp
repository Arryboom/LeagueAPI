#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PluginDescriptionResource.hpp>
namespace lol {
  Result<PluginDescriptionResource> GetPluginManagerV2DescriptionsByPlugin(const LeagueClient& _client, const std::string& plugin)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/plugin-manager/v2/descriptions/"+to_string(plugin)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}