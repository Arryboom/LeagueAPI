#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PluginMetadataResource.hpp>
namespace lol {
  struct PluginDescriptionResource { 
    std::map<std::string, std::string> pluginDependencies;
    PluginMetadataResource riotMeta;
    std::string version;
    std::string name; 
  };
  void to_json(json& j, const PluginDescriptionResource& v) {
  j["pluginDependencies"] = v.pluginDependencies; 
  j["riotMeta"] = v.riotMeta; 
  j["version"] = v.version; 
  j["name"] = v.name; 
  }
  void from_json(const json& j, PluginDescriptionResource& v) {
  v.pluginDependencies = j.at("pluginDependencies").get<std::map<std::string, std::string>>(); 
  v.riotMeta = j.at("riotMeta").get<PluginMetadataResource>(); 
  v.version = j.at("version").get<std::string>(); 
  v.name = j.at("name").get<std::string>(); 
  }
}