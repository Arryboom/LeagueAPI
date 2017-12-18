#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/LolPurchaseWidgetValidationRequestItem.hpp>
namespace lol {
  struct LolPurchaseWidgetValidationRequest { 
    std::vector<LolPurchaseWidgetValidationRequestItem> items; 
  };
  inline void to_json(json& j, const LolPurchaseWidgetValidationRequest& v) {
    j["items"] = v.items; 
  }
  inline void from_json(const json& j, LolPurchaseWidgetValidationRequest& v) {
    v.items = j.at("items").get<std::vector<LolPurchaseWidgetValidationRequestItem>>(); 
  }
}