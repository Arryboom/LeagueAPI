#pragma once
#include<lol/base_op.hpp> 
namespace lol {
  Result<json> PostLolLicenseAgreementV1AgreementsByIdAccept(const LeagueClient& _client, const std::string& id)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("post", "/lol-license-agreement/v1/agreements/"+to_string(id)+"/accept?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}