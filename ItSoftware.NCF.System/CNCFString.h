// NCFString.h : Declaration of the CNCFString

#pragma once
#include "resource.h"       // main symbols



#include "ItSoftwareNCFSystem_i.h"



using namespace ATL;


// CNCFString

class ATL_NO_VTABLE CNCFString :
	public CComObjectRootEx<CComMultiThreadModel>,
	public CComCoClass<CNCFString, &CLSID_NCFString>,
	public ISupportErrorInfo,
	public IDispatchImpl<INCFString, &IID_INCFString, &LIBID_ItSoftwareNCFSystemLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
	void SplitTimeToTimeParts(ULONG time_ms, long* part_hours, long* part_minutes, long* part_seconds, long* part_ms);
public:
	CNCFString()
	{
		m_pUnkMarshaler = NULL;
	}

DECLARE_REGISTRY_RESOURCEID(IDR_CNCFSTRING)

DECLARE_NOT_AGGREGATABLE(CNCFString)

BEGIN_COM_MAP(CNCFString)
	COM_INTERFACE_ENTRY(INCFString)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)	
	COM_INTERFACE_ENTRY_AGGREGATE(IID_IMarshal, m_pUnkMarshaler.p)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);


	DECLARE_PROTECT_FINAL_CONSTRUCT()
	DECLARE_GET_CONTROLLING_UNKNOWN()

	HRESULT FinalConstruct()
	{
		return CoCreateFreeThreadedMarshaler(
			GetControllingUnknown(), &m_pUnkMarshaler.p);
	}

	void FinalRelease()
	{
		m_pUnkMarshaler.Release();
	}

	CComPtr<IUnknown> m_pUnkMarshaler;

public:

	// IKKSString
	STDMETHOD(Left)( /*[in]*/ BSTR source_string, /*[in]*/ long length, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(Mid)( /*[in]*/ BSTR source_string, /*[in]*/ long start_index, /*[in]*/ long length, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(Right)( /*[in]*/ BSTR source_string, /*[in]*/ long length, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(SpanIncluding)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR char_set, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(SpanExcluding)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR char_set, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(ToUpperCase)( /*[in]*/ BSTR source_string, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(ToLowerCase)( /*[in]*/ BSTR source_string, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(Reverse)( /*[in]*/ BSTR source_string, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(Replace)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR replace_string, /*[in]*/ BSTR replacement_string, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(ReplaceSection)( /*[in]*/ BSTR source_string, /*[in]*/ long start_index, /*[in]*/ long length, /*[in]*/ BSTR replacement_string, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(CutLeft)( /*[in]*/ BSTR source_string, /*[in]*/ long length, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(CutMid)( /*[in]*/ BSTR source_string, /*[in]*/ long start_index, /*[in]*/ long length, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(CutRight)( /*[in]*/ BSTR source_string, /*[in]*/ long length, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(Insert)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR insert_string, /*[in]*/ long index, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(ToString)( /*[in]*/ VARIANT value, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(GetLength)( /*[in]*/ BSTR source_string, /*[out, retval]*/ long *result_value);

	STDMETHOD(StringBetweenStrings)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR string1, /*[in]*/ BSTR string2, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(StringBetweenStringsEx)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR string1, /*[in]*/ BSTR string2, /*[in]*/ long string_pair_number, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(StringBeforeString)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR search_string, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(StringAfterString)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR search_string, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(StringBetweenStringsInOrder)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR string1, /*[in]*/ BSTR string2, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(Find)(/*[in]*/ BSTR source_string, /*[in]*/ BSTR substr, /*[out, retval]*/ long *result_index);
	STDMETHOD(FindNext)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR substr, /*[in]*/ long last_found_index, /*[out, retval]*/ long *result_index);

	STDMETHOD(FindReverse)(/*[in]*/ BSTR source_string, /*[in]*/ BSTR substr, /*[out, retval]*/ long *result_index);
	STDMETHOD(FindReverseNext)(/*[in]*/ BSTR source_string, /*[in]*/ BSTR substr, /*[in]*/ long last_found_index, /*[out, retval]*/ long *result_index);

	STDMETHOD(Append)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR append_string, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(Compare)( /*[in]*/ BSTR source_string1, /*[in]*/ BSTR source_string2, /*[in]*/ VARIANT_BOOL case_sensitive, /*[out, retval]*/ long *result_value);

	STDMETHOD(Copy)( /*[in]*/ BSTR source_string, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(FindFirstOf)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR substr, /*[out, retval]*/ long *result_index);
	STDMETHOD(FindFirstNotOf)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR substr, /*[out, retval]*/ long *result_index);

	STDMETHOD(FindLastOf)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR substr, /*[out, retval]*/ long *result_index);
	STDMETHOD(FindLastNotOf)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR substr, /*[out, retval]*/ long *result_index);

	STDMETHOD(Trim)( /*[in]*/ BSTR source_string, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(TrimLeft)( /*[in]*/ BSTR source_string, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(TrimRight)( /*[in]*/ BSTR source_string, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(TrimEx)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR trim_characters, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(TrimLeftEx)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR trim_characters, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(TrimRightEx)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR trim_characters, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(Split)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR delimiter_string, /*[in, out]*/ BSTR *remainder_string, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(GetSubstringCount)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR substring, /*[out, retval]*/ long *result_value);

	STDMETHOD(ToFixedLength)( /*[in]*/ BSTR source_string, /*[in]*/ long length, /*[in]*/ BSTR fill_string, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(CreateUniform)( /*[in]*/ long length, /*[in]*/ BSTR fill_string, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(GetLocalNumberFormat)( /*[in]*/ VARIANT value, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(GetNumberFormat)( /*[in]*/ VARIANT value,
		/*[in]*/ long num_digits,
		/*[in]*/ long grouping,
		/*[in]*/ BSTR decimal_sep,
		/*[in]*/ BSTR thousand_sep,
		/*[in]*/ ENEGNUMBERMODE negative_number_format,
		/*[out, retval]*/ BSTR *result_string);

	STDMETHOD(GetLocalCurrencyFormat)( /*[in]*/ VARIANT value, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(GetCurrencyFormat)( /*[in]*/ VARIANT value,
		/*[in]*/ long num_digits,
		/*[in]*/ long grouping,
		/*[in]*/ BSTR decimal_sep,
		/*[in]*/ BSTR thousand_sep,
		/*[in]*/ ENEGCURRENCYMODE negative_currency_format,
		/*[in]*/ EPOSCURRENCYMODE positive_currency_format,
		/*[in]*/ BSTR currency_symbol,
		/*[out, retval]*/ BSTR *result_string);


	STDMETHOD(ExpandEnvironmentString)( /*[in]*/ BSTR environment_string, /*[out, retval]*/ BSTR *result_string);

	STDMETHOD(HasUpperCase)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(HasAlpha)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(HasAlphaNumeric)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(HasLowerCase)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(HasDigit)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(HasHexDigit)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(HasSpace)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(HasPunct)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(HasPrint)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(HasGraph)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(HasASCII)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(HasControl)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);

	STDMETHOD(IsAlpha)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(IsAlphaNumeric)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(IsUpperCase)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(IsLowerCase)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(IsDigit)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(IsHexDigit)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(IsSpace)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(IsPunct)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(IsPrint)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(IsGraph)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(IsASCII)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(IsControl)( /*[in]*/ BSTR source_string, /*[out, retval]*/ VARIANT_BOOL *result_value);
	STDMETHOD(SplitToCollection)( /*[in]*/ BSTR source_string, /*[in]*/ BSTR delimiter_string, /*[out, retval]*/ INCFCollectionList **ppINCFCollectionList);
	STDMETHOD(LineSplit)( /*[in]*/ BSTR source_string, /*[in, out]*/ BSTR *remainder_string, /*[out, retval]*/ BSTR *result_string);
	STDMETHOD(LineSplitToCollection)( /*[in]*/ BSTR source_string, /*[out, retval]*/ INCFCollectionList **ppINCFCollectionList);

	STDMETHOD(TimeToString)(/*[in]*/ BSTR format, /*[in]*/ ULONG timeMilliseconds, /*[out, retval]*/ BSTR *result_string);
};

OBJECT_ENTRY_AUTO(__uuidof(NCFString), CNCFString)
