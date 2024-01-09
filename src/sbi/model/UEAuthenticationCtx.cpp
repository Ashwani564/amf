/**
 * AUSF API
 * AUSF UE Authentication Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UEAuthenticationCtx.h"

namespace oai {
namespace amf {
namespace model {

UEAuthenticationCtx::UEAuthenticationCtx() {
  m_AuthType                = "";
  m_ServingNetworkName      = "";
  m_ServingNetworkNameIsSet = false;
}

UEAuthenticationCtx::~UEAuthenticationCtx() {}

void UEAuthenticationCtx::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const UEAuthenticationCtx& o) {
  j               = nlohmann::json();
  j["authType"]   = o.m_AuthType;
  j["5gAuthData"] = o.m_r_5gAuthData;
  j["_links"]     = o.m__links;
  if (o.servingNetworkNameIsSet())
    j["servingNetworkName"] = o.m_ServingNetworkName;
}

void from_json(const nlohmann::json& j, UEAuthenticationCtx& o) {
  j.at("authType").get_to(o.m_AuthType);
  j.at("5gAuthData").get_to(o.m_r_5gAuthData);
  j.at("_links").get_to(o.m__links);
  if (j.find("servingNetworkName") != j.end()) {
    j.at("servingNetworkName").get_to(o.m_ServingNetworkName);
    o.m_ServingNetworkNameIsSet = true;
  }
}

std::string UEAuthenticationCtx::getAuthType() const {
  return m_AuthType;
}
void UEAuthenticationCtx::setAuthType(std::string const& value) {
  m_AuthType = value;
}
Av5gAka UEAuthenticationCtx::getR5gAuthData() const {
  return m_r_5gAuthData;
}
void UEAuthenticationCtx::setR5gAuthData(Av5gAka const& value) {
  m_r_5gAuthData = value;
}
std::map<std::string, oai::model::common::LinksValueSchema>&
UEAuthenticationCtx::getLinks() {
  return m__links;
}
void UEAuthenticationCtx::setLinks(
    std::map<std::string, oai::model::common::LinksValueSchema> const& value) {
  m__links = value;
}
std::string UEAuthenticationCtx::getServingNetworkName() const {
  return m_ServingNetworkName;
}
void UEAuthenticationCtx::setServingNetworkName(std::string const& value) {
  m_ServingNetworkName      = value;
  m_ServingNetworkNameIsSet = true;
}
bool UEAuthenticationCtx::servingNetworkNameIsSet() const {
  return m_ServingNetworkNameIsSet;
}
void UEAuthenticationCtx::unsetServingNetworkName() {
  m_ServingNetworkNameIsSet = false;
}

}  // namespace model
}  // namespace amf
}  // namespace oai
