#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolSummonerSummonerRerollPoints.hpp>
namespace lol {
  struct LolSummonerSummoner { 
    uint64_t xpSinceLastLevel;
    int32_t profileIconId;
    uint32_t percentCompleteForNextLevel;
    LolSummonerSummonerRerollPoints rerollPoints;
    std::string internalName;
    uint32_t summonerLevel;
    std::string lastSeasonHighestRank;
    uint64_t summonerId;
    uint64_t accountId;
    uint64_t xpUntilNextLevel;
    std::string puuid;
    std::string displayName; 
  };
  void to_json(json& j, const LolSummonerSummoner& v) {
  j["xpSinceLastLevel"] = v.xpSinceLastLevel; 
  j["profileIconId"] = v.profileIconId; 
  j["percentCompleteForNextLevel"] = v.percentCompleteForNextLevel; 
  j["rerollPoints"] = v.rerollPoints; 
  j["internalName"] = v.internalName; 
  j["summonerLevel"] = v.summonerLevel; 
  j["lastSeasonHighestRank"] = v.lastSeasonHighestRank; 
  j["summonerId"] = v.summonerId; 
  j["accountId"] = v.accountId; 
  j["xpUntilNextLevel"] = v.xpUntilNextLevel; 
  j["puuid"] = v.puuid; 
  j["displayName"] = v.displayName; 
  }
  void from_json(const json& j, LolSummonerSummoner& v) {
  v.xpSinceLastLevel = j.at("xpSinceLastLevel").get<uint64_t>(); 
  v.profileIconId = j.at("profileIconId").get<int32_t>(); 
  v.percentCompleteForNextLevel = j.at("percentCompleteForNextLevel").get<uint32_t>(); 
  v.rerollPoints = j.at("rerollPoints").get<LolSummonerSummonerRerollPoints>(); 
  v.internalName = j.at("internalName").get<std::string>(); 
  v.summonerLevel = j.at("summonerLevel").get<uint32_t>(); 
  v.lastSeasonHighestRank = j.at("lastSeasonHighestRank").get<std::string>(); 
  v.summonerId = j.at("summonerId").get<uint64_t>(); 
  v.accountId = j.at("accountId").get<uint64_t>(); 
  v.xpUntilNextLevel = j.at("xpUntilNextLevel").get<uint64_t>(); 
  v.puuid = j.at("puuid").get<std::string>(); 
  v.displayName = j.at("displayName").get<std::string>(); 
  }
}