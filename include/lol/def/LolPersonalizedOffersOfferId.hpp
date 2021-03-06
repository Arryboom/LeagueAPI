#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolPersonalizedOffersOfferId { 
    std::string offerId; 
  };
  inline void to_json(json& j, const LolPersonalizedOffersOfferId& v) {
    j["offerId"] = v.offerId; 
  }
  inline void from_json(const json& j, LolPersonalizedOffersOfferId& v) {
    v.offerId = j.at("offerId").get<std::string>(); 
  }
}