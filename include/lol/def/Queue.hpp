#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct Queue { 
    int32_t id;
    uint32_t minLevel; 
  };
  inline void to_json(json& j, const Queue& v) {
    j["id"] = v.id; 
    j["minLevel"] = v.minLevel; 
  }
  inline void from_json(const json& j, Queue& v) {
    v.id = j.at("id").get<int32_t>(); 
    v.minLevel = j.at("minLevel").get<uint32_t>(); 
  }
}