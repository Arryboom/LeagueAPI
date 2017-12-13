#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LcdsInviter { 
    std::string summonerName;
    std::string previousSeasonHighestTier;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LcdsInviter& v) {
  j["summonerName"] = v.summonerName; 
  j["previousSeasonHighestTier"] = v.previousSeasonHighestTier; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LcdsInviter& v) {
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}