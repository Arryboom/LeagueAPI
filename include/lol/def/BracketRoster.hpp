#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BracketRoster { 
    int64_t rosterId;
    int32_t logoColor;
    std::string name;
    std::string shortName;
    int32_t logo; 
  };
  inline void to_json(json& j, const BracketRoster& v) {
    j["rosterId"] = v.rosterId; 
    j["logoColor"] = v.logoColor; 
    j["name"] = v.name; 
    j["shortName"] = v.shortName; 
    j["logo"] = v.logo; 
  }
  inline void from_json(const json& j, BracketRoster& v) {
    v.rosterId = j.at("rosterId").get<int64_t>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.logo = j.at("logo").get<int32_t>(); 
  }
}