#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPlayerBehaviorPlayerBehavior_SimpleMessage { 
    uint64_t accountId;
    std::string msgId;
    std::string type;
    std::vector<std::string> params; 
  };
  inline void to_json(json& j, const LolPlayerBehaviorPlayerBehavior_SimpleMessage& v) {
    j["accountId"] = v.accountId; 
    j["msgId"] = v.msgId; 
    j["type"] = v.type; 
    j["params"] = v.params; 
  }
  inline void from_json(const json& j, LolPlayerBehaviorPlayerBehavior_SimpleMessage& v) {
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.msgId = j.at("msgId").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.params = j.at("params").get<std::vector<std::string>>(); 
  }
}