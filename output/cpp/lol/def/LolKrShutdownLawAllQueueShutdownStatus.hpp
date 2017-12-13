#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolKrShutdownLawAllQueueShutdownStatus { 
    bool isAllQueuesDisabled; 
  };
  void to_json(json& j, const LolKrShutdownLawAllQueueShutdownStatus& v) {
  j["isAllQueuesDisabled"] = v.isAllQueuesDisabled; 
  }
  void from_json(const json& j, LolKrShutdownLawAllQueueShutdownStatus& v) {
  v.isAllQueuesDisabled = j.at("isAllQueuesDisabled").get<bool>(); 
  }
}