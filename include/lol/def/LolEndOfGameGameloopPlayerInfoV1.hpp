#pragma once
#include "../base_def.hpp" 
#include "LolEndOfGameRerollDataBagForClientV1.hpp"
namespace lol {
  struct LolEndOfGameGameloopPlayerInfoV1 { 
    LolEndOfGameRerollDataBagForClientV1 rerollDataBag; 
  };
  inline void to_json(json& j, const LolEndOfGameGameloopPlayerInfoV1& v) {
    j["rerollDataBag"] = v.rerollDataBag; 
  }
  inline void from_json(const json& j, LolEndOfGameGameloopPlayerInfoV1& v) {
    v.rerollDataBag = j.at("rerollDataBag").get<LolEndOfGameRerollDataBagForClientV1>(); 
  }
}