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

#include "LoggingIntervalNrMdt.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

LoggingIntervalNrMdt::LoggingIntervalNrMdt() {}

void LoggingIntervalNrMdt::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool LoggingIntervalNrMdt::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool LoggingIntervalNrMdt::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "LoggingIntervalNrMdt" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool LoggingIntervalNrMdt::operator==(const LoggingIntervalNrMdt& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool LoggingIntervalNrMdt::operator!=(const LoggingIntervalNrMdt& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const LoggingIntervalNrMdt& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, LoggingIntervalNrMdt& o) {
  from_json(j, o.m_value);
}

LoggingIntervalNrMdt_anyOf LoggingIntervalNrMdt::getValue() const {
  return m_value;
}

void LoggingIntervalNrMdt::setValue(LoggingIntervalNrMdt_anyOf value) {
  m_value = value;
}

LoggingIntervalNrMdt_anyOf::eLoggingIntervalNrMdt_anyOf
LoggingIntervalNrMdt::getEnumValue() const {
  return m_value.getValue();
}

void LoggingIntervalNrMdt::setEnumValue(
    LoggingIntervalNrMdt_anyOf::eLoggingIntervalNrMdt_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::common
