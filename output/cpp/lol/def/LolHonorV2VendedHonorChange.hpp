#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolHonorV2Reward.hpp>
#include <lol/def/LolHonorV2VendedHonorState.hpp>
namespace lol {
  struct LolHonorV2VendedHonorChange { 
    LolHonorV2VendedHonorState currentState;
    std::string actionType;
    LolHonorV2Reward reward;
    LolHonorV2VendedHonorState previousState; 
  };
  void to_json(json& j, const LolHonorV2VendedHonorChange& v) {
  j["currentState"] = v.currentState; 
  j["actionType"] = v.actionType; 
  j["reward"] = v.reward; 
  j["previousState"] = v.previousState; 
  }
  void from_json(const json& j, LolHonorV2VendedHonorChange& v) {
  v.currentState = j.at("currentState").get<LolHonorV2VendedHonorState>(); 
  v.actionType = j.at("actionType").get<std::string>(); 
  v.reward = j.at("reward").get<LolHonorV2Reward>(); 
  v.previousState = j.at("previousState").get<LolHonorV2VendedHonorState>(); 
  }
}