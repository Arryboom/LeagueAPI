#pragma once
#include "../base_def.hpp" 
#include "LolClashPlayerState.hpp"
namespace lol {
  struct LolClashPlayerTournamentData { 
    std::string rosterId;
    LolClashPlayerState state;
    int64_t bracketId; 
  };
  inline void to_json(json& j, const LolClashPlayerTournamentData& v) {
    j["rosterId"] = v.rosterId; 
    j["state"] = v.state; 
    j["bracketId"] = v.bracketId; 
  }
  inline void from_json(const json& j, LolClashPlayerTournamentData& v) {
    v.rosterId = j.at("rosterId").get<std::string>(); 
    v.state = j.at("state").get<LolClashPlayerState>(); 
    v.bracketId = j.at("bracketId").get<int64_t>(); 
  }
}