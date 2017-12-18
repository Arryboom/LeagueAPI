#pragma once
#include "../base_def.hpp" 
#include "PlayerDTO.hpp"
#include "ThemeVp.hpp"
#include "TournamentInfoDTO.hpp"
#include "RosterStatsDTO.hpp"
namespace lol {
  struct TournamentPlayerInfoDTO { 
    PlayerDTO player;
    int64_t time;
    int32_t seasonVp;
    std::vector<RosterStatsDTO> rosterStats;
    std::vector<ThemeVp> themeVps;
    std::vector<TournamentInfoDTO> tournamentInfo; 
  };
  inline void to_json(json& j, const TournamentPlayerInfoDTO& v) {
    j["player"] = v.player; 
    j["time"] = v.time; 
    j["seasonVp"] = v.seasonVp; 
    j["rosterStats"] = v.rosterStats; 
    j["themeVps"] = v.themeVps; 
    j["tournamentInfo"] = v.tournamentInfo; 
  }
  inline void from_json(const json& j, TournamentPlayerInfoDTO& v) {
    v.player = j.at("player").get<PlayerDTO>(); 
    v.time = j.at("time").get<int64_t>(); 
    v.seasonVp = j.at("seasonVp").get<int32_t>(); 
    v.rosterStats = j.at("rosterStats").get<std::vector<RosterStatsDTO>>(); 
    v.themeVps = j.at("themeVps").get<std::vector<ThemeVp>>(); 
    v.tournamentInfo = j.at("tournamentInfo").get<std::vector<TournamentInfoDTO>>(); 
  }
}