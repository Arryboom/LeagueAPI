#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyGameModeDto { 
    std::string gameType;
    int32_t maxPartySize;
    std::optional<std::string> botDifficulty;
    int32_t queueId; 
  };
  inline void to_json(json& j, const LolLobbyGameModeDto& v) {
    j["gameType"] = v.gameType; 
    j["maxPartySize"] = v.maxPartySize; 
    if(v.botDifficulty)
      j["botDifficulty"] = *v.botDifficulty;
    j["queueId"] = v.queueId; 
  }
  inline void from_json(const json& j, LolLobbyGameModeDto& v) {
    v.gameType = j.at("gameType").get<std::string>(); 
    v.maxPartySize = j.at("maxPartySize").get<int32_t>(); 
    if(auto it = j.find("botDifficulty"); it != j.end() && !it->is_null())
      v.botDifficulty = it->get<std::optional<std::string>>(); 
    v.queueId = j.at("queueId").get<int32_t>(); 
  }
}