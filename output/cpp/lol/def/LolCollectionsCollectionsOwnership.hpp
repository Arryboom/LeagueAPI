#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolCollectionsCollectionsRental.hpp>
namespace lol {
  struct LolCollectionsCollectionsOwnership { 
    LolCollectionsCollectionsRental rental;
    bool freeToPlayReward;
    bool owned; 
  };
  void to_json(json& j, const LolCollectionsCollectionsOwnership& v) {
  j["rental"] = v.rental; 
  j["freeToPlayReward"] = v.freeToPlayReward; 
  j["owned"] = v.owned; 
  }
  void from_json(const json& j, LolCollectionsCollectionsOwnership& v) {
  v.rental = j.at("rental").get<LolCollectionsCollectionsRental>(); 
  v.freeToPlayReward = j.at("freeToPlayReward").get<bool>(); 
  v.owned = j.at("owned").get<bool>(); 
  }
}