/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NonDynamic5Qi.h
 *
 *
 */

#ifndef NonDynamic5Qi_H_
#define NonDynamic5Qi_H_

#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class NonDynamic5Qi {
 public:
  NonDynamic5Qi();
  virtual ~NonDynamic5Qi() = default;

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

  bool operator==(const NonDynamic5Qi& rhs) const;
  bool operator!=(const NonDynamic5Qi& rhs) const;

  /////////////////////////////////////////////
  /// NonDynamic5Qi members

  /// <summary>
  ///
  /// </summary>
  int32_t getPriorityLevel() const;
  void setPriorityLevel(int32_t const value);
  bool priorityLevelIsSet() const;
  void unsetPriorityLevel();
  /// <summary>
  ///
  /// </summary>
  int32_t getAverWindow() const;
  void setAverWindow(int32_t const value);
  bool averWindowIsSet() const;
  void unsetAverWindow();
  /// <summary>
  ///
  /// </summary>
  int32_t getMaxDataBurstVol() const;
  void setMaxDataBurstVol(int32_t const value);
  bool maxDataBurstVolIsSet() const;
  void unsetMaxDataBurstVol();
  /// <summary>
  ///
  /// </summary>
  int32_t getExtMaxDataBurstVol() const;
  void setExtMaxDataBurstVol(int32_t const value);
  bool extMaxDataBurstVolIsSet() const;
  void unsetExtMaxDataBurstVol();
  /// <summary>
  ///
  /// </summary>
  int32_t getCnPacketDelayBudgetDl() const;
  void setCnPacketDelayBudgetDl(int32_t const value);
  bool cnPacketDelayBudgetDlIsSet() const;
  void unsetCnPacketDelayBudgetDl();
  /// <summary>
  ///
  /// </summary>
  int32_t getCnPacketDelayBudgetUl() const;
  void setCnPacketDelayBudgetUl(int32_t const value);
  bool cnPacketDelayBudgetUlIsSet() const;
  void unsetCnPacketDelayBudgetUl();

  friend void to_json(nlohmann::json& j, const NonDynamic5Qi& o);
  friend void from_json(const nlohmann::json& j, NonDynamic5Qi& o);

 protected:
  int32_t m_PriorityLevel;
  bool m_PriorityLevelIsSet;
  int32_t m_AverWindow;
  bool m_AverWindowIsSet;
  int32_t m_MaxDataBurstVol;
  bool m_MaxDataBurstVolIsSet;
  int32_t m_ExtMaxDataBurstVol;
  bool m_ExtMaxDataBurstVolIsSet;
  int32_t m_CnPacketDelayBudgetDl;
  bool m_CnPacketDelayBudgetDlIsSet;
  int32_t m_CnPacketDelayBudgetUl;
  bool m_CnPacketDelayBudgetUlIsSet;
};

}  // namespace oai::model::common

#endif /* NonDynamic5Qi_H_ */
