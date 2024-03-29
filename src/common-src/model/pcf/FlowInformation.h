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
/*
 * FlowInformation.h
 *
 *
 */

#ifndef FlowInformation_H_
#define FlowInformation_H_

#include "FlowDirectionRm.h"
#include "EthFlowDescription.h"
#include <string>
#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
///
/// </summary>
class FlowInformation {
 public:
  FlowInformation();
  virtual ~FlowInformation() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const FlowInformation& rhs) const;
  bool operator!=(const FlowInformation& rhs) const;

  /////////////////////////////////////////////
  /// FlowInformation members

  /// <summary>
  /// Defines a packet filter for an IP flow.
  /// </summary>
  std::string getFlowDescription() const;
  void setFlowDescription(std::string const& value);
  bool flowDescriptionIsSet() const;
  void unsetFlowDescription();
  /// <summary>
  ///
  /// </summary>
  oai::model::pcf::EthFlowDescription getEthFlowDescription() const;
  void setEthFlowDescription(oai::model::pcf::EthFlowDescription const& value);
  bool ethFlowDescriptionIsSet() const;
  void unsetEthFlowDescription();
  /// <summary>
  /// An identifier of packet filter.
  /// </summary>
  std::string getPackFiltId() const;
  void setPackFiltId(std::string const& value);
  bool packFiltIdIsSet() const;
  void unsetPackFiltId();
  /// <summary>
  /// The packet shall be sent to the UE.
  /// </summary>
  bool isPacketFilterUsage() const;
  void setPacketFilterUsage(bool const value);
  bool packetFilterUsageIsSet() const;
  void unsetPacketFilterUsage();
  /// <summary>
  /// Contains the Ipv4 Type-of-Service and mask field or the Ipv6 Traffic-Class
  /// field and mask field.
  /// </summary>
  std::string getTosTrafficClass() const;
  void setTosTrafficClass(std::string const& value);
  bool tosTrafficClassIsSet() const;
  void unsetTosTrafficClass();
  /// <summary>
  /// the security parameter index of the IPSec packet.
  /// </summary>
  std::string getSpi() const;
  void setSpi(std::string const& value);
  bool spiIsSet() const;
  void unsetSpi();
  /// <summary>
  /// the Ipv6 flow label header field.
  /// </summary>
  std::string getFlowLabel() const;
  void setFlowLabel(std::string const& value);
  bool flowLabelIsSet() const;
  void unsetFlowLabel();
  /// <summary>
  ///
  /// </summary>
  oai::model::pcf::FlowDirectionRm getFlowDirection() const;
  void setFlowDirection(oai::model::pcf::FlowDirectionRm const& value);
  bool flowDirectionIsSet() const;
  void unsetFlowDirection();

  friend void to_json(nlohmann::json& j, const FlowInformation& o);
  friend void from_json(const nlohmann::json& j, FlowInformation& o);

 protected:
  std::string m_FlowDescription;
  bool m_FlowDescriptionIsSet;
  oai::model::pcf::EthFlowDescription m_EthFlowDescription;
  bool m_EthFlowDescriptionIsSet;
  std::string m_PackFiltId;
  bool m_PackFiltIdIsSet;
  bool m_PacketFilterUsage;
  bool m_PacketFilterUsageIsSet;
  std::string m_TosTrafficClass;
  bool m_TosTrafficClassIsSet;
  std::string m_Spi;
  bool m_SpiIsSet;
  std::string m_FlowLabel;
  bool m_FlowLabelIsSet;
  oai::model::pcf::FlowDirectionRm m_FlowDirection;
  bool m_FlowDirectionIsSet;
};

}  // namespace oai::model::pcf

#endif /* FlowInformation_H_ */
