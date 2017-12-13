#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolReplaysReplaysSettingsData.hpp>
namespace lol {
  struct LolReplaysReplaysSettingsResource { 
    LolReplaysReplaysSettingsData data; 
  };
  void to_json(json& j, const LolReplaysReplaysSettingsResource& v) {
  j["data"] = v.data; 
  }
  void from_json(const json& j, LolReplaysReplaysSettingsResource& v) {
  v.data = j.at("data").get<LolReplaysReplaysSettingsData>(); 
  }
}