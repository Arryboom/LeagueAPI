#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolSummonerRMSMessage { 
    int64_t timestamp;
    std::string payload; 
  };
  void to_json(json& j, const LolSummonerRMSMessage& v) {
  j["timestamp"] = v.timestamp; 
  j["payload"] = v.payload; 
  }
  void from_json(const json& j, LolSummonerRMSMessage& v) {
  v.timestamp = j.at("timestamp").get<int64_t>(); 
  v.payload = j.at("payload").get<std::string>(); 
  }
}