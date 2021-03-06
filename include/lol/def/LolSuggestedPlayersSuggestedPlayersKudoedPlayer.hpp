#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolSuggestedPlayersSuggestedPlayersKudoedPlayer { 
    uint64_t kudoedSummonerId;
    std::string kudoedSummonerName; 
  };
  inline void to_json(json& j, const LolSuggestedPlayersSuggestedPlayersKudoedPlayer& v) {
    j["kudoedSummonerId"] = v.kudoedSummonerId; 
    j["kudoedSummonerName"] = v.kudoedSummonerName; 
  }
  inline void from_json(const json& j, LolSuggestedPlayersSuggestedPlayersKudoedPlayer& v) {
    v.kudoedSummonerId = j.at("kudoedSummonerId").get<uint64_t>(); 
    v.kudoedSummonerName = j.at("kudoedSummonerName").get<std::string>(); 
  }
}