#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolReplaysReplayCreateMetadata { 
    int32_t queueId;
    std::string gameVersion;
    std::string gameType;
    uint64_t gameEnd; 
  };
  void to_json(json& j, const LolReplaysReplayCreateMetadata& v) {
  j["queueId"] = v.queueId; 
  j["gameVersion"] = v.gameVersion; 
  j["gameType"] = v.gameType; 
  j["gameEnd"] = v.gameEnd; 
  }
  void from_json(const json& j, LolReplaysReplayCreateMetadata& v) {
  v.queueId = j.at("queueId").get<int32_t>(); 
  v.gameVersion = j.at("gameVersion").get<std::string>(); 
  v.gameType = j.at("gameType").get<std::string>(); 
  v.gameEnd = j.at("gameEnd").get<uint64_t>(); 
  }
}