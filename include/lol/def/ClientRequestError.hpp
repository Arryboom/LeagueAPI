#pragma once
#include "../base_def.hpp" 
namespace lol {
  enum struct ClientRequestError {  
    ALREADY_DECLINE_WITHDRAW_e = 3,
    ALREADY_INVITED_e = 1,
    ALREADY_IN_PHASE_e = 5,
    ALREADY_MEMBER_e = 0,
    ALREADY_SUGGESTED_e = 2,
    ALREADY_VOTE_WITHDRAW_e = 4,
    CANNOT_SUB_e = 7,
    CAPTAIN_NOT_ALLOWED_e = 6,
    FAIL_INVITE_e = 9,
    FAIL_SUGGESTINVITE_e = 10,
    INACTIVE_PHASE_e = 18,
    INACTIVE_REGISTRATION_e = 17,
    INTERNAL_ERROR_e = 19,
    INVALID_BRACKET_e = 33,
    INVALID_BUY_BACK_e = 21,
    INVALID_CHECKELIGIBILITY_SIZE_e = 32,
    INVALID_INVITEE_e = 25,
    INVALID_LOGO_e = 28,
    INVALID_LOGOCOLOR_e = 29,
    INVALID_MATCHID_e = 34,
    INVALID_MATCHSTATUS_FORGAMEEND_e = 38,
    INVALID_NAME_e = 30,
    INVALID_PHASE_e = 24,
    INVALID_PLAYER_e = 35,
    INVALID_POSITION_e = 27,
    INVALID_ROSTER_e = 20,
    INVALID_ROSTER_MEMBER_SIZE_e = 26,
    INVALID_SHORTNAME_e = 31,
    INVALID_SUB_e = 22,
    INVALID_TOURNAMENT_e = 23,
    INVALID_Tier_e = 36,
    INVALID_WITHDRAW_e = 37,
    IN_OTHER_PENDINGROSTER_e = 15,
    IN_OTHER_PHASE_OF_PERIOD_e = 16,
    IN_OTHER_ROSTER_e = 14,
    LOGOCOLOR_NOT_ALLOWED_e = 13,
    LOGO_NOT_ALLOWED_e = 12,
    MAX_INVITED_e = 39,
    MAX_ROSTER_FETCHSIZE_e = 41,
    MAX_SUBED_e = 40,
    MAX_SUB_SIZE_e = 42,
    NOT_ALLOWED_DELETE_TOURNAMENT_e = 51,
    NOT_CAPTAIN_e = 46,
    NOT_ENOUGH_TICKETS_e = 50,
    NOT_INVITEE_e = 48,
    NOT_MEMBER_e = 47,
    NOT_SEED_INTO_LEAGUE_e = 49,
    NO_AVAILABLE_PHASE_e = 45,
    NO_PERMISSION_e = 44,
    NO_SAME_PLAYER_e = 43,
    OVER_INVITE_e = 53,
    OVER_SUGGESTION_INVITE_e = 52,
    PENDING_ROSTER_CLOSE_e = 56,
    PENDING_ROSTER_FULL_e = 55,
    PENDING_ROSTER_NOT_READY_e = 54,
    ROSTER_DISBAND_NOT_ALLOWED_e = 58,
    ROSTER_ELIMINATED_e = 57,
    SMS_NOT_VERIFIED_e = 60,
    SUGGEST_INVITEE_NOT_EXIST_e = 59,
    TICKET_ALREADY_SET_e = 61,
    TICKET_NOT_SET_e = 64,
    TICKET_OFFER_NOT_EXIST_e = 62,
    TICKET_OFFER_OVER_LIMIT_e = 63,
    WITHDRAW_CANCEL_NOT_ALLOWED_e = 66,
    WITHDRAW_LOCKOUT_e = 67,
    WITHDRAW_NOT_ALLOWED_e = 65,
  };
  inline void to_json(json& j, const ClientRequestError& v) {
    if(v == ClientRequestError::ALREADY_DECLINE_WITHDRAW_e) {
      j = "ALREADY_DECLINE_WITHDRAW";
      return;
    }
    if(v == ClientRequestError::ALREADY_INVITED_e) {
      j = "ALREADY_INVITED";
      return;
    }
    if(v == ClientRequestError::ALREADY_IN_PHASE_e) {
      j = "ALREADY_IN_PHASE";
      return;
    }
    if(v == ClientRequestError::ALREADY_MEMBER_e) {
      j = "ALREADY_MEMBER";
      return;
    }
    if(v == ClientRequestError::ALREADY_SUGGESTED_e) {
      j = "ALREADY_SUGGESTED";
      return;
    }
    if(v == ClientRequestError::ALREADY_VOTE_WITHDRAW_e) {
      j = "ALREADY_VOTE_WITHDRAW";
      return;
    }
    if(v == ClientRequestError::CANNOT_SUB_e) {
      j = "CANNOT_SUB";
      return;
    }
    if(v == ClientRequestError::CAPTAIN_NOT_ALLOWED_e) {
      j = "CAPTAIN_NOT_ALLOWED";
      return;
    }
    if(v == ClientRequestError::FAIL_INVITE_e) {
      j = "FAIL_INVITE";
      return;
    }
    if(v == ClientRequestError::FAIL_SUGGESTINVITE_e) {
      j = "FAIL_SUGGESTINVITE";
      return;
    }
    if(v == ClientRequestError::INACTIVE_PHASE_e) {
      j = "INACTIVE_PHASE";
      return;
    }
    if(v == ClientRequestError::INACTIVE_REGISTRATION_e) {
      j = "INACTIVE_REGISTRATION";
      return;
    }
    if(v == ClientRequestError::INTERNAL_ERROR_e) {
      j = "INTERNAL_ERROR";
      return;
    }
    if(v == ClientRequestError::INVALID_BRACKET_e) {
      j = "INVALID_BRACKET";
      return;
    }
    if(v == ClientRequestError::INVALID_BUY_BACK_e) {
      j = "INVALID_BUY_BACK";
      return;
    }
    if(v == ClientRequestError::INVALID_CHECKELIGIBILITY_SIZE_e) {
      j = "INVALID_CHECKELIGIBILITY_SIZE";
      return;
    }
    if(v == ClientRequestError::INVALID_INVITEE_e) {
      j = "INVALID_INVITEE";
      return;
    }
    if(v == ClientRequestError::INVALID_LOGO_e) {
      j = "INVALID_LOGO";
      return;
    }
    if(v == ClientRequestError::INVALID_LOGOCOLOR_e) {
      j = "INVALID_LOGOCOLOR";
      return;
    }
    if(v == ClientRequestError::INVALID_MATCHID_e) {
      j = "INVALID_MATCHID";
      return;
    }
    if(v == ClientRequestError::INVALID_MATCHSTATUS_FORGAMEEND_e) {
      j = "INVALID_MATCHSTATUS_FORGAMEEND";
      return;
    }
    if(v == ClientRequestError::INVALID_NAME_e) {
      j = "INVALID_NAME";
      return;
    }
    if(v == ClientRequestError::INVALID_PHASE_e) {
      j = "INVALID_PHASE";
      return;
    }
    if(v == ClientRequestError::INVALID_PLAYER_e) {
      j = "INVALID_PLAYER";
      return;
    }
    if(v == ClientRequestError::INVALID_POSITION_e) {
      j = "INVALID_POSITION";
      return;
    }
    if(v == ClientRequestError::INVALID_ROSTER_e) {
      j = "INVALID_ROSTER";
      return;
    }
    if(v == ClientRequestError::INVALID_ROSTER_MEMBER_SIZE_e) {
      j = "INVALID_ROSTER_MEMBER_SIZE";
      return;
    }
    if(v == ClientRequestError::INVALID_SHORTNAME_e) {
      j = "INVALID_SHORTNAME";
      return;
    }
    if(v == ClientRequestError::INVALID_SUB_e) {
      j = "INVALID_SUB";
      return;
    }
    if(v == ClientRequestError::INVALID_TOURNAMENT_e) {
      j = "INVALID_TOURNAMENT";
      return;
    }
    if(v == ClientRequestError::INVALID_Tier_e) {
      j = "INVALID_Tier";
      return;
    }
    if(v == ClientRequestError::INVALID_WITHDRAW_e) {
      j = "INVALID_WITHDRAW";
      return;
    }
    if(v == ClientRequestError::IN_OTHER_PENDINGROSTER_e) {
      j = "IN_OTHER_PENDINGROSTER";
      return;
    }
    if(v == ClientRequestError::IN_OTHER_PHASE_OF_PERIOD_e) {
      j = "IN_OTHER_PHASE_OF_PERIOD";
      return;
    }
    if(v == ClientRequestError::IN_OTHER_ROSTER_e) {
      j = "IN_OTHER_ROSTER";
      return;
    }
    if(v == ClientRequestError::LOGOCOLOR_NOT_ALLOWED_e) {
      j = "LOGOCOLOR_NOT_ALLOWED";
      return;
    }
    if(v == ClientRequestError::LOGO_NOT_ALLOWED_e) {
      j = "LOGO_NOT_ALLOWED";
      return;
    }
    if(v == ClientRequestError::MAX_INVITED_e) {
      j = "MAX_INVITED";
      return;
    }
    if(v == ClientRequestError::MAX_ROSTER_FETCHSIZE_e) {
      j = "MAX_ROSTER_FETCHSIZE";
      return;
    }
    if(v == ClientRequestError::MAX_SUBED_e) {
      j = "MAX_SUBED";
      return;
    }
    if(v == ClientRequestError::MAX_SUB_SIZE_e) {
      j = "MAX_SUB_SIZE";
      return;
    }
    if(v == ClientRequestError::NOT_ALLOWED_DELETE_TOURNAMENT_e) {
      j = "NOT_ALLOWED_DELETE_TOURNAMENT";
      return;
    }
    if(v == ClientRequestError::NOT_CAPTAIN_e) {
      j = "NOT_CAPTAIN";
      return;
    }
    if(v == ClientRequestError::NOT_ENOUGH_TICKETS_e) {
      j = "NOT_ENOUGH_TICKETS";
      return;
    }
    if(v == ClientRequestError::NOT_INVITEE_e) {
      j = "NOT_INVITEE";
      return;
    }
    if(v == ClientRequestError::NOT_MEMBER_e) {
      j = "NOT_MEMBER";
      return;
    }
    if(v == ClientRequestError::NOT_SEED_INTO_LEAGUE_e) {
      j = "NOT_SEED_INTO_LEAGUE";
      return;
    }
    if(v == ClientRequestError::NO_AVAILABLE_PHASE_e) {
      j = "NO_AVAILABLE_PHASE";
      return;
    }
    if(v == ClientRequestError::NO_PERMISSION_e) {
      j = "NO_PERMISSION";
      return;
    }
    if(v == ClientRequestError::NO_SAME_PLAYER_e) {
      j = "NO_SAME_PLAYER";
      return;
    }
    if(v == ClientRequestError::OVER_INVITE_e) {
      j = "OVER_INVITE";
      return;
    }
    if(v == ClientRequestError::OVER_SUGGESTION_INVITE_e) {
      j = "OVER_SUGGESTION_INVITE";
      return;
    }
    if(v == ClientRequestError::PENDING_ROSTER_CLOSE_e) {
      j = "PENDING_ROSTER_CLOSE";
      return;
    }
    if(v == ClientRequestError::PENDING_ROSTER_FULL_e) {
      j = "PENDING_ROSTER_FULL";
      return;
    }
    if(v == ClientRequestError::PENDING_ROSTER_NOT_READY_e) {
      j = "PENDING_ROSTER_NOT_READY";
      return;
    }
    if(v == ClientRequestError::ROSTER_DISBAND_NOT_ALLOWED_e) {
      j = "ROSTER_DISBAND_NOT_ALLOWED";
      return;
    }
    if(v == ClientRequestError::ROSTER_ELIMINATED_e) {
      j = "ROSTER_ELIMINATED";
      return;
    }
    if(v == ClientRequestError::SMS_NOT_VERIFIED_e) {
      j = "SMS_NOT_VERIFIED";
      return;
    }
    if(v == ClientRequestError::SUGGEST_INVITEE_NOT_EXIST_e) {
      j = "SUGGEST_INVITEE_NOT_EXIST";
      return;
    }
    if(v == ClientRequestError::TICKET_ALREADY_SET_e) {
      j = "TICKET_ALREADY_SET";
      return;
    }
    if(v == ClientRequestError::TICKET_NOT_SET_e) {
      j = "TICKET_NOT_SET";
      return;
    }
    if(v == ClientRequestError::TICKET_OFFER_NOT_EXIST_e) {
      j = "TICKET_OFFER_NOT_EXIST";
      return;
    }
    if(v == ClientRequestError::TICKET_OFFER_OVER_LIMIT_e) {
      j = "TICKET_OFFER_OVER_LIMIT";
      return;
    }
    if(v == ClientRequestError::WITHDRAW_CANCEL_NOT_ALLOWED_e) {
      j = "WITHDRAW_CANCEL_NOT_ALLOWED";
      return;
    }
    if(v == ClientRequestError::WITHDRAW_LOCKOUT_e) {
      j = "WITHDRAW_LOCKOUT";
      return;
    }
    if(v == ClientRequestError::WITHDRAW_NOT_ALLOWED_e) {
      j = "WITHDRAW_NOT_ALLOWED";
      return;
    }
  }
  inline void from_json(const json& j, ClientRequestError& v) {
    if(j.get<std::string>() == "ALREADY_DECLINE_WITHDRAW") {
      v = ClientRequestError::ALREADY_DECLINE_WITHDRAW_e;
      return;
    } 
    if(j.get<std::string>() == "ALREADY_INVITED") {
      v = ClientRequestError::ALREADY_INVITED_e;
      return;
    } 
    if(j.get<std::string>() == "ALREADY_IN_PHASE") {
      v = ClientRequestError::ALREADY_IN_PHASE_e;
      return;
    } 
    if(j.get<std::string>() == "ALREADY_MEMBER") {
      v = ClientRequestError::ALREADY_MEMBER_e;
      return;
    } 
    if(j.get<std::string>() == "ALREADY_SUGGESTED") {
      v = ClientRequestError::ALREADY_SUGGESTED_e;
      return;
    } 
    if(j.get<std::string>() == "ALREADY_VOTE_WITHDRAW") {
      v = ClientRequestError::ALREADY_VOTE_WITHDRAW_e;
      return;
    } 
    if(j.get<std::string>() == "CANNOT_SUB") {
      v = ClientRequestError::CANNOT_SUB_e;
      return;
    } 
    if(j.get<std::string>() == "CAPTAIN_NOT_ALLOWED") {
      v = ClientRequestError::CAPTAIN_NOT_ALLOWED_e;
      return;
    } 
    if(j.get<std::string>() == "FAIL_INVITE") {
      v = ClientRequestError::FAIL_INVITE_e;
      return;
    } 
    if(j.get<std::string>() == "FAIL_SUGGESTINVITE") {
      v = ClientRequestError::FAIL_SUGGESTINVITE_e;
      return;
    } 
    if(j.get<std::string>() == "INACTIVE_PHASE") {
      v = ClientRequestError::INACTIVE_PHASE_e;
      return;
    } 
    if(j.get<std::string>() == "INACTIVE_REGISTRATION") {
      v = ClientRequestError::INACTIVE_REGISTRATION_e;
      return;
    } 
    if(j.get<std::string>() == "INTERNAL_ERROR") {
      v = ClientRequestError::INTERNAL_ERROR_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_BRACKET") {
      v = ClientRequestError::INVALID_BRACKET_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_BUY_BACK") {
      v = ClientRequestError::INVALID_BUY_BACK_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_CHECKELIGIBILITY_SIZE") {
      v = ClientRequestError::INVALID_CHECKELIGIBILITY_SIZE_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_INVITEE") {
      v = ClientRequestError::INVALID_INVITEE_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_LOGO") {
      v = ClientRequestError::INVALID_LOGO_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_LOGOCOLOR") {
      v = ClientRequestError::INVALID_LOGOCOLOR_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_MATCHID") {
      v = ClientRequestError::INVALID_MATCHID_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_MATCHSTATUS_FORGAMEEND") {
      v = ClientRequestError::INVALID_MATCHSTATUS_FORGAMEEND_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_NAME") {
      v = ClientRequestError::INVALID_NAME_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_PHASE") {
      v = ClientRequestError::INVALID_PHASE_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_PLAYER") {
      v = ClientRequestError::INVALID_PLAYER_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_POSITION") {
      v = ClientRequestError::INVALID_POSITION_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_ROSTER") {
      v = ClientRequestError::INVALID_ROSTER_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_ROSTER_MEMBER_SIZE") {
      v = ClientRequestError::INVALID_ROSTER_MEMBER_SIZE_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_SHORTNAME") {
      v = ClientRequestError::INVALID_SHORTNAME_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_SUB") {
      v = ClientRequestError::INVALID_SUB_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_TOURNAMENT") {
      v = ClientRequestError::INVALID_TOURNAMENT_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_Tier") {
      v = ClientRequestError::INVALID_Tier_e;
      return;
    } 
    if(j.get<std::string>() == "INVALID_WITHDRAW") {
      v = ClientRequestError::INVALID_WITHDRAW_e;
      return;
    } 
    if(j.get<std::string>() == "IN_OTHER_PENDINGROSTER") {
      v = ClientRequestError::IN_OTHER_PENDINGROSTER_e;
      return;
    } 
    if(j.get<std::string>() == "IN_OTHER_PHASE_OF_PERIOD") {
      v = ClientRequestError::IN_OTHER_PHASE_OF_PERIOD_e;
      return;
    } 
    if(j.get<std::string>() == "IN_OTHER_ROSTER") {
      v = ClientRequestError::IN_OTHER_ROSTER_e;
      return;
    } 
    if(j.get<std::string>() == "LOGOCOLOR_NOT_ALLOWED") {
      v = ClientRequestError::LOGOCOLOR_NOT_ALLOWED_e;
      return;
    } 
    if(j.get<std::string>() == "LOGO_NOT_ALLOWED") {
      v = ClientRequestError::LOGO_NOT_ALLOWED_e;
      return;
    } 
    if(j.get<std::string>() == "MAX_INVITED") {
      v = ClientRequestError::MAX_INVITED_e;
      return;
    } 
    if(j.get<std::string>() == "MAX_ROSTER_FETCHSIZE") {
      v = ClientRequestError::MAX_ROSTER_FETCHSIZE_e;
      return;
    } 
    if(j.get<std::string>() == "MAX_SUBED") {
      v = ClientRequestError::MAX_SUBED_e;
      return;
    } 
    if(j.get<std::string>() == "MAX_SUB_SIZE") {
      v = ClientRequestError::MAX_SUB_SIZE_e;
      return;
    } 
    if(j.get<std::string>() == "NOT_ALLOWED_DELETE_TOURNAMENT") {
      v = ClientRequestError::NOT_ALLOWED_DELETE_TOURNAMENT_e;
      return;
    } 
    if(j.get<std::string>() == "NOT_CAPTAIN") {
      v = ClientRequestError::NOT_CAPTAIN_e;
      return;
    } 
    if(j.get<std::string>() == "NOT_ENOUGH_TICKETS") {
      v = ClientRequestError::NOT_ENOUGH_TICKETS_e;
      return;
    } 
    if(j.get<std::string>() == "NOT_INVITEE") {
      v = ClientRequestError::NOT_INVITEE_e;
      return;
    } 
    if(j.get<std::string>() == "NOT_MEMBER") {
      v = ClientRequestError::NOT_MEMBER_e;
      return;
    } 
    if(j.get<std::string>() == "NOT_SEED_INTO_LEAGUE") {
      v = ClientRequestError::NOT_SEED_INTO_LEAGUE_e;
      return;
    } 
    if(j.get<std::string>() == "NO_AVAILABLE_PHASE") {
      v = ClientRequestError::NO_AVAILABLE_PHASE_e;
      return;
    } 
    if(j.get<std::string>() == "NO_PERMISSION") {
      v = ClientRequestError::NO_PERMISSION_e;
      return;
    } 
    if(j.get<std::string>() == "NO_SAME_PLAYER") {
      v = ClientRequestError::NO_SAME_PLAYER_e;
      return;
    } 
    if(j.get<std::string>() == "OVER_INVITE") {
      v = ClientRequestError::OVER_INVITE_e;
      return;
    } 
    if(j.get<std::string>() == "OVER_SUGGESTION_INVITE") {
      v = ClientRequestError::OVER_SUGGESTION_INVITE_e;
      return;
    } 
    if(j.get<std::string>() == "PENDING_ROSTER_CLOSE") {
      v = ClientRequestError::PENDING_ROSTER_CLOSE_e;
      return;
    } 
    if(j.get<std::string>() == "PENDING_ROSTER_FULL") {
      v = ClientRequestError::PENDING_ROSTER_FULL_e;
      return;
    } 
    if(j.get<std::string>() == "PENDING_ROSTER_NOT_READY") {
      v = ClientRequestError::PENDING_ROSTER_NOT_READY_e;
      return;
    } 
    if(j.get<std::string>() == "ROSTER_DISBAND_NOT_ALLOWED") {
      v = ClientRequestError::ROSTER_DISBAND_NOT_ALLOWED_e;
      return;
    } 
    if(j.get<std::string>() == "ROSTER_ELIMINATED") {
      v = ClientRequestError::ROSTER_ELIMINATED_e;
      return;
    } 
    if(j.get<std::string>() == "SMS_NOT_VERIFIED") {
      v = ClientRequestError::SMS_NOT_VERIFIED_e;
      return;
    } 
    if(j.get<std::string>() == "SUGGEST_INVITEE_NOT_EXIST") {
      v = ClientRequestError::SUGGEST_INVITEE_NOT_EXIST_e;
      return;
    } 
    if(j.get<std::string>() == "TICKET_ALREADY_SET") {
      v = ClientRequestError::TICKET_ALREADY_SET_e;
      return;
    } 
    if(j.get<std::string>() == "TICKET_NOT_SET") {
      v = ClientRequestError::TICKET_NOT_SET_e;
      return;
    } 
    if(j.get<std::string>() == "TICKET_OFFER_NOT_EXIST") {
      v = ClientRequestError::TICKET_OFFER_NOT_EXIST_e;
      return;
    } 
    if(j.get<std::string>() == "TICKET_OFFER_OVER_LIMIT") {
      v = ClientRequestError::TICKET_OFFER_OVER_LIMIT_e;
      return;
    } 
    if(j.get<std::string>() == "WITHDRAW_CANCEL_NOT_ALLOWED") {
      v = ClientRequestError::WITHDRAW_CANCEL_NOT_ALLOWED_e;
      return;
    } 
    if(j.get<std::string>() == "WITHDRAW_LOCKOUT") {
      v = ClientRequestError::WITHDRAW_LOCKOUT_e;
      return;
    } 
    if(j.get<std::string>() == "WITHDRAW_NOT_ALLOWED") {
      v = ClientRequestError::WITHDRAW_NOT_ALLOWED_e;
      return;
    } 
  }
}