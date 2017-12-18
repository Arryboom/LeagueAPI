#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolCollectionsPlayerNotification { 
    std::string titleKey;
    std::string type;
    std::string iconUrl;
    std::string source;
    uint64_t id;
    std::string state;
    std::string detailKey;
    std::string backgroundUrl;
    bool critical;
    std::map<std::string, std::string> data; 
  };
  inline void to_json(json& j, const LolCollectionsPlayerNotification& v) {
    j["titleKey"] = v.titleKey; 
    j["type"] = v.type; 
    j["iconUrl"] = v.iconUrl; 
    j["source"] = v.source; 
    j["id"] = v.id; 
    j["state"] = v.state; 
    j["detailKey"] = v.detailKey; 
    j["backgroundUrl"] = v.backgroundUrl; 
    j["critical"] = v.critical; 
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, LolCollectionsPlayerNotification& v) {
    v.titleKey = j.at("titleKey").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.source = j.at("source").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.state = j.at("state").get<std::string>(); 
    v.detailKey = j.at("detailKey").get<std::string>(); 
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
    v.critical = j.at("critical").get<bool>(); 
    v.data = j.at("data").get<std::map<std::string, std::string>>(); 
  }
}