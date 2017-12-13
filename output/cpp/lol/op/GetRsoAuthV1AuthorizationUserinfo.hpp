#pragma once
#include<lol/base_op.hpp> 
#include <lol/def/RsoAuthUserInfo.hpp>
namespace lol {
  Result<RsoAuthUserInfo> GetRsoAuthV1AuthorizationUserinfo(const LeagueClient& _client)
  {
    HttpsClient _client_(_client.host, false);
    return _client_.request("get", "/rso-auth/v1/authorization/userinfo?" + SimpleWeb::QueryString::create(Args2Headers({  })), "",
      Args2Headers({ {"Authorization", _client.auth},  }) );
  }
}