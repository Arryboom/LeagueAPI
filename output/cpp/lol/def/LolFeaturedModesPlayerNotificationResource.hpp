#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolFeaturedModesPlayerNotificationResource { 
    std::string source;
    bool critical;
    std::string state;
    std::string backgroundUrl;
    std::string iconUrl;
    std::map<std::string, std::string> data;
    std::string type;
    std::string detailKey;
    std::string titleKey;
    std::string expires;
    uint64_t id; 
  };
  void to_json(json& j, const LolFeaturedModesPlayerNotificationResource& v) {
  j["source"] = v.source; 
  j["critical"] = v.critical; 
  j["state"] = v.state; 
  j["backgroundUrl"] = v.backgroundUrl; 
  j["iconUrl"] = v.iconUrl; 
  j["data"] = v.data; 
  j["type"] = v.type; 
  j["detailKey"] = v.detailKey; 
  j["titleKey"] = v.titleKey; 
  j["expires"] = v.expires; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolFeaturedModesPlayerNotificationResource& v) {
  v.source = j.at("source").get<std::string>(); 
  v.critical = j.at("critical").get<bool>(); 
  v.state = j.at("state").get<std::string>(); 
  v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
  v.iconUrl = j.at("iconUrl").get<std::string>(); 
  v.data = j.at("data").get<std::map<std::string, std::string>>(); 
  v.type = j.at("type").get<std::string>(); 
  v.detailKey = j.at("detailKey").get<std::string>(); 
  v.titleKey = j.at("titleKey").get<std::string>(); 
  v.expires = j.at("expires").get<std::string>(); 
  v.id = j.at("id").get<uint64_t>(); 
  }
}