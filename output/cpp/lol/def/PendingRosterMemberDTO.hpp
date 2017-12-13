#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/Position.hpp>
#include <lol/def/PendingRosterMemberState.hpp>
namespace lol {
  struct PendingRosterMemberDTO { 
    uint64_t playerId;
    PendingRosterMemberState memberState;
    int64_t joinTime;
    int32_t pay;
    Position position;
    int32_t bet; 
  };
  void to_json(json& j, const PendingRosterMemberDTO& v) {
  j["playerId"] = v.playerId; 
  j["memberState"] = v.memberState; 
  j["joinTime"] = v.joinTime; 
  j["pay"] = v.pay; 
  j["position"] = v.position; 
  j["bet"] = v.bet; 
  }
  void from_json(const json& j, PendingRosterMemberDTO& v) {
  v.playerId = j.at("playerId").get<uint64_t>(); 
  v.memberState = j.at("memberState").get<PendingRosterMemberState>(); 
  v.joinTime = j.at("joinTime").get<int64_t>(); 
  v.pay = j.at("pay").get<int32_t>(); 
  v.position = j.at("position").get<Position>(); 
  v.bet = j.at("bet").get<int32_t>(); 
  }
}