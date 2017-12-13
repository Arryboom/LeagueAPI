#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LeaguesLcdsSummonerLeagueListDTO.hpp>
namespace lol {
  struct LeaguesLcdsSummonerLeaguesDTO { 
    std::vector<LeaguesLcdsSummonerLeagueListDTO> summonerLeagues; 
  };
  void to_json(json& j, const LeaguesLcdsSummonerLeaguesDTO& v) {
  j["summonerLeagues"] = v.summonerLeagues; 
  }
  void from_json(const json& j, LeaguesLcdsSummonerLeaguesDTO& v) {
  v.summonerLeagues = j.at("summonerLeagues").get<std::vector<LeaguesLcdsSummonerLeagueListDTO>>(); 
  }
}