#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolClashChangeIconRequest { 
    int32_t iconColorId;
    int32_t iconId; 
  };
  void to_json(json& j, const LolClashChangeIconRequest& v) {
  j["iconColorId"] = v.iconColorId; 
  j["iconId"] = v.iconId; 
  }
  void from_json(const json& j, LolClashChangeIconRequest& v) {
  v.iconColorId = j.at("iconColorId").get<int32_t>(); 
  v.iconId = j.at("iconId").get<int32_t>(); 
  }
}