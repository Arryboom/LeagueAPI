#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolMatchHistoryMatchHistoryPlayerPlatformDelta { 
    bool compensationModeEnabled;
    uint64_t ipDelta;
    uint64_t timestamp;
    uint64_t xpDelta; 
  };
  void to_json(json& j, const LolMatchHistoryMatchHistoryPlayerPlatformDelta& v) {
  j["compensationModeEnabled"] = v.compensationModeEnabled; 
  j["ipDelta"] = v.ipDelta; 
  j["timestamp"] = v.timestamp; 
  j["xpDelta"] = v.xpDelta; 
  }
  void from_json(const json& j, LolMatchHistoryMatchHistoryPlayerPlatformDelta& v) {
  v.compensationModeEnabled = j.at("compensationModeEnabled").get<bool>(); 
  v.ipDelta = j.at("ipDelta").get<uint64_t>(); 
  v.timestamp = j.at("timestamp").get<uint64_t>(); 
  v.xpDelta = j.at("xpDelta").get<uint64_t>(); 
  }
}