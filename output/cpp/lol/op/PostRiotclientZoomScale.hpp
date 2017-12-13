#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<void> PostRiotclientZoomScale(const LeagueClient& _client, const double& newZoomScale)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/riotclient/zoom-scale?" + SimpleWeb::QueryString::create(Args2Headers({ { "newZoomScale", to_string(newZoomScale) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}