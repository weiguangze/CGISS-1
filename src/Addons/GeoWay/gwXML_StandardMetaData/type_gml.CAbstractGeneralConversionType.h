#ifndef _ALTOVA_INCLUDED_gie_ALTOVA_gml_ALTOVA_CAbstractGeneralConversionType
#define _ALTOVA_INCLUDED_gie_ALTOVA_gml_ALTOVA_CAbstractGeneralConversionType



namespace gie
{

namespace gml
{	

class CAbstractGeneralConversionType : public TypeBase
{
public:
	gie_EXPORT CAbstractGeneralConversionType(xercesc::DOMNode* const& init);
	gie_EXPORT CAbstractGeneralConversionType(CAbstractGeneralConversionType const& init);
	void operator=(CAbstractGeneralConversionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractGeneralConversionType); }

	MemberAttribute<string_type,_altova_mi_gml_altova_CAbstractGeneralConversionType_altova_id, 0, 0> id;	// id CID
	MemberElement<gml::CMetaDataPropertyType, _altova_mi_gml_altova_CAbstractGeneralConversionType_altova_metaDataProperty> metaDataProperty;
	struct metaDataProperty { typedef Iterator<gml::CMetaDataPropertyType> iterator; };
	MemberElement<gml::CStringOrRefType, _altova_mi_gml_altova_CAbstractGeneralConversionType_altova_description> description;
	struct description { typedef Iterator<gml::CStringOrRefType> iterator; };
	MemberElement<gml::CReferenceType, _altova_mi_gml_altova_CAbstractGeneralConversionType_altova_descriptionReference> descriptionReference;
	struct descriptionReference { typedef Iterator<gml::CReferenceType> iterator; };
	MemberElement<gml::CCodeWithAuthorityType, _altova_mi_gml_altova_CAbstractGeneralConversionType_altova_identifier> identifier;
	struct identifier { typedef Iterator<gml::CCodeWithAuthorityType> iterator; };
	MemberElement<gml::CCodeType, _altova_mi_gml_altova_CAbstractGeneralConversionType_altova_name> name;
	struct name { typedef Iterator<gml::CCodeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_gml_altova_CAbstractGeneralConversionType_altova_remarks> remarks;
	struct remarks { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<gie2::CdomainOfValidityType, _altova_mi_gml_altova_CAbstractGeneralConversionType_altova_domainOfValidity> domainOfValidity;
	struct domainOfValidity { typedef Iterator<gie2::CdomainOfValidityType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_gml_altova_CAbstractGeneralConversionType_altova_scope> scope;
	struct scope { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_gml_altova_CAbstractGeneralConversionType_altova_operationVersion> operationVersion;
	struct operationVersion { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<gie2::CcoordinateOperationAccuracyType, _altova_mi_gml_altova_CAbstractGeneralConversionType_altova_coordinateOperationAccuracy> coordinateOperationAccuracy;
	struct coordinateOperationAccuracy { typedef Iterator<gie2::CcoordinateOperationAccuracyType> iterator; };
	MemberElement<gml::CCRSPropertyType, _altova_mi_gml_altova_CAbstractGeneralConversionType_altova_sourceCRS> sourceCRS;
	struct sourceCRS { typedef Iterator<gml::CCRSPropertyType> iterator; };
	MemberElement<gml::CCRSPropertyType, _altova_mi_gml_altova_CAbstractGeneralConversionType_altova_targetCRS> targetCRS;
	struct targetCRS { typedef Iterator<gml::CCRSPropertyType> iterator; };
	gie_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace gie

#endif // _ALTOVA_INCLUDED_gie_ALTOVA_gml_ALTOVA_CAbstractGeneralConversionType
