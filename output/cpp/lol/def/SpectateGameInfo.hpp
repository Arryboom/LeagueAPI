#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct SpectateGameInfo { 
    std::string dropInSpectateGameId;
    std::string allowObserveMode;
    std::string gameQueueType; 
  };
  void to_json(json& j, const SpectateGameInfo& v) {
  j["dropInSpectateGameId"] = v.dropInSpectateGameId; 
  j["allowObserveMode"] = v.allowObserveMode; 
  j["gameQueueType"] = v.gameQueueType; 
  }
  void from_json(const json& j, SpectateGameInfo& v) {
  v.dropInSpectateGameId = j.at("dropInSpectateGameId").get<std::string>(); 
  v.allowObserveMode = j.at("allowObserveMode").get<std::string>(); 
  v.gameQueueType = j.at("gameQueueType").get<std::string>(); 
  }
}