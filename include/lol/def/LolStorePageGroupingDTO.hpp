#pragma once
#include "../base_def.hpp" 
#include "LolStoreItemKey.hpp"
namespace lol {
  struct LolStorePageGroupingDTO { 
    bool hidden;
    std::vector<LolStoreItemKey> items;
    bool grouped; 
  };
  inline void to_json(json& j, const LolStorePageGroupingDTO& v) {
    j["hidden"] = v.hidden; 
    j["items"] = v.items; 
    j["grouped"] = v.grouped; 
  }
  inline void from_json(const json& j, LolStorePageGroupingDTO& v) {
    v.hidden = j.at("hidden").get<bool>(); 
    v.items = j.at("items").get<std::vector<LolStoreItemKey>>(); 
    v.grouped = j.at("grouped").get<bool>(); 
  }
}