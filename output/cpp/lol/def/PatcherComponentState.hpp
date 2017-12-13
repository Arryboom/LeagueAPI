#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PatcherComponentStateAction.hpp>
#include <lol/def/PatcherComponentActionProgress.hpp>
namespace lol {
  struct PatcherComponentState { 
    bool isCorrupted;
    PatcherComponentStateAction action;
    bool isUpdateAvailable;
    std::string id;
    std::optional<std::string> timeOfLastUpToDateCheckISO8601;
    std::optional<PatcherComponentActionProgress> progress;
    bool isUpToDate; 
  };
  void to_json(json& j, const PatcherComponentState& v) {
  j["isCorrupted"] = v.isCorrupted; 
  j["action"] = v.action; 
  j["isUpdateAvailable"] = v.isUpdateAvailable; 
  j["id"] = v.id; 
  j["timeOfLastUpToDateCheckISO8601"] = v.timeOfLastUpToDateCheckISO8601; 
  j["progress"] = v.progress; 
  j["isUpToDate"] = v.isUpToDate; 
  }
  void from_json(const json& j, PatcherComponentState& v) {
  v.isCorrupted = j.at("isCorrupted").get<bool>(); 
  v.action = j.at("action").get<PatcherComponentStateAction>(); 
  v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>(); 
  v.id = j.at("id").get<std::string>(); 
  v.timeOfLastUpToDateCheckISO8601 = j.at("timeOfLastUpToDateCheckISO8601").get<std::optional<std::string>>(); 
  v.progress = j.at("progress").get<std::optional<PatcherComponentActionProgress>>(); 
  v.isUpToDate = j.at("isUpToDate").get<bool>(); 
  }
}