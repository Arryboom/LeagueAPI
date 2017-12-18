#pragma once
#include "../base_def.hpp" 
#include "PendingRosterDTO.hpp"
#include "LolClashNotifyReason.hpp"
namespace lol {
  struct LolClashPendingRosterNotification { 
    uint64_t sourcePlayerId;
    LolClashNotifyReason notifyReason;
    uint64_t targetPlayerId;
    PendingRosterDTO pendingRoster; 
  };
  inline void to_json(json& j, const LolClashPendingRosterNotification& v) {
    j["sourcePlayerId"] = v.sourcePlayerId; 
    j["notifyReason"] = v.notifyReason; 
    j["targetPlayerId"] = v.targetPlayerId; 
    j["pendingRoster"] = v.pendingRoster; 
  }
  inline void from_json(const json& j, LolClashPendingRosterNotification& v) {
    v.sourcePlayerId = j.at("sourcePlayerId").get<uint64_t>(); 
    v.notifyReason = j.at("notifyReason").get<LolClashNotifyReason>(); 
    v.targetPlayerId = j.at("targetPlayerId").get<uint64_t>(); 
    v.pendingRoster = j.at("pendingRoster").get<PendingRosterDTO>(); 
  }
}