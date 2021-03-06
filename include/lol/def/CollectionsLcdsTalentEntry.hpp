#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct CollectionsLcdsTalentEntry { 
    int32_t rank;
    int32_t talentId; 
  };
  inline void to_json(json& j, const CollectionsLcdsTalentEntry& v) {
    j["rank"] = v.rank; 
    j["talentId"] = v.talentId; 
  }
  inline void from_json(const json& j, CollectionsLcdsTalentEntry& v) {
    v.rank = j.at("rank").get<int32_t>(); 
    v.talentId = j.at("talentId").get<int32_t>(); 
  }
}