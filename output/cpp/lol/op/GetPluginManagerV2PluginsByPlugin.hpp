#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/PluginResource.hpp>
namespace lol {
  Result<PluginResource> GetPluginManagerV2PluginsByPlugin(const LeagueClient& _client, const std::string& plugin)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/plugin-manager/v2/plugins/"+to_string(plugin)+"?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}