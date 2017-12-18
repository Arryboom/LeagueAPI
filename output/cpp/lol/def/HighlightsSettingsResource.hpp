#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/HighlightsSettingsData.hpp>
namespace lol {
  struct HighlightsSettingsResource { 
    HighlightsSettingsData data; 
  };
  inline void to_json(json& j, const HighlightsSettingsResource& v) {
    j["data"] = v.data; 
  }
  inline void from_json(const json& j, HighlightsSettingsResource& v) {
    v.data = j.at("data").get<HighlightsSettingsData>(); 
  }
}