#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct BasePublicSummonerDTO { 
    std::string previousSeasonHighestTier;
    std::string internalName;
    uint64_t sumId;
    std::string puuid;
    std::string name;
    int32_t profileIconId;
    uint64_t acctId; 
  };
  inline void to_json(json& j, const BasePublicSummonerDTO& v) {
    j["previousSeasonHighestTier"] = v.previousSeasonHighestTier; 
    j["internalName"] = v.internalName; 
    j["sumId"] = v.sumId; 
    j["puuid"] = v.puuid; 
    j["name"] = v.name; 
    j["profileIconId"] = v.profileIconId; 
    j["acctId"] = v.acctId; 
  }
  inline void from_json(const json& j, BasePublicSummonerDTO& v) {
    v.previousSeasonHighestTier = j.at("previousSeasonHighestTier").get<std::string>(); 
    v.internalName = j.at("internalName").get<std::string>(); 
    v.sumId = j.at("sumId").get<uint64_t>(); 
    v.puuid = j.at("puuid").get<std::string>(); 
    v.name = j.at("name").get<std::string>(); 
    v.profileIconId = j.at("profileIconId").get<int32_t>(); 
    v.acctId = j.at("acctId").get<uint64_t>(); 
  }
}