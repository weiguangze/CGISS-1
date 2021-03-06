#ifndef _ALTOVA_INCLUDED_gie_ALTOVA_gml_ALTOVA_CSequenceRuleEnumerationType
#define _ALTOVA_INCLUDED_gie_ALTOVA_gml_ALTOVA_CSequenceRuleEnumerationType



namespace gie
{

namespace gml
{	

class CSequenceRuleEnumerationType : public TypeBase
{
public:
	gie_EXPORT CSequenceRuleEnumerationType(xercesc::DOMNode* const& init);
	gie_EXPORT CSequenceRuleEnumerationType(CSequenceRuleEnumerationType const& init);
	void operator=(CSequenceRuleEnumerationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CSequenceRuleEnumerationType); }

	enum EnumValues {
		Invalid = -1,
		k_Linear = 0, // Linear
		k_Boustrophedonic = 1, // Boustrophedonic
		k_Cantor_diagonal = 2, // Cantor-diagonal
		k_Spiral = 3, // Spiral
		k_Morton = 4, // Morton
		k_Hilbert = 5, // Hilbert
		EnumValueCount
	};

	
	gie_EXPORT int GetEnumerationValue();
	gie_EXPORT void SetEnumerationValue( const int index);
	gie_EXPORT void operator=(const string_type& value);
	gie_EXPORT operator string_type();
	gie_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace gie

#endif // _ALTOVA_INCLUDED_gie_ALTOVA_gml_ALTOVA_CSequenceRuleEnumerationType
