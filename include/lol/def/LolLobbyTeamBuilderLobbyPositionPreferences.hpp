#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLobbyTeamBuilderLobbyPositionPreferences { 
    std::string firstPreference;
    std::string secondPreference; 
  };
  inline void to_json(json& j, const LolLobbyTeamBuilderLobbyPositionPreferences& v) {
    j["firstPreference"] = v.firstPreference; 
    j["secondPreference"] = v.secondPreference; 
  }
  inline void from_json(const json& j, LolLobbyTeamBuilderLobbyPositionPreferences& v) {
    v.firstPreference = j.at("firstPreference").get<std::string>(); 
    v.secondPreference = j.at("secondPreference").get<std::string>(); 
  }
}