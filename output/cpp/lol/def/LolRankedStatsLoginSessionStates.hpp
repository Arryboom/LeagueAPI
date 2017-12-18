#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  enum struct LolRankedStatsLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolRankedStatsLoginSessionStates& v) {
    if(v == LolRankedStatsLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolRankedStatsLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolRankedStatsLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolRankedStatsLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolRankedStatsLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolRankedStatsLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolRankedStatsLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolRankedStatsLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolRankedStatsLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}