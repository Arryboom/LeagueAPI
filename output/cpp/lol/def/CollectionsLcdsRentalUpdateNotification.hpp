#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct CollectionsLcdsRentalUpdateNotification { 
    std::string inventoryType;
    json data; 
  };
  void to_json(json& j, const CollectionsLcdsRentalUpdateNotification& v) {
  j["inventoryType"] = v.inventoryType; 
  j["data"] = v.data; 
  }
  void from_json(const json& j, CollectionsLcdsRentalUpdateNotification& v) {
  v.inventoryType = j.at("inventoryType").get<std::string>(); 
  v.data = j.at("data").get<json>(); 
  }
}