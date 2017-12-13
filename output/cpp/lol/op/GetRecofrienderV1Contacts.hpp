#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RecofrienderContactResource.hpp>
namespace lol {
  Result<std::vector<RecofrienderContactResource>> GetRecofrienderV1Contacts(const LeagueClient& _client, const std::optional<uint64_t>& accountId = std::nullopt, const std::optional<std::string>& source = std::nullopt, const std::optional<std::string>& friendState = std::nullopt)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/recofriender/v1/contacts?" + SimpleWeb::QueryString::create(Args2Headers({ { "accountId", to_string(accountId) },
    { "source", to_string(source) },
    { "friendState", to_string(friendState) } })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}