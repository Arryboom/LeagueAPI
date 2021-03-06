#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/PatcherP2PStatusUpdate.hpp"
namespace lol {
  template<typename T>
  inline Result<json> PatchPatcherV1P2pStatus(T& _client, const PatcherP2PStatusUpdate& data)
  {
    try {
      return ToResult<json>(_client.https.request("patch", "/patcher/v1/p2p/status?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(data).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<json>(e.code());
    }
  }
  template<typename T>
  inline void PatchPatcherV1P2pStatus(T& _client, const PatcherP2PStatusUpdate& data, std::function<void(T&, const Result<json>&)> cb)
  {
    _client.httpsa.request("patch", "/patcher/v1/p2p/status?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(data).dump(),
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