#pragma once
#include "../base_def.hpp" 
#include "ClubMember.hpp"
namespace lol {
  struct ClubMemberLists { 
    std::vector<ClubMember> activeMembers;
    std::vector<ClubMember> invitedMembers;
    std::vector<ClubMember> removedMembers;
    std::vector<ClubMember> nominatedMembers; 
  };
  inline void to_json(json& j, const ClubMemberLists& v) {
    j["activeMembers"] = v.activeMembers; 
    j["invitedMembers"] = v.invitedMembers; 
    j["removedMembers"] = v.removedMembers; 
    j["nominatedMembers"] = v.nominatedMembers; 
  }
  inline void from_json(const json& j, ClubMemberLists& v) {
    v.activeMembers = j.at("activeMembers").get<std::vector<ClubMember>>(); 
    v.invitedMembers = j.at("invitedMembers").get<std::vector<ClubMember>>(); 
    v.removedMembers = j.at("removedMembers").get<std::vector<ClubMember>>(); 
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<ClubMember>>(); 
  }
}