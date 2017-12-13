#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/BannedChampion.hpp>
#include <lol/def/PlayerParticipant.hpp>
namespace lol {
  struct EogLcdsGameDTO { 
    std::vector<PlayerParticipant> teamOne;
    std::string gameState;
    uint64_t id;
    std::vector<BannedChampion> bannedChampions;
    std::vector<PlayerParticipant> teamTwo; 
  };
  void to_json(json& j, const EogLcdsGameDTO& v) {
  j["teamOne"] = v.teamOne; 
  j["gameState"] = v.gameState; 
  j["id"] = v.id; 
  j["bannedChampions"] = v.bannedChampions; 
  j["teamTwo"] = v.teamTwo; 
  }
  void from_json(const json& j, EogLcdsGameDTO& v) {
  v.teamOne = j.at("teamOne").get<std::vector<PlayerParticipant>>(); 
  v.gameState = j.at("gameState").get<std::string>(); 
  v.id = j.at("id").get<uint64_t>(); 
  v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion>>(); 
  v.teamTwo = j.at("teamTwo").get<std::vector<PlayerParticipant>>(); 
  }
}