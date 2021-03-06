#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyLobbyInvitation.hpp"
namespace lol {
  template<typename T>
  inline Result<LolLobbyLobbyInvitation> PostLolLobbyV1LobbyInvitations(T& _client, const LolLobbyLobbyInvitation& invitation)
  {
    try {
      return ToResult<LolLobbyLobbyInvitation>(_client.https.request("post", "/lol-lobby/v1/lobby/invitations?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(invitation).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<LolLobbyLobbyInvitation>(e.code());
    }
  }
  template<typename T>
  inline void PostLolLobbyV1LobbyInvitations(T& _client, const LolLobbyLobbyInvitation& invitation, std::function<void(T&, const Result<LolLobbyLobbyInvitation>&)> cb)
  {
    _client.httpsa.request("post", "/lol-lobby/v1/lobby/invitations?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(invitation).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<LolLobbyLobbyInvitation>(e));
            else
              cb(_client, ToResult<LolLobbyLobbyInvitation>(response));
        });
  }
}