#pragma once
#include "../base_op.hpp" 
#include "../def/LolChampSelectLegacyChampSelectAction.hpp"
namespace lol {
  inline Result<json> PatchLolChampSelectLegacyV1SessionActionsById(const LeagueClient& _client, const uint64_t& id, const LolChampSelectLegacyChampSelectAction& data)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<json> {
        _client_.request("patch", "/lol-champ-select-legacy/v1/session/actions/"+to_string(id)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          json(data).dump(),
          Args2Headers({
            {"content-type", "application/json"},
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<json> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}