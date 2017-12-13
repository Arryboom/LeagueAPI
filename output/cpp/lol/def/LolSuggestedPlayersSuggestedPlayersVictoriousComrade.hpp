#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersVictoriousComrade { 
    std::string summonerName;
    uint64_t summonerId; 
  };
  void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersVictoriousComrade& v) {
  j["summonerName"] = v.summonerName; 
  j["summonerId"] = v.summonerId; 
  }
  void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersVictoriousComrade& v) {
  v.summonerName = j.at("summonerName").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}