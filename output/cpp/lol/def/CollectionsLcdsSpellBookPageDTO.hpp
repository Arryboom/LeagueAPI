#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/CollectionsLcdsSlotEntry.hpp>
namespace lol {
  struct CollectionsLcdsSpellBookPageDTO { 
    uint64_t createDate;
    std::string name;
    bool current;
    std::vector<CollectionsLcdsSlotEntry> slotEntries;
    uint32_t pageId;
    uint64_t summonerId; 
  };
  inline void to_json(json& j, const CollectionsLcdsSpellBookPageDTO& v) {
    j["createDate"] = v.createDate; 
    j["name"] = v.name; 
    j["current"] = v.current; 
    j["slotEntries"] = v.slotEntries; 
    j["pageId"] = v.pageId; 
    j["summonerId"] = v.summonerId; 
  }
  inline void from_json(const json& j, CollectionsLcdsSpellBookPageDTO& v) {
    v.createDate = j.at("createDate").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.current = j.at("current").get<bool>(); 
    v.slotEntries = j.at("slotEntries").get<std::vector<CollectionsLcdsSlotEntry>>(); 
    v.pageId = j.at("pageId").get<uint32_t>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
  }
}