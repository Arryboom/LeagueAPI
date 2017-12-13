#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEsportStreamNotificationsLiveMatchTeam { 
    std::string acronym;
    std::string name;
    std::string logoUrl;
    std::string guid; 
  };
  void to_json(json& j, const LolEsportStreamNotificationsLiveMatchTeam& v) {
  j["acronym"] = v.acronym; 
  j["name"] = v.name; 
  j["logoUrl"] = v.logoUrl; 
  j["guid"] = v.guid; 
  }
  void from_json(const json& j, LolEsportStreamNotificationsLiveMatchTeam& v) {
  v.acronym = j.at("acronym").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  v.logoUrl = j.at("logoUrl").get<std::string>(); 
  v.guid = j.at("guid").get<std::string>(); 
  }
}