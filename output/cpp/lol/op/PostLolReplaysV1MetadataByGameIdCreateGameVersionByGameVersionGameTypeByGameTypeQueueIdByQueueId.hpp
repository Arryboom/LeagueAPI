#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  inline Result<void> PostLolReplaysV1MetadataByGameIdCreateGameVersionByGameVersionGameTypeByGameTypeQueueIdByQueueId(const LeagueClient& _client, const uint64_t& gameId, const std::string& gameVersion, const std::string& gameType, const int32_t& queueId)
  {
    HttpsClient _client_(_client.host, false);
    try {
      return Result<void> {
        _client_.request("post", "/lol-replays/v1/metadata/"+to_string(gameId)+"/create/gameVersion/"+to_string(gameVersion)+"/gameType/"+to_string(gameType)+"/queueId/"+to_string(queueId)+"?" +
          SimpleWeb::QueryString::create(Args2Headers({  })), 
          "",
          Args2Headers({  
            {"Authorization", _client.auth},  }))
      };
    } catch(const SimpleWeb::system_error &e) {
      return Result<void> { Error { to_string(e.code().value()), -1, e.what() } };
    }
  }
}