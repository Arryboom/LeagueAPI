#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct MissionProgressDTO { 
    int32_t currentProgress;
    int32_t totalCount;
    int32_t lastViewedProgress; 
  };
  void to_json(json& j, const MissionProgressDTO& v) {
  j["currentProgress"] = v.currentProgress; 
  j["totalCount"] = v.totalCount; 
  j["lastViewedProgress"] = v.lastViewedProgress; 
  }
  void from_json(const json& j, MissionProgressDTO& v) {
  v.currentProgress = j.at("currentProgress").get<int32_t>(); 
  v.totalCount = j.at("totalCount").get<int32_t>(); 
  v.lastViewedProgress = j.at("lastViewedProgress").get<int32_t>(); 
  }
}