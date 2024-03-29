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

#include "QosNotifType_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::model::pcf {

QosNotifType_anyOf::QosNotifType_anyOf() {}

void QosNotifType_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool QosNotifType_anyOf::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool QosNotifType_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "QosNotifType_anyOf" : pathPrefix;

  if (m_value == QosNotifType_anyOf::eQosNotifType_anyOf::
                     INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool QosNotifType_anyOf::operator==(const QosNotifType_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool QosNotifType_anyOf::operator!=(const QosNotifType_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const QosNotifType_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case QosNotifType_anyOf::eQosNotifType_anyOf::
        INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case QosNotifType_anyOf::eQosNotifType_anyOf::GUARANTEED:
      j = "GUARANTEED";
      break;
    case QosNotifType_anyOf::eQosNotifType_anyOf::NOT_GUARANTEED:
      j = "NOT_GUARANTEED";
      break;
  }
}

void from_json(const nlohmann::json& j, QosNotifType_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "GUARANTEED") {
    o.setValue(QosNotifType_anyOf::eQosNotifType_anyOf::GUARANTEED);
  } else if (s == "NOT_GUARANTEED") {
    o.setValue(QosNotifType_anyOf::eQosNotifType_anyOf::NOT_GUARANTEED);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " QosNotifType_anyOf::eQosNotifType_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

QosNotifType_anyOf::eQosNotifType_anyOf QosNotifType_anyOf::getValue() const {
  return m_value;
}
void QosNotifType_anyOf::setValue(
    QosNotifType_anyOf::eQosNotifType_anyOf value) {
  m_value = value;
}

}  // namespace oai::model::pcf
