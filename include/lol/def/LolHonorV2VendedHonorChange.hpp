#pragma once
#include "../base_def.hpp" 
#include "LolHonorV2Reward.hpp"
#include "LolHonorV2VendedHonorState.hpp"
namespace lol {
  struct LolHonorV2VendedHonorChange { 
    LolHonorV2VendedHonorState currentState;
    std::string actionType;
    LolHonorV2VendedHonorState previousState;
    LolHonorV2Reward reward; 
  };
  inline void to_json(json& j, const LolHonorV2VendedHonorChange& v) {
    j["currentState"] = v.currentState; 
    j["actionType"] = v.actionType; 
    j["previousState"] = v.previousState; 
    j["reward"] = v.reward; 
  }
  inline void from_json(const json& j, LolHonorV2VendedHonorChange& v) {
    v.currentState = j.at("currentState").get<LolHonorV2VendedHonorState>(); 
    v.actionType = j.at("actionType").get<std::string>(); 
    v.previousState = j.at("previousState").get<LolHonorV2VendedHonorState>(); 
    v.reward = j.at("reward").get<LolHonorV2Reward>(); 
  }
}