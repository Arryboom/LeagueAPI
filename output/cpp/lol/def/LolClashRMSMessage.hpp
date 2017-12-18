#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClashRMSMessage { 
    int64_t timestamp;
    std::string payload; 
  };
  inline void to_json(json& j, const LolClashRMSMessage& v) {
    j["timestamp"] = v.timestamp; 
    j["payload"] = v.payload; 
  }
  inline void from_json(const json& j, LolClashRMSMessage& v) {
    v.timestamp = j.at("timestamp").get<int64_t>(); 
    v.payload = j.at("payload").get<std::string>(); 
  }
}