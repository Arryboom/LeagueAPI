#pragma once
#include "../base_op.hpp" 
#include "../def/PluginResource.hpp"
namespace lol {
  inline Result<std::vector<PluginResource>> GetPluginManagerV2Plugins(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<std::vector<PluginResource>> {
        _client_.request("get", "/plugin-manager/v2/plugins?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<std::vector<PluginResource>> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}