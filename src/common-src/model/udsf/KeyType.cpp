/**
 * Nudsf_DataRepository
 * Nudsf Data Repository Service.   © 2022, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC).   All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "KeyType.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::udsf {

KeyType::KeyType() {}

void KeyType::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool KeyType::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool KeyType::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success                  = true;
  const std::string _pathPrefix = pathPrefix.empty() ? "KeyType" : pathPrefix;

  return success;
}

bool KeyType::operator==(const KeyType& rhs) const {
  return (*this == rhs);
}

bool KeyType::operator!=(const KeyType& rhs) const {
  return !(*this == rhs);
}

void KeyType::get(std::string& kt) const {
  kt = value;
}

std::string KeyType::get() const {
  return value;
}

void KeyType::set(const std::string& kt) {
  value = kt;
}

void to_json(nlohmann::json& j, const KeyType& o) {
  j = nlohmann::json();
  j = o.get();
}

void from_json(const nlohmann::json& j, KeyType& o) {
  o.set(j.get<std::string>());
}

}  // namespace oai::model::udsf
