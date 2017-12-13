#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MatchmakingLcdsGameNotification { 
    std::string type;
    std::string messageCode;
    std::string messageArgument; 
  };
  void to_json(json& j, const MatchmakingLcdsGameNotification& v) {
  j["type"] = v.type; 
  j["messageCode"] = v.messageCode; 
  j["messageArgument"] = v.messageArgument; 
  }
  void from_json(const json& j, MatchmakingLcdsGameNotification& v) {
  v.type = j.at("type").get<std::string>(); 
  v.messageCode = j.at("messageCode").get<std::string>(); 
  v.messageArgument = j.at("messageArgument").get<std::string>(); 
  }
}