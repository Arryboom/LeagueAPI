#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEmailVerificationRegionLocale { 
    std::string locale;
    std::string webLanguage;
    std::string webRegion;
    std::string region; 
  };
  void to_json(json& j, const LolEmailVerificationRegionLocale& v) {
  j["locale"] = v.locale; 
  j["webLanguage"] = v.webLanguage; 
  j["webRegion"] = v.webRegion; 
  j["region"] = v.region; 
  }
  void from_json(const json& j, LolEmailVerificationRegionLocale& v) {
  v.locale = j.at("locale").get<std::string>(); 
  v.webLanguage = j.at("webLanguage").get<std::string>(); 
  v.webRegion = j.at("webRegion").get<std::string>(); 
  v.region = j.at("region").get<std::string>(); 
  }
}