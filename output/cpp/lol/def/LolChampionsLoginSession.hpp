#pragma once
#include "../base_def.hpp" 
#include "LolChampionsLoginSessionStates.hpp"
namespace lol {
  struct LolChampionsLoginSession { 
    bool connected;
    LolChampionsLoginSessionStates state;
    uint64_t accountId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const LolChampionsLoginSession& v) {
    j["connected"] = v.connected; 
    j["state"] = v.state; 
    j["accountId"] = v.accountId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, LolChampionsLoginSession& v) {
    v.connected = j.at("connected").get<bool>(); 
    v.state = j.at("state").get<LolChampionsLoginSessionStates>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}