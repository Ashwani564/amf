/**
 * NSSF NS Selection
 * NSSF Network Slice Selection Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AuthorizedNetworkSliceInfo.h
 *
 *
 */

#ifndef AuthorizedNetworkSliceInfo_H_
#define AuthorizedNetworkSliceInfo_H_

#include "AllowedNssai.h"
#include "ConfiguredSnssai.h"
#include "NsiInformation.h"
#include "Snssai.h"
#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace oai {
namespace amf {
namespace model {

/// <summary>
///
/// </summary>
class AuthorizedNetworkSliceInfo {
 public:
  AuthorizedNetworkSliceInfo();
  virtual ~AuthorizedNetworkSliceInfo() = default;

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

  bool operator==(const AuthorizedNetworkSliceInfo& rhs) const;
  bool operator!=(const AuthorizedNetworkSliceInfo& rhs) const;

  /////////////////////////////////////////////
  /// AuthorizedNetworkSliceInfo members

  /// <summary>
  ///
  /// </summary>
  std::vector<AllowedNssai> getAllowedNssaiList() const;
  void setAllowedNssaiList(std::vector<AllowedNssai> const& value);
  bool allowedNssaiListIsSet() const;
  void unsetAllowedNssaiList();
  /// <summary>
  ///
  /// </summary>
  std::vector<ConfiguredSnssai> getConfiguredNssai() const;
  void setConfiguredNssai(std::vector<ConfiguredSnssai> const& value);
  bool configuredNssaiIsSet() const;
  void unsetConfiguredNssai();
  /// <summary>
  ///
  /// </summary>
  std::string getTargetAmfSet() const;
  void setTargetAmfSet(std::string const& value);
  bool targetAmfSetIsSet() const;
  void unsetTargetAmfSet();
  /// <summary>
  ///
  /// </summary>
  std::vector<std::string> getCandidateAmfList() const;
  void setCandidateAmfList(std::vector<std::string> const& value);
  bool candidateAmfListIsSet() const;
  void unsetCandidateAmfList();
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::Snssai> getRejectedNssaiInPlmn() const;
  void setRejectedNssaiInPlmn(
      std::vector<oai::model::common::Snssai> const& value);
  bool rejectedNssaiInPlmnIsSet() const;
  void unsetRejectedNssaiInPlmn();
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::Snssai> getRejectedNssaiInTa() const;
  void setRejectedNssaiInTa(
      std::vector<oai::model::common::Snssai> const& value);
  bool rejectedNssaiInTaIsSet() const;
  void unsetRejectedNssaiInTa();
  /// <summary>
  ///
  /// </summary>
  NsiInformation getNsiInformation() const;
  void setNsiInformation(NsiInformation const& value);
  bool nsiInformationIsSet() const;
  void unsetNsiInformation();
  /// <summary>
  ///
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const& value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();
  /// <summary>
  ///
  /// </summary>
  std::string getNrfAmfSet() const;
  void setNrfAmfSet(std::string const& value);
  bool nrfAmfSetIsSet() const;
  void unsetNrfAmfSet();
  /// <summary>
  ///
  /// </summary>
  std::string getNrfAmfSetNfMgtUri() const;
  void setNrfAmfSetNfMgtUri(std::string const& value);
  bool nrfAmfSetNfMgtUriIsSet() const;
  void unsetNrfAmfSetNfMgtUri();
  /// <summary>
  ///
  /// </summary>
  std::string getNrfAmfSetAccessTokenUri() const;
  void setNrfAmfSetAccessTokenUri(std::string const& value);
  bool nrfAmfSetAccessTokenUriIsSet() const;
  void unsetNrfAmfSetAccessTokenUri();
  /// <summary>
  ///
  /// </summary>
  std::string getTargetAmfServiceSet() const;
  void setTargetAmfServiceSet(std::string const& value);
  bool targetAmfServiceSetIsSet() const;
  void unsetTargetAmfServiceSet();

  friend void to_json(nlohmann::json& j, const AuthorizedNetworkSliceInfo& o);
  friend void from_json(const nlohmann::json& j, AuthorizedNetworkSliceInfo& o);

 protected:
  std::vector<AllowedNssai> m_AllowedNssaiList;
  bool m_AllowedNssaiListIsSet;
  std::vector<ConfiguredSnssai> m_ConfiguredNssai;
  bool m_ConfiguredNssaiIsSet;
  std::string m_TargetAmfSet;
  bool m_TargetAmfSetIsSet;
  std::vector<std::string> m_CandidateAmfList;
  bool m_CandidateAmfListIsSet;
  std::vector<oai::model::common::Snssai> m_RejectedNssaiInPlmn;
  bool m_RejectedNssaiInPlmnIsSet;
  std::vector<oai::model::common::Snssai> m_RejectedNssaiInTa;
  bool m_RejectedNssaiInTaIsSet;
  NsiInformation m_NsiInformation;
  bool m_NsiInformationIsSet;
  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  std::string m_NrfAmfSet;
  bool m_NrfAmfSetIsSet;
  std::string m_NrfAmfSetNfMgtUri;
  bool m_NrfAmfSetNfMgtUriIsSet;
  std::string m_NrfAmfSetAccessTokenUri;
  bool m_NrfAmfSetAccessTokenUriIsSet;
  std::string m_TargetAmfServiceSet;
  bool m_TargetAmfServiceSetIsSet;
};

}  // namespace model
}  // namespace amf
}  // namespace oai

#endif /* AuthorizedNetworkSliceInfo_H_ */