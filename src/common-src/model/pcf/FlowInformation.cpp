/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "FlowInformation.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::pcf {

FlowInformation::FlowInformation() {
  m_FlowDescription         = "";
  m_FlowDescriptionIsSet    = false;
  m_EthFlowDescriptionIsSet = false;
  m_PackFiltId              = "";
  m_PackFiltIdIsSet         = false;
  m_PacketFilterUsage       = false;
  m_PacketFilterUsageIsSet  = false;
  m_TosTrafficClass         = "";
  m_TosTrafficClassIsSet    = false;
  m_Spi                     = "";
  m_SpiIsSet                = false;
  m_FlowLabel               = "";
  m_FlowLabelIsSet          = false;
  m_FlowDirectionIsSet      = false;
}

void FlowInformation::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool FlowInformation::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool FlowInformation::validate(
    std::stringstream& /* msg */, const std::string& /* pathPrefix */) const {
  bool success = true;
  /*
  const std::string _pathPrefix =
      pathPrefix.empty() ? "FlowInformation" : pathPrefix;
  */
  return success;
}

bool FlowInformation::operator==(const FlowInformation& rhs) const {
  return

      ((!flowDescriptionIsSet() && !rhs.flowDescriptionIsSet()) ||
       (flowDescriptionIsSet() && rhs.flowDescriptionIsSet() &&
        getFlowDescription() == rhs.getFlowDescription())) &&

      ((!ethFlowDescriptionIsSet() && !rhs.ethFlowDescriptionIsSet()) ||
       (ethFlowDescriptionIsSet() && rhs.ethFlowDescriptionIsSet() &&
        getEthFlowDescription() == rhs.getEthFlowDescription())) &&

      ((!packFiltIdIsSet() && !rhs.packFiltIdIsSet()) ||
       (packFiltIdIsSet() && rhs.packFiltIdIsSet() &&
        getPackFiltId() == rhs.getPackFiltId())) &&

      ((!packetFilterUsageIsSet() && !rhs.packetFilterUsageIsSet()) ||
       (packetFilterUsageIsSet() && rhs.packetFilterUsageIsSet() &&
        isPacketFilterUsage() == rhs.isPacketFilterUsage())) &&

      ((!tosTrafficClassIsSet() && !rhs.tosTrafficClassIsSet()) ||
       (tosTrafficClassIsSet() && rhs.tosTrafficClassIsSet() &&
        getTosTrafficClass() == rhs.getTosTrafficClass())) &&

      ((!spiIsSet() && !rhs.spiIsSet()) ||
       (spiIsSet() && rhs.spiIsSet() && getSpi() == rhs.getSpi())) &&

      ((!flowLabelIsSet() && !rhs.flowLabelIsSet()) ||
       (flowLabelIsSet() && rhs.flowLabelIsSet() &&
        getFlowLabel() == rhs.getFlowLabel())) &&

      ((!flowDirectionIsSet() && !rhs.flowDirectionIsSet()) ||
       (flowDirectionIsSet() && rhs.flowDirectionIsSet() &&
        getFlowDirection() == rhs.getFlowDirection()))

          ;
}

bool FlowInformation::operator!=(const FlowInformation& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const FlowInformation& o) {
  j = nlohmann::json();
  if (o.flowDescriptionIsSet()) j["flowDescription"] = o.m_FlowDescription;
  if (o.ethFlowDescriptionIsSet())
    j["ethFlowDescription"] = o.m_EthFlowDescription;
  if (o.packFiltIdIsSet()) j["packFiltId"] = o.m_PackFiltId;
  if (o.packetFilterUsageIsSet())
    j["packetFilterUsage"] = o.m_PacketFilterUsage;
  if (o.tosTrafficClassIsSet()) j["tosTrafficClass"] = o.m_TosTrafficClass;
  if (o.spiIsSet()) j["spi"] = o.m_Spi;
  if (o.flowLabelIsSet()) j["flowLabel"] = o.m_FlowLabel;
  if (o.flowDirectionIsSet()) j["flowDirection"] = o.m_FlowDirection;
}

void from_json(const nlohmann::json& j, FlowInformation& o) {
  if (j.find("flowDescription") != j.end()) {
    j.at("flowDescription").get_to(o.m_FlowDescription);
    o.m_FlowDescriptionIsSet = true;
  }
  if (j.find("ethFlowDescription") != j.end()) {
    j.at("ethFlowDescription").get_to(o.m_EthFlowDescription);
    o.m_EthFlowDescriptionIsSet = true;
  }
  if (j.find("packFiltId") != j.end()) {
    j.at("packFiltId").get_to(o.m_PackFiltId);
    o.m_PackFiltIdIsSet = true;
  }
  if (j.find("packetFilterUsage") != j.end()) {
    j.at("packetFilterUsage").get_to(o.m_PacketFilterUsage);
    o.m_PacketFilterUsageIsSet = true;
  }
  if (j.find("tosTrafficClass") != j.end()) {
    j.at("tosTrafficClass").get_to(o.m_TosTrafficClass);
    o.m_TosTrafficClassIsSet = true;
  }
  if (j.find("spi") != j.end()) {
    j.at("spi").get_to(o.m_Spi);
    o.m_SpiIsSet = true;
  }
  if (j.find("flowLabel") != j.end()) {
    j.at("flowLabel").get_to(o.m_FlowLabel);
    o.m_FlowLabelIsSet = true;
  }
  if (j.find("flowDirection") != j.end()) {
    j.at("flowDirection").get_to(o.m_FlowDirection);
    o.m_FlowDirectionIsSet = true;
  }
}

std::string FlowInformation::getFlowDescription() const {
  return m_FlowDescription;
}
void FlowInformation::setFlowDescription(std::string const& value) {
  m_FlowDescription      = value;
  m_FlowDescriptionIsSet = true;
}
bool FlowInformation::flowDescriptionIsSet() const {
  return m_FlowDescriptionIsSet;
}
void FlowInformation::unsetFlowDescription() {
  m_FlowDescriptionIsSet = false;
}
oai::model::pcf::EthFlowDescription FlowInformation::getEthFlowDescription()
    const {
  return m_EthFlowDescription;
}
void FlowInformation::setEthFlowDescription(
    oai::model::pcf::EthFlowDescription const& value) {
  m_EthFlowDescription      = value;
  m_EthFlowDescriptionIsSet = true;
}
bool FlowInformation::ethFlowDescriptionIsSet() const {
  return m_EthFlowDescriptionIsSet;
}
void FlowInformation::unsetEthFlowDescription() {
  m_EthFlowDescriptionIsSet = false;
}
std::string FlowInformation::getPackFiltId() const {
  return m_PackFiltId;
}
void FlowInformation::setPackFiltId(std::string const& value) {
  m_PackFiltId      = value;
  m_PackFiltIdIsSet = true;
}
bool FlowInformation::packFiltIdIsSet() const {
  return m_PackFiltIdIsSet;
}
void FlowInformation::unsetPackFiltId() {
  m_PackFiltIdIsSet = false;
}
bool FlowInformation::isPacketFilterUsage() const {
  return m_PacketFilterUsage;
}
void FlowInformation::setPacketFilterUsage(bool const value) {
  m_PacketFilterUsage      = value;
  m_PacketFilterUsageIsSet = true;
}
bool FlowInformation::packetFilterUsageIsSet() const {
  return m_PacketFilterUsageIsSet;
}
void FlowInformation::unsetPacketFilterUsage() {
  m_PacketFilterUsageIsSet = false;
}
std::string FlowInformation::getTosTrafficClass() const {
  return m_TosTrafficClass;
}
void FlowInformation::setTosTrafficClass(std::string const& value) {
  m_TosTrafficClass      = value;
  m_TosTrafficClassIsSet = true;
}
bool FlowInformation::tosTrafficClassIsSet() const {
  return m_TosTrafficClassIsSet;
}
void FlowInformation::unsetTosTrafficClass() {
  m_TosTrafficClassIsSet = false;
}
std::string FlowInformation::getSpi() const {
  return m_Spi;
}
void FlowInformation::setSpi(std::string const& value) {
  m_Spi      = value;
  m_SpiIsSet = true;
}
bool FlowInformation::spiIsSet() const {
  return m_SpiIsSet;
}
void FlowInformation::unsetSpi() {
  m_SpiIsSet = false;
}
std::string FlowInformation::getFlowLabel() const {
  return m_FlowLabel;
}
void FlowInformation::setFlowLabel(std::string const& value) {
  m_FlowLabel      = value;
  m_FlowLabelIsSet = true;
}
bool FlowInformation::flowLabelIsSet() const {
  return m_FlowLabelIsSet;
}
void FlowInformation::unsetFlowLabel() {
  m_FlowLabelIsSet = false;
}
oai::model::pcf::FlowDirectionRm FlowInformation::getFlowDirection() const {
  return m_FlowDirection;
}
void FlowInformation::setFlowDirection(
    oai::model::pcf::FlowDirectionRm const& value) {
  m_FlowDirection      = value;
  m_FlowDirectionIsSet = true;
}
bool FlowInformation::flowDirectionIsSet() const {
  return m_FlowDirectionIsSet;
}
void FlowInformation::unsetFlowDirection() {
  m_FlowDirectionIsSet = false;
}

}  // namespace oai::model::pcf
