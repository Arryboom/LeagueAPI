#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct LolLeaguesLoginSessionStates {  
    ERROR_e = 3,
    IN_PROGRESS_e = 0,
    LOGGING_OUT_e = 2,
    SUCCEEDED_e = 1,
  };
  inline void to_json(json& j, const LolLeaguesLoginSessionStates& v) {
    if(v == LolLeaguesLoginSessionStates::ERROR_e) {
      j = "ERROR";
      return;
    }
    if(v == LolLeaguesLoginSessionStates::IN_PROGRESS_e) {
      j = "IN_PROGRESS";
      return;
    }
    if(v == LolLeaguesLoginSessionStates::LOGGING_OUT_e) {
      j = "LOGGING_OUT";
      return;
    }
    if(v == LolLeaguesLoginSessionStates::SUCCEEDED_e) {
      j = "SUCCEEDED";
      return;
    }
  }
  inline void from_json(const json& j, LolLeaguesLoginSessionStates& v) {
    if(j.get<std::string>() == "ERROR") {
      v = LolLeaguesLoginSessionStates::ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "IN_PROGRESS") {
      v = LolLeaguesLoginSessionStates::IN_PROGRESS_e;
      return;
    } 
    if(j.get<std::string>() == "LOGGING_OUT") {
      v = LolLeaguesLoginSessionStates::LOGGING_OUT_e;
      return;
    } 
    if(j.get<std::string>() == "SUCCEEDED") {
      v = LolLeaguesLoginSessionStates::SUCCEEDED_e;
      return;
    } 
  }
}