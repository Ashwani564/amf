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

#include "PacketFilterInfo.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::pcf {

PacketFilterInfo::PacketFilterInfo() {
  m_PackFiltId           = "";
  m_PackFiltIdIsSet      = false;
  m_PackFiltCont         = "";
  m_PackFiltContIsSet    = false;
  m_TosTrafficClass      = "";
  m_TosTrafficClassIsSet = false;
  m_Spi                  = "";
  m_SpiIsSet             = false;
  m_FlowLabel            = "";
  m_FlowLabelIsSet       = false;
  m_FlowDirectionIsSet   = false;
}

void PacketFilterInfo::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool PacketFilterInfo::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool PacketFilterInfo::validate(
    std::stringstream& /* msg */, const std::string& /* pathPrefix */) const {
  bool success = true;
  /*
  const std::string _pathPrefix =
      pathPrefix.empty() ? "PacketFilterInfo" : pathPrefix;
  */
  return success;
}

bool PacketFilterInfo::operator==(const PacketFilterInfo& rhs) const {
  return

      ((!packFiltIdIsSet() && !rhs.packFiltIdIsSet()) ||
       (packFiltIdIsSet() && rhs.packFiltIdIsSet() &&
        getPackFiltId() == rhs.getPackFiltId())) &&

      ((!packFiltContIsSet() && !rhs.packFiltContIsSet()) ||
       (packFiltContIsSet() && rhs.packFiltContIsSet() &&
        getPackFiltCont() == rhs.getPackFiltCont())) &&

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

bool PacketFilterInfo::operator!=(const PacketFilterInfo& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const PacketFilterInfo& o) {
  j = nlohmann::json();
  if (o.packFiltIdIsSet()) j["packFiltId"] = o.m_PackFiltId;
  if (o.packFiltContIsSet()) j["packFiltCont"] = o.m_PackFiltCont;
  if (o.tosTrafficClassIsSet()) j["tosTrafficClass"] = o.m_TosTrafficClass;
  if (o.spiIsSet()) j["spi"] = o.m_Spi;
  if (o.flowLabelIsSet()) j["flowLabel"] = o.m_FlowLabel;
  if (o.flowDirectionIsSet()) j["flowDirection"] = o.m_FlowDirection;
}

void from_json(const nlohmann::json& j, PacketFilterInfo& o) {
  if (j.find("packFiltId") != j.end()) {
    j.at("packFiltId").get_to(o.m_PackFiltId);
    o.m_PackFiltIdIsSet = true;
  }
  if (j.find("packFiltCont") != j.end()) {
    j.at("packFiltCont").get_to(o.m_PackFiltCont);
    o.m_PackFiltContIsSet = true;
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

std::string PacketFilterInfo::getPackFiltId() const {
  return m_PackFiltId;
}
void PacketFilterInfo::setPackFiltId(std::string const& value) {
  m_PackFiltId      = value;
  m_PackFiltIdIsSet = true;
}
bool PacketFilterInfo::packFiltIdIsSet() const {
  return m_PackFiltIdIsSet;
}
void PacketFilterInfo::unsetPackFiltId() {
  m_PackFiltIdIsSet = false;
}
std::string PacketFilterInfo::getPackFiltCont() const {
  return m_PackFiltCont;
}
void PacketFilterInfo::setPackFiltCont(std::string const& value) {
  m_PackFiltCont      = value;
  m_PackFiltContIsSet = true;
}
bool PacketFilterInfo::packFiltContIsSet() const {
  return m_PackFiltContIsSet;
}
void PacketFilterInfo::unsetPackFiltCont() {
  m_PackFiltContIsSet = false;
}
std::string PacketFilterInfo::getTosTrafficClass() const {
  return m_TosTrafficClass;
}
void PacketFilterInfo::setTosTrafficClass(std::string const& value) {
  m_TosTrafficClass      = value;
  m_TosTrafficClassIsSet = true;
}
bool PacketFilterInfo::tosTrafficClassIsSet() const {
  return m_TosTrafficClassIsSet;
}
void PacketFilterInfo::unsetTosTrafficClass() {
  m_TosTrafficClassIsSet = false;
}
std::string PacketFilterInfo::getSpi() const {
  return m_Spi;
}
void PacketFilterInfo::setSpi(std::string const& value) {
  m_Spi      = value;
  m_SpiIsSet = true;
}
bool PacketFilterInfo::spiIsSet() const {
  return m_SpiIsSet;
}
void PacketFilterInfo::unsetSpi() {
  m_SpiIsSet = false;
}
std::string PacketFilterInfo::getFlowLabel() const {
  return m_FlowLabel;
}
void PacketFilterInfo::setFlowLabel(std::string const& value) {
  m_FlowLabel      = value;
  m_FlowLabelIsSet = true;
}
bool PacketFilterInfo::flowLabelIsSet() const {
  return m_FlowLabelIsSet;
}
void PacketFilterInfo::unsetFlowLabel() {
  m_FlowLabelIsSet = false;
}
oai::model::pcf::FlowDirection PacketFilterInfo::getFlowDirection() const {
  return m_FlowDirection;
}
void PacketFilterInfo::setFlowDirection(
    oai::model::pcf::FlowDirection const& value) {
  m_FlowDirection      = value;
  m_FlowDirectionIsSet = true;
}
bool PacketFilterInfo::flowDirectionIsSet() const {
  return m_FlowDirectionIsSet;
}
void PacketFilterInfo::unsetFlowDirection() {
  m_FlowDirectionIsSet = false;
}

}  // namespace oai::model::pcf
