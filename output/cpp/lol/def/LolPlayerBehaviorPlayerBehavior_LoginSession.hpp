#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPlayerBehaviorPlayerBehavior_LoginSessionState.hpp>
#include <lol/def/LolPlayerBehaviorPlayerBehavior_LoginError.hpp>
namespace lol {
  struct LolPlayerBehaviorPlayerBehavior_LoginSession { 
    LolPlayerBehaviorPlayerBehavior_LoginSessionState state;
    std::optional<LolPlayerBehaviorPlayerBehavior_LoginError> error;
    uint64_t summonerId;
    uint64_t accountId; 
  };
  void to_json(json& j, const LolPlayerBehaviorPlayerBehavior_LoginSession& v) {
  j["state"] = v.state; 
  j["error"] = v.error; 
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  }
  void from_json(const json& j, LolPlayerBehaviorPlayerBehavior_LoginSession& v) {
  v.state = j.at("state").get<LolPlayerBehaviorPlayerBehavior_LoginSessionState>(); 
  v.error = j.at("error").get<std::optional<LolPlayerBehaviorPlayerBehavior_LoginError>>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  }
}