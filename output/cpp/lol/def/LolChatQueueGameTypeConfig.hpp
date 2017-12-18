#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatQueueGameTypeConfig { 
    std::string name;
    int64_t id; 
  };
  inline void to_json(json& j, const LolChatQueueGameTypeConfig& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolChatQueueGameTypeConfig& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}