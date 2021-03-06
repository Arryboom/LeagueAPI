#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChampionsCollectionsChampionSkinEmblemPath { 
    std::string large;
    std::string small; 
  };
  inline void to_json(json& j, const LolChampionsCollectionsChampionSkinEmblemPath& v) {
    j["large"] = v.large; 
    j["small"] = v.small; 
  }
  inline void from_json(const json& j, LolChampionsCollectionsChampionSkinEmblemPath& v) {
    v.large = j.at("large").get<std::string>(); 
    v.small = j.at("small").get<std::string>(); 
  }
}