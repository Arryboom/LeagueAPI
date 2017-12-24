#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct MissionIdsDTO { 
    std::vector<std::string> missionIds; 
  };
  inline void to_json(json& j, const MissionIdsDTO& v) {
    j["missionIds"] = v.missionIds; 
  }
  inline void from_json(const json& j, MissionIdsDTO& v) {
    v.missionIds = j.at("missionIds").get<std::vector<std::string>>(); 
  }
}