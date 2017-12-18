#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLoginLoginError { 
    std::string description;
    std::string messageId;
    std::string id; 
  };
  inline void to_json(json& j, const LolLoginLoginError& v) {
    j["description"] = v.description; 
    j["messageId"] = v.messageId; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolLoginLoginError& v) {
    v.description = j.at("description").get<std::string>(); 
    v.messageId = j.at("messageId").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}