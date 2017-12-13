#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PatcherComponentStateAction.hpp>
#include <lol/def/PatcherComponentState.hpp>
namespace lol {
  struct PatcherProductState { 
    bool isCorrupted;
    PatcherComponentStateAction action;
    bool isUpdateAvailable;
    std::string id;
    double percentPatched;
    bool isStopped;
    std::vector<PatcherComponentState> components;
    bool isUpToDate; 
  };
  void to_json(json& j, const PatcherProductState& v) {
  j["isCorrupted"] = v.isCorrupted; 
  j["action"] = v.action; 
  j["isUpdateAvailable"] = v.isUpdateAvailable; 
  j["id"] = v.id; 
  j["percentPatched"] = v.percentPatched; 
  j["isStopped"] = v.isStopped; 
  j["components"] = v.components; 
  j["isUpToDate"] = v.isUpToDate; 
  }
  void from_json(const json& j, PatcherProductState& v) {
  v.isCorrupted = j.at("isCorrupted").get<bool>(); 
  v.action = j.at("action").get<PatcherComponentStateAction>(); 
  v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
  v.id = j.at("id").get<std::string>(); 
  v.percentPatched = j.at("percentPatched").get<double>(); 
  v.isStopped = j.at("isStopped").get<bool>(); 
  v.components = j.at("components").get<std::vector<PatcherComponentState>>(); 
  v.isUpToDate = j.at("isUpToDate").get<bool>(); 
  }
}