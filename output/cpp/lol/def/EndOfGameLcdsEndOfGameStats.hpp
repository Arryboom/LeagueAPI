#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/EndOfGameLcdsPointsPenalty.hpp>
#include <lol/def/EndOfGameLcdsTeamInfo.hpp>
#include <lol/def/EndOfGameLcdsSpell.hpp>
#include <lol/def/EndOfGameLcdsPlayerParticipantStatsSummary.hpp>
namespace lol {
  struct EndOfGameLcdsEndOfGameStats { 
    std::string roomName;
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary> teamPlayerParticipantStats;
    int32_t skinId;
    int32_t elo;
    bool ranked;
    int32_t loyaltyBoostIpEarned;
    std::vector<EndOfGameLcdsPlayerParticipantStatsSummary> otherTeamPlayerParticipantStats;
    bool imbalancedTeamsNoPoints;
    std::string gameMode;
    int32_t experienceEarned;
    EndOfGameLcdsTeamInfo myTeamInfo;
    int32_t battleBoostIpEarned;
    std::string summonerName;
    int32_t rpEarned;
    bool teamEarlySurrendered;
    int32_t ipEarned;
    std::vector<EndOfGameLcdsSpell> newSpells;
    int32_t timeUntilNextFirstWinBonus;
    std::string queueType;
    int32_t coOpVsAiMinutesLeftToday;
    int32_t loyaltyBoostXpEarned;
    bool earlySurrenderAccomplice;
    int32_t customMinutesLeftToday;
    int32_t talentPointsGained;
    std::string roomPassword;
    int32_t basePoints;
    uint64_t gameId;
    uint64_t previousLevel;
    bool invalid;
    std::vector<EndOfGameLcdsPointsPenalty> pointsPenalties;
    std::string gameType;
    int32_t partyRewardsBonusIpEarned;
    uint64_t previousXpTotal;
    int32_t queueBonusEarned;
    std::string myTeamStatus;
    uint64_t reportGameId;
    uint64_t userId;
    std::vector<std::string> gameMutators;
    bool sendStatsToTournamentProvider;
    EndOfGameLcdsTeamInfo otherTeamInfo;
    int32_t boostIpEarned;
    int32_t experienceTotal;
    int32_t ipTotal;
    int32_t coOpVsAiMsecsUntilReset;
    bool leveledUp;
    std::string difficulty;
    int32_t eloChange;
    int32_t completionBonusPoints;
    int32_t skinIndex;
    int32_t odinBonusIp;
    int32_t boostXpEarned;
    bool causedEarlySurrender;
    bool gameEndedInEarlySurrender;
    int32_t firstWinBonus;
    int32_t customMsecsUntilReset;
    uint32_t gameLength; 
  };
  inline void to_json(json& j, const EndOfGameLcdsEndOfGameStats& v) {
    j["roomName"] = v.roomName; 
    j["teamPlayerParticipantStats"] = v.teamPlayerParticipantStats; 
    j["skinId"] = v.skinId; 
    j["elo"] = v.elo; 
    j["ranked"] = v.ranked; 
    j["loyaltyBoostIpEarned"] = v.loyaltyBoostIpEarned; 
    j["otherTeamPlayerParticipantStats"] = v.otherTeamPlayerParticipantStats; 
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints; 
    j["gameMode"] = v.gameMode; 
    j["experienceEarned"] = v.experienceEarned; 
    j["myTeamInfo"] = v.myTeamInfo; 
    j["battleBoostIpEarned"] = v.battleBoostIpEarned; 
    j["summonerName"] = v.summonerName; 
    j["rpEarned"] = v.rpEarned; 
    j["teamEarlySurrendered"] = v.teamEarlySurrendered; 
    j["ipEarned"] = v.ipEarned; 
    j["newSpells"] = v.newSpells; 
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus; 
    j["queueType"] = v.queueType; 
    j["coOpVsAiMinutesLeftToday"] = v.coOpVsAiMinutesLeftToday; 
    j["loyaltyBoostXpEarned"] = v.loyaltyBoostXpEarned; 
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice; 
    j["customMinutesLeftToday"] = v.customMinutesLeftToday; 
    j["talentPointsGained"] = v.talentPointsGained; 
    j["roomPassword"] = v.roomPassword; 
    j["basePoints"] = v.basePoints; 
    j["gameId"] = v.gameId; 
    j["previousLevel"] = v.previousLevel; 
    j["invalid"] = v.invalid; 
    j["pointsPenalties"] = v.pointsPenalties; 
    j["gameType"] = v.gameType; 
    j["partyRewardsBonusIpEarned"] = v.partyRewardsBonusIpEarned; 
    j["previousXpTotal"] = v.previousXpTotal; 
    j["queueBonusEarned"] = v.queueBonusEarned; 
    j["myTeamStatus"] = v.myTeamStatus; 
    j["reportGameId"] = v.reportGameId; 
    j["userId"] = v.userId; 
    j["gameMutators"] = v.gameMutators; 
    j["sendStatsToTournamentProvider"] = v.sendStatsToTournamentProvider; 
    j["otherTeamInfo"] = v.otherTeamInfo; 
    j["boostIpEarned"] = v.boostIpEarned; 
    j["experienceTotal"] = v.experienceTotal; 
    j["ipTotal"] = v.ipTotal; 
    j["coOpVsAiMsecsUntilReset"] = v.coOpVsAiMsecsUntilReset; 
    j["leveledUp"] = v.leveledUp; 
    j["difficulty"] = v.difficulty; 
    j["eloChange"] = v.eloChange; 
    j["completionBonusPoints"] = v.completionBonusPoints; 
    j["skinIndex"] = v.skinIndex; 
    j["odinBonusIp"] = v.odinBonusIp; 
    j["boostXpEarned"] = v.boostXpEarned; 
    j["causedEarlySurrender"] = v.causedEarlySurrender; 
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender; 
    j["firstWinBonus"] = v.firstWinBonus; 
    j["customMsecsUntilReset"] = v.customMsecsUntilReset; 
    j["gameLength"] = v.gameLength; 
  }
  inline void from_json(const json& j, EndOfGameLcdsEndOfGameStats& v) {
    v.roomName = j.at("roomName").get<std::string>(); 
    v.teamPlayerParticipantStats = j.at("teamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary>>(); 
    v.skinId = j.at("skinId").get<int32_t>(); 
    v.elo = j.at("elo").get<int32_t>(); 
    v.ranked = j.at("ranked").get<bool>(); 
    v.loyaltyBoostIpEarned = j.at("loyaltyBoostIpEarned").get<int32_t>(); 
    v.otherTeamPlayerParticipantStats = j.at("otherTeamPlayerParticipantStats").get<std::vector<EndOfGameLcdsPlayerParticipantStatsSummary>>(); 
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>(); 
    v.gameMode = j.at("gameMode").get<std::string>(); 
    v.experienceEarned = j.at("experienceEarned").get<int32_t>(); 
    v.myTeamInfo = j.at("myTeamInfo").get<EndOfGameLcdsTeamInfo>(); 
    v.battleBoostIpEarned = j.at("battleBoostIpEarned").get<int32_t>(); 
    v.summonerName = j.at("summonerName").get<std::string>(); 
    v.rpEarned = j.at("rpEarned").get<int32_t>(); 
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool>(); 
    v.ipEarned = j.at("ipEarned").get<int32_t>(); 
    v.newSpells = j.at("newSpells").get<std::vector<EndOfGameLcdsSpell>>(); 
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<int32_t>(); 
    v.queueType = j.at("queueType").get<std::string>(); 
    v.coOpVsAiMinutesLeftToday = j.at("coOpVsAiMinutesLeftToday").get<int32_t>(); 
    v.loyaltyBoostXpEarned = j.at("loyaltyBoostXpEarned").get<int32_t>(); 
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool>(); 
    v.customMinutesLeftToday = j.at("customMinutesLeftToday").get<int32_t>(); 
    v.talentPointsGained = j.at("talentPointsGained").get<int32_t>(); 
    v.roomPassword = j.at("roomPassword").get<std::string>(); 
    v.basePoints = j.at("basePoints").get<int32_t>(); 
    v.gameId = j.at("gameId").get<uint64_t>(); 
    v.previousLevel = j.at("previousLevel").get<uint64_t>(); 
    v.invalid = j.at("invalid").get<bool>(); 
    v.pointsPenalties = j.at("pointsPenalties").get<std::vector<EndOfGameLcdsPointsPenalty>>(); 
    v.gameType = j.at("gameType").get<std::string>(); 
    v.partyRewardsBonusIpEarned = j.at("partyRewardsBonusIpEarned").get<int32_t>(); 
    v.previousXpTotal = j.at("previousXpTotal").get<uint64_t>(); 
    v.queueBonusEarned = j.at("queueBonusEarned").get<int32_t>(); 
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>(); 
    v.reportGameId = j.at("reportGameId").get<uint64_t>(); 
    v.userId = j.at("userId").get<uint64_t>(); 
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>(); 
    v.sendStatsToTournamentProvider = j.at("sendStatsToTournamentProvider").get<bool>(); 
    v.otherTeamInfo = j.at("otherTeamInfo").get<EndOfGameLcdsTeamInfo>(); 
    v.boostIpEarned = j.at("boostIpEarned").get<int32_t>(); 
    v.experienceTotal = j.at("experienceTotal").get<int32_t>(); 
    v.ipTotal = j.at("ipTotal").get<int32_t>(); 
    v.coOpVsAiMsecsUntilReset = j.at("coOpVsAiMsecsUntilReset").get<int32_t>(); 
    v.leveledUp = j.at("leveledUp").get<bool>(); 
    v.difficulty = j.at("difficulty").get<std::string>(); 
    v.eloChange = j.at("eloChange").get<int32_t>(); 
    v.completionBonusPoints = j.at("completionBonusPoints").get<int32_t>(); 
    v.skinIndex = j.at("skinIndex").get<int32_t>(); 
    v.odinBonusIp = j.at("odinBonusIp").get<int32_t>(); 
    v.boostXpEarned = j.at("boostXpEarned").get<int32_t>(); 
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool>(); 
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>(); 
    v.firstWinBonus = j.at("firstWinBonus").get<int32_t>(); 
    v.customMsecsUntilReset = j.at("customMsecsUntilReset").get<int32_t>(); 
    v.gameLength = j.at("gameLength").get<uint32_t>(); 
  }
}