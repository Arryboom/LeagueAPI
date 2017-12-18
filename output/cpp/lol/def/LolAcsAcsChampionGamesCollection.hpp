#pragma once
#include "../base_def.hpp" 
#include "LolAcsAcsChampionGames.hpp"
namespace lol {
  struct LolAcsAcsChampionGamesCollection { 
    std::vector<LolAcsAcsChampionGames> champions;
    uint32_t gameCount; 
  };
  inline void to_json(json& j, const LolAcsAcsChampionGamesCollection& v) {
    j["champions"] = v.champions; 
    j["gameCount"] = v.gameCount; 
  }
  inline void from_json(const json& j, LolAcsAcsChampionGamesCollection& v) {
    v.champions = j.at("champions").get<std::vector<LolAcsAcsChampionGames>>(); 
    v.gameCount = j.at("gameCount").get<uint32_t>(); 
  }
}